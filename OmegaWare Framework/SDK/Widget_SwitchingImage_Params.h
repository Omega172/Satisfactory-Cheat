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
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.SetIconSize
	 */
	struct UWidget_SwitchingImage_C_SetIconSize_Params
	{
	public:
		struct FVector2D                                           Scale;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.SetIconColor
	 */
	struct UWidget_SwitchingImage_C_SetIconColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.PreConstruct
	 */
	struct UWidget_SwitchingImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.EventImageSwitch
	 */
	struct UWidget_SwitchingImage_C_EventImageSwitch_Params
	{	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.SwitchImage
	 */
	struct UWidget_SwitchingImage_C_SwitchImage_Params
	{
	public:
		class UTexture*                                            newTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UWidget_SwitchingImage_C_WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.ExecuteUbergraph_Widget_SwitchingImage
	 */
	struct UWidget_SwitchingImage_C_ExecuteUbergraph_Widget_SwitchingImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SwitchingImage.Widget_SwitchingImage_C.OnSwitchAnimationFinished__DelegateSignature
	 */
	struct UWidget_SwitchingImage_C_OnSwitchAnimationFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
