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
	 * WidgetBlueprintGeneratedClass BPW_OnlineStatus.BPW_OnlineStatus_C
	 * Size -> 0x00E9 (FullSize[0x0371] - InheritedSize[0x0288])
	 */
	class UBPW_OnlineStatus_C : public UCommonUserStatusWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Divider2;                                                // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          TextPlayTime;                                            // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      mAuthenticationBox;                                      // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            Overlay_InnerStatus;                                     // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOnlineAuthenticationSequence*                       OnlineAuthenticationSequence;                            // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ULocalUserInfoBackend*                               LocalUserInfoSecondaryBackend;                           // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ULocalUserInfoBackend*                               LocalUserInfoPlatformBackend;                            // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              BPW_OptionsCheckbox;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Login;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Logout;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Unlink;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_ExternalLoginState;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBox_MainStatus;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_NAT;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_Playtime;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_Version;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_PlatformAvatar;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_PlatformLogo;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mCurrentSessionName;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mStatusBackground;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mStatusIndicatorIcon;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_ExternalUsername;                                   // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_NATType;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_PlatformUsername;                                   // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_PlayDuration;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Status;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Version;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Color_Online;                                            // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetOnlineAuthenticationSequence(class UOnlineAuthenticationSequence* ViewModel);
		void SetLocalUserInfoSecondaryBackend(class ULocalUserInfoBackend* ViewModel);
		void SetLocalUserInfoPlatformBackend(class ULocalUserInfoBackend* ViewModel);
		void SetLocalUserInfo(class ULocalUserInfo* ViewModel);
		void __4d2c0517430d3f7fb369bea16fcf09b7_SourceToDest(ESlateVisibility* Visibility);
		void __f697fb59449fc25fd46e61b67d7f097c_SourceToDest(ESlateVisibility* Visibility);
		void __0e976d064ebdea492632efa504336e24_SourceToDest(ESlateVisibility* Visibility);
		void __ac76ecaa431013b1425739af0f70d6ab_SourceToDest(ESlateVisibility* Visibility);
		void OnUnlinkPopupClosed(bool ConfirmClicked);
		void ShowUnlinkConfirmationPopup();
		void UpdateStatusTextDependingOnPendingChanges(ECommonUserLoginStatus UserStatus, class FText* Text);
		class FText GetPlayDurationText();
		void ManageVisibilityFromSessionState(const struct FCommonSession& GameSession, ESlateVisibility* Visibility);
		ESlateVisibility ManageMainInfoVisibilityFromSessionState(const struct FCommonSession& Session);
		void SetExternalUserNameVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, ESlateVisibility* Visibility);
		void SecondaryPlatformStatusVisibility_FromSessionState(const struct FCommonSession& GameSession, ESlateVisibility* Visibility);
		void __5c4a4556412355715eda10bd3b6a238f_SourceToDest(class UMaterialInstance** Material);
		void AggregateStatusToStatusMaterial(bool ConnectionPending, bool HasLinkedAccount, bool HasError, class UMaterialInstance** Material);
		void SetSecondaryPlatformLogo(const class FName& PlatformName);
		void GetSessionNameText();
		void SetPrimaryPlatformLogo(const class FName& PlatformName);
		void PlatformIconFromPlatformName(const class FName& PlatformName);
		void SlateBrushFromPlayerAvatarOrDefault(const struct FPlayerAvatar& PlayerAvatar, struct FSlateBrush* Brush);
		void SecondaryPlatformStatusVisibility(bool IsPlatformInUse, ESlateVisibility* Visibility);
		void UnlinkAccountsVisibilityFromHasLinkedAccountBool(bool LoginStatus, ESlateVisibility* Visibility);
		void LoginButtonVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, bool bLoginPending, bool bHasLinkedAccount, ESlateVisibility* Visibility);
		void NATTypeToColor(ECommonUserNATType NATType, struct FSlateColor* Color);
		void LogoutButtonVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, bool bPendingLoginChange, ESlateVisibility* Visibility);
		void NATTypeToText(ECommonUserNATType NATType, class FText* Text);
		void BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BPW_OnlineStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
