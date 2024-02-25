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
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.SkipSizeLerp
	 */
	struct UWidget_AreaSelection_Button_C_SkipSizeLerp_Params
	{
	public:
		bool                                                       isGrowing;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.StartSizeLerp
	 */
	struct UWidget_AreaSelection_Button_C_StartSizeLerp_Params
	{
	public:
		bool                                                       Growing;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.SetBorderTint
	 */
	struct UWidget_AreaSelection_Button_C_SetBorderTint_Params
	{
	public:
		struct FSlateColor                                         Color;                                                   // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.DeselectAnim
	 */
	struct UWidget_AreaSelection_Button_C_DeselectAnim_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.SelectAnim
	 */
	struct UWidget_AreaSelection_Button_C_SelectAnim_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.SetSelected
	 */
	struct UWidget_AreaSelection_Button_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_AreaSelection_Button_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.LerpSize
	 */
	struct UWidget_AreaSelection_Button_C_LerpSize_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_AreaSelection_Button_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_AreaSelection_Button_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.PreConstruct
	 */
	struct UWidget_AreaSelection_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.Tick
	 */
	struct UWidget_AreaSelection_Button_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.ExecuteUbergraph_Widget_AreaSelection_Button
	 */
	struct UWidget_AreaSelection_Button_C_ExecuteUbergraph_Widget_AreaSelection_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_AreaSelection_Button.Widget_AreaSelection_Button_C.OnClicked__DelegateSignature
	 */
	struct UWidget_AreaSelection_Button_C_OnClicked__DelegateSignature_Params
	{
	public:
		struct FStartingLocationsDataStruct                        StartingLoc;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
