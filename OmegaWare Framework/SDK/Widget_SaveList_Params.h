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
	 * Function Widget_SaveList.Widget_SaveList_C.ForceDeselectSave
	 */
	struct UWidget_SaveList_C_ForceDeselectSave_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.SetDeleteButtonEnabled
	 */
	struct UWidget_SaveList_C_SetDeleteButtonEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnSaveListUpdated
	 */
	struct UWidget_SaveList_C_OnSaveListUpdated_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnSessionsUpdated
	 */
	struct UWidget_SaveList_C_OnSessionsUpdated_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSessionSaveStruct>                          Sessions;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CurrentSession;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9T8V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.SetSaveManager
	 */
	struct UWidget_SaveList_C_SetSaveManager_Params
	{
	public:
		unsigned char                                              UnknownData_3PJI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnSaveFileDeleted
	 */
	struct UWidget_SaveList_C_OnSaveFileDeleted_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.GetSaveErrorMessage
	 */
	struct UWidget_SaveList_C_GetSaveErrorMessage_Params
	{
	public:
		ESaveExists                                                saveFileExists;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7A9N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.ConvertIntToTwoDidgitText
	 */
	struct UWidget_SaveList_C_ConvertIntToTwoDidgitText_Params
	{
	public:
		int32_t                                                    Int;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C1TD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.ClearSaves
	 */
	struct UWidget_SaveList_C_ClearSaves_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.PopulateSessions
	 */
	struct UWidget_SaveList_C_PopulateSessions_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.DeleteSaveGame
	 */
	struct UWidget_SaveList_C_DeleteSaveGame_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNRQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.SaveGame
	 */
	struct UWidget_SaveList_C_SaveGame_Params
	{
	public:
		bool                                                       Confrim;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5BIB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.GetDesiredSaveGameName
	 */
	struct UWidget_SaveList_C_GetDesiredSaveGameName_Params
	{
	public:
		class FString                                              saveName;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.RefreshSaveList
	 */
	struct UWidget_SaveList_C_RefreshSaveList_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.InternalAddSaveGame
	 */
	struct UWidget_SaveList_C_InternalAddSaveGame_Params
	{
	public:
		struct FSaveHeader                                         Header;                                                  // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnEscape
	 */
	struct UWidget_SaveList_C_OnEscape_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.ConfirmDeleteSessionPopUp
	 */
	struct UWidget_SaveList_C_ConfirmDeleteSessionPopUp_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.ConfirmOverwriteSavePopup
	 */
	struct UWidget_SaveList_C_ConfirmOverwriteSavePopup_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnWorldSave
	 */
	struct UWidget_SaveList_C_OnWorldSave_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T6E8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnMenuEnter
	 */
	struct UWidget_SaveList_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.PreConstruct
	 */
	struct UWidget_SaveList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.Construct
	 */
	struct UWidget_SaveList_C_Construct_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.On Session Entry Generated
	 */
	struct UWidget_SaveList_C_OnSessionEntryGenerated_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 */
	struct UWidget_SaveList_C_BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.ExecuteUbergraph_Widget_SaveList
	 */
	struct UWidget_SaveList_C_ExecuteUbergraph_Widget_SaveList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4M1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnBackClicked__DelegateSignature
	 */
	struct UWidget_SaveList_C_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SaveList.Widget_SaveList_C.OnSaveClicked__DelegateSignature
	 */
	struct UWidget_SaveList_C_OnSaveClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
