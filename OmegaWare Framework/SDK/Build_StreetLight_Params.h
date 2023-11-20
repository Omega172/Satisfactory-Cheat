#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * Function Build_StreetLight.Build_StreetLight_C.GetMeshColor
	 */
	struct ABuild_StreetLight_C_GetMeshColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetMeshSettings
	 */
	struct ABuild_StreetLight_C_GetMeshSettings_Params
	{
	public:
		struct FPoolMeshSettings                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.DoesNeedCustomTransform
	 */
	struct ABuild_StreetLight_C_DoesNeedCustomTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetCustomTransform
	 */
	struct ABuild_StreetLight_C_GetCustomTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetLightSettings
	 */
	struct ABuild_StreetLight_C_GetLightSettings_Params
	{
	public:
		struct FPoolLightSettings                                  ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetLightColor
	 */
	struct ABuild_StreetLight_C_GetLightColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetLightIntensity
	 */
	struct ABuild_StreetLight_C_GetLightIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetLightMaterialFunction
	 */
	struct ABuild_StreetLight_C_GetLightMaterialFunction_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.GetBuildEffectTemplate
	 */
	struct ABuild_StreetLight_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.OnUpdateMeshInfo
	 */
	struct ABuild_StreetLight_C_OnUpdateMeshInfo_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_StreetLight.Build_StreetLight_C.ExecuteUbergraph_Build_StreetLight
	 */
	struct ABuild_StreetLight_C_ExecuteUbergraph_Build_StreetLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
