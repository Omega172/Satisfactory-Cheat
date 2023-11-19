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
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInSession
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsFriendInSession(const struct FFGOnlineFriend& Friend, class UObject* WorldContext, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInSession");
		
		UBP_OnlineHelpers_C_IsFriendInSession_Params params {};
		params.Friend = Friend;
		params.WorldContext = WorldContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInPublicSession
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsFriendInPublicSession(const struct FFGOnlineFriend& Friend, class UObject* WorldContext, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsFriendInPublicSession");
		
		UBP_OnlineHelpers_C_IsFriendInPublicSession_Params params {};
		params.Friend = Friend;
		params.WorldContext = WorldContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsPresenceInPublicSession
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FOnlinePresence                             Presence                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsPresenceInPublicSession(const struct FOnlinePresence& Presence, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsPresenceInPublicSession");
		
		UBP_OnlineHelpers_C_IsPresenceInPublicSession_Params params {};
		params.Presence = Presence;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetConnectingNatIssue
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECachedNATType                                     hostNat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECachedNATType                                     clientNat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ToolTip                                                    (Parm, OutParm)
	 */
	void UBP_OnlineHelpers_C::STATIC_GetConnectingNatIssue(ECachedNATType hostNat, ECachedNATType clientNat, class UObject* __WorldContext, class FText* ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetConnectingNatIssue");
		
		UBP_OnlineHelpers_C_GetConnectingNatIssue_Params params {};
		params.hostNat = hostNat;
		params.clientNat = clientNat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTip != nullptr)
			*ToolTip = params.ToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsNATIssue
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		unsigned char                                      hostNat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      clientNat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isIssue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsNATIssue(unsigned char hostNat, unsigned char clientNat, class UObject* __WorldContext, bool* isIssue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsNATIssue");
		
		UBP_OnlineHelpers_C_IsNATIssue_Params params {};
		params.hostNat = hostNat;
		params.clientNat = clientNat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isIssue != nullptr)
			*isIssue = params.isIssue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInSession
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FOnlinePresence                             Presence                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsInSession(const struct FOnlinePresence& Presence, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInSession");
		
		UBP_OnlineHelpers_C_IsInSession_Params params {};
		params.Presence = Presence;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.InsertionAddButton
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_InsertionAddButton(class UPanelWidget* NewParam, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.InsertionAddButton");
		
		UBP_OnlineHelpers_C_InsertionAddButton_Params params {};
		params.NewParam = NewParam;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsHost
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isOurself                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsHost(class APlayerState* PlayerState, class APlayerController* OwningPlayer, class UObject* __WorldContext, bool* isOurself)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsHost");
		
		UBP_OnlineHelpers_C_IsHost_Params params {};
		params.PlayerState = PlayerState;
		params.OwningPlayer = OwningPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isOurself != nullptr)
			*isOurself = params.isOurself;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanJoinInviteToSession
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FCommonSession                              Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPendingInvite                              invite                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               IsFriendOnline                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECanJoinInviteResult                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_CanJoinInviteToSession(class UObject* WorldContext, const struct FFGOnlineFriend& Friend, const struct FCommonSession& Session, const struct FPendingInvite& invite, bool IsFriendOnline, class UObject* __WorldContext, ECanJoinInviteResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanJoinInviteToSession");
		
		UBP_OnlineHelpers_C_CanJoinInviteToSession_Params params {};
		params.WorldContext = WorldContext;
		params.Friend = Friend;
		params.Session = Session;
		params.invite = invite;
		params.IsFriendOnline = IsFriendOnline;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInThisGame
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             OnlineFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class ULocalPlayer*                                LocalPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               inThisGame                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_IsInThisGame(struct FFGOnlineFriend* OnlineFriend, class ULocalPlayer* LocalPlayer, class UObject* __WorldContext, bool* inThisGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.IsInThisGame");
		
		UBP_OnlineHelpers_C_IsInThisGame_Params params {};
		params.LocalPlayer = LocalPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnlineFriend != nullptr)
			*OnlineFriend = params.OnlineFriend;
		if (inThisGame != nullptr)
			*inThisGame = params.inThisGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanSendInvite
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ULocalPlayer*                                LocalPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFGOnlineFriend                             Friend                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ECantInviteResult                                  canSend                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_CanSendInvite(class ULocalPlayer* LocalPlayer, const struct FFGOnlineFriend& Friend, class UObject* __WorldContext, ECantInviteResult* canSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.CanSendInvite");
		
		UBP_OnlineHelpers_C_CanSendInvite_Params params {};
		params.LocalPlayer = LocalPlayer;
		params.Friend = Friend;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSend != nullptr)
			*canSend = params.canSend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetCompactPresence
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FOnlinePresence                             Presence                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFCompactPresence                           compactPresence                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_GetCompactPresence(const struct FOnlinePresence& Presence, class UObject* __WorldContext, struct FFCompactPresence* compactPresence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetCompactPresence");
		
		UBP_OnlineHelpers_C_GetCompactPresence_Params params {};
		params.Presence = Presence;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (compactPresence != nullptr)
			*compactPresence = params.compactPresence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetInvitePresence
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPendingInvite                              invite                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOnlinePresence                             Presence                                                   (Parm, OutParm)
	 */
	void UBP_OnlineHelpers_C::STATIC_GetInvitePresence(class UObject* WorldContext, const struct FPendingInvite& invite, class UObject* __WorldContext, struct FOnlinePresence* Presence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetInvitePresence");
		
		UBP_OnlineHelpers_C_GetInvitePresence_Params params {};
		params.WorldContext = WorldContext;
		params.invite = invite;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Presence != nullptr)
			*Presence = params.Presence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetFriendPresence
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFGOnlineFriend                             OnlineFriend                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	struct FOnlinePresence UBP_OnlineHelpers_C::STATIC_GetFriendPresence(const struct FFGOnlineFriend& OnlineFriend, class UObject* WorldContext, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.GetFriendPresence");
		
		UBP_OnlineHelpers_C_GetFriendPresence_Params params {};
		params.OnlineFriend = OnlineFriend;
		params.WorldContext = WorldContext;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_OnlineHelpers.BP_OnlineHelpers_C.SessionVisibilityStringToEnum
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		ESessionVisibility                                 Enum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_OnlineHelpers_C::STATIC_SessionVisibilityStringToEnum(const class FString& String, class UObject* __WorldContext, ESessionVisibility* Enum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OnlineHelpers.BP_OnlineHelpers_C.SessionVisibilityStringToEnum");
		
		UBP_OnlineHelpers_C_SessionVisibilityStringToEnum_Params params {};
		params.String = String;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enum != nullptr)
			*Enum = params.Enum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_OnlineHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_OnlineHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineHelpers.BP_OnlineHelpers_C");
		return ptr;
	}

}


