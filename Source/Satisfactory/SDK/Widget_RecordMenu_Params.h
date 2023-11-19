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
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.OnStopRecording
	 */
	struct UWidget_RecordMenu_C_OnStopRecording_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.OnStartRecording
	 */
	struct UWidget_RecordMenu_C_OnStartRecording_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateButtons
	 */
	struct UWidget_RecordMenu_C_UpdateButtons_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateAutopilotButton
	 */
	struct UWidget_RecordMenu_C_UpdateAutopilotButton_Params
	{
	public:
		bool                                                       IsAutopilotEnabled;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdatePathVisibilityButton
	 */
	struct UWidget_RecordMenu_C_UpdatePathVisibilityButton_Params
	{
	public:
		bool                                                       IsPathVisible;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateRecordingButton
	 */
	struct UWidget_RecordMenu_C_UpdateRecordingButton_Params
	{
	public:
		bool                                                       mIsRecording;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Event Clear Path Recording
	 */
	struct UWidget_RecordMenu_C_EventClearPathRecording_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Autopilot
	 */
	struct UWidget_RecordMenu_C_EventToggleAutopilot_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Path Visibility
	 */
	struct UWidget_RecordMenu_C_EventTogglePathVisibility_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Destruct
	 */
	struct UWidget_RecordMenu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Event Toggle Recording
	 */
	struct UWidget_RecordMenu_C_EventToggleRecording_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mToggleRecording_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mTogglePathVisibility_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mToggleAutopilot_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mLoadPath_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mSavePath_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Event Delete Path
	 */
	struct UWidget_RecordMenu_C_EventDeletePath_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_BndEvt__mDeletePath_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.Construct
	 */
	struct UWidget_RecordMenu_C_Construct_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateLoadPathButton
	 */
	struct UWidget_RecordMenu_C_UpdateLoadPathButton_Params
	{
	public:
		bool                                                       CanLoadPath;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.UpdateSavePathButton
	 */
	struct UWidget_RecordMenu_C_UpdateSavePathButton_Params
	{
	public:
		bool                                                       CanSavePath;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.ExecuteUbergraph_Widget_RecordMenu
	 */
	struct UWidget_RecordMenu_C_ExecuteUbergraph_Widget_RecordMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.OnClosed__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.OnSavePathClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_OnSavePathClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_RecordMenu.Widget_RecordMenu_C.OnLoadPathClicked__DelegateSignature
	 */
	struct UWidget_RecordMenu_C_OnLoadPathClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
