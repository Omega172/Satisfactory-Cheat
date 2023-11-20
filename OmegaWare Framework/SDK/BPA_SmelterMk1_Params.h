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
	 * Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimGraph
	 */
	struct UBPA_SmelterMk1_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_Stop_Anim
	 */
	struct UBPA_SmelterMk1_C_AnimNotify_Stop_Anim_Params
	{	};

	/**
	 * Function BPA_SmelterMk1.BPA_SmelterMk1_C.AnimNotify_StopSmelterAnimationCycle
	 */
	struct UBPA_SmelterMk1_C_AnimNotify_StopSmelterAnimationCycle_Params
	{	};

	/**
	 * Function BPA_SmelterMk1.BPA_SmelterMk1_C.ExecuteUbergraph_BPA_SmelterMk1
	 */
	struct UBPA_SmelterMk1_C_ExecuteUbergraph_BPA_SmelterMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7AM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
