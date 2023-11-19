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
	 * WidgetBlueprintGeneratedClass Widget_LoadSession.Widget_LoadSession_C
	 * Size -> 0x01D6 (FullSize[0x04A1] - InheritedSize[0x02CB])
	 */
	class UWidget_LoadSession_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_JF19[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowDeleteSessionButton;                                 // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowLoadDeleteButtons;                                   // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              BPW_OptionsCheckbox_2;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           DeleteSave;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           DeleteSessionButton;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mActionButton;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mGameModesCheckbox;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mLoadDeleteContainer;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mLoadSessions;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mSaveList;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mSaves;                                                  // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mSessionList;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBackClicked;                                           // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLoadClicked;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSaveHeader                                         mSelectedSaveHeader;                                     // 0x0358(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSessionSaveStruct                                  mSelectedSession;                                        // 0x0400(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSessionSaveStruct                                  mCurrentSession;                                         // 0x0420(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSaveHeader>                                 mCachedSaves;                                            // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              mSaveManagerInterface[0x10];                             // 0x0450(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		ELoadSession_MenuTypes                                     mMenuType;                                               // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_VXHU[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              mUploadDestination[0x10];                                // 0x0468(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		TArray<struct FSessionSaveStruct>                          mCachedSessions;                                         // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mCurrentSessionIx;                                       // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R5TD[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGSessionSaveStructWrapper*                         mSelectedSessionObject;                                  // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UFGSaveHeaderWrapper*                                mSelectedSaveObject;                                     // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       mGameModesEnabled;                                       // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShowGameModesCheckbox();
		void TryShowUnstableSaveVersion(class APlayerController* Controller, const class FText& Body, const class FScriptDelegate& CloseDelegate);
		void OnSessionsEnumerated(bool Success, TArray<struct FSessionSaveStruct> Sessions, int32_t CurrentSession);
		void SetMenuType(ELoadSession_MenuTypes mMenuType);
		void SetSaveManager();
		void PopulateSavesFromSession(const struct FSessionSaveStruct& Session);
		void IsValidCurrentSession(const struct FSessionSaveStruct& Session, bool* IsValid);
		void UpdateCurrentSession();
		void IsValidCurrentSave(bool* IsValid);
		void PopulateSessionList();
		void ConfirmDeleteSessionPopUp();
		void EventDeleteSession(bool confirm);
		void EventDeleteSave(bool confirm);
		void ConfirmDeleteSavePopUp();
		void OnEscape();
		void SpawnAnim(bool PlayBackgroundAnim);
		void LoadCurrentSave();
		void BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnMenuEnter(class UWidget* prevMenu);
		void SaveDeleted(bool Success);
		void SessionDeleted(bool Success);
		void ClosedLoadPopup(bool ConfirmClicked);
		void Construct();
		void ForceReloadMenu();
		void PreConstruct(bool IsDesignTime);
		void OnUploadSavePopupClosed(bool ConfirmClicked);
		void BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
		void BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
		void BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
		void ModCheckPopupPressed(bool ConfirmClicked);
		void BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature(bool IsChecked);
		void EventLoadGameWithAdvancedGameSettings(bool ConfirmClicked);
		void ExecuteUbergraph_Widget_LoadSession(int32_t EntryPoint);
		void OnLoadClicked__DelegateSignature(const struct FSaveHeader& SaveGame, bool IsPrivateGame);
		void OnBackClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
