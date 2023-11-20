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
	 * Function BPA_StunSpear.BPA_StunSpear_C.AnimGraph
	 */
	struct UBPA_StunSpear_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_StunSpear.BPA_StunSpear_C.AnimNotify_Notify_StunSpearAttack
	 */
	struct UBPA_StunSpear_C_AnimNotify_Notify_StunSpearAttack_Params
	{	};

	/**
	 * Function BPA_StunSpear.BPA_StunSpear_C.ExecuteUbergraph_BPA_StunSpear
	 */
	struct UBPA_StunSpear_C_ExecuteUbergraph_BPA_StunSpear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EEYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
