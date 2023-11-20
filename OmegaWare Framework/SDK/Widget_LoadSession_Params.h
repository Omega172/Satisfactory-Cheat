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
	 * Function Widget_LoadSession.Widget_LoadSession_C.ShowGameModesCheckbox
	 */
	struct UWidget_LoadSession_C_ShowGameModesCheckbox_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.TryShowUnstableSaveVersion
	 */
	struct UWidget_LoadSession_C_TryShowUnstableSaveVersion_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Body;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FScriptDelegate                                      CloseDelegate;                                           // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.On Sessions Enumerated
	 */
	struct UWidget_LoadSession_C_OnSessionsEnumerated_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VCYU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSessionSaveStruct>                          Sessions;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentSession;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.SetMenuType
	 */
	struct UWidget_LoadSession_C_SetMenuType_Params
	{
	public:
		ELoadSession_MenuTypes                                     mMenuType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.SetSaveManager
	 */
	struct UWidget_LoadSession_C_SetSaveManager_Params
	{
	public:
		unsigned char                                              UnknownData_XZ96[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.PopulateSavesFromSession
	 */
	struct UWidget_LoadSession_C_PopulateSavesFromSession_Params
	{
	public:
		struct FSessionSaveStruct                                  Session;                                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSession
	 */
	struct UWidget_LoadSession_C_IsValidCurrentSession_Params
	{
	public:
		struct FSessionSaveStruct                                  Session;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsValid;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KUD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.UpdateCurrentSession
	 */
	struct UWidget_LoadSession_C_UpdateCurrentSession_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSave
	 */
	struct UWidget_LoadSession_C_IsValidCurrentSave_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZCOZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.PopulateSessionList
	 */
	struct UWidget_LoadSession_C_PopulateSessionList_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSessionPopUp
	 */
	struct UWidget_LoadSession_C_ConfirmDeleteSessionPopUp_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSession
	 */
	struct UWidget_LoadSession_C_EventDeleteSession_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSave
	 */
	struct UWidget_LoadSession_C_EventDeleteSave_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSavePopUp
	 */
	struct UWidget_LoadSession_C_ConfirmDeleteSavePopUp_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.OnEscape
	 */
	struct UWidget_LoadSession_C_OnEscape_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.SpawnAnim
	 */
	struct UWidget_LoadSession_C_SpawnAnim_Params
	{
	public:
		bool                                                       PlayBackgroundAnim;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.LoadCurrentSave
	 */
	struct UWidget_LoadSession_C_LoadCurrentSave_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.OnMenuEnter
	 */
	struct UWidget_LoadSession_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.SaveDeleted
	 */
	struct UWidget_LoadSession_C_SaveDeleted_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.SessionDeleted
	 */
	struct UWidget_LoadSession_C_SessionDeleted_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ClosedLoadPopup
	 */
	struct UWidget_LoadSession_C_ClosedLoadPopup_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.Construct
	 */
	struct UWidget_LoadSession_C_Construct_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ForceReloadMenu
	 */
	struct UWidget_LoadSession_C_ForceReloadMenu_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.PreConstruct
	 */
	struct UWidget_LoadSession_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.OnUploadSavePopupClosed
	 */
	struct UWidget_LoadSession_C_OnUploadSavePopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsHovered;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsHovered;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ModCheckPopupPressed
	 */
	struct UWidget_LoadSession_C_ModCheckPopupPressed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature
	 */
	struct UWidget_LoadSession_C_BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.Event Load Game With Advanced Game Settings
	 */
	struct UWidget_LoadSession_C_EventLoadGameWithAdvancedGameSettings_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.ExecuteUbergraph_Widget_LoadSession
	 */
	struct UWidget_LoadSession_C_ExecuteUbergraph_Widget_LoadSession_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TM1V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.OnLoadClicked__DelegateSignature
	 */
	struct UWidget_LoadSession_C_OnLoadClicked__DelegateSignature_Params
	{
	public:
		struct FSaveHeader                                         SaveGame;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsPrivateGame;                                           // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_LoadSession.Widget_LoadSession_C.OnBackClicked__DelegateSignature
	 */
	struct UWidget_LoadSession_C_OnBackClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
