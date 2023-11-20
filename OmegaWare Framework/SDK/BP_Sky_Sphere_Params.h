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
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.EnableLowSpecClouds
	 */
	struct ABP_Sky_Sphere_C_EnableLowSpecClouds_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetLightAsDominant
	 */
	struct ABP_Sky_Sphere_C_SetLightAsDominant_Params
	{
	public:
		class ADirectionalLight*                                   Light;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       newDominant;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.NewDominantLight
	 */
	struct ABP_Sky_Sphere_C_NewDominantLight_Params
	{
	public:
		class ADirectionalLight*                                   oldDominantLight;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class ADirectionalLight*                                   NewDominantLight;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.LEGACY Calculate Dominant Light
	 */
	struct ABP_Sky_Sphere_C_LEGACYCalculateDominantLight_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.CalculateDiscBrightness
	 */
	struct ABP_Sky_Sphere_C_CalculateDiscBrightness_Params
	{
	public:
		class ALight*                                              Light;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FFBrightnessAdjustment                              brightnessAdjustment;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     discBrightness;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.CalculateBrightness
	 */
	struct ABP_Sky_Sphere_C_CalculateBrightness_Params
	{
	public:
		double                                                     Brightness;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.LEGACY Calculate Light Rotation
	 */
	struct ABP_Sky_Sphere_C_LEGACYCalculateLightRotation_Params
	{
	public:
		struct FRotator                                            OriginalRotation;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            RotationAxis;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRuntimeFloatCurve                                  LightRotationCurve;                                      // 0x0030(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FRotator                                            NewRotation;                                             // 0x00B8(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateGlobalParameters
	 */
	struct ABP_Sky_Sphere_C_UpdateGlobalParameters_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.LEGACY Update Curves From Time
	 */
	struct ABP_Sky_Sphere_C_LEGACYUpdateCurvesFromTime_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.LEGACY Update Light Rotation
	 */
	struct ABP_Sky_Sphere_C_LEGACYUpdateLightRotation_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateMaterialParameters
	 */
	struct ABP_Sky_Sphere_C_UpdateMaterialParameters_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	 */
	struct ABP_Sky_Sphere_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.weather
	 */
	struct ABP_Sky_Sphere_C_weather_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveBeginPlay
	 */
	struct ABP_Sky_Sphere_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnSwitched
	 */
	struct ABP_Sky_Sphere_C_OnSwitched_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ForceRecapture
	 */
	struct ABP_Sky_Sphere_C_ForceRecapture_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere
	 */
	struct ABP_Sky_Sphere_C_ExecuteUbergraph_BP_Sky_Sphere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
