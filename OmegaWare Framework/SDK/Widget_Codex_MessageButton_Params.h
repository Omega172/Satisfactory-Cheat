#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.CheckIsSelected
	 */
	struct UWidget_Codex_MessageButton_C_CheckIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadColorFeedback
	 */
	struct UWidget_Codex_MessageButton_C_WasMessageReadColorFeedback_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.WasMessageReadFeedbackVisibility
	 */
	struct UWidget_Codex_MessageButton_C_WasMessageReadFeedbackVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetSelectedMessageFeedbackVisibility
	 */
	struct UWidget_Codex_MessageButton_C_GetSelectedMessageFeedbackVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.MessageWasClicked
	 */
	struct UWidget_Codex_MessageButton_C_MessageWasClicked_Params
	{	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.GetMessageName
	 */
	struct UWidget_Codex_MessageButton_C_GetMessageName_Params
	{	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.PreConstruct
	 */
	struct UWidget_Codex_MessageButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_Codex_MessageButton_C_BndEvt__mMessageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_Codex_MessageButton_C_BndEvt__mMessageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.BndEvt__Widget_Codex_MessageButton_mMessageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_Codex_MessageButton_C_BndEvt__Widget_Codex_MessageButton_mMessageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.ExecuteUbergraph_Widget_Codex_MessageButton
	 */
	struct UWidget_Codex_MessageButton_C_ExecuteUbergraph_Widget_Codex_MessageButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Codex_MessageButton.Widget_Codex_MessageButton_C.OnClicked__DelegateSignature
	 */
	struct UWidget_Codex_MessageButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
