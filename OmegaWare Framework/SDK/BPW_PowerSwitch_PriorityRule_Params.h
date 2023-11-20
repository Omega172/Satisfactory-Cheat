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
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ClearBindnings
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_ClearBindnings_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPrioChanged
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnPrioChanged_Params
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnRuleRemoved
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnRuleRemoved_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetSwitchState
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_SetSwitchState_Params
	{
	public:
		bool                                                       mIsOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetName
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_SetName_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsDragAndDropRep
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_SetIsDragAndDropRep_Params
	{
	public:
		bool                                                       mIsDragAndDropRep;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetIsPartOfCurrentCircuit
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_SetIsPartOfCurrentCircuit_Params
	{
	public:
		bool                                                       mIsPartOfCurrentCircuit;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.SetPrioritySwitchInfo
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_SetPrioritySwitchInfo_Params
	{
	public:
		class AFGPriorityPowerSwitchInfo*                          mPriorityPowerSwitchInfo;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnDragDetected
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseButtonDown
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseEnter
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnMouseLeave
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Construct
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_Construct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_BndEvt__BPW_PowerSwitch_PriorityRule_BPW_Monochrome_Switch_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.PreConstruct
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.Destruct
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_Destruct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.ExecuteUbergraph_BPW_PowerSwitch_PriorityRule
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_ExecuteUbergraph_BPW_PowerSwitch_PriorityRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch_PriorityRule.BPW_PowerSwitch_PriorityRule_C.OnPriorityChanged__DelegateSignature
	 */
	struct UBPW_PowerSwitch_PriorityRule_C_OnPriorityChanged__DelegateSignature_Params
	{
	public:
		class UBPW_PowerSwitch_PriorityRule_C*                     Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
