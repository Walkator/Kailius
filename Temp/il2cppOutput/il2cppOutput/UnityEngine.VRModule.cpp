#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;

IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.XR.XRDevice
struct  XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceLoaded_0), (void*)value);
	}
};


// UnityEngine.XR.XRSettings
struct  XRSettings_tB57FCBA5B804996700C097CC13B658E7BD43D874  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t512915BBE299AE115F4DB0B96DF1DA2E72ECA181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_tF63E06301E4BB4746F7E07759B359872BD4BFB1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t19E37ADD57C1F00D67146A2BB4521D06F370D2E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t585A9BDECAC505FF19FF785F55CDD403A2E5DA73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t2D7C2397ABF03DD28086B969100F7D91DDD978A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRSettings_StereoRenderingMode
struct  StereoRenderingMode_tB595F1AB99E048D306C484D1A529D23C6A7C2D10 
{
public:
	// System.Int32 UnityEngine.XR.XRSettings_StereoRenderingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingMode_tB595F1AB99E048D306C484D1A529D23C6A7C2D10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597 (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * ___ret0, const RuntimeMethod* method);
// System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = L_2->get_OnTrackingChanged_4();
		G_B3_0 = ((!(((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_5 = ___worldAnchor0;
		NullCheck(L_5);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_6 = L_5->get_OnTrackingChanged_4();
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_7 = ___worldAnchor0;
		bool L_8 = ___located1;
		NullCheck(L_6);
		OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___located1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
					else
						VirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___worldAnchor0) - 1), ___located1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_m00461C6664BBAAF38549748E6F2BEEBBA5F3EDD7 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDevice::UpdateEyeTextureMSAASetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_UpdateEyeTextureMSAASetting_mC56D9328B079FB189E7A7F5CA97C66EFBA363165 (const RuntimeMethod* method)
{
	typedef void (*XRDevice_UpdateEyeTextureMSAASetting_mC56D9328B079FB189E7A7F5CA97C66EFBA363165_ftn) ();
	static XRDevice_UpdateEyeTextureMSAASetting_mC56D9328B079FB189E7A7F5CA97C66EFBA363165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_UpdateEyeTextureMSAASetting_mC56D9328B079FB189E7A7F5CA97C66EFBA363165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::UpdateEyeTextureMSAASetting()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_2 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_3 = ___loadedDeviceName0;
		NullCheck(L_2);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_2, L_3, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_m74A0B484E1B6D7187A34EEFFC7CDFD60E3575AA0 (const RuntimeMethod* method)
{
	typedef bool (*XRSettings_get_enabled_m74A0B484E1B6D7187A34EEFFC7CDFD60E3575AA0_ftn) ();
	static XRSettings_get_enabled_m74A0B484E1B6D7187A34EEFFC7CDFD60E3575AA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_enabled_m74A0B484E1B6D7187A34EEFFC7CDFD60E3575AA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_enabled()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_isDeviceActive_m78039C1D584FA84ED884C1D7228A8E0287BEE42E (const RuntimeMethod* method)
{
	typedef bool (*XRSettings_get_isDeviceActive_m78039C1D584FA84ED884C1D7228A8E0287BEE42E_ftn) ();
	static XRSettings_get_isDeviceActive_m78039C1D584FA84ED884C1D7228A8E0287BEE42E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_isDeviceActive_m78039C1D584FA84ED884C1D7228A8E0287BEE42E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_isDeviceActive()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.XR.XRSettings::get_eyeTextureResolutionScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSettings_get_eyeTextureResolutionScale_mFFBC6E9C0D8146D1B3BD579DA743A26FBA934B8E (const RuntimeMethod* method)
{
	typedef float (*XRSettings_get_eyeTextureResolutionScale_mFFBC6E9C0D8146D1B3BD579DA743A26FBA934B8E_ftn) ();
	static XRSettings_get_eyeTextureResolutionScale_mFFBC6E9C0D8146D1B3BD579DA743A26FBA934B8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureResolutionScale_mFFBC6E9C0D8146D1B3BD579DA743A26FBA934B8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureResolutionScale()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_set_eyeTextureResolutionScale_mAB54DE7EA38F44B10B67AD0F27BB5D27BAF91253 (float ___value0, const RuntimeMethod* method)
{
	typedef void (*XRSettings_set_eyeTextureResolutionScale_mAB54DE7EA38F44B10B67AD0F27BB5D27BAF91253_ftn) (float);
	static XRSettings_set_eyeTextureResolutionScale_mAB54DE7EA38F44B10B67AD0F27BB5D27BAF91253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_set_eyeTextureResolutionScale_mAB54DE7EA38F44B10B67AD0F27BB5D27BAF91253_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)");
	_il2cpp_icall_func(___value0);
}
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureWidth_m214FD01E2CA4D825BDCB51AD35390BB81DFE36CD (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_eyeTextureWidth_m214FD01E2CA4D825BDCB51AD35390BB81DFE36CD_ftn) ();
	static XRSettings_get_eyeTextureWidth_m214FD01E2CA4D825BDCB51AD35390BB81DFE36CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureWidth_m214FD01E2CA4D825BDCB51AD35390BB81DFE36CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureWidth()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureHeight_m819C153D5D44BAB89F0AF99474AA987471B416B9 (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_eyeTextureHeight_m819C153D5D44BAB89F0AF99474AA987471B416B9_ftn) ();
	static XRSettings_get_eyeTextureHeight_m819C153D5D44BAB89F0AF99474AA987471B416B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureHeight_m819C153D5D44BAB89F0AF99474AA987471B416B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureHeight()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRSettings::get_eyeTextureDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  XRSettings_get_eyeTextureDesc_mE8B378ED9A6692FF7E8BE261C46A426F630B69DD (const RuntimeMethod* method)
{
	RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597((RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E *)(&V_0), /*hidden argument*/NULL);
		RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.XRSettings::get_deviceEyeTextureDimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_deviceEyeTextureDimension_m8428FB644BB9072997A9F4F0204C1928FA88236B (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_deviceEyeTextureDimension_m8428FB644BB9072997A9F4F0204C1928FA88236B_ftn) ();
	static XRSettings_get_deviceEyeTextureDimension_m8428FB644BB9072997A9F4F0204C1928FA88236B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_deviceEyeTextureDimension_m8428FB644BB9072997A9F4F0204C1928FA88236B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_deviceEyeTextureDimension()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.XR.XRSettings::get_renderViewportScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSettings_get_renderViewportScale_mAD4CE67ED8318B9D26CA9B092EBC592C1E38AE59 (const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1 (const RuntimeMethod* method)
{
	typedef float (*XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1_ftn) ();
	static XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_renderViewportScaleInternal_m68CF4633C56407C080DD0930AEAC9286AAA304F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C (const RuntimeMethod* method)
{
	typedef String_t* (*XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C_ftn) ();
	static XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_loadedDeviceName_m952D46346306FD9477B13992E5797A85CCD3C98C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_loadedDeviceName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* XRSettings_get_supportedDevices_m6FD437B8469BA7EFCEA26D254C049BCDC9766374 (const RuntimeMethod* method)
{
	typedef StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*XRSettings_get_supportedDevices_m6FD437B8469BA7EFCEA26D254C049BCDC9766374_ftn) ();
	static XRSettings_get_supportedDevices_m6FD437B8469BA7EFCEA26D254C049BCDC9766374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_supportedDevices_m6FD437B8469BA7EFCEA26D254C049BCDC9766374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_supportedDevices()");
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.XR.XRSettings_StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_stereoRenderingMode_mCCC5ED4A6AED856B344334D5860C9CA1C4ECD5C5 (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_stereoRenderingMode_mCCC5ED4A6AED856B344334D5860C9CA1C4ECD5C5_ftn) ();
	static XRSettings_get_stereoRenderingMode_mCCC5ED4A6AED856B344334D5860C9CA1C4ECD5C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_stereoRenderingMode_mCCC5ED4A6AED856B344334D5860C9CA1C4ECD5C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_stereoRenderingMode()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597 (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E * ___ret0, const RuntimeMethod* method)
{
	typedef void (*XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597_ftn) (RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E *);
	static XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureDesc_Injected_m2E5464BF666C27FB20CD0D0CCA703F40ED382597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)");
	_il2cpp_icall_func(___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
