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
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	 */
	struct UXeSSBlueprintLibrary_SetXeSSQualityMode_Params
	{
	public:
		EXeSSQualityMode                                           QualityMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	 */
	struct UXeSSBlueprintLibrary_IsXeSSSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	 */
	struct UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params
	{
	public:
		EXeSSQualityMode                                           QualityMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3SSI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ScreenPercentage;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	 */
	struct UXeSSBlueprintLibrary_GetXeSSQualityMode_Params
	{
	public:
		EXeSSQualityMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	 */
	struct UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params
	{
	public:
		TArray<EXeSSQualityMode>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	 */
	struct UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params
	{
	public:
		struct FIntPoint                                           ScreenResolution;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EXeSSQualityMode                                           ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
