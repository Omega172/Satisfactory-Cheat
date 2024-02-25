/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfoBackend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfoBackend*                       ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::SetLocalUserInfoBackend(class ULocalUserInfoBackend* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfoBackend");
		
		UWidget_FriendList_Item_C_SetLocalUserInfoBackend_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::SetLocalUserInfo(class ULocalUserInfo* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetLocalUserInfo");
		
		UWidget_FriendList_Item_C_SetLocalUserInfo_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriendPresence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineUserPresence*                         ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::SetFriendPresence(class UOnlineUserPresence* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriendPresence");
		
		UWidget_FriendList_Item_C_SetFriendPresence_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineFriend*                               ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::SetFriend(class UOnlineFriend* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetFriend");
		
		UWidget_FriendList_Item_C_SetFriend_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetTextColorAccordingToPresence
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineUserPresenceStatus                          Presence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (Parm, OutParm)
	 */
	void UWidget_FriendList_Item_C::SetTextColorAccordingToPresence(EOnlineUserPresenceStatus Presence, struct FSlateColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SetTextColorAccordingToPresence");
		
		UWidget_FriendList_Item_C_SetTextColorAccordingToPresence_Params params {};
		params.Presence = Presence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnGetUserMenuContent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UWidget_FriendList_Item_C::OnGetUserMenuContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnGetUserMenuContent");
		
		UWidget_FriendList_Item_C_OnGetUserMenuContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.CloseMenuAnchor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::CloseMenuAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.CloseMenuAnchor");
		
		UWidget_FriendList_Item_C_CloseMenuAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnlineStatusIndicatorColor_FromPresenceStatus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineUserPresenceStatus                          PresenceStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 IndicatorColor                                             (Parm, OutParm)
	 */
	void UWidget_FriendList_Item_C::OnlineStatusIndicatorColor_FromPresenceStatus(EOnlineUserPresenceStatus PresenceStatus, struct FSlateColor* IndicatorColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnlineStatusIndicatorColor_FromPresenceStatus");
		
		UWidget_FriendList_Item_C_OnlineStatusIndicatorColor_FromPresenceStatus_Params params {};
		params.PresenceStatus = PresenceStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndicatorColor != nullptr)
			*IndicatorColor = params.IndicatorColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.Visibile_IfIsInOnlineSession
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::Visibile_IfIsInOnlineSession(const struct FCommonSession& Session, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.Visibile_IfIsInOnlineSession");
		
		UWidget_FriendList_Item_C_Visibile_IfIsInOnlineSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.__c5a94980-4239-c7ec-1eb0-5ba91417454b_SourceToDest
	 * 		Flags  -> (HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWidget_FriendList_Item_C::__c5a949804239c7ec1eb05ba91417454b_SourceToDest(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.__c5a94980-4239-c7ec-1eb0-5ba91417454b_SourceToDest");
		
		UWidget_FriendList_Item_C___c5a949804239c7ec1eb05ba91417454b_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.PresenceString_FromGameStatusAndRichPresence
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineUserPresenceGameStatus                      GameStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      RichPresenceString                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EOnlineUserPresenceStatus                          Presence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWidget_FriendList_Item_C::PresenceString_FromGameStatusAndRichPresence(EOnlineUserPresenceGameStatus GameStatus, const class FString& RichPresenceString, EOnlineUserPresenceStatus Presence, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.PresenceString_FromGameStatusAndRichPresence");
		
		UWidget_FriendList_Item_C_PresenceString_FromGameStatusAndRichPresence_Params params {};
		params.GameStatus = GameStatus;
		params.RichPresenceString = RichPresenceString;
		params.Presence = Presence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.ShowInviteToSessionButton_IfSessionAllowsIt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               InSession                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::ShowInviteToSessionButton_IfSessionAllowsIt(bool InSession, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.ShowInviteToSessionButton_IfSessionAllowsIt");
		
		UWidget_FriendList_Item_C_ShowInviteToSessionButton_IfSessionAllowsIt_Params params {};
		params.InSession = InSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.Join Button Visibility from Presence Joinability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineUserPresenceJoinability                     PresenceJoinability                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   ButtonVisibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::JoinButtonVisibilityfromPresenceJoinability(EOnlineUserPresenceJoinability PresenceJoinability, ESlateVisibility* ButtonVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.Join Button Visibility from Presence Joinability");
		
		UWidget_FriendList_Item_C_JoinButtonVisibilityfromPresenceJoinability_Params params {};
		params.PresenceJoinability = PresenceJoinability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonVisibility != nullptr)
			*ButtonVisibility = params.ButtonVisibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::UpdateNATWarningForClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForClient");
		
		UWidget_FriendList_Item_C_UpdateNATWarningForClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.Get Hosting NATIsse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECachedNATType                                     HostNat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECachedNATType                                     ClientNat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ToolTip                                                    (Parm, OutParm)
	 */
	void UWidget_FriendList_Item_C::GetHostingNATIsse(ECachedNATType HostNat, ECachedNATType ClientNat, class FText* ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.Get Hosting NATIsse");
		
		UWidget_FriendList_Item_C_GetHostingNATIsse_Params params {};
		params.HostNat = HostNat;
		params.ClientNat = ClientNat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTip != nullptr)
			*ToolTip = params.ToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForHost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::UpdateNATWarningForHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.UpdateNATWarningForHost");
		
		UWidget_FriendList_Item_C_UpdateNATWarningForHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_FriendList_Item_C_BndEvt__Widget_FriendList_Item_mFriendListButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Invite To Session Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnInviteToSessionClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Invite To Session Clicked");
		
		UWidget_FriendList_Item_C_OnInviteToSessionClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Accept Invite Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnAcceptInviteClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Accept Invite Clicked");
		
		UWidget_FriendList_Item_C_OnAcceptInviteClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Join Game Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnJoinGameClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Join Game Clicked");
		
		UWidget_FriendList_Item_C_OnJoinGameClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Reject Invite Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnRejectInviteClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.On Reject Invite Clicked");
		
		UWidget_FriendList_Item_C_OnRejectInviteClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UWidget_FriendList_Item_C_BndEvt__Widget_FriendList_Item_mActionButtonsAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.Destruct");
		
		UWidget_FriendList_Item_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.SelectionStateUpdate
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               selectionState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::SelectionStateUpdate(bool selectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.SelectionStateUpdate");
		
		UWidget_FriendList_Item_C_SelectionStateUpdate_Params params {};
		params.selectionState = selectionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.PreConstruct");
		
		UWidget_FriendList_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_FriendList_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseLeave");
		
		UWidget_FriendList_Item_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_FriendList_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnMouseEnter");
		
		UWidget_FriendList_Item_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnListItemObjectSet");
		
		UWidget_FriendList_Item_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.ExecuteUbergraph_Widget_FriendList_Item
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::ExecuteUbergraph_Widget_FriendList_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.ExecuteUbergraph_Widget_FriendList_Item");
		
		UWidget_FriendList_Item_C_ExecuteUbergraph_Widget_FriendList_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnSessionDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionDeselected__DelegateSignature");
		
		UWidget_FriendList_Item_C_OnSessionDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FriendList_Item_C::OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnButtonClicked__DelegateSignature");
		
		UWidget_FriendList_Item_C_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_FriendList_Item_C::OnSessionSelected__DelegateSignature(const struct FBlueprintSessionResult& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnSessionSelected__DelegateSignature");
		
		UWidget_FriendList_Item_C_OnSessionSelected__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnActionButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_Multiplayer_ListButton_C*            ClickedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FriendList_Item_C::OnActionButtonClicked__DelegateSignature(class UWidget_Multiplayer_ListButton_C* ClickedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FriendList_Item.Widget_FriendList_Item_C.OnActionButtonClicked__DelegateSignature");
		
		UWidget_FriendList_Item_C_OnActionButtonClicked__DelegateSignature_Params params {};
		params.ClickedButton = ClickedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_FriendList_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_FriendList_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FriendList_Item.Widget_FriendList_Item_C");
		return ptr;
	}

}


