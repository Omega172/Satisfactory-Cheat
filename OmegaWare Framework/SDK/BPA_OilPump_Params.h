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
	 * Function BPA_OilPump.BPA_OilPump_C.AnimGraph
	 */
	struct UBPA_OilPump_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.AnimNotify_BurnerFlareNotify
	 */
	struct UBPA_OilPump_C_AnimNotify_BurnerFlareNotify_Params
	{	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredProducingState
	 */
	struct UBPA_OilPump_C_AnimNotify_OilpumpEnteredProducingState_Params
	{	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftProducingState
	 */
	struct UBPA_OilPump_C_AnimNotify_OilpumpLeftProducingState_Params
	{	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpEnteredOfflineState
	 */
	struct UBPA_OilPump_C_AnimNotify_OilpumpEnteredOfflineState_Params
	{	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.AnimNotify_OilpumpLeftOfflineState
	 */
	struct UBPA_OilPump_C_AnimNotify_OilpumpLeftOfflineState_Params
	{	};

	/**
	 * Function BPA_OilPump.BPA_OilPump_C.ExecuteUbergraph_BPA_OilPump
	 */
	struct UBPA_OilPump_C_ExecuteUbergraph_BPA_OilPump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NFZL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
