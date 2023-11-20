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
	 * WidgetBlueprintGeneratedClass BP_MainMenuWidget.BP_MainMenuWidget_C
	 * Size -> 0x0245 (FullSize[0x0510] - InheritedSize[0x02CB])
	 */
	class UBP_MainMenuWidget_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_GSUV[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_OnlineStatus_C*                                 BPW_OnlineStatus;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         MainNavigation;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonContinue;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonCredits;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonJoinGame;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonLoad;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonOptions;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonPlay;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonQuit;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mButtonServerManager;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mConnectingToEOSLabel;                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mContinuedWithoutMultiplayerLabel;                       // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mDiscord;                                                // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mEpicUsernameLabel;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mExperimentalBuildLabel;                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mFacebook;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mInstagram;                                              // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mMainMenuList;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_NewsFeed_C*                                  mNewsFeed;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mReddit;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSteamUsernameLabel;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGWidgetSwitcher*                                   mSwitcher;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mTwitter;                                                // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mWiki;                                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SocialMediaButton_C*                         mYouTube;                                                // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionString;                                           // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Credits_C*                                   Widget_Credits;                                          // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InviteNotification_C*                        Widget_InviteNotification;                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_LoadSession_C*                               Widget_LoadSession;                                      // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_MenuSwitcherContainer_C*                     Widget_MenuSwitcherContainer;                            // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_NetworkErrorPopup_C*                         Widget_NetworkErrorPopup;                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Options_C*                                      Widget_Options;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_PlayMenu_Alpha_C*                            Widget_PlayMenu_Alpha;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_PlayMenu_JoinGame_C*                         Widget_PlayMenu_JoinGame;                                // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ServerManager_C*                             Widget_ServerManager;                                    // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPlayClicked;                                           // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBrowseClicked;                                         // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnExitClicked;                                           // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLoadClicked;                                           // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOptionsClicked;                                        // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnModsClicked;                                           // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCreditsClicked;                                        // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSaveHeader                                         mRecentSave;                                             // 0x0468(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetLocalUserInfo(class ULocalUserInfo* ViewModel);
		void __c16791d046218d4e6c6c1eb1cc2cea8e_SourceToDest(bool* ButtonEnabled);
		void SetJoinButtonEnabled(bool bIsEnabled);
		void OnlinePlayButtonVisibilityFromPrivilegeAvailability(ECommonUserPrivilegeAvailability CanPlay, ECommonUserPrivilegeAvailability CanPlayOnline, bool* ButtonEnabled);
		void SetLoadGameButtonEnabled(bool bIsEnabled);
		void SetNewGameButtonEnabled(bool bIsEnabled);
		void SetContinueButtonEnabled(bool bIsEnabled);
		void AnyPlayButtonVisibilityFromPrivilegeAvailability(ECommonUserPrivilegeAvailability CanPlay, bool* ButtonEnabled);
		void ClearMainMenuSelection();
		void UpdateMultiplayerStatus();
		void UpdateNATType();
		void GetLogedInUsernameText(ENetIdType Platform, class FText* LoginStatusText);
		void OnSavesEnumerated(bool Success, TArray<struct FSaveHeader>* saves);
		void SetContinueButtonVisibility(const struct FSaveHeader& recentSave);
		void GetMostRecentSaveName();
		void GetExperimentalVisibility();
		void UpdateUsername();
		void UpdateVersionString();
		void CacheMostRecentSave();
		class FText GetVersionString();
		void OnEscape();
		void BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void Construct();
		void BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void OnExit(bool Bool);
		void NATTypeUpdated(ECachedNATType NATType);
		void Destruct();
		void OnMenuEnter(class UWidget* prevMenu);
		void LoginStateChanged(ELoginState oldState, ELoginState NewState);
		void BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature();
		void ClosedLoadPopup(bool ConfirmClicked);
		void OnMultiplayerStatusUpdated();
		void ModCheckPopupPressed(bool ConfirmClicked);
		void BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature(class UWidget* oldWidget, class UWidget* newWidget);
		void UserInfoCreated(class ULocalUserInfo* UserInfo);
		void ExecuteUbergraph_BP_MainMenuWidget(int32_t EntryPoint);
		void OnCreditsClicked__DelegateSignature();
		void OnModsClicked__DelegateSignature();
		void OnOptionsClicked__DelegateSignature();
		void OnLoadClicked__DelegateSignature();
		void OnExitClicked__DelegateSignature();
		void OnBrowseClicked__DelegateSignature();
		void OnPlayClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
