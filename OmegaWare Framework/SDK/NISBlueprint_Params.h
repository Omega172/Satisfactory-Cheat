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
	 * Function NISBlueprint.NISLibrary.SetNISSharpness
	 */
	struct UNISLibrary_SetNISSharpness_Params
	{
	public:
		float                                                      Sharpness;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.SetNISMode
	 */
	struct UNISLibrary_SetNISMode_Params
	{
	public:
		EUNISMode                                                  NISMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.SetNISCustomScreenPercentage
	 */
	struct UNISLibrary_SetNISCustomScreenPercentage_Params
	{
	public:
		float                                                      CustomScreenPercentage;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.IsNISSupported
	 */
	struct UNISLibrary_IsNISSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.IsNISModeSupported
	 */
	struct UNISLibrary_IsNISModeSupported_Params
	{
	public:
		EUNISMode                                                  NISMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.GetSupportedNISModes
	 */
	struct UNISLibrary_GetSupportedNISModes_Params
	{
	public:
		TArray<EUNISMode>                                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.GetNISScreenPercentageRange
	 */
	struct UNISLibrary_GetNISScreenPercentageRange_Params
	{
	public:
		float                                                      MinScreenPercentage;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScreenPercentage;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.GetNISRecommendedScreenPercentage
	 */
	struct UNISLibrary_GetNISRecommendedScreenPercentage_Params
	{
	public:
		EUNISMode                                                  NISMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_09U4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NISBlueprint.NISLibrary.GetDefaultNISMode
	 */
	struct UNISLibrary_GetDefaultNISMode_Params
	{
	public:
		EUNISMode                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
