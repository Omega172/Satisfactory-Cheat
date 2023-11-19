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
	 * Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionFulfillsRequirement
	 */
	struct UBP_ActionFilter_RequiresPreviousAction_C_ActionFulfillsRequirement_Params
	{
	public:
		class UObject*                                             Action;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SEN9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.GetScore
	 */
	struct UBP_ActionFilter_RequiresPreviousAction_C_GetScore_Params
	{
	public:
		float                                                      out_score;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.InitializeScorer
	 */
	struct UBP_ActionFilter_RequiresPreviousAction_C_InitializeScorer_Params
	{	};

	/**
	 * Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ActionSelectionComplete
	 */
	struct UBP_ActionFilter_RequiresPreviousAction_C_ActionSelectionComplete_Params
	{
	public:
		class UFGAction*                                           selectedAction;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActionFilter_RequiresPreviousAction.BP_ActionFilter_RequiresPreviousAction_C.ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction
	 */
	struct UBP_ActionFilter_RequiresPreviousAction_C_ExecuteUbergraph_BP_ActionFilter_RequiresPreviousAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
