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
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.setupNormal
	 */
	struct UBP_MaterialEffect_Build_C_setupNormal_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.PlayThumpSound
	 */
	struct UBP_MaterialEffect_Build_C_PlayThumpSound_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.InitMaterialParameters
	 */
	struct UBP_MaterialEffect_Build_C_InitMaterialParameters_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.SetupBounds
	 */
	struct UBP_MaterialEffect_Build_C_SetupBounds_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.GotoNextStep
	 */
	struct UBP_MaterialEffect_Build_C_GotoNextStep_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.CalcCostQueueNewLength
	 */
	struct UBP_MaterialEffect_Build_C_CalcCostQueueNewLength_Params
	{
	public:
		int32_t                                                    NewLength;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WYW8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.DebugFillCostQueue
	 */
	struct UBP_MaterialEffect_Build_C_DebugFillCostQueue_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.CalcDisplacementAmount
	 */
	struct UBP_MaterialEffect_Build_C_CalcDisplacementAmount_Params
	{
	public:
		double                                                     Amount;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.UpdateCostQueue
	 */
	struct UBP_MaterialEffect_Build_C_UpdateCostQueue_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.SetupCostQueue
	 */
	struct UBP_MaterialEffect_Build_C_SetupCostQueue_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.SetupDuration
	 */
	struct UBP_MaterialEffect_Build_C_SetupDuration_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.SetupMeshes
	 */
	struct UBP_MaterialEffect_Build_C_SetupMeshes_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.SpawnFootEmitters
	 */
	struct UBP_MaterialEffect_Build_C_SpawnFootEmitters_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.OnUpdate
	 */
	struct UBP_MaterialEffect_Build_C_OnUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.OnEnded
	 */
	struct UBP_MaterialEffect_Build_C_OnEnded_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.PreStarted
	 */
	struct UBP_MaterialEffect_Build_C_PreStarted_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.OnStarted
	 */
	struct UBP_MaterialEffect_Build_C_OnStarted_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.OnCostActorReachedTarget
	 */
	struct UBP_MaterialEffect_Build_C_OnCostActorReachedTarget_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.destroy proxies
	 */
	struct UBP_MaterialEffect_Build_C_destroyproxies_Params
	{	};

	/**
	 * Function BP_MaterialEffect_Build.BP_MaterialEffect_Build_C.ExecuteUbergraph_BP_MaterialEffect_Build
	 */
	struct UBP_MaterialEffect_Build_C_ExecuteUbergraph_BP_MaterialEffect_Build_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K9Y3[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
