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
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.CheckIfNewWaitTimeIsValid
	 */
	struct UWidget_VehicleTargetPoint_C_CheckIfNewWaitTimeIsValid_Params
	{
	public:
		class FText                                                WaitTimeInSeconds;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.SetNewWaitTime
	 */
	struct UWidget_VehicleTargetPoint_C_SetNewWaitTime_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.GetNodeTypeAndSetWindowTitle
	 */
	struct UWidget_VehicleTargetPoint_C_GetNodeTypeAndSetWindowTitle_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Init
	 */
	struct UWidget_VehicleTargetPoint_C_Init_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Destruct
	 */
	struct UWidget_VehicleTargetPoint_C_Destruct_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__Widget_StandardButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_VehicleTargetPoint_C_BndEvt__Widget_StandardButton_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__mDeleteButton2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWidget_VehicleTargetPoint_C_BndEvt__mDeleteButton2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__mWaitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_VehicleTargetPoint_C_BndEvt__mWaitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.SetWaitTimePopup
	 */
	struct UWidget_VehicleTargetPoint_C_SetWaitTimePopup_Params
	{
	public:
		bool                                                       mPopUpConfirm;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.DoDeleteNode
	 */
	struct UWidget_VehicleTargetPoint_C_DoDeleteNode_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.Construct
	 */
	struct UWidget_VehicleTargetPoint_C_Construct_Params
	{	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_6_OnTextComitted__DelegateSignature
	 */
	struct UWidget_VehicleTargetPoint_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_6_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.PreConstruct
	 */
	struct UWidget_VehicleTargetPoint_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.BndEvt__Widget_VehicleTargetPoint_Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UWidget_VehicleTargetPoint_C_BndEvt__Widget_VehicleTargetPoint_Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_VehicleTargetPoint.Widget_VehicleTargetPoint_C.ExecuteUbergraph_Widget_VehicleTargetPoint
	 */
	struct UWidget_VehicleTargetPoint_C_ExecuteUbergraph_Widget_VehicleTargetPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJDS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
