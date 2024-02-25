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
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetShouldShowPointer
	 */
	struct UWidget_FrontEnd_Button_C_SetShouldShowPointer_Params
	{
	public:
		bool                                                       ShouldShowPointer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetUseTransparentBackground
	 */
	struct UWidget_FrontEnd_Button_C_SetUseTransparentBackground_Params
	{
	public:
		bool                                                       UseTransparentBackground;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetFontStyling
	 */
	struct UWidget_FrontEnd_Button_C_SetFontStyling_Params
	{
	public:
		class UTextBlock*                                          TextObject;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetIsBigButton
	 */
	struct UWidget_FrontEnd_Button_C_SetIsBigButton_Params
	{
	public:
		bool                                                       IsBigButton;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetExperimentalVisibility
	 */
	struct UWidget_FrontEnd_Button_C_SetExperimentalVisibility_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetTitle
	 */
	struct UWidget_FrontEnd_Button_C_SetTitle_Params
	{
	public:
		class FText                                                mDisplayName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetActiveWidgetInSwitcher
	 */
	struct UWidget_FrontEnd_Button_C_SetActiveWidgetInSwitcher_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.ClearListOfSelections
	 */
	struct UWidget_FrontEnd_Button_C_ClearListOfSelections_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.GetButtonTextColor
	 */
	struct UWidget_FrontEnd_Button_C_GetButtonTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.GetButtonColor
	 */
	struct UWidget_FrontEnd_Button_C_GetButtonColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetFocused
	 */
	struct UWidget_FrontEnd_Button_C_SetFocused_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnFocusReceived
	 */
	struct UWidget_FrontEnd_Button_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.ShowButton
	 */
	struct UWidget_FrontEnd_Button_C_ShowButton_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.HideButton
	 */
	struct UWidget_FrontEnd_Button_C_HideButton_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.GetButtonText
	 */
	struct UWidget_FrontEnd_Button_C_GetButtonText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.Destruct
	 */
	struct UWidget_FrontEnd_Button_C_Destruct_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.BndEvt__PauseMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_BndEvt__PauseMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.PreConstruct
	 */
	struct UWidget_FrontEnd_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SetSelected
	 */
	struct UWidget_FrontEnd_Button_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_BndEvt__mFrontEndButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.SimulateKeyPress
	 */
	struct UWidget_FrontEnd_Button_C_SimulateKeyPress_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.ExecuteUbergraph_Widget_FrontEnd_Button
	 */
	struct UWidget_FrontEnd_Button_C_ExecuteUbergraph_Widget_FrontEnd_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QURO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnClickedWithIndex__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnClickedWithIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnReleased__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnPressed__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnHovered__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FrontEnd_Button.Widget_FrontEnd_Button_C.OnClicked__DelegateSignature
	 */
	struct UWidget_FrontEnd_Button_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
