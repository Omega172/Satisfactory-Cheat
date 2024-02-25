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
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OpenMenuAnchor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_Multiplayer_ListButton_C::OpenMenuAnchor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OpenMenuAnchor");
		
		UWidget_Multiplayer_ListButton_C_OpenMenuAnchor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.DeselectButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::DeselectButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.DeselectButton");
		
		UWidget_Multiplayer_ListButton_C_DeselectButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPresenceString
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UWidget_Multiplayer_ListButton_C::GetManagedPlayerPresenceString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPresenceString");
		
		UWidget_Multiplayer_ListButton_C_GetManagedPlayerPresenceString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerName
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FString UWidget_Multiplayer_ListButton_C::GetManagedPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerName");
		
		UWidget_Multiplayer_ListButton_C_GetManagedPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPing
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Ping                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::GetManagedPlayerPing(int32_t* Ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetManagedPlayerPing");
		
		UWidget_Multiplayer_ListButton_C_GetManagedPlayerPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ping != nullptr)
			*Ping = params.Ping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.IsManagedPlayerServerAdmin
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_Multiplayer_ListButton_C::IsManagedPlayerServerAdmin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.IsManagedPlayerServerAdmin");
		
		UWidget_Multiplayer_ListButton_C_IsManagedPlayerServerAdmin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateSessionStatus
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::UpdateSessionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateSessionStatus");
		
		UWidget_Multiplayer_ListButton_C_UpdateSessionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateFriendStatus
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::UpdateFriendStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateFriendStatus");
		
		UWidget_Multiplayer_ListButton_C_UpdateFriendStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.QuerySession
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::QuerySession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.QuerySession");
		
		UWidget_Multiplayer_ListButton_C_QuerySession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueried
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonSession                              SessionResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_Multiplayer_ListButton_C::OnSessionQueried(const struct FCommonSession& SessionResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueried");
		
		UWidget_Multiplayer_ListButton_C_OnSessionQueried_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::UpdateNATWarningForClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForClient");
		
		UWidget_Multiplayer_ListButton_C_UpdateNATWarningForClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetHostingNATIsse
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECachedNATType                                     HostNat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECachedNATType                                     ClientNat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ToolTip                                                    (Parm, OutParm)
	 */
	void UWidget_Multiplayer_ListButton_C::GetHostingNATIsse(ECachedNATType HostNat, ECachedNATType ClientNat, class FText* ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.GetHostingNATIsse");
		
		UWidget_Multiplayer_ListButton_C_GetHostingNATIsse_Params params {};
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
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForHost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::UpdateNATWarningForHost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateNATWarningForHost");
		
		UWidget_Multiplayer_ListButton_C_UpdateNATWarningForHost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForManagePlayers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::SetupForManagePlayers(class AFGPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForManagePlayers");
		
		UWidget_Multiplayer_ListButton_C_SetupForManagePlayers_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinInvite
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPendingInvite                              invite                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::SetupForJoinInvite(struct FPendingInvite* invite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinInvite");
		
		UWidget_Multiplayer_ListButton_C_SetupForJoinInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (invite != nullptr)
			*invite = params.invite;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForSendInvite
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::SetupForSendInvite(struct FFGOnlineFriend* Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForSendInvite");
		
		UWidget_Multiplayer_ListButton_C_SetupForSendInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friend != nullptr)
			*Friend = params.Friend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinGame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::SetupForJoinGame(struct FFGOnlineFriend* Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetupForJoinGame");
		
		UWidget_Multiplayer_ListButton_C_SetupForJoinGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friend != nullptr)
			*Friend = params.Friend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetButtonColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::SetButtonColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.SetButtonColor");
		
		UWidget_Multiplayer_ListButton_C_SetButtonColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ClearListSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::ClearListSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ClearListSelection");
		
		UWidget_Multiplayer_ListButton_C_ClearListSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.UpdateButton");
		
		UWidget_Multiplayer_ListButton_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.PreConstruct");
		
		UWidget_Multiplayer_ListButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_Multiplayer_ListButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Construct");
		
		UWidget_Multiplayer_ListButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Event Show Player Kicked Feedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::EventShowPlayerKickedFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Event Show Player Kicked Feedback");
		
		UWidget_Multiplayer_ListButton_C_EventShowPlayerKickedFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.Destruct");
		
		UWidget_Multiplayer_ListButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::OnSessionQueryFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryFinished");
		
		UWidget_Multiplayer_ListButton_C_OnSessionQueryFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::OnSessionQueryStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionQueryStarted");
		
		UWidget_Multiplayer_ListButton_C_OnSessionQueryStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Multiplayer_ListButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseEnter");
		
		UWidget_Multiplayer_ListButton_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_Multiplayer_ListButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnMouseLeave");
		
		UWidget_Multiplayer_ListButton_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.On Player Kicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::OnPlayerKicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.On Player Kicked");
		
		UWidget_Multiplayer_ListButton_C_OnPlayerKicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ExecuteUbergraph_Widget_Multiplayer_ListButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::ExecuteUbergraph_Widget_Multiplayer_ListButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.ExecuteUbergraph_Widget_Multiplayer_ListButton");
		
		UWidget_Multiplayer_ListButton_C_ExecuteUbergraph_Widget_Multiplayer_ListButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::OnSessionDeselected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionDeselected__DelegateSignature");
		
		UWidget_Multiplayer_ListButton_C_OnSessionDeselected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Multiplayer_ListButton_C::OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnButtonClicked__DelegateSignature");
		
		UWidget_Multiplayer_ListButton_C_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWidget_Multiplayer_ListButton_C::OnSessionSelected__DelegateSignature(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnSessionSelected__DelegateSignature");
		
		UWidget_Multiplayer_ListButton_C_OnSessionSelected__DelegateSignature_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnActionButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_Multiplayer_ListButton_C*            ClickedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Multiplayer_ListButton_C::OnActionButtonClicked__DelegateSignature(class UWidget_Multiplayer_ListButton_C* ClickedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C.OnActionButtonClicked__DelegateSignature");
		
		UWidget_Multiplayer_ListButton_C_OnActionButtonClicked__DelegateSignature_Params params {};
		params.ClickedButton = ClickedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Multiplayer_ListButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Multiplayer_ListButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C");
		return ptr;
	}

}


