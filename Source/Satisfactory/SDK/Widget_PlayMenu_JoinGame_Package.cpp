/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateCreativeModeInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PlayMenu_JoinGame_C::UpdateCreativeModeInfo(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateCreativeModeInfo");
		
		UWidget_PlayMenu_JoinGame_C_UpdateCreativeModeInfo_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearAndHideSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::ClearAndHideSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearAndHideSearchResults");
		
		UWidget_PlayMenu_JoinGame_C_ClearAndHideSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSearchCreateResult
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSearchText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnSearchCreateResult(const class FText& mSearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSearchCreateResult");
		
		UWidget_PlayMenu_JoinGame_C_OnSearchCreateResult_Params params {};
		params.mSearchText = mSearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.GetHostName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        HostName                                                   (Parm, OutParm)
	 */
	void UWidget_PlayMenu_JoinGame_C::GetHostName(class FText* HostName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.GetHostName");
		
		UWidget_PlayMenu_JoinGame_C_GetHostName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HostName != nullptr)
			*HostName = params.HostName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.DeselectSessionIDButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::DeselectSessionIDButton(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.DeselectSessionIDButton");
		
		UWidget_PlayMenu_JoinGame_C_DeselectSessionIDButton_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDButtonClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnSessionIDButtonClicked(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDButtonClicked");
		
		UWidget_PlayMenu_JoinGame_C_OnSessionIDButtonClicked_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDFound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnSessionIDFound(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionIDFound");
		
		UWidget_PlayMenu_JoinGame_C_OnSessionIDFound_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearButtonSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::ClearButtonSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearButtonSelection");
		
		UWidget_PlayMenu_JoinGame_C_ClearButtonSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionQueried
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnSessionQueried(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionQueried");
		
		UWidget_PlayMenu_JoinGame_C_OnSessionQueried_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.FindSessionId
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::FindSessionId(const class FString& SessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.FindSessionId");
		
		UWidget_PlayMenu_JoinGame_C_FindSessionId_Params params {};
		params.SessionId = SessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetupButtonForJoinGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_Multiplayer_ListButton_C*            Button                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UVerticalBox*                                VerticalBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::SetupButtonForJoinGame(class UWidget_Multiplayer_ListButton_C* Button, struct FFGOnlineFriend* Friend, class UVerticalBox* VerticalBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetupButtonForJoinGame");
		
		UWidget_PlayMenu_JoinGame_C_SetupButtonForJoinGame_Params params {};
		params.Button = Button;
		params.VerticalBox = VerticalBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friend != nullptr)
			*Friend = params.Friend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendsForJoinMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFGOnlineFriend>                     Friends                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PlayMenu_JoinGame_C::UpdateFriendsForJoinMenu(TArray<struct FFGOnlineFriend>* Friends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendsForJoinMenu");
		
		UWidget_PlayMenu_JoinGame_C_UpdateFriendsForJoinMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friends != nullptr)
			*Friends = params.Friends;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendForJoinMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            NetId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::UpdateFriendForJoinMenu(const struct FUniqueNetIdRepl& NetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.UpdateFriendForJoinMenu");
		
		UWidget_PlayMenu_JoinGame_C_UpdateFriendForJoinMenu_Params params {};
		params.NetId = NetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ShowSessionInfoAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::ShowSessionInfoAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ShowSessionInfoAnim");
		
		UWidget_PlayMenu_JoinGame_C_ShowSessionInfoAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetSessionInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::SetSessionInfo(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SetSessionInfo");
		
		UWidget_PlayMenu_JoinGame_C_SetSessionInfo_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearMultiplayerList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::ClearMultiplayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ClearMultiplayerList");
		
		UWidget_PlayMenu_JoinGame_C_ClearMultiplayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.PopulateMultiplayerList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::PopulateMultiplayerList(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.PopulateMultiplayerList");
		
		UWidget_PlayMenu_JoinGame_C_PopulateMultiplayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuEnter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnMenuEnter(class UWidget* prevMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuEnter");
		
		UWidget_PlayMenu_JoinGame_C_OnMenuEnter_Params params {};
		params.prevMenu = prevMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuExit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               noAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnMenuExit(class UWidget* prevMenu, bool noAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnMenuExit");
		
		UWidget_PlayMenu_JoinGame_C_OnMenuExit_Params params {};
		params.prevMenu = prevMenu;
		params.noAnimation = noAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionDeselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnSessionDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnSessionDeselected");
		
		UWidget_PlayMenu_JoinGame_C_OnSessionDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSessionNew
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnJoinSessionNew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSessionNew");
		
		UWidget_PlayMenu_JoinGame_C_OnJoinSessionNew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnNewSessionSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnNewSessionSelected(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnNewSessionSelected");
		
		UWidget_PlayMenu_JoinGame_C_OnNewSessionSelected_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.HideSessionInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InstantAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::HideSessionInfo(bool InstantAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.HideSessionInfo");
		
		UWidget_PlayMenu_JoinGame_C_HideSessionInfo_Params params {};
		params.InstantAnimation = InstantAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_Multiplayer_ListButton_C*            ClickedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::OnJoinSession(class UWidget_Multiplayer_ListButton_C* ClickedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.OnJoinSession");
		
		UWidget_PlayMenu_JoinGame_C_OnJoinSession_Params params {};
		params.ClickedButton = ClickedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_JoinGame_C::BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");
		
		UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature");
		
		UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_2_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_ListView_FriendList_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SessionFetchComplete
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineFriend*                               Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCommonSession                              Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWidget_PlayMenu_JoinGame_C::SessionFetchComplete(class UOnlineFriend* Friend, const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.SessionFetchComplete");
		
		UWidget_PlayMenu_JoinGame_C_SessionFetchComplete_Params params {};
		params.Friend = Friend;
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_JoinGame_C::BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature");
		
		UWidget_PlayMenu_JoinGame_C_BndEvt__Widget_PlayMenu_JoinGame_mSearchbar_K2Node_ComponentBoundEvent_4_OnClearTextClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ExecuteUbergraph_Widget_PlayMenu_JoinGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_JoinGame_C::ExecuteUbergraph_Widget_PlayMenu_JoinGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C.ExecuteUbergraph_Widget_PlayMenu_JoinGame");
		
		UWidget_PlayMenu_JoinGame_C_ExecuteUbergraph_Widget_PlayMenu_JoinGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PlayMenu_JoinGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PlayMenu_JoinGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PlayMenu_JoinGame.Widget_PlayMenu_JoinGame_C");
		return ptr;
	}

}


