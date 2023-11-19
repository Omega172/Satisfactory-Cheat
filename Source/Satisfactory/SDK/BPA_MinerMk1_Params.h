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
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimGraph
	 */
	struct UBPA_MinerMk1_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.SetupReloadTimer
	 */
	struct UBPA_MinerMk1_C_SetupReloadTimer_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.ReloadTimer
	 */
	struct UBPA_MinerMk1_C_ReloadTimer_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_MinerEnteredReloadState
	 */
	struct UBPA_MinerMk1_C_AnimNotify_MinerEnteredReloadState_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.BlueprintInitializeAnimation
	 */
	struct UBPA_MinerMk1_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_OnResumeProducing
	 */
	struct UBPA_MinerMk1_C_AnimNotify_OnResumeProducing_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_OnStopProducing
	 */
	struct UBPA_MinerMk1_C_AnimNotify_OnStopProducing_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_StartEngineLoop
	 */
	struct UBPA_MinerMk1_C_AnimNotify_StartEngineLoop_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_StartDrillVFX
	 */
	struct UBPA_MinerMk1_C_AnimNotify_StartDrillVFX_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.AnimNotify_AnimStop
	 */
	struct UBPA_MinerMk1_C_AnimNotify_AnimStop_Params
	{	};

	/**
	 * Function BPA_MinerMk1.BPA_MinerMk1_C.ExecuteUbergraph_BPA_MinerMk1
	 */
	struct UBPA_MinerMk1_C_ExecuteUbergraph_BPA_MinerMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
