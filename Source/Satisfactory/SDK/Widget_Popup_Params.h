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
	 * Function Widget_Popup.Widget_Popup_C.CancelClicked
	 */
	struct UWidget_Popup_C_CancelClicked_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.OkClicked
	 */
	struct UWidget_Popup_C_OkClicked_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.CheckButtonState
	 */
	struct UWidget_Popup_C_CheckButtonState_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.OnKeyUp
	 */
	struct UWidget_Popup_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.DoClosePopup
	 */
	struct UWidget_Popup_C_DoClosePopup_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOEP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.Init
	 */
	struct UWidget_Popup_C_Init_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.Construct
	 */
	struct UWidget_Popup_C_Construct_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.Tick
	 */
	struct UWidget_Popup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWidget_Popup_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.PreConstruct
	 */
	struct UWidget_Popup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.StartupTimer
	 */
	struct UWidget_Popup_C_StartupTimer_Params
	{	};

	/**
	 * Function Widget_Popup.Widget_Popup_C.ExecuteUbergraph_Widget_Popup
	 */
	struct UWidget_Popup_C_ExecuteUbergraph_Widget_Popup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6EZE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
