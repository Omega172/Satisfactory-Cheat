#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PropertyPath.PropertyPathTestObject.SetStructRef
	 */
	struct UPropertyPathTestObject_SetStructRef_Params
	{
	public:
		struct FPropertyPathTestStruct                             InStruct;                                                // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.SetStructConstRef
	 */
	struct UPropertyPathTestObject_SetStructConstRef_Params
	{
	public:
		struct FPropertyPathTestStruct                             InStruct;                                                // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.SetStruct
	 */
	struct UPropertyPathTestObject_SetStruct_Params
	{
	public:
		struct FPropertyPathTestStruct                             InStruct;                                                // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.SetFloat
	 */
	struct UPropertyPathTestObject_SetFloat_Params
	{
	public:
		float                                                      InFloat;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.GetStructRef
	 */
	struct UPropertyPathTestObject_GetStructRef_Params
	{
	public:
		struct FPropertyPathTestStruct                             ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.GetStructConstRef
	 */
	struct UPropertyPathTestObject_GetStructConstRef_Params
	{
	public:
		struct FPropertyPathTestStruct                             ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.GetStruct
	 */
	struct UPropertyPathTestObject_GetStruct_Params
	{
	public:
		struct FPropertyPathTestStruct                             ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PropertyPath.PropertyPathTestObject.GetFloat
	 */
	struct UPropertyPathTestObject_GetFloat_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
