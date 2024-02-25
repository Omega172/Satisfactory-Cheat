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
	 * Function BP_PauseWidget.BP_PauseWidget_C.ShowHideGameModesButton
	 */
	struct UBP_PauseWidget_C_ShowHideGameModesButton_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.ClearMenuSelection
	 */
	struct UBP_PauseWidget_C_ClearMenuSelection_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.CanDoServerAdministration
	 */
	struct UBP_PauseWidget_C_CanDoServerAdministration_Params
	{
	public:
		bool                                                       canAdminister;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2MX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.IsIntroSequenceDone
	 */
	struct UBP_PauseWidget_C_IsIntroSequenceDone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y62D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.UpdateMenuItemVisibility
	 */
	struct UBP_PauseWidget_C_UpdateMenuItemVisibility_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.UpdateHostNATText
	 */
	struct UBP_PauseWidget_C_UpdateHostNATText_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.GetPlayDurationText
	 */
	struct UBP_PauseWidget_C_GetPlayDurationText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.GetSessionNameText
	 */
	struct UBP_PauseWidget_C_GetSessionNameText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.DoResume
	 */
	struct UBP_PauseWidget_C_DoResume_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bResume_K2Node_ComponentBoundEvent_152_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bLoadGame_K2Node_ComponentBoundEvent_166_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bSaveGame_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.Construct
	 */
	struct UBP_PauseWidget_C_Construct_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bFeedback_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnEscape
	 */
	struct UBP_PauseWidget_C_OnEscape_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToMainMenu
	 */
	struct UBP_PauseWidget_C_EventExitToMainMenu_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.Event ExitToDesktop
	 */
	struct UBP_PauseWidget_C_EventExitToDesktop_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bExitMainMenu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__bExitDesktop_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__mOptions_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.Destruct
	 */
	struct UBP_PauseWidget_C_Destruct_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__BP_PauseWidget_mSwitcher_K2Node_ComponentBoundEvent_6_OnActiveWidgetSet__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__BP_PauseWidget_mSwitcher_K2Node_ComponentBoundEvent_6_OnActiveWidgetSet__DelegateSignature_Params
	{
	public:
		class UWidget*                                             oldWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             newWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnEnterCreativeModePopupClosed
	 */
	struct UBP_PauseWidget_C_OnEnterCreativeModePopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.ClosePopUpNotAdmin
	 */
	struct UBP_PauseWidget_C_ClosePopUpNotAdmin_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__BP_PauseWidget_mRespawnButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__BP_PauseWidget_mRespawnButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.BndEvt__BP_PauseWidget_mSkipIntroButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_PauseWidget_C_BndEvt__BP_PauseWidget_mSkipIntroButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.ExecuteUbergraph_BP_PauseWidget
	 */
	struct UBP_PauseWidget_C_ExecuteUbergraph_BP_PauseWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U056[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnBackClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnManagePlayersClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_OnManagePlayersClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnOptionsClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_OnOptionsClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnLoadClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_OnLoadClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PauseWidget.BP_PauseWidget_C.OnSaveClicked__DelegateSignature
	 */
	struct UBP_PauseWidget_C_OnSaveClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
