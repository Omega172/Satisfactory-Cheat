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
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetWrapTextAt
	 */
	struct UBPW_TileableButton_C_SetWrapTextAt_Params
	{
	public:
		double                                                     mWrapTextAt;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetIconSize
	 */
	struct UBPW_TileableButton_C_SetIconSize_Params
	{
	public:
		struct FVector2D                                           mIconSize;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetOverrideSize
	 */
	struct UBPW_TileableButton_C_SetOverrideSize_Params
	{
	public:
		double                                                     mOverrideWidth;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     mOverrideHeight;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.UpdateSpacing
	 */
	struct UBPW_TileableButton_C_UpdateSpacing_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetText
	 */
	struct UBPW_TileableButton_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetIcon
	 */
	struct UBPW_TileableButton_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          mIcon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetIsDisabled
	 */
	struct UBPW_TileableButton_C_SetIsDisabled_Params
	{
	public:
		bool                                                       mIsDisabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.SetStyle
	 */
	struct UBPW_TileableButton_C_SetStyle_Params
	{
	public:
		Enum_TileableButtonStyles                                  mButtonStyle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8FHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.PreConstruct
	 */
	struct UBPW_TileableButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_TileableButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_TileableButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_TileableButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBPW_TileableButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBPW_TileableButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.ExecuteUbergraph_BPW_TileableButton
	 */
	struct UBPW_TileableButton_C_ExecuteUbergraph_BPW_TileableButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_TileableButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.OnHovered__DelegateSignature
	 */
	struct UBPW_TileableButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.OnReleased__DelegateSignature
	 */
	struct UBPW_TileableButton_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.OnPressed__DelegateSignature
	 */
	struct UBPW_TileableButton_C_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TileableButton.BPW_TileableButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_TileableButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
