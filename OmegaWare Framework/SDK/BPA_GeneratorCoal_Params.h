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
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimGraph
	 */
	struct UBPA_GeneratorCoal_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredProducingState
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_CoalGenEnteredProducingState_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftProducingState
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_CoalGenLeftProducingState_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredOfflineState
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_CoalGenEnteredOfflineState_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftOfflineState
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_CoalGenLeftOfflineState_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_steamVfxNotify
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_steamVfxNotify_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_StopCoalAnimation
	 */
	struct UBPA_GeneratorCoal_C_AnimNotify_StopCoalAnimation_Params
	{	};

	/**
	 * Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.ExecuteUbergraph_BPA_GeneratorCoal
	 */
	struct UBPA_GeneratorCoal_C_ExecuteUbergraph_BPA_GeneratorCoal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PYK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
