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
	 * Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.GetScore
	 */
	struct UBP_ActionFilter_RepetitionLimit_C_GetScore_Params
	{
	public:
		float                                                      out_score;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.InitializeScorer
	 */
	struct UBP_ActionFilter_RepetitionLimit_C_InitializeScorer_Params
	{	};

	/**
	 * Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ActionSelectionComplete
	 */
	struct UBP_ActionFilter_RepetitionLimit_C_ActionSelectionComplete_Params
	{
	public:
		class UFGAction*                                           selectedAction;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActionFilter_RepetitionLimit.BP_ActionFilter_RepetitionLimit_C.ExecuteUbergraph_BP_ActionFilter_RepetitionLimit
	 */
	struct UBP_ActionFilter_RepetitionLimit_C_ExecuteUbergraph_BP_ActionFilter_RepetitionLimit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JOTH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
