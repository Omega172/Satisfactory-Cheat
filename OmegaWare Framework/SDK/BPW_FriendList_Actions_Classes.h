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
	 * WidgetBlueprintGeneratedClass BPW_FriendList_Actions.BPW_FriendList_Actions_C
	 * Size -> 0x0110 (FullSize[0x0390] - InheritedSize[0x0280])
	 */
	class UBPW_FriendList_Actions_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULocalUserInfo*                                      LocalUserInfo;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOnlineFriend*                                       OnlineFriend;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UOnlineUserPresence*                                 OnlineUserPresence;                                      // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText_2;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText_3;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText_4;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText_6;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ActionButtonText_7;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_AcceptInvite;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_InviteToSession;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_JoinSession;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_KickPlayer;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_MakeAdmin;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_RejectInvite;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_63;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mActionButtons;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine_2;                                    // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine_3;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine_4;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine_6;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ButtonShine_C*                               Widget_ButtonShine_7;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnJoinClicked;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnInviteToSessionClicked;                                // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAcceptInviteClicked;                                   // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRejectInviteClicked;                                   // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnKickClicked;                                           // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetLocalUserInfo(class ULocalUserInfo* ViewModel);
		void SetOnlineFriend(class UOnlineFriend* ViewModel);
		void SetOnlineUserPresence(class UOnlineUserPresence* ViewModel);
		void SetKickButtonVisibility(bool IsInManagePlayersMode, ESlateVisibility* Visibility);
		void SetAcceptRejectInviteVisibilityDependingOnInviteReceived(bool HasIncomingInvite, ESlateVisibility* Visibility);
		void SetInviteButtonVisibilityDependingOnGameSessionStatus(const struct FCommonSession& Joinability, ESlateVisibility* Visiblity);
		void SetJoinButtonVisibilityDependingOnJoinability(EOnlineUserPresenceJoinability Joinability, ESlateVisibility* Visibility);
		void BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BPW_FriendList_Actions(int32_t EntryPoint);
		void OnKickClicked__DelegateSignature();
		void OnRejectInviteClicked__DelegateSignature();
		void OnAcceptInviteClicked__DelegateSignature();
		void OnInviteToSessionClicked__DelegateSignature();
		void OnJoinClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
