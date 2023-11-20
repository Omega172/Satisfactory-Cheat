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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Widget_SaveList.Widget_SaveList_C
	 * Size -> 0x014D (FullSize[0x0418] - InheritedSize[0x02CB])
	 */
	class UWidget_SaveList_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_Z977[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_FrontEnd_Button_C*                           mDeleteSaveButton;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mSaveButton;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mSaves;                                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mSaveScrollbox;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mSavesList;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mSessionList;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mSessions;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 mSessionsScrollbox;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SaveInputBox_C*                              Widget_SaveInputBox;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSaveClicked;                                           // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBackClicked;                                           // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              mSaveManagerInterface[0x10];                             // 0x0340(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		TArray<struct FSessionSaveStruct>                          mCachedSessions;                                         // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mCurrentSessionIx;                                       // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_31S4[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSaveHeader                                         mSelectedSaveHeader;                                     // 0x0368(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class UFGSaveHeaderWrapper*                                mSelectedSaveRowObject;                                  // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ForceDeselectSave();
		void SetDeleteButtonEnabled(bool IsEnabled);
		void OnSaveListUpdated();
		void OnSessionsUpdated(bool Success, TArray<struct FSessionSaveStruct>* Sessions, int32_t CurrentSession);
		void SetSaveManager();
		void OnSaveFileDeleted(bool Success);
		void GetSaveErrorMessage(ESaveExists saveFileExists, class FText* ErrorMessage);
		class FText ConvertIntToTwoDidgitText(int32_t Int);
		void ClearSaves();
		void PopulateSessions();
		void DeleteSaveGame(bool confirm);
		void SaveGame(bool Confrim);
		void GetDesiredSaveGameName(class FString* saveName);
		void RefreshSaveList();
		void InternalAddSaveGame(const struct FSaveHeader& Header);
		void OnEscape();
		void ConfirmDeleteSessionPopUp();
		void ConfirmOverwriteSavePopup();
		void OnWorldSave(bool wasSuccessful, const class FText& ErrorMessage);
		void BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void OnMenuEnter(class UWidget* prevMenu);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnSessionEntryGenerated(class UUserWidget* Widget);
		void BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature();
		void BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_Widget_SaveList(int32_t EntryPoint);
		void OnBackClicked__DelegateSignature();
		void OnSaveClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
