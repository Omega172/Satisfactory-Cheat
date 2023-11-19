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
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.SetMaxRateText
	 */
	struct UBPW_FlowrateHeadliftPanel_C_SetMaxRateText_Params
	{
	public:
		class FText                                                mMaxRate;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.SetCurrentRateText
	 */
	struct UBPW_FlowrateHeadliftPanel_C_SetCurrentRateText_Params
	{
	public:
		class FText                                                mCurrentRate;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.SetIsFlowratePanel
	 */
	struct UBPW_FlowrateHeadliftPanel_C_SetIsFlowratePanel_Params
	{	};

	/**
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.SetIsHeadliftPanel
	 */
	struct UBPW_FlowrateHeadliftPanel_C_SetIsHeadliftPanel_Params
	{	};

	/**
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.PreConstruct
	 */
	struct UBPW_FlowrateHeadliftPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_FlowrateHeadliftPanel.BPW_FlowrateHeadliftPanel_C.ExecuteUbergraph_BPW_FlowrateHeadliftPanel
	 */
	struct UBPW_FlowrateHeadliftPanel_C_ExecuteUbergraph_BPW_FlowrateHeadliftPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
