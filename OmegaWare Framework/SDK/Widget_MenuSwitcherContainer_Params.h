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
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.GetFirstChildOfSwitcher
	 */
	struct UWidget_MenuSwitcherContainer_C_GetFirstChildOfSwitcher_Params
	{
	public:
		class UPanelWidget*                                        SwitcherWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Child;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetSwitcherWidget
	 */
	struct UWidget_MenuSwitcherContainer_C_SetSwitcherWidget_Params
	{
	public:
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetNoneActive
	 */
	struct UWidget_MenuSwitcherContainer_C_SetNoneActive_Params
	{	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.SetActiveWidget
	 */
	struct UWidget_MenuSwitcherContainer_C_SetActiveWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1
	 */
	struct UWidget_MenuSwitcherContainer_C_WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.ExecuteUbergraph_Widget_MenuSwitcherContainer
	 */
	struct UWidget_MenuSwitcherContainer_C_ExecuteUbergraph_Widget_MenuSwitcherContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TUAX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C.OnWidgetSet__DelegateSignature
	 */
	struct UWidget_MenuSwitcherContainer_C_OnWidgetSet__DelegateSignature_Params
	{
	public:
		bool                                                       mHasChangedActiveWidget;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
