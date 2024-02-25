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
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetSounds
	 */
	struct UWidget_StandardButton_C_SetSounds_Params
	{
	public:
		class UAkAudioEvent*                                       mClickSound;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       mHoverSound;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetButtonAlignment
	 */
	struct UWidget_StandardButton_C_SetButtonAlignment_Params
	{
	public:
		bool                                                       isCenterAligned;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QX08[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetIconStyle
	 */
	struct UWidget_StandardButton_C_SetIconStyle_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetTextStyle
	 */
	struct UWidget_StandardButton_C_SetTextStyle_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetButtonStyle
	 */
	struct UWidget_StandardButton_C_SetButtonStyle_Params
	{
	public:
		bool                                                       mIsOrange;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsLight;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mUseNoBackground;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HD16[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.Cleanup
	 */
	struct UWidget_StandardButton_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetIsDisabled
	 */
	struct UWidget_StandardButton_C_SetIsDisabled_Params
	{
	public:
		bool                                                       mIsDisabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetIconSize
	 */
	struct UWidget_StandardButton_C_SetIconSize_Params
	{
	public:
		double                                                     InHeightOverride;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     InWidthOverride;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetIconBrush
	 */
	struct UWidget_StandardButton_C_SetIconBrush_Params
	{
	public:
		struct FSlateBrush                                         mIconBrush;                                              // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetText
	 */
	struct UWidget_StandardButton_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.SetFocused
	 */
	struct UWidget_StandardButton_C_SetFocused_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.PreConstruct
	 */
	struct UWidget_StandardButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_StandardButton_C_BndEvt__MarkAsReadButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_StandardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.Destruct
	 */
	struct UWidget_StandardButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWidget_StandardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWidget_StandardButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.BndEvt__Widget_StandardButton_mButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_StandardButton_C_BndEvt__Widget_StandardButton_mButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.Construct
	 */
	struct UWidget_StandardButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.ExecuteUbergraph_Widget_StandardButton
	 */
	struct UWidget_StandardButton_C_ExecuteUbergraph_Widget_StandardButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V2CB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnHovered__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnPressed__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnReleased__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnClickedIncludeSelf__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnClickedIncludeSelf__DelegateSignature_Params
	{
	public:
		class UWidget_StandardButton_C*                            buttonWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_StandardButton.Widget_StandardButton_C.OnClicked__DelegateSignature
	 */
	struct UWidget_StandardButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
