#include "SplashScreen.h"
#include "UnityViewControllerBase.h"
#include "OrientationSupport.h"
#include "Unity/ObjCRuntime.h"
#include "UI/UnityView.h"
#include <cstring>
#include "Unity/UnitySharedDecls.h"

#include <utility>

static SplashScreen*            _splash      = nil;
static SplashScreenController*  _controller  = nil;

@implementation SplashScreen
{
    UIImageView* m_ImageView;
    UIView* m_XibView;
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame: frame];
    return self;
}

- (void)createUI
{
    NSString* launchScreen = [[NSBundle mainBundle].infoDictionary[@"UILaunchStoryboardName"] stringByDeletingPathExtension];

    const bool hasXIB = [[NSBundle mainBundle] pathForResource: launchScreen ofType: @"nib"] != nil;

    if (hasXIB)
    {
        self->m_XibView = [[[NSBundle mainBundle] loadNibNamed: launchScreen owner: nil options: nil] objectAtIndex: 0];
        [self addSubview: self->m_XibView];
    }
    else
    {
    #if !PLATFORM_TVOS
        NSAssert(NO, @"no storyboard/xib was provided.");
    #endif

        // we still support launch images on tvos, but unlike iOS there are only two options and no orientations
        UIImage* launchImage = nil;
        if ([UIScreen mainScreen].scale > 1.0)
            launchImage = [UIImage imageNamed: @"LaunchImage@2x"];
        if (!launchImage)
            launchImage = [UIImage imageNamed: @"LaunchImage@"];

        self->m_ImageView = [[UIImageView alloc] initWithImage: launchImage];
        [self addSubview: self->m_ImageView];
    }
}

- (void)updateOrientation:(ScreenOrientation)orient withSupportedOrientations:(const OrientationMask&)supportedOrientations
{
    CGFloat scale = UnityScreenScaleFactor([UIScreen mainScreen]);
    UnityReportResizeView(self.bounds.size.width * scale, self.bounds.size.height * scale, orient);
    ReportSafeAreaChangeForView(self);

    // for iOS only xib/storyboard are supported, for tvOS (launch images are supported) no orientation takes place at all
}

- (void)layoutSubviews
{
    if (self->m_XibView)
        self->m_XibView.frame = self.bounds;
    else if (self->m_ImageView)
        self->m_ImageView.frame = self.bounds;
}

+ (SplashScreen*)Instance
{
    return _splash;
}

- (void)freeSubviews
{
    m_ImageView = nil;
    m_XibView = nil;
}

@end

@implementation SplashScreenController
{
    OrientationMask _supportedOrientations;
}

- (id)init
{
    self = [super init];
    if (self)
    {
        self->_supportedOrientations = { false, false, false, false };
    }
    return self;
}

- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    ScreenOrientation curOrient = UIViewControllerOrientation(self);
    ScreenOrientation newOrient = OrientationAfterTransform(curOrient, [coordinator targetTransform]);
    [_splash updateOrientation: newOrient withSupportedOrientations: self->_supportedOrientations];

    [super viewWillTransitionToSize: size withTransitionCoordinator: coordinator];
}

- (void)create:(UIWindow*)window
{
    NSArray* supportedOrientation = [[[NSBundle mainBundle] infoDictionary] objectForKey: @"UISupportedInterfaceOrientations"];
    // splash will be shown way before unity is inited so we need to override autorotation handling with values read from info.plist
    self->_supportedOrientations.portrait            = [supportedOrientation containsObject: @"UIInterfaceOrientationPortrait"];
    self->_supportedOrientations.portraitUpsideDown  = [supportedOrientation containsObject: @"UIInterfaceOrientationPortraitUpsideDown"];
    self->_supportedOrientations.landscapeLeft       = [supportedOrientation containsObject: @"UIInterfaceOrientationLandscapeRight"];
    self->_supportedOrientations.landscapeRight      = [supportedOrientation containsObject: @"UIInterfaceOrientationLandscapeLeft"];

    // special handling of devices/ios that do not support upside down orientation
    if (!UnityDeviceSupportsUpsideDown())
    {
        self->_supportedOrientations.portraitUpsideDown = false;

        OrientationMask om = self->_supportedOrientations;
        const bool anySupported = om.portrait || om.landscapeLeft || om.landscapeRight;
        if (!anySupported)
        {
            self->_supportedOrientations.portrait = true;
            printf_console("This device does not support UpsideDown orientation, so we switched to Portrait.\n");
        }
    }

    _splash = [[SplashScreen alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
    _splash.contentScaleFactor = UnityScreenScaleFactor([UIScreen mainScreen]);
    _splash.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    _splash.autoresizesSubviews = YES;
    [_splash createUI];

    window.rootViewController = self;
    self.view = _splash;

    [window addSubview: _splash];
    [window bringSubviewToFront: _splash];

    ScreenOrientation orient = UIViewControllerOrientation(self);
    [_splash updateOrientation: orient withSupportedOrientations: self->_supportedOrientations];
    OrientView([SplashScreenController Instance], _splash, orient);
}

#if PLATFORM_IOS

- (BOOL)shouldAutorotate
{
    return YES;
}

- (NSUInteger)supportedInterfaceOrientations
{
    NSUInteger ret = 0;

    if (self->_supportedOrientations.portrait)
        ret |= (1 << UIInterfaceOrientationPortrait);
    if (self->_supportedOrientations.portraitUpsideDown)
        ret |= (1 << UIInterfaceOrientationPortraitUpsideDown);
    if (self->_supportedOrientations.landscapeLeft)
        ret |= (1 << UIInterfaceOrientationLandscapeRight);
    if (self->_supportedOrientations.landscapeRight)
        ret |= (1 << UIInterfaceOrientationLandscapeLeft);

    return ret;
}

#endif

+ (SplashScreenController*)Instance
{
    return _controller;
}

@end

void ShowSplashScreen(UIWindow* window)
{
    NSString* launchScreen = [[NSBundle mainBundle].infoDictionary[@"UILaunchStoryboardName"] stringByDeletingPathExtension];
#if PLATFORM_IOS
    // since launch images are no longer supported on ios we MUST have UILaunchStoryboardName filled
    assert(launchScreen != nil && @"UILaunchStoryboardName key is missing from info.plist");
#endif

    const bool hasStoryboard = launchScreen != nil && [[NSBundle mainBundle] pathForResource: launchScreen ofType: @"storyboardc"] != nil;
    if (hasStoryboard)
    {
        UIStoryboard *storyboard = [UIStoryboard storyboardWithName: launchScreen bundle: [NSBundle mainBundle]];

        _controller = [storyboard instantiateInitialViewController];
        window.rootViewController = _controller;
    }
    else
    {
        _controller = [[SplashScreenController alloc] init];
        [_controller create: window];
    }

    [window makeKeyAndVisible];
}

void HideSplashScreen()
{
    if (_splash)
    {
        [_splash removeFromSuperview];
        [_splash freeSubviews];
    }

    _splash = nil;
    _controller = nil;
}
