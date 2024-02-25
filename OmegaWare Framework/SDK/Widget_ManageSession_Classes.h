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
	 * WidgetBlueprintGeneratedClass Widget_ManageSession.Widget_ManageSession_C
	 * Size -> 0x01E5 (FullSize[0x04B0] - InheritedSize[0x02CB])
	 */
	class UWidget_ManageSession_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_0KDH[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_LegacySessionInformation_C*                     BPW_LegacySessionInformation;                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mFriendList;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mManagePlayers;                                          // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mNavigation;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           mSessionSettings;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mSettings;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsList;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        UpdateManageListTimer;                                   // 0x0318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UWidget_Multiplayer_ListButton_C*, struct FFGOnlineFriend> mButtonToFriend;                                         // 0x0320(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UWidget_Multiplayer_ListButton_C*, class APlayerState*> mButtonToIngamePlayer;                                   // 0x0370(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UWidget_Multiplayer_ListButton_C*, struct FPendingInvite> mButtonToInvite;                                         // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<struct FUniqueNetIdRepl, class UWidget_Multiplayer_ListButton_C*> mFriendToButton;                                         // 0x0410(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<struct FPendingInvite, class UWidget_Multiplayer_ListButton_C*> mInviteToButton;                                         // 0x0460(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateCurrentSessionType();
		void UpdateCreativeModeFeedback();
		void ClearIngamePlayerList();
		void IsHost(class APlayerState* State, bool* isOurself);
		void DisableSessionType();
		void DisableClientOptions();
		void PopulateManagePlayerList();
		void ClearLeftSelection();
		void OnEscape();
		void OnKick(class UWidget_Multiplayer_ListButton_C* ClickedButton);
		void OnMenuEnter(class UWidget* prevMenu);
		void Construct();
		void CustomEvent(class UWidget_Multiplayer_ListButton_C* ClickedButton);
		void ConfirmJoinInvite(class UWidget_Multiplayer_ListButton_C* Button);
		void OnConfirmInvitePopupClicked(bool ConfirmClicked);
		void BndEvt__Widget_ManageSession_BPW_LegacySessionInformation_K2Node_ComponentBoundEvent_0_OnSwitcherWidgetChanged__DelegateSignature(class UWidget* OldWidget, class UWidget* NewWidget);
		void ExecuteUbergraph_Widget_ManageSession(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
