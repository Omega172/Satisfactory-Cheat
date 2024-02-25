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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BPW_LegacySessionInformation.BPW_LegacySessionInformation_C
	 * Size -> 0x0088 (FullSize[0x0308] - InheritedSize[0x0280])
	 */
	class UBPW_LegacySessionInformation_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOnlineSessionInfoViewModel*                         SessionInfo;                                             // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_FriendList_C*                                   BPW_FriendList;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ManagePlayers;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButton;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mCopyToClipboardButton;                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mCreativeModeBox;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Options_DropdownBox_C*                          mPrivacySettingsDropdown;                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSessionIdText;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSessionText;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mShowHideSessionIDButton;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGWidgetSwitcher*                                   mSwitcher;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTitle;                                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SessionSettings;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSwitcherWidgetChanged;                                 // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetLocalUserInfo(class ULocalUserInfo* ViewModel);
		void UpdateCurrentSession(const struct FCommonSession& Session);
		void GetActiveSwitcherWidget(class UWidget** Widget);
		void Construct();
		void BndEvt__BPW_LegacySessionInformation_mSwitcher_K2Node_ComponentBoundEvent_0_OnActiveWidgetSet__DelegateSignature(class UWidget* oldWidget, class UWidget* newWidget);
		void BndEvt__BPW_LegacySessionInformation_mCopyToClipboardButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
		void BndEvt__BPW_LegacySessionInformation_mShowHideSessionIDButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
		void BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_0_onSelectionChanged__DelegateSignature(const class FString& SelectedOption);
		void ExecuteUbergraph_BPW_LegacySessionInformation(int32_t EntryPoint);
		void OnSwitcherWidgetChanged__DelegateSignature(class UWidget* OldWidget, class UWidget* NewWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
