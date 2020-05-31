#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01;
// System.Type
struct Type_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
struct RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// System.Collections.DictionaryEntry
struct  DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct  KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct  KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct  KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_tB49DA8C7F6817D87925F65955E8E1190BE76D367 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB49DA8C7F6817D87925F65955E8E1190BE76D367, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB49DA8C7F6817D87925F65955E8E1190BE76D367, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct  KeyValuePair_2_t5188B56466B1848E6B75FAD7F0A1A07DD95FD8BA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5188B56466B1848E6B75FAD7F0A1A07DD95FD8BA, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5188B56466B1848E6B75FAD7F0A1A07DD95FD8BA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>
struct  KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_tB806C2F98E1E3559B07973D57F289EAD64113D67 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB806C2F98E1E3559B07973D57F289EAD64113D67, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB806C2F98E1E3559B07973D57F289EAD64113D67, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
struct  KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4, ___key_0)); }
	inline uint64_t get_key_0() const { return ___key_0; }
	inline uint64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Diagnostics.Tracing.EmptyStruct
struct  EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082__padding[1];
	};

public:
};


// System.Diagnostics.Tracing.EventProvider_SessionInfo
struct  SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventProvider_SessionInfo::sessionIdBit
	int32_t ___sessionIdBit_0;
	// System.Int32 System.Diagnostics.Tracing.EventProvider_SessionInfo::etwSessionId
	int32_t ___etwSessionId_1;

public:
	inline static int32_t get_offset_of_sessionIdBit_0() { return static_cast<int32_t>(offsetof(SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A, ___sessionIdBit_0)); }
	inline int32_t get_sessionIdBit_0() const { return ___sessionIdBit_0; }
	inline int32_t* get_address_of_sessionIdBit_0() { return &___sessionIdBit_0; }
	inline void set_sessionIdBit_0(int32_t value)
	{
		___sessionIdBit_0 = value;
	}

	inline static int32_t get_offset_of_etwSessionId_1() { return static_cast<int32_t>(offsetof(SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A, ___etwSessionId_1)); }
	inline int32_t get_etwSessionId_1() const { return ___etwSessionId_1; }
	inline int32_t* get_address_of_etwSessionId_1() { return &___etwSessionId_1; }
	inline void set_etwSessionId_1(int32_t value)
	{
		___etwSessionId_1 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Resources.ResourceLocator
struct  ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// System.Threading.AsyncLocalValueChangedArgs`1<System.Object>
struct  AsyncLocalValueChangedArgs_1_t64BF6800935406CA808E9821DF12DBB72A71640D 
{
public:
	// T System.Threading.AsyncLocalValueChangedArgs`1::<PreviousValue>k__BackingField
	RuntimeObject * ___U3CPreviousValueU3Ek__BackingField_0;
	// T System.Threading.AsyncLocalValueChangedArgs`1::<CurrentValue>k__BackingField
	RuntimeObject * ___U3CCurrentValueU3Ek__BackingField_1;
	// System.Boolean System.Threading.AsyncLocalValueChangedArgs`1::<ThreadContextChanged>k__BackingField
	bool ___U3CThreadContextChangedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPreviousValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncLocalValueChangedArgs_1_t64BF6800935406CA808E9821DF12DBB72A71640D, ___U3CPreviousValueU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CPreviousValueU3Ek__BackingField_0() const { return ___U3CPreviousValueU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CPreviousValueU3Ek__BackingField_0() { return &___U3CPreviousValueU3Ek__BackingField_0; }
	inline void set_U3CPreviousValueU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CPreviousValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousValueU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AsyncLocalValueChangedArgs_1_t64BF6800935406CA808E9821DF12DBB72A71640D, ___U3CCurrentValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CCurrentValueU3Ek__BackingField_1() const { return ___U3CCurrentValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CCurrentValueU3Ek__BackingField_1() { return &___U3CCurrentValueU3Ek__BackingField_1; }
	inline void set_U3CCurrentValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CCurrentValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentValueU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CThreadContextChangedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AsyncLocalValueChangedArgs_1_t64BF6800935406CA808E9821DF12DBB72A71640D, ___U3CThreadContextChangedU3Ek__BackingField_2)); }
	inline bool get_U3CThreadContextChangedU3Ek__BackingField_2() const { return ___U3CThreadContextChangedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CThreadContextChangedU3Ek__BackingField_2() { return &___U3CThreadContextChangedU3Ek__BackingField_2; }
	inline void set_U3CThreadContextChangedU3Ek__BackingField_2(bool value)
	{
		___U3CThreadContextChangedU3Ek__BackingField_2 = value;
	}
};


// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40__padding[1];
	};

public:
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,System.Object>
struct  ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Int32>
struct  ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame
struct  SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame::x
	float ___x_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame::y
	float ___y_1;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame::w
	float ___w_2;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame::h
	float ___h_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04, ___w_2)); }
	inline float get_w_2() const { return ___w_2; }
	inline float* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(float value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04, ___h_3)); }
	inline float get_h_3() const { return ___h_3; }
	inline float* get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(float value)
	{
		___h_3 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_SpriteSize
struct  SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteSize::w
	float ___w_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_SpriteSize::h
	float ___h_1;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E, ___w_0)); }
	inline float get_w_0() const { return ___w_0; }
	inline float* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(float value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_h_1() { return static_cast<int32_t>(offsetof(SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E, ___h_1)); }
	inline float get_h_1() const { return ___h_1; }
	inline float* get_address_of_h_1() { return &___h_1; }
	inline void set_h_1(float value)
	{
		___h_1 = value;
	}
};


// UnityEngine.BeforeRenderHelper_OrderBlock
struct  OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper_OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper_OrderBlock::callback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___callback_1)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_tC36FFE61D0A4E7B31F575A1FCAEE05AC41FACA85 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_tC36FFE61D0A4E7B31F575A1FCAEE05AC41FACA85, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_tC36FFE61D0A4E7B31F575A1FCAEE05AC41FACA85, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_tC36FFE61D0A4E7B31F575A1FCAEE05AC41FACA85, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3
struct  Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D 
{
public:
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D_StaticFields, ___Zero_0)); }
	inline Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct  ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940_StaticFields, ___none_0)); }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  get_none_0() const { return ___none_0; }
	inline ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  value)
	{
		___none_0 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.SocialPlatforms.Range
struct  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// UnityEngine.TextCore.GlyphRect
struct  GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C 
{
public:
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};

struct GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C_StaticFields
{
public:
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.GlyphRect::s_ZeroGlyphRect
	GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___s_ZeroGlyphRect_4;

public:
	inline static int32_t get_offset_of_s_ZeroGlyphRect_4() { return static_cast<int32_t>(offsetof(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C_StaticFields, ___s_ZeroGlyphRect_4)); }
	inline GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  get_s_ZeroGlyphRect_4() const { return ___s_ZeroGlyphRect_4; }
	inline GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C * get_address_of_s_ZeroGlyphRect_4() { return &___s_ZeroGlyphRect_4; }
	inline void set_s_ZeroGlyphRect_4(GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  value)
	{
		___s_ZeroGlyphRect_4 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.UILineInfo
struct  UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};


// UnityEngine.UnitySynchronizationContext_WorkRequest
struct  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext_WorkRequest::m_WaitHandle
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_WaitHandle_2)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct  Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_One_4)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Up_5)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Down_6)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Left_7)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4_StaticFields, ___s_Right_8)); }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4 * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  value)
	{
		___s_Right_8 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.InputDevice
struct  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.MeshId
struct  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct  KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___key_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_key_0() const { return ___key_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Int32>
struct  KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>
struct  KeyValuePair_2_t2D8427F03B42441C4598C9D3AAB86FBA90CDF7F6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2D8427F03B42441C4598C9D3AAB86FBA90CDF7F6, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2D8427F03B42441C4598C9D3AAB86FBA90CDF7F6, ___value_1)); }
	inline ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  get_value_1() const { return ___value_1; }
	inline ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->____value_0), (void*)NULL);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.ValueTuple`2<System.Object,System.Int32>,System.Object>
struct  KeyValuePair_2_t763F028283519A2C5A42925C2D288C84296E4E71 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t763F028283519A2C5A42925C2D288C84296E4E71, ___key_0)); }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  get_key_0() const { return ___key_0; }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___Item1_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t763F028283519A2C5A42925C2D288C84296E4E71, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ConsoleKey
struct  ConsoleKey_t0196714F06D59B40580F7B85EA2663D81394682C 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t0196714F06D59B40580F7B85EA2663D81394682C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ConsoleModifiers
struct  ConsoleModifiers_tCB55098B71E4DCCEE972B1056E64D1B8AB9EAB34 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_tCB55098B71E4DCCEE972B1056E64D1B8AB9EAB34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t85058E06EFF8AE085FAB91CE2B9E28E7F6FAE33F 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t85058E06EFF8AE085FAB91CE2B9E28E7F6FAE33F, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>
struct  ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331, ___Item2_1)); }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_SpriteData
struct  SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728 
{
public:
	// System.String TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::filename
	String_t* ___filename_0;
	// TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::frame
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___frame_1;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::rotated
	bool ___rotated_2;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::trimmed
	bool ___trimmed_3;
	// TMPro.SpriteAssetUtilities.TexturePacker_SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::spriteSourceSize
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___spriteSourceSize_4;
	// TMPro.SpriteAssetUtilities.TexturePacker_SpriteSize TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::sourceSize
	SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E  ___sourceSize_5;
	// UnityEngine.Vector2 TMPro.SpriteAssetUtilities.TexturePacker_SpriteData::pivot
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_6;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_0), (void*)value);
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___frame_1)); }
	inline SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  get_frame_1() const { return ___frame_1; }
	inline SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04 * get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  value)
	{
		___frame_1 = value;
	}

	inline static int32_t get_offset_of_rotated_2() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___rotated_2)); }
	inline bool get_rotated_2() const { return ___rotated_2; }
	inline bool* get_address_of_rotated_2() { return &___rotated_2; }
	inline void set_rotated_2(bool value)
	{
		___rotated_2 = value;
	}

	inline static int32_t get_offset_of_trimmed_3() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___trimmed_3)); }
	inline bool get_trimmed_3() const { return ___trimmed_3; }
	inline bool* get_address_of_trimmed_3() { return &___trimmed_3; }
	inline void set_trimmed_3(bool value)
	{
		___trimmed_3 = value;
	}

	inline static int32_t get_offset_of_spriteSourceSize_4() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___spriteSourceSize_4)); }
	inline SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  get_spriteSourceSize_4() const { return ___spriteSourceSize_4; }
	inline SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04 * get_address_of_spriteSourceSize_4() { return &___spriteSourceSize_4; }
	inline void set_spriteSourceSize_4(SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  value)
	{
		___spriteSourceSize_4 = value;
	}

	inline static int32_t get_offset_of_sourceSize_5() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___sourceSize_5)); }
	inline SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E  get_sourceSize_5() const { return ___sourceSize_5; }
	inline SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E * get_address_of_sourceSize_5() { return &___sourceSize_5; }
	inline void set_sourceSize_5(SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E  value)
	{
		___sourceSize_5 = value;
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728, ___pivot_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_pivot_6() const { return ___pivot_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___pivot_6 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
struct SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___spriteSourceSize_4;
	SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E  ___sourceSize_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_6;
};
// Native definition for COM marshalling of TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
struct SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_tDB681A7461FA0C10DA42E9A984BDDD0199AB2C04  ___spriteSourceSize_4;
	SpriteSize_t143F23923B1D48E84CB38DCDD532F408936AB67E  ___sourceSize_5;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_6;
};

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.CubemapFace
struct  CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74DD9C86D8A5E5F782F136F8753580668F96FFB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
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


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct  RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_t13ED07FF7DD43627D5D5D985895BA904612D6905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct  ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE 
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  ___Position_0;
	// System.Object UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE, ___Position_0)); }
	inline Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  get_Position_0() const { return ___Position_0; }
	inline Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE_marshaled_pinvoke
{
	Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE_marshaled_com
{
	Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// UnityEngine.Experimental.Rendering.Universal.ShadowUtility_Edge
struct  Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility_Edge::vertexIndex0
	int32_t ___vertexIndex0_0;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility_Edge::vertexIndex1
	int32_t ___vertexIndex1_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.Universal.ShadowUtility_Edge::tangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.ShadowUtility_Edge::compareReversed
	bool ___compareReversed_3;

public:
	inline static int32_t get_offset_of_vertexIndex0_0() { return static_cast<int32_t>(offsetof(Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0, ___vertexIndex0_0)); }
	inline int32_t get_vertexIndex0_0() const { return ___vertexIndex0_0; }
	inline int32_t* get_address_of_vertexIndex0_0() { return &___vertexIndex0_0; }
	inline void set_vertexIndex0_0(int32_t value)
	{
		___vertexIndex0_0 = value;
	}

	inline static int32_t get_offset_of_vertexIndex1_1() { return static_cast<int32_t>(offsetof(Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0, ___vertexIndex1_1)); }
	inline int32_t get_vertexIndex1_1() const { return ___vertexIndex1_1; }
	inline int32_t* get_address_of_vertexIndex1_1() { return &___vertexIndex1_1; }
	inline void set_vertexIndex1_1(int32_t value)
	{
		___vertexIndex1_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0, ___tangent_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_compareReversed_3() { return static_cast<int32_t>(offsetof(Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0, ___compareReversed_3)); }
	inline bool get_compareReversed_3() const { return ___compareReversed_3; }
	inline bool* get_address_of_compareReversed_3() { return &___compareReversed_3; }
	inline void set_compareReversed_3(bool value)
	{
		___compareReversed_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0_marshaled_pinvoke
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	int32_t ___compareReversed_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0_marshaled_com
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	int32_t ___compareReversed_3;
};

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Centroid_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Point_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Normal_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
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


// UnityEngine.Rendering.BuiltinRenderTextureType
struct  BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t6ECEE9FF62E815D7ED640D057EEA84C0FD145D01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.LODParameters
struct  LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960, ___m_CameraPosition_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B 
{
public:
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UICharInfo
struct  UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A, ___cursorPos_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct  UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv0_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv1_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv2_6;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_normal_1() const { return ___normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___tangent_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___color_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_3() const { return ___color_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv0_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv1_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv1_5() const { return ___uv1_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv2_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv2_6() const { return ___uv2_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv3_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv3_7() const { return ___uv3_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  value)
	{
		___simpleVert_10 = value;
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


// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshGenerationStatus
struct  MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct  MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32Enum>
struct  KeyValuePair_2_tA1ECB66A999F37D4CEE2E3317DEA1C770911D53E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA1ECB66A999F37D4CEE2E3317DEA1C770911D53E, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA1ECB66A999F37D4CEE2E3317DEA1C770911D53E, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Boolean>
struct  KeyValuePair_2_t772B01893CFD2BCA7256C787332FA87EADDA0B04 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t772B01893CFD2BCA7256C787332FA87EADDA0B04, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t772B01893CFD2BCA7256C787332FA87EADDA0B04, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct  KeyValuePair_2_t14F68CE264935CB26ECE366603BEEAF342470010 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t14F68CE264935CB26ECE366603BEEAF342470010, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t14F68CE264935CB26ECE366603BEEAF342470010, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32Enum>
struct  KeyValuePair_2_tF5C55FD7AFA8164449EE2A5C295953C5B9CAE4F5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF5C55FD7AFA8164449EE2A5C295953C5B9CAE4F5, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF5C55FD7AFA8164449EE2A5C295953C5B9CAE4F5, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.TypedReference
struct  TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___type_0)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___Value_1)); }
	inline intptr_t get_Value_1() const { return ___Value_1; }
	inline intptr_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(intptr_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8, ___Type_2)); }
	inline intptr_t get_Type_2() const { return ___Type_2; }
	inline intptr_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(intptr_t value)
	{
		___Type_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct  RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3 
{
public:
	// UnityEngine.Rendering.ScriptableRenderContext UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderContext
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::cmd
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::renderGraphPool
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext::resources
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;

public:
	inline static int32_t get_offset_of_renderContext_0() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderContext_0)); }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  get_renderContext_0() const { return ___renderContext_0; }
	inline ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B * get_address_of_renderContext_0() { return &___renderContext_0; }
	inline void set_renderContext_0(ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  value)
	{
		___renderContext_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___cmd_1)); }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * get_cmd_1() const { return ___cmd_1; }
	inline CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD ** get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * value)
	{
		___cmd_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cmd_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderGraphPool_2() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___renderGraphPool_2)); }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * get_renderGraphPool_2() const { return ___renderGraphPool_2; }
	inline RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 ** get_address_of_renderGraphPool_2() { return &___renderGraphPool_2; }
	inline void set_renderGraphPool_2(RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * value)
	{
		___renderGraphPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderGraphPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_resources_3() { return static_cast<int32_t>(offsetof(RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3, ___resources_3)); }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * get_resources_3() const { return ___resources_3; }
	inline RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 ** get_address_of_resources_3() { return &___resources_3; }
	inline void set_resources_3(RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * value)
	{
		___resources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_pinvoke
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext
struct RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3_marshaled_com
{
	ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___renderContext_0;
	CommandBuffer_t70BF7D9D84C2AFA83559B45FAD5BEDA73DA617DD * ___cmd_1;
	RenderGraphObjectPool_t0CBE32C9B6C34B9244AACFE6F1F6F5C27495A735 * ___renderGraphPool_2;
	RenderGraphResourceRegistry_t7092B2DF44BF627E78727614199E685876593F82 * ___resources_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource
struct  RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphMutableResource::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524, ___U3CversionU3Ek__BackingField_2)); }
	inline int32_t get_U3CversionU3Ek__BackingField_2() const { return ___U3CversionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CversionU3Ek__BackingField_2() { return &___U3CversionU3Ek__BackingField_2; }
	inline void set_U3CversionU3Ek__BackingField_2(int32_t value)
	{
		___U3CversionU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource
struct  RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF, ___U3ChandleU3Ek__BackingField_0)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_0() const { return ___U3ChandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_0() { return &___U3ChandleU3Ek__BackingField_0; }
	inline void set_U3ChandleU3Ek__BackingField_0(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
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


// UnityEngine.Rendering.RenderTargetIdentifier
struct  RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.Touch
struct  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// UnityEngine.XR.MeshGenerationResult
struct  MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_pinvoke
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_com
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Acceleration_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularAcceleration_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// UnityEngine.Profiling.Experimental.DebugScreenCapture
struct  DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Profiling.Experimental.DebugScreenCapture::<rawImageDataReference>k__BackingField
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___U3CrawImageDataReferenceU3Ek__BackingField_0;
	// UnityEngine.TextureFormat UnityEngine.Profiling.Experimental.DebugScreenCapture::<imageFormat>k__BackingField
	int32_t ___U3CimageFormatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Profiling.Experimental.DebugScreenCapture::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Profiling.Experimental.DebugScreenCapture::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CrawImageDataReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2, ___U3CrawImageDataReferenceU3Ek__BackingField_0)); }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  get_U3CrawImageDataReferenceU3Ek__BackingField_0() const { return ___U3CrawImageDataReferenceU3Ek__BackingField_0; }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * get_address_of_U3CrawImageDataReferenceU3Ek__BackingField_0() { return &___U3CrawImageDataReferenceU3Ek__BackingField_0; }
	inline void set_U3CrawImageDataReferenceU3Ek__BackingField_0(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  value)
	{
		___U3CrawImageDataReferenceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CimageFormatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2, ___U3CimageFormatU3Ek__BackingField_1)); }
	inline int32_t get_U3CimageFormatU3Ek__BackingField_1() const { return ___U3CimageFormatU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CimageFormatU3Ek__BackingField_1() { return &___U3CimageFormatU3Ek__BackingField_1; }
	inline void set_U3CimageFormatU3Ek__BackingField_1(int32_t value)
	{
		___U3CimageFormatU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2, ___U3CwidthU3Ek__BackingField_2)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_2() const { return ___U3CwidthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_2() { return &___U3CwidthU3Ek__BackingField_2; }
	inline void set_U3CwidthU3Ek__BackingField_2(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2, ___U3CheightU3Ek__BackingField_3)); }
	inline int32_t get_U3CheightU3Ek__BackingField_3() const { return ___U3CheightU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_3() { return &___U3CheightU3Ek__BackingField_3; }
	inline void set_U3CheightU3Ek__BackingField_3(int32_t value)
	{
		___U3CheightU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Rendering.BatchCullingContext
struct  BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Plane> UnityEngine.Rendering.BatchCullingContext::cullingPlanes
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___cullingPlanes_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> UnityEngine.Rendering.BatchCullingContext::batchVisibility
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___batchVisibility_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndices
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___visibleIndices_2;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.BatchCullingContext::lodParameters
	LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960  ___lodParameters_3;

public:
	inline static int32_t get_offset_of_cullingPlanes_0() { return static_cast<int32_t>(offsetof(BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F, ___cullingPlanes_0)); }
	inline NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  get_cullingPlanes_0() const { return ___cullingPlanes_0; }
	inline NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * get_address_of_cullingPlanes_0() { return &___cullingPlanes_0; }
	inline void set_cullingPlanes_0(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  value)
	{
		___cullingPlanes_0 = value;
	}

	inline static int32_t get_offset_of_batchVisibility_1() { return static_cast<int32_t>(offsetof(BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F, ___batchVisibility_1)); }
	inline NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  get_batchVisibility_1() const { return ___batchVisibility_1; }
	inline NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * get_address_of_batchVisibility_1() { return &___batchVisibility_1; }
	inline void set_batchVisibility_1(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  value)
	{
		___batchVisibility_1 = value;
	}

	inline static int32_t get_offset_of_visibleIndices_2() { return static_cast<int32_t>(offsetof(BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F, ___visibleIndices_2)); }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  get_visibleIndices_2() const { return ___visibleIndices_2; }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * get_address_of_visibleIndices_2() { return &___visibleIndices_2; }
	inline void set_visibleIndices_2(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  value)
	{
		___visibleIndices_2 = value;
	}

	inline static int32_t get_offset_of_lodParameters_3() { return static_cast<int32_t>(offsetof(BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F, ___lodParameters_3)); }
	inline LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960  get_lodParameters_3() const { return ___lodParameters_3; }
	inline LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960 * get_address_of_lodParameters_3() { return &___lodParameters_3; }
	inline void set_lodParameters_3(LODParameters_t8CBE0C157487BE3E860DA9478FB46F80D3D1D960  value)
	{
		___lodParameters_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



static  int8_t UnresolvedVirtualCall_0 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_1 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_2 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_3 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_4 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_5 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_6 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_7 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_8 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  intptr_t UnresolvedVirtualCall_9 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_10 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_11 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_12 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, uint8_t ___Byte3, int64_t ___Int644, int64_t ___Int645, RuntimeObject * ___Object6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_13 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_14 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_15 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_16 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_17 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_18 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_19 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_20 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_21 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_22 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_23 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_24 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_25 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768  UnresolvedVirtualCall_26 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_27 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_28 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_29 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_30 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_31 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_32 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_33 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_34 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UnresolvedVirtualCall_35 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UnresolvedVirtualCall_36 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_37 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_38 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_39 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_40 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_41 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, int32_t ___Int328, RuntimeObject * ___Object9, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_42 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Guid_t  UnresolvedVirtualCall_43 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_44 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_45 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  UnresolvedVirtualCall_46 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  UnresolvedVirtualCall_47 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_48 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_49 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_50 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_51 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UnresolvedVirtualCall_52 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, int32_t ___Int328, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  UnresolvedVirtualCall_53 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_54 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_55 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_56 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_57 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, int32_t ___Int327, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_58 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  UnresolvedVirtualCall_59 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_60 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_61 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_62 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_63 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_64 (RuntimeObject * __this, int64_t ___Int641, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_65 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_66 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_67 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_68 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_69 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, RuntimeObject * ___Object4, int32_t ___Int325, int8_t ___SByte6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_70 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_71 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  double UnresolvedVirtualCall_72 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_73 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  UnresolvedVirtualCall_74 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_75 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_76 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_77 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_78 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_79 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, int8_t ___SByte4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_80 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_81 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_82 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_83 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_84 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  UnresolvedVirtualCall_85 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  UnresolvedVirtualCall_86 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_87 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_88 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_89 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  UnresolvedVirtualCall_90 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  UnresolvedVirtualCall_91 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  UnresolvedVirtualCall_92 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_93 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_94 (RuntimeObject * __this, RuntimeObject * ___Object1, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_95 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_96 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_97 (RuntimeObject * __this, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_98 (RuntimeObject * __this, int64_t ___Int641, RuntimeObject * ___Object2, int64_t ___Int643, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_99 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_100 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_101 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_102 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_103 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_104 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_105 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_106 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_107 (RuntimeObject * __this, TypedReference_t118BC3B643F75F52DB9C99D5E051299F886EB2A8  ___TypedReference1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_108 (RuntimeObject * __this, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___StreamingContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  UnresolvedVirtualCall_109 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeMethodHandle_t85058E06EFF8AE085FAB91CE2B9E28E7F6FAE33F  UnresolvedVirtualCall_110 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_111 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_112 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  UnresolvedVirtualCall_113 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_114 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_115 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_116 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_117 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_118 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_119 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_120 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_121 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_122 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_123 (RuntimeObject * __this, int16_t ___Int161, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_124 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_125 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_126 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, RuntimeObject * ___Object7, RuntimeObject * ___Object8, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_127 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_128 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_129 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_130 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, int32_t ___Int325, int32_t ___Int326, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_131 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_132 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, int32_t ___Int323, RuntimeObject * ___Object4, RuntimeObject * ___Object5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_133 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, int32_t ___Int324, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_134 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, RuntimeObject * ___Object3, RuntimeObject * ___Object4, RuntimeObject * ___Object5, RuntimeObject * ___Object6, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_135 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_136 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, int32_t ___Int325, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_137 (RuntimeObject * __this, CullingGroupEvent_tC36FFE61D0A4E7B31F575A1FCAEE05AC41FACA85  ___CullingGroupEvent1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_138 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_139 (RuntimeObject * __this, int32_t ___Int321, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_140 (RuntimeObject * __this, RuntimeObject * ___Object1, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___NativeArray_12, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_141 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_142 (RuntimeObject * __this, Guid_t  ___Guid1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_143 (RuntimeObject * __this, Guid_t  ___Guid1, RuntimeObject * ___Object2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  UnresolvedVirtualCall_144 (RuntimeObject * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___PlayableGraph1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  UnresolvedVirtualCall_145 (RuntimeObject * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___PlayableGraph1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  UnresolvedVirtualCall_146 (RuntimeObject * __this, RuntimeObject * ___Object1, BatchCullingContext_t63E5CFC913AA7026C975A8A79778ACC6D06E965F  ___BatchCullingContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_147 (RuntimeObject * __this, ScriptableRenderContext_t7A3C889E3516E8C79C1C0327D33ED9601D163A2B  ___ScriptableRenderContext1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_148 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnresolvedVirtualCall_149 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  UnresolvedVirtualCall_150 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_151 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_152 (RuntimeObject * __this, int32_t ___Int321, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_153 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  UnresolvedVirtualCall_154 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_155 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_156 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, int8_t ___SByte5, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  UnresolvedVirtualCall_157 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  UnresolvedVirtualCall_158 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_159 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_160 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int16_t ___Int163, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_161 (RuntimeObject * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___Rect1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_162 (RuntimeObject * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___Ray1, float ___Single2, int32_t ___Int323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_163 (RuntimeObject * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___Ray1, RuntimeObject * ___Object2, float ___Single3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  UnresolvedVirtualCall_164 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, float ___Single3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_165 (RuntimeObject * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___Ray1, RuntimeObject * ___Object2, float ___Single3, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_166 (RuntimeObject * __this, float ___Single1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_167 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, float ___Single2, int8_t ___SByte3, int8_t ___SByte4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_168 (RuntimeObject * __this, float ___Single1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  UnresolvedVirtualCall_169 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_170 (RuntimeObject * __this, float ___Single1, float ___Single2, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_171 (RuntimeObject * __this, RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3  ___RenderGraphContext1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  UnresolvedVirtualCall_172 (RuntimeObject * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___Vector2Int1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_173 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_174 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_175 (RuntimeObject * __this, RuntimeObject * ___Object1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_176 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  UnresolvedVirtualCall_177 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_178 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int16_t ___Int163, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_179 (RuntimeObject * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  UnresolvedVirtualCall_180 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnresolvedVirtualCall_181 (RuntimeObject * __this, float ___Single1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_182 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_183 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_184 (RuntimeObject * __this, float ___Single1, float ___Single2, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color323, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_185 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, int8_t ___SByte3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_186 (RuntimeObject * __this, int32_t ___Int321, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_187 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, RuntimeObject * ___Object3, float ___Single4, float ___Single5, float ___Single6, float ___Single7, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color328, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_188 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, RuntimeObject * ___Object3, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_189 (RuntimeObject * __this, RuntimeObject * ___Object1, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  UnresolvedVirtualCall_190 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_191 (RuntimeObject * __this, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___Vector3Int1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_192 (RuntimeObject * __this, Vector3Int_tA843C5F8C2EB42492786C5AF82C3E1F4929942B4  ___Vector3Int1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_193 (RuntimeObject * __this, Vec3_t2C5BD0FE9DB59A16844D310BA000CC3E203E784D  ___Vec31, RuntimeObject * ___Object2, RuntimeObject * ___Object3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_194 (RuntimeObject * __this, RuntimeObject * ___Object1, RenderTextureDescriptor_t74FEC57A54F89E11748E1865F7DCA3565BFAF58E  ___RenderTextureDescriptor2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_195 (RuntimeObject * __this, float ___Single1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector23, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_196 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_197 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_198 (RuntimeObject * __this, float ___Single1, float ___Single2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_199 (RuntimeObject * __this, ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___ColorBlock1, ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___ColorBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_200 (RuntimeObject * __this, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___Navigation1, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___Navigation2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_201 (RuntimeObject * __this, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___SpriteState1, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___SpriteState2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_202 (RuntimeObject * __this, RuntimeObject * ___Object1, uint8_t ___Byte2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_203 (RuntimeObject * __this, RuntimeObject * ___Object1, int16_t ___Int162, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_204 (RuntimeObject * __this, RuntimeObject * ___Object1, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_205 (RuntimeObject * __this, RuntimeObject * ___Object1, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_206 (RuntimeObject * __this, RuntimeObject * ___Object1, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_207 (RuntimeObject * __this, RuntimeObject * ___Object1, int32_t ___Int322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_208 (RuntimeObject * __this, RuntimeObject * ___Object1, int64_t ___Int642, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_209 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_210 (RuntimeObject * __this, RuntimeObject * ___Object1, uint32_t ___UInt322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_211 (RuntimeObject * __this, RuntimeObject * ___Object1, uint64_t ___UInt642, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_212 (RuntimeObject * __this, RuntimeObject * ___Object1, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_213 (RuntimeObject * __this, RuntimeObject * ___Object1, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_214 (RuntimeObject * __this, RuntimeObject * ___Object1, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_215 (RuntimeObject * __this, RuntimeObject * ___Object1, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_216 (RuntimeObject * __this, RuntimeObject * ___Object1, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color322, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_217 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_218 (RuntimeObject * __this, RuntimeObject * ___Object1, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_219 (RuntimeObject * __this, RuntimeObject * ___Object1, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_220 (RuntimeObject * __this, RuntimeObject * ___Object1, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_221 (RuntimeObject * __this, RuntimeObject * ___Object1, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_222 (RuntimeObject * __this, RuntimeObject * ___Object1, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_223 (RuntimeObject * __this, RuntimeObject * ___Object1, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_224 (RuntimeObject * __this, RuntimeObject * ___Object1, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_225 (RuntimeObject * __this, RuntimeObject * ___Object1, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_226 (RuntimeObject * __this, RuntimeObject * ___Object1, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_227 (RuntimeObject * __this, RuntimeObject * ___Object1, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_228 (RuntimeObject * __this, RuntimeObject * ___Object1, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_229 (RuntimeObject * __this, RuntimeObject * ___Object1, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_230 (RuntimeObject * __this, RuntimeObject * ___Object1, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest2, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_231 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_232 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_233 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector42, int32_t ___Int323, int32_t ___Int324, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  UnresolvedVirtualCall_234 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnresolvedVirtualCall_235 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_236 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_237 (RuntimeObject * __this, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_238 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_239 (RuntimeObject * __this, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_240 (RuntimeObject * __this, AsyncLocalValueChangedArgs_1_t64BF6800935406CA808E9821DF12DBB72A71640D  ___AsyncLocalValueChangedArgs_11, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_241 (RuntimeObject * __this, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_242 (RuntimeObject * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_243 (RuntimeObject * __this, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_244 (RuntimeObject * __this, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_245 (RuntimeObject * __this, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_246 (RuntimeObject * __this, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_247 (RuntimeObject * __this, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_248 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_249 (RuntimeObject * __this, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_250 (RuntimeObject * __this, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_251 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_252 (RuntimeObject * __this, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_253 (RuntimeObject * __this, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_254 (RuntimeObject * __this, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_255 (RuntimeObject * __this, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_256 (RuntimeObject * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_257 (RuntimeObject * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_258 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_259 (RuntimeObject * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___InputDevice1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_260 (RuntimeObject * __this, MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A  ___MeshGenerationResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_261 (RuntimeObject * __this, XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  ___XRNodeState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_262 (RuntimeObject * __this, int8_t ___SByte1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_263 (RuntimeObject * __this, int16_t ___Int161, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_264 (RuntimeObject * __this, int32_t ___Int321, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_265 (RuntimeObject * __this, RuntimeObject * ___Object1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_266 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_267 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_268 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_269 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_270 (RuntimeObject * __this, RuntimeObject * ___Object1, int8_t ___SByte2, DebugScreenCapture_t0250AAA3AE55F6AE2BDDBC4F85B00E2519A8CEF2  ___DebugScreenCapture3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  UnresolvedVirtualCall_271 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tD85A2E33C726647EDFB2F7F8E7EDC766E3C53B78  UnresolvedVirtualCall_272 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  UnresolvedVirtualCall_273 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_274 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_275 (RuntimeObject * __this, Guid_t  ___Guid1, Guid_t  ___Guid2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_276 (RuntimeObject * __this, Guid_t  ___Guid1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_277 (RuntimeObject * __this, Guid_t  ___Guid1, RuntimeObject * ___Object2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_278 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_279 (RuntimeObject * __this, int16_t ___Int161, int16_t ___Int162, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_280 (RuntimeObject * __this, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_21, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_281 (RuntimeObject * __this, KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  ___KeyValuePair_21, KeyValuePair_2_t12CFA7FF15603BD4A555CDBFEBC08ECD343F1937  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_282 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_283 (RuntimeObject * __this, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo1, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_284 (RuntimeObject * __this, int64_t ___Int641, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_285 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_286 (RuntimeObject * __this, uint64_t ___UInt641, uint64_t ___UInt642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_287 (RuntimeObject * __this, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_21, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_288 (RuntimeObject * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_21, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_289 (RuntimeObject * __this, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData1, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_290 (RuntimeObject * __this, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock1, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_291 (RuntimeObject * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color321, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_292 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_293 (RuntimeObject * __this, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult1, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_294 (RuntimeObject * __this, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource1, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_295 (RuntimeObject * __this, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource1, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_296 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_297 (RuntimeObject * __this, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge1, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_298 (RuntimeObject * __this, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D1, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_299 (RuntimeObject * __this, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___RaycastHit1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___RaycastHit2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_300 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_301 (RuntimeObject * __this, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId1, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_302 (RuntimeObject * __this, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect1, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_303 (RuntimeObject * __this, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo1, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_304 (RuntimeObject * __this, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo1, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_305 (RuntimeObject * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex1, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_306 (RuntimeObject * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest1, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_307 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_308 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_309 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_310 (RuntimeObject * __this, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___ValueTuple_21, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82  UnresolvedVirtualCall_311 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F  UnresolvedVirtualCall_312 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809  UnresolvedVirtualCall_313 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tA1ECB66A999F37D4CEE2E3317DEA1C770911D53E  UnresolvedVirtualCall_314 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5  UnresolvedVirtualCall_315 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_316 (RuntimeObject * __this, int64_t ___Int641, int64_t ___Int642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tB49DA8C7F6817D87925F65955E8E1190BE76D367  UnresolvedVirtualCall_317 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t772B01893CFD2BCA7256C787332FA87EADDA0B04  UnresolvedVirtualCall_318 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t14F68CE264935CB26ECE366603BEEAF342470010  UnresolvedVirtualCall_319 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t5188B56466B1848E6B75FAD7F0A1A07DD95FD8BA  UnresolvedVirtualCall_320 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_321 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E  UnresolvedVirtualCall_322 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t2D8427F03B42441C4598C9D3AAB86FBA90CDF7F6  UnresolvedVirtualCall_323 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_324 (RuntimeObject * __this, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  ___ResourceLocator1, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  ___ResourceLocator2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tE6C1358EE7D1267190A395EAC9AEA64A81377D2C  UnresolvedVirtualCall_325 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_326 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_327 (RuntimeObject * __this, uint32_t ___UInt321, uint32_t ___UInt322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tB806C2F98E1E3559B07973D57F289EAD64113D67  UnresolvedVirtualCall_328 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_tBCE16D0D06F9AF10E3F89C064C5CCA69892173D4  UnresolvedVirtualCall_329 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_330 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_331 (RuntimeObject * __this, uint64_t ___UInt641, uint64_t ___UInt642, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t763F028283519A2C5A42925C2D288C84296E4E71  UnresolvedVirtualCall_332 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_333 (RuntimeObject * __this, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_334 (RuntimeObject * __this, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___ValueTuple_21, ValueTuple_2_t74D6CA9A08A6FCFF280CF9A4A5244FC0898C9E5F  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_335 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_336 (RuntimeObject * __this, uint8_t ___Byte1, uint8_t ___Byte2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_337 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_338 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_339 (RuntimeObject * __this, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_21, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_340 (RuntimeObject * __this, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_341 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_342 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_343 (RuntimeObject * __this, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo1, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_344 (RuntimeObject * __this, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_345 (RuntimeObject * __this, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  ___ResourceLocator1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_346 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_347 (RuntimeObject * __this, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_21, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_348 (RuntimeObject * __this, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_349 (RuntimeObject * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_21, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_350 (RuntimeObject * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_351 (RuntimeObject * __this, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData1, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_352 (RuntimeObject * __this, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_353 (RuntimeObject * __this, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock1, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_354 (RuntimeObject * __this, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_355 (RuntimeObject * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color321, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_356 (RuntimeObject * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_357 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_358 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_359 (RuntimeObject * __this, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult1, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_360 (RuntimeObject * __this, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_361 (RuntimeObject * __this, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource1, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_362 (RuntimeObject * __this, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_363 (RuntimeObject * __this, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource1, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_364 (RuntimeObject * __this, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_365 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_366 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_367 (RuntimeObject * __this, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge1, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_368 (RuntimeObject * __this, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_369 (RuntimeObject * __this, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___LayerMask1, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___LayerMask2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_370 (RuntimeObject * __this, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___LayerMask1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_371 (RuntimeObject * __this, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D1, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_372 (RuntimeObject * __this, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_373 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_374 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_375 (RuntimeObject * __this, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId1, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_376 (RuntimeObject * __this, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_377 (RuntimeObject * __this, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect1, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_378 (RuntimeObject * __this, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_379 (RuntimeObject * __this, ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___ColorBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_380 (RuntimeObject * __this, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___Navigation1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_381 (RuntimeObject * __this, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___SpriteState1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_382 (RuntimeObject * __this, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo1, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_383 (RuntimeObject * __this, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_384 (RuntimeObject * __this, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo1, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_385 (RuntimeObject * __this, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_386 (RuntimeObject * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex1, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_387 (RuntimeObject * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_388 (RuntimeObject * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest1, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_389 (RuntimeObject * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_390 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_391 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_392 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_393 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_394 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector42, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_395 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  UnresolvedVirtualCall_396 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  UnresolvedVirtualCall_397 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  UnresolvedVirtualCall_398 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  UnresolvedVirtualCall_399 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  UnresolvedVirtualCall_400 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  UnresolvedVirtualCall_401 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  UnresolvedVirtualCall_402 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  UnresolvedVirtualCall_403 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  UnresolvedVirtualCall_404 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  UnresolvedVirtualCall_405 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  UnresolvedVirtualCall_406 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  UnresolvedVirtualCall_407 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  UnresolvedVirtualCall_408 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  UnresolvedVirtualCall_409 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  UnresolvedVirtualCall_410 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  UnresolvedVirtualCall_411 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  UnresolvedVirtualCall_412 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  UnresolvedVirtualCall_413 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  UnresolvedVirtualCall_414 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  UnresolvedVirtualCall_415 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_416 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_417 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_418 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  UnresolvedVirtualCall_419 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_420 (RuntimeObject * __this, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  UnresolvedVirtualCall_421 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_422 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  UnresolvedVirtualCall_423 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_424 (RuntimeObject * __this, SessionInfo_tEAFEEFE3C65BFE4DCD6DBA6F4B1F525553E17F4A  ___SessionInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_425 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_426 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_427 (RuntimeObject * __this, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_428 (RuntimeObject * __this, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  ___CustomAttributeNamedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_429 (RuntimeObject * __this, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_430 (RuntimeObject * __this, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___CustomAttributeTypedArgument1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_431 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_432 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_433 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  UnresolvedVirtualCall_434 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_435 (RuntimeObject * __this, ValueTuple_2_t1C8AEE3E1716A086402000F62A3D0B4C21BFB9D6  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  UnresolvedVirtualCall_436 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_437 (RuntimeObject * __this, ValueTuple_2_t50705B2B5CEDC69B491D2335FB71C62CCFAD0331  ___ValueTuple_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  UnresolvedVirtualCall_438 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_439 (RuntimeObject * __this, SpriteData_t8ADAD39500AF244CC913ED9B1F964DF04B4E5728  ___SpriteData1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  UnresolvedVirtualCall_440 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_441 (RuntimeObject * __this, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  ___OrderBlock1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  UnresolvedVirtualCall_442 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_443 (RuntimeObject * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  UnresolvedVirtualCall_444 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_445 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  UnresolvedVirtualCall_446 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_447 (RuntimeObject * __this, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___RaycastResult1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  UnresolvedVirtualCall_448 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_449 (RuntimeObject * __this, RenderGraphMutableResource_t3658233BFA84721C15D19B38770A075F46950524  ___RenderGraphMutableResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  UnresolvedVirtualCall_450 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_451 (RuntimeObject * __this, RenderGraphResource_t62DDF69E2F3B04BD3F0C3F892D44C91FCC4D3BCF  ___RenderGraphResource1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  UnresolvedVirtualCall_452 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_453 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  UnresolvedVirtualCall_454 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_455 (RuntimeObject * __this, Edge_t4AFA67E936024EBBE692EBD257724A651FCAB0D0  ___Edge1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  UnresolvedVirtualCall_456 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_457 (RuntimeObject * __this, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  ___RaycastHit2D1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  UnresolvedVirtualCall_458 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_459 (RuntimeObject * __this, RenderTargetIdentifier_tB7480EE944FC70E0AB7D499DB17D119EB65B0F5B  ___RenderTargetIdentifier1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  UnresolvedVirtualCall_460 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_461 (RuntimeObject * __this, ShaderTagId_tA1DB5D58561C760D6D1AD54E21EC81D889100940  ___ShaderTagId1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  UnresolvedVirtualCall_462 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_463 (RuntimeObject * __this, GlyphRect_t398045C795E0E1264236DFAA5712796CC23C3E7C  ___GlyphRect1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_464 (RuntimeObject * __this, UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A  ___UICharInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_465 (RuntimeObject * __this, UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6  ___UILineInfo1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_466 (RuntimeObject * __this, UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___UIVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  UnresolvedVirtualCall_467 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_468 (RuntimeObject * __this, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  ___WorkRequest1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnresolvedVirtualCall_469 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_470 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnresolvedVirtualCall_471 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_472 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  UnresolvedVirtualCall_473 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_474 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_475 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_476 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_477 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_478 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_479 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_480 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_481 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_482 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_483 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_484 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_485 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_486 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_487 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_488 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_489 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_490 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_491 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_492 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_493 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_494 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_495 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_496 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_497 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_498 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_499 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_500 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_501 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_502 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_503 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_504 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_505 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_506 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_507 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_508 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_509 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_510 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_511 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_512 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_513 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_514 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int64_t UnresolvedVirtualCall_515 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  RuntimeObject * UnresolvedVirtualCall_516 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int32_t UnresolvedVirtualCall_517 (RuntimeObject * __this, KeyValuePair_2_tF5C55FD7AFA8164449EE2A5C295953C5B9CAE4F5  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_518 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_519 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_520 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_521 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_522 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_523 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_524 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_525 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_526 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_527 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_528 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_529 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_530 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_531 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_532 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_533 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_534 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint8_t UnresolvedVirtualCall_535 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_536 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_537 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_538 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_539 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_540 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_541 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_542 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_543 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_544 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_545 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_546 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_547 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_548 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_549 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_550 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_551 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int16_t UnresolvedVirtualCall_552 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_553 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_554 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_555 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_556 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_557 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_558 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_559 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_560 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_561 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_562 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_563 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_564 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_565 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_566 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_567 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_568 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_569 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_570 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_571 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_572 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_573 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_574 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_575 (RuntimeObject * __this, int32_t ___Int321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_576 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_577 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_578 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_579 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_580 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_581 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_582 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint16_t UnresolvedVirtualCall_583 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_584 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_585 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_586 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_587 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_588 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_589 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_590 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_591 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_592 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_593 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_594 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_595 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_596 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_597 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_598 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_599 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_600 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint32_t UnresolvedVirtualCall_601 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_602 (RuntimeObject * __this, int8_t ___SByte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_603 (RuntimeObject * __this, uint8_t ___Byte1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_604 (RuntimeObject * __this, int16_t ___Int161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_605 (RuntimeObject * __this, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___KeyValuePair_21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_606 (RuntimeObject * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___DateTime1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_607 (RuntimeObject * __this, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___DateTimeOffset1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_608 (RuntimeObject * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Decimal1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_609 (RuntimeObject * __this, EmptyStruct_tA4DC90792FEDB6D602D5AF5FBA9B0B8FE7C3D082  ___EmptyStruct1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_610 (RuntimeObject * __this, double ___Double1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_611 (RuntimeObject * __this, Guid_t  ___Guid1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_612 (RuntimeObject * __this, int64_t ___Int641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_613 (RuntimeObject * __this, intptr_t ___IntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_614 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_615 (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeSpan1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_616 (RuntimeObject * __this, uint16_t ___UInt161, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_617 (RuntimeObject * __this, uint32_t ___UInt321, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_618 (RuntimeObject * __this, uint64_t ___UInt641, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  uint64_t UnresolvedVirtualCall_619 (RuntimeObject * __this, uintptr_t ___UIntPtr1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  UnresolvedVirtualCall_620 (RuntimeObject * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  VoidTaskResult_t66EBC10DDE738848DB00F6EC1A2536D7D4715F40  UnresolvedVirtualCall_621 (RuntimeObject * __this, RuntimeObject * ___Object1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  UnresolvedVirtualCall_622 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnresolvedVirtualCall_623 (RuntimeObject * __this, ContourVertex_t67A305DD504D7CB0E1CA881D94A814242522B1DE  ___ContourVertex1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  int8_t UnresolvedVirtualCall_624 (RuntimeObject * __this, int32_t ___Int321, intptr_t ___IntPtr2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  UnresolvedVirtualCall_625 (RuntimeObject * __this, RuntimeObject * ___Object1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_626 (RuntimeObject * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___Scene1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_627 (RuntimeObject * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___Scene1, int32_t ___Int322, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_628 (RuntimeObject * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___Scene1, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___Scene2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_629 (RuntimeObject * __this, RuntimeObject * ___Object1, RuntimeObject * ___Object2, RuntimeObject * ___Object3, RuntimeObject * ___Object4, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_630 (RuntimeObject * __this, RuntimeObject * ___Object1, RenderGraphContext_t7AFBB4B7123530BF370FF3AA41D1FEC59C9846E3  ___RenderGraphContext2, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  float UnresolvedVirtualCall_631 (RuntimeObject * __this, float ___Single1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  UnresolvedVirtualCall_632 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnresolvedVirtualCall_633 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnresolvedVirtualCall_634 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  UnresolvedVirtualCall_635 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_636 (RuntimeObject * __this, int8_t ___SByte1, int8_t ___SByte2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_637 (RuntimeObject * __this, float ___Single1, float ___Single2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_638 (RuntimeObject * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_639 (RuntimeObject * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector21, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector22, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_640 (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector41, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Vector42, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_641 (RuntimeObject * __this, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___LayerMask1, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___LayerMask2, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

static  void UnresolvedVirtualCall_642 (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector31, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector32, float ___Single3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception(method);
	il2cpp_codegen_no_return();
}

extern const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[];
const Il2CppMethodPointer g_UnresolvedVirtualMethodPointers[643] = 
{
	(const Il2CppMethodPointer) UnresolvedVirtualCall_0,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_1,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_2,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_3,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_4,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_5,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_6,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_7,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_8,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_9,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_10,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_11,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_12,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_13,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_14,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_15,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_16,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_17,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_18,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_19,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_20,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_21,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_22,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_23,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_24,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_25,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_26,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_27,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_28,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_29,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_30,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_31,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_32,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_33,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_34,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_35,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_36,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_37,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_38,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_39,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_40,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_41,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_42,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_43,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_44,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_45,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_46,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_47,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_48,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_49,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_50,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_51,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_52,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_53,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_54,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_55,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_56,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_57,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_58,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_59,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_60,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_61,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_62,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_63,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_64,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_65,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_66,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_67,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_68,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_69,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_70,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_71,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_72,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_73,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_74,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_75,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_76,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_77,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_78,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_79,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_80,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_81,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_82,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_83,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_84,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_85,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_86,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_87,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_88,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_89,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_90,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_91,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_92,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_93,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_94,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_95,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_96,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_97,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_98,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_99,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_100,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_101,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_102,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_103,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_104,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_105,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_106,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_107,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_108,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_109,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_110,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_111,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_112,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_113,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_114,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_115,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_116,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_117,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_118,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_119,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_120,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_121,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_122,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_123,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_124,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_125,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_126,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_127,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_128,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_129,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_130,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_131,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_132,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_133,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_134,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_135,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_136,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_137,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_138,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_139,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_140,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_141,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_142,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_143,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_144,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_145,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_146,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_147,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_148,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_149,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_150,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_151,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_152,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_153,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_154,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_155,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_156,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_157,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_158,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_159,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_160,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_161,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_162,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_163,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_164,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_165,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_166,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_167,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_168,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_169,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_170,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_171,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_172,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_173,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_174,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_175,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_176,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_177,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_178,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_179,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_180,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_181,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_182,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_183,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_184,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_185,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_186,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_187,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_188,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_189,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_190,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_191,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_192,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_193,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_194,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_195,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_196,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_197,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_198,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_199,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_200,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_201,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_202,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_203,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_204,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_205,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_206,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_207,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_208,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_209,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_210,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_211,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_212,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_213,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_214,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_215,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_216,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_217,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_218,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_219,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_220,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_221,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_222,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_223,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_224,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_225,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_226,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_227,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_228,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_229,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_230,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_231,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_232,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_233,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_234,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_235,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_236,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_237,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_238,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_239,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_240,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_241,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_242,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_243,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_244,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_245,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_246,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_247,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_248,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_249,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_250,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_251,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_252,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_253,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_254,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_255,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_256,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_257,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_258,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_259,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_260,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_261,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_262,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_263,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_264,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_265,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_266,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_267,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_268,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_269,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_270,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_271,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_272,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_273,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_274,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_275,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_276,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_277,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_278,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_279,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_280,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_281,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_282,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_283,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_284,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_285,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_286,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_287,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_288,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_289,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_290,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_291,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_292,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_293,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_294,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_295,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_296,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_297,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_298,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_299,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_300,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_301,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_302,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_303,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_304,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_305,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_306,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_307,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_308,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_309,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_310,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_311,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_312,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_313,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_314,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_315,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_316,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_317,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_318,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_319,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_320,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_321,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_322,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_323,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_324,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_325,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_326,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_327,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_328,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_329,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_330,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_331,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_332,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_333,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_334,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_335,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_336,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_337,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_338,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_339,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_340,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_341,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_342,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_343,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_344,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_345,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_346,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_347,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_348,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_349,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_350,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_351,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_352,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_353,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_354,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_355,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_356,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_357,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_358,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_359,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_360,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_361,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_362,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_363,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_364,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_365,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_366,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_367,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_368,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_369,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_370,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_371,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_372,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_373,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_374,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_375,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_376,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_377,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_378,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_379,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_380,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_381,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_382,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_383,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_384,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_385,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_386,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_387,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_388,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_389,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_390,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_391,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_392,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_393,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_394,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_395,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_396,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_397,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_398,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_399,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_400,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_401,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_402,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_403,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_404,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_405,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_406,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_407,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_408,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_409,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_410,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_411,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_412,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_413,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_414,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_415,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_416,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_417,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_418,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_419,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_420,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_421,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_422,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_423,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_424,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_425,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_426,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_427,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_428,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_429,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_430,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_431,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_432,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_433,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_434,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_435,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_436,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_437,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_438,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_439,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_440,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_441,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_442,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_443,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_444,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_445,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_446,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_447,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_448,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_449,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_450,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_451,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_452,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_453,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_454,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_455,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_456,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_457,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_458,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_459,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_460,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_461,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_462,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_463,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_464,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_465,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_466,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_467,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_468,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_469,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_470,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_471,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_472,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_473,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_474,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_475,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_476,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_477,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_478,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_479,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_480,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_481,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_482,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_483,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_484,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_485,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_486,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_487,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_488,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_489,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_490,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_491,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_492,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_493,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_494,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_495,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_496,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_497,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_498,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_499,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_500,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_501,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_502,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_503,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_504,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_505,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_506,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_507,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_508,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_509,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_510,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_511,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_512,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_513,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_514,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_515,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_516,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_517,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_518,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_519,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_520,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_521,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_522,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_523,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_524,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_525,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_526,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_527,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_528,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_529,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_530,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_531,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_532,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_533,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_534,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_535,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_536,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_537,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_538,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_539,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_540,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_541,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_542,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_543,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_544,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_545,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_546,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_547,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_548,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_549,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_550,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_551,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_552,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_553,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_554,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_555,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_556,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_557,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_558,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_559,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_560,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_561,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_562,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_563,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_564,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_565,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_566,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_567,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_568,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_569,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_570,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_571,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_572,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_573,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_574,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_575,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_576,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_577,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_578,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_579,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_580,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_581,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_582,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_583,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_584,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_585,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_586,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_587,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_588,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_589,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_590,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_591,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_592,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_593,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_594,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_595,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_596,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_597,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_598,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_599,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_600,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_601,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_602,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_603,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_604,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_605,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_606,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_607,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_608,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_609,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_610,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_611,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_612,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_613,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_614,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_615,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_616,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_617,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_618,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_619,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_620,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_621,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_622,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_623,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_624,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_625,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_626,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_627,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_628,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_629,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_630,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_631,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_632,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_633,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_634,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_635,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_636,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_637,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_638,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_639,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_640,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_641,
	(const Il2CppMethodPointer) UnresolvedVirtualCall_642,
};
