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
	 * WidgetBlueprintGeneratedClass Widget_FriendList_Item.Widget_FriendList_Item_C
	 * Size -> 0x010C (FullSize[0x0394] - InheritedSize[0x0288])
	 */
	class UWidget_FriendList_Item_C : public UFGJoinListEntry
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_Avatar;                                            // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class ULocalUserInfoBackend*                               LocalUserInfoBackend;                                    // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOnlineUserPresence*                                 FriendPresence;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOnlineFriend*                                       Friend;                                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOnlineSessionInfoViewModel*                         GameSessionViewModel;                                    // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OnHover;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mActionButtonsAnchor;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mFriendListButton;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_SubTitle;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Title;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_NatInformation_C*                            Widget_NatInformation;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPanelWidget*                                        mParentWidget;                                           // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnActionButtonClicked;                                   // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mActionButtonText;                                       // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mHideActionButton;                                       // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mDisableActionButton;                                    // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H613[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mActionButtonTooltip;                                    // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSessionSelected;                                       // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSessionDeselected;                                     // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonInteractable;                                       // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECachedNATType                                             mNatType;                                                // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsHost;                                                 // 0x037A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCareAboutNAT;                                           // 0x037B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQFM[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            mButtonMaterial;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UOnlineFriend*                                       mOnlineFriend;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Fill;                                                    // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetLocalUserInfoBackend(class ULocalUserInfoBackend* ViewModel);
		void SetLocalUserInfo(class ULocalUserInfo* ViewModel);
		void SetFriendPresence(class UOnlineUserPresence* ViewModel);
		void SetFriend(class UOnlineFriend* ViewModel);
		void SetTextColorAccordingToPresence(EOnlineUserPresenceStatus Presence, struct FSlateColor* Color);
		class UUserWidget* OnGetUserMenuContent();
		void CloseMenuAnchor();
		void OnlineStatusIndicatorColor_FromPresenceStatus(EOnlineUserPresenceStatus PresenceStatus, struct FSlateColor* IndicatorColor);
		void Visibile_IfIsInOnlineSession(const struct FCommonSession& Session, ESlateVisibility* Visibility);
		void __c5a949804239c7ec1eb05ba91417454b_SourceToDest(class FText* Text);
		void PresenceString_FromGameStatusAndRichPresence(EOnlineUserPresenceGameStatus GameStatus, const class FString& RichPresenceString, EOnlineUserPresenceStatus Presence, class FText* Text);
		void ShowInviteToSessionButton_IfSessionAllowsIt(bool InSession, ESlateVisibility* Visibility);
		void JoinButtonVisibilityfromPresenceJoinability(EOnlineUserPresenceJoinability PresenceJoinability, ESlateVisibility* ButtonVisibility);
		void UpdateNATWarningForClient();
		void GetHostingNATIsse(ECachedNATType hostNat, ECachedNATType clientNat, class FText* ToolTip);
		void UpdateNATWarningForHost();
		void BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnInviteToSessionClicked();
		void OnAcceptInviteClicked();
		void OnJoinGameClicked();
		void OnRejectInviteClicked();
		void BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void Destruct();
		void SelectionStateUpdate(bool selectionState);
		void PreConstruct(bool IsDesignTime);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void ExecuteUbergraph_Widget_FriendList_Item(int32_t EntryPoint);
		void OnSessionDeselected__DelegateSignature();
		void OnButtonClicked__DelegateSignature();
		void OnSessionSelected__DelegateSignature(const struct FBlueprintSessionResult& Session);
		void OnActionButtonClicked__DelegateSignature(class UWidget_Multiplayer_ListButton_C* ClickedButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
