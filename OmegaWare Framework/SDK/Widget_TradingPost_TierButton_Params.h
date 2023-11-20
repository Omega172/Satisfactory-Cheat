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
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetLockedText
	 */
	struct UWidget_TradingPost_TierButton_C_SetLockedText_Params
	{	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTierNumVisibility
	 */
	struct UWidget_TradingPost_TierButton_C_GetTierNumVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetCheckVisibility
	 */
	struct UWidget_TradingPost_TierButton_C_GetCheckVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.IsSelectable
	 */
	struct UWidget_TradingPost_TierButton_C_IsSelectable_Params
	{
	public:
		bool                                                       IsSelectable;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I217[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetWidgetClickable
	 */
	struct UWidget_TradingPost_TierButton_C_GetWidgetClickable_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetTextHoverColor
	 */
	struct UWidget_TradingPost_TierButton_C_GetTextHoverColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.GetButtonColor
	 */
	struct UWidget_TradingPost_TierButton_C_GetButtonColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.UpdateTier
	 */
	struct UWidget_TradingPost_TierButton_C_UpdateTier_Params
	{	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_TradingPost_TierButton_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.Construct
	 */
	struct UWidget_TradingPost_TierButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.OnMouseEnter
	 */
	struct UWidget_TradingPost_TierButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.OnMouseLeave
	 */
	struct UWidget_TradingPost_TierButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.SetTierNumber
	 */
	struct UWidget_TradingPost_TierButton_C_SetTierNumber_Params
	{
	public:
		int32_t                                                    TierNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHQY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_TradingPost_C*                               tradingPost;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_TierButton.Widget_TradingPost_TierButton_C.ExecuteUbergraph_Widget_TradingPost_TierButton
	 */
	struct UWidget_TradingPost_TierButton_C_ExecuteUbergraph_Widget_TradingPost_TierButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
