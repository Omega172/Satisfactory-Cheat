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
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.PopulateTypeFeedbackOptions
	 */
	struct UWidget_GiveFeedback_C_PopulateTypeFeedbackOptions_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.PopulateSatisfactorySelectOptions
	 */
	struct UWidget_GiveFeedback_C_PopulateSatisfactorySelectOptions_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.OnKeyDown
	 */
	struct UWidget_GiveFeedback_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.Construct
	 */
	struct UWidget_GiveFeedback_C_Construct_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.CloseFeedback
	 */
	struct UWidget_GiveFeedback_C_CloseFeedback_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.BndEvt__mTypeFeedbackSelect_K2Node_ComponentBoundEvent_1_onSelectionChanged__DelegateSignature
	 */
	struct UWidget_GiveFeedback_C_BndEvt__mTypeFeedbackSelect_K2Node_ComponentBoundEvent_1_onSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.BndEvt__Details_text_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_GiveFeedback_C_BndEvt__Details_text_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UWidget_GiveFeedback_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UWidget_GiveFeedback_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.SendFeedbackAfterConfirm
	 */
	struct UWidget_GiveFeedback_C_SendFeedbackAfterConfirm_Params
	{
	public:
		bool                                                       mConfirmBool;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_GiveFeedback.Widget_GiveFeedback_C.ExecuteUbergraph_Widget_GiveFeedback
	 */
	struct UWidget_GiveFeedback_C_ExecuteUbergraph_Widget_GiveFeedback_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
