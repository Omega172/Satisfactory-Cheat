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
	 * WidgetBlueprintGeneratedClass Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C
	 * Size -> 0x005F (FullSize[0x032A] - InheritedSize[0x02CB])
	 */
	class UWidget_PlayMenu_JoinGame_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_E0FG[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowSessionInfo;                                         // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_SessionIDSearch_C*                              BPW_JoinSessionID;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_SessionInformation_C*                           BPW_SessionInformation;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_238;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGListView_JoinList*                                ListView_FriendList;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mFriends;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mJoinButtonContainer;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mSessionInfo;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FrontEnd_Button_C*                           Widget_FrontEnd_Button;                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mShouldAnimateSessionInfo;                               // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowingPrivateSessionInfo;                               // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateCreativeModeInfo(const struct FBlueprintSessionResult& Session);
		void ClearAndHideSearchResults();
		void OnSearchCreateResult(const class FText& mSearchText);
		void GetHostName(class FText* HostName);
		void DeselectSessionIDButton(const struct FBlueprintSessionResult& Session);
		void OnSessionIDButtonClicked(const struct FBlueprintSessionResult& Session);
		void OnSessionIDFound(const struct FCommonSession& Session);
		void ClearButtonSelection();
		void OnSessionQueried(const struct FCommonSession& Session);
		void FindSessionId(const class FString& SessionId);
		void SetupButtonForJoinGame(class UWidget_Multiplayer_ListButton_C* Button, struct FFGOnlineFriend* Friend, class UVerticalBox* VerticalBox);
		void UpdateFriendsForJoinMenu(TArray<struct FFGOnlineFriend>* Friends);
		void UpdateFriendForJoinMenu(const struct FUniqueNetIdRepl& NetId);
		void ShowSessionInfoAnim();
		void SetSessionInfo(const struct FBlueprintSessionResult& Session);
		void ClearMultiplayerList();
		void PopulateMultiplayerList(bool* Success);
		void OnMenuEnter(class UWidget* prevMenu);
		void OnMenuExit(class UWidget* prevMenu, bool noAnimation);
		void OnSessionDeselected();
		void BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void OnJoinSessionNew();
		void OnNewSessionSelected(const struct FBlueprintSessionResult& Session);
		void HideSessionInfo(bool InstantAnimation);
		void OnJoinSession(class UWidget_Multiplayer_ListButton_C* ClickedButton);
		void BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
		void SessionFetchComplete(class UOnlineFriend* Friend, const struct FCommonSession& Session);
		void BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature();
		void ExecuteUbergraph_Widget_PlayMenu_JoinGame(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
