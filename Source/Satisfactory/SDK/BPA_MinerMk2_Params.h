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
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimGraph
	 */
	struct UBPA_MinerMk2_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.SetupReloadTimer
	 */
	struct UBPA_MinerMk2_C_SetupReloadTimer_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.ReloadTimer
	 */
	struct UBPA_MinerMk2_C_ReloadTimer_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_MinerEnteredReloadState
	 */
	struct UBPA_MinerMk2_C_AnimNotify_MinerEnteredReloadState_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartDrillVFX
	 */
	struct UBPA_MinerMk2_C_AnimNotify_StartDrillVFX_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.BlueprintInitializeAnimation
	 */
	struct UBPA_MinerMk2_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnResumeProducing
	 */
	struct UBPA_MinerMk2_C_AnimNotify_OnResumeProducing_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_OnStopProducing
	 */
	struct UBPA_MinerMk2_C_AnimNotify_OnStopProducing_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.AnimNotify_StartEngineLoop
	 */
	struct UBPA_MinerMk2_C_AnimNotify_StartEngineLoop_Params
	{	};

	/**
	 * Function BPA_MinerMk2.BPA_MinerMk2_C.ExecuteUbergraph_BPA_MinerMk2
	 */
	struct UBPA_MinerMk2_C_ExecuteUbergraph_BPA_MinerMk2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QYXE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
