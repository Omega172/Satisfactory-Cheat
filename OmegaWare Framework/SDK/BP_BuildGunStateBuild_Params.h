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
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.PrimaryFire
	 */
	struct UBP_BuildGunStateBuild_C_PrimaryFire_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.EndState
	 */
	struct UBP_BuildGunStateBuild_C_EndState_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.BeginState
	 */
	struct UBP_BuildGunStateBuild_C_BeginState_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnResetHologram
	 */
	struct UBP_BuildGunStateBuild_C_OnResetHologram_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnMultiStepPlacement
	 */
	struct UBP_BuildGunStateBuild_C_OnMultiStepPlacement_Params
	{
	public:
		bool                                                       isFinalStep;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OpenBuildModeUI
	 */
	struct UBP_BuildGunStateBuild_C_OpenBuildModeUI_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnRecipeSampled
	 */
	struct UBP_BuildGunStateBuild_C_OnRecipeSampled_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ShowBuildModeSelectUI
	 */
	struct UBP_BuildGunStateBuild_C_ShowBuildModeSelectUI_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.CloseBuildModeSelectUI
	 */
	struct UBP_BuildGunStateBuild_C_CloseBuildModeSelectUI_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.OnZoopUpdated
	 */
	struct UBP_BuildGunStateBuild_C_OnZoopUpdated_Params
	{
	public:
		float                                                      currentZoop;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      maxZoop;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             zoopLocation;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.SecondaryFire
	 */
	struct UBP_BuildGunStateBuild_C_SecondaryFire_Params
	{	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.Scroll
	 */
	struct UBP_BuildGunStateBuild_C_Scroll_Params
	{
	public:
		int32_t                                                    Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BuildGunStateBuild.BP_BuildGunStateBuild_C.ExecuteUbergraph_BP_BuildGunStateBuild
	 */
	struct UBP_BuildGunStateBuild_C_ExecuteUbergraph_BP_BuildGunStateBuild_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FLZR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
