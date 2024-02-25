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
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetLocalUserInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetLocalUserInfo(class ULocalUserInfo* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetLocalUserInfo");
		
		UBPW_FriendList_Actions_C_SetLocalUserInfo_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineFriend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineFriend*                               ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetOnlineFriend(class UOnlineFriend* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineFriend");
		
		UBPW_FriendList_Actions_C_SetOnlineFriend_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineUserPresence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineUserPresence*                         ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetOnlineUserPresence(class UOnlineUserPresence* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetOnlineUserPresence");
		
		UBPW_FriendList_Actions_C_SetOnlineUserPresence_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetKickButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsInManagePlayersMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetKickButtonVisibility(bool IsInManagePlayersMode, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetKickButtonVisibility");
		
		UBPW_FriendList_Actions_C_SetKickButtonVisibility_Params params {};
		params.IsInManagePlayersMode = IsInManagePlayersMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetAcceptRejectInviteVisibilityDependingOnInviteReceived
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               HasIncomingInvite                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetAcceptRejectInviteVisibilityDependingOnInviteReceived(bool HasIncomingInvite, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetAcceptRejectInviteVisibilityDependingOnInviteReceived");
		
		UBPW_FriendList_Actions_C_SetAcceptRejectInviteVisibilityDependingOnInviteReceived_Params params {};
		params.HasIncomingInvite = HasIncomingInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetInviteButtonVisibilityDependingOnGameSessionStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Joinability                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ESlateVisibility                                   Visiblity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetInviteButtonVisibilityDependingOnGameSessionStatus(const struct FCommonSession& Joinability, ESlateVisibility* Visiblity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetInviteButtonVisibilityDependingOnGameSessionStatus");
		
		UBPW_FriendList_Actions_C_SetInviteButtonVisibilityDependingOnGameSessionStatus_Params params {};
		params.Joinability = Joinability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visiblity != nullptr)
			*Visiblity = params.Visiblity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetJoinButtonVisibilityDependingOnJoinability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineUserPresenceJoinability                     Joinability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::SetJoinButtonVisibilityDependingOnJoinability(EOnlineUserPresenceJoinability Joinability, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.SetJoinButtonVisibilityDependingOnJoinability");
		
		UBPW_FriendList_Actions_C_SetJoinButtonVisibilityDependingOnJoinability_Params params {};
		params.Joinability = Joinability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_JoinSession_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_InviteToSession_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_AcceptInvite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_RejectInvite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_FriendList_Actions_C_BndEvt__BPW_FriendList_Actions_Button_KickPlayer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.ExecuteUbergraph_BPW_FriendList_Actions
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FriendList_Actions_C::ExecuteUbergraph_BPW_FriendList_Actions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.ExecuteUbergraph_BPW_FriendList_Actions");
		
		UBPW_FriendList_Actions_C_ExecuteUbergraph_BPW_FriendList_Actions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnKickClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::OnKickClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnKickClicked__DelegateSignature");
		
		UBPW_FriendList_Actions_C_OnKickClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnRejectInviteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::OnRejectInviteClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnRejectInviteClicked__DelegateSignature");
		
		UBPW_FriendList_Actions_C_OnRejectInviteClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnAcceptInviteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::OnAcceptInviteClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnAcceptInviteClicked__DelegateSignature");
		
		UBPW_FriendList_Actions_C_OnAcceptInviteClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnInviteToSessionClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::OnInviteToSessionClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnInviteToSessionClicked__DelegateSignature");
		
		UBPW_FriendList_Actions_C_OnInviteToSessionClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnJoinClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FriendList_Actions_C::OnJoinClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FriendList_Actions.BPW_FriendList_Actions_C.OnJoinClicked__DelegateSignature");
		
		UBPW_FriendList_Actions_C_OnJoinClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_FriendList_Actions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_FriendList_Actions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_FriendList_Actions.BPW_FriendList_Actions_C");
		return ptr;
	}

}


