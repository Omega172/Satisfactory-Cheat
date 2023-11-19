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
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ShowPaidOffFeedbackVisibility
	 */
	struct UBPW_GamePhase_PayOff_C_ShowPaidOffFeedbackVisibility_Params
	{	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.SetupCostIcon
	 */
	struct UBPW_GamePhase_PayOff_C_SetupCostIcon_Params
	{	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetRemainingCost
	 */
	struct UBPW_GamePhase_PayOff_C_GetRemainingCost_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VK0C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.GetTotalCost
	 */
	struct UBPW_GamePhase_PayOff_C_GetTotalCost_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NX7Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Construct
	 */
	struct UBPW_GamePhase_PayOff_C_Construct_Params
	{	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Destruct
	 */
	struct UBPW_GamePhase_PayOff_C_Destruct_Params
	{	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.Update Cost Slot
	 */
	struct UBPW_GamePhase_PayOff_C_UpdateCostSlot_Params
	{	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.OnUpdateSlotSize
	 */
	struct UBPW_GamePhase_PayOff_C_OnUpdateSlotSize_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GamePhase_PayOff.BPW_GamePhase_PayOff_C.ExecuteUbergraph_BPW_GamePhase_PayOff
	 */
	struct UBPW_GamePhase_PayOff_C_ExecuteUbergraph_BPW_GamePhase_PayOff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
