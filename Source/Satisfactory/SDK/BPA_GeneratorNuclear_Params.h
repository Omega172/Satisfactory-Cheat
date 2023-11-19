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
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimGraph
	 */
	struct UBPA_GeneratorNuclear_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerSetup
	 */
	struct UBPA_GeneratorNuclear_C_ReloadTimerSetup_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimer
	 */
	struct UBPA_GeneratorNuclear_C_ReloadTimer_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredReloadState
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearEnteredReloadState_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearStartupVfx
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearStartupVfx_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearShutdownVfx
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearShutdownVfx_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredProducing
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearEnteredProducing_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearLeftProducing
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearLeftProducing_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerEvent
	 */
	struct UBPA_GeneratorNuclear_C_ReloadTimerEvent_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_AnimShutdown
	 */
	struct UBPA_GeneratorNuclear_C_AnimNotify_AnimShutdown_Params
	{	};

	/**
	 * Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ExecuteUbergraph_BPA_GeneratorNuclear
	 */
	struct UBPA_GeneratorNuclear_C_ExecuteUbergraph_BPA_GeneratorNuclear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B4HF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
