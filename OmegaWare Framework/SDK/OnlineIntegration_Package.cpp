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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineIntegrationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineIntegrationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineIntegrationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C6E0
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.RespondToGameInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOnlineFriend*                               OnlineFriend                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonSessionSubsystem::RespondToGameInvite(class APlayerController* Player, class UOnlineFriend* OnlineFriend, bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.RespondToGameInvite");
		
		UCommonSessionSubsystem_RespondToGameInvite_Params params {};
		params.Player = Player;
		params.OnlineFriend = OnlineFriend;
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BF70
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.JoinFriendGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOnlineFriend*                               OnlineFriend                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonSessionSubsystem::JoinFriendGame(class APlayerController* Player, class UOnlineFriend* OnlineFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.JoinFriendGame");
		
		UCommonSessionSubsystem_JoinFriendGame_Params params {};
		params.Player = Player;
		params.OnlineFriend = OnlineFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BED0
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.IsValidSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCommonSessionSubsystem::STATIC_IsValidSession(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.IsValidSession");
		
		UCommonSessionSubsystem_IsValidSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BD00
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.InviteFriendToGameSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOnlineFriend*                               OnlineFriend                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonSessionSubsystem::InviteFriendToGameSession(class UOnlineFriend* OnlineFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.InviteFriendToGameSession");
		
		UCommonSessionSubsystem_InviteFriendToGameSession_Params params {};
		params.OnlineFriend = OnlineFriend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B6F0
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.GetStringAttributeFromSession
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCommonSessionSubsystem::GetStringAttributeFromSession(const struct FCommonSession& Session, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.GetStringAttributeFromSession");
		
		UCommonSessionSubsystem_GetStringAttributeFromSession_Params params {};
		params.Session = Session;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B250
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.GetIntAttributeFromSession
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UCommonSessionSubsystem::GetIntAttributeFromSession(const struct FCommonSession& Session, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.GetIntAttributeFromSession");
		
		UCommonSessionSubsystem_GetIntAttributeFromSession_Params params {};
		params.Session = Session;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B160
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.GetDoubleAttributeFromSession
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	double UCommonSessionSubsystem::GetDoubleAttributeFromSession(const struct FCommonSession& Session, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.GetDoubleAttributeFromSession");
		
		UCommonSessionSubsystem_GetDoubleAttributeFromSession_Params params {};
		params.Session = Session;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B020
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.GetBoolAttributeFromSession
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonSessionSubsystem::GetBoolAttributeFromSession(const struct FCommonSession& Session, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.GetBoolAttributeFromSession");
		
		UCommonSessionSubsystem_GetBoolAttributeFromSession_Params params {};
		params.Session = Session;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AEB0
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.FetchSessionById
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnComplete                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonSessionSubsystem::FetchSessionById(class APlayerController* Player, const class FString& SessionId, const class FScriptDelegate& OnComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.FetchSessionById");
		
		UCommonSessionSubsystem_FetchSessionById_Params params {};
		params.Player = Player;
		params.SessionId = SessionId;
		params.OnComplete = OnComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AD00
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.CreateSessionJoiningSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCommonSession                              Session                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USessionMigrationSequence* UCommonSessionSubsystem::CreateSessionJoiningSequence(class APlayerController* Player, const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.CreateSessionJoiningSequence");
		
		UCommonSessionSubsystem_CreateSessionJoiningSequence_Params params {};
		params.Player = Player;
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AB60
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.CreateSessionCreationSequence
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCommonSessionCreationSettings              SessionSettings                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USessionMigrationSequence* UCommonSessionSubsystem::CreateSessionCreationSequence(const struct FCommonSessionCreationSettings& SessionSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.CreateSessionCreationSequence");
		
		UCommonSessionSubsystem_CreateSessionCreationSequence_Params params {};
		params.SessionSettings = SessionSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA20
	 * 		Name   -> Function OnlineIntegration.CommonSessionSubsystem.CleanUpSessions
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCommonSessionSubsystem::CleanUpSessions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionSubsystem.CleanUpSessions");
		
		UCommonSessionSubsystem_CleanUpSessions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonSessionSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonSessionSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.CommonSessionSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C040
	 * 		Name   -> Function OnlineIntegration.CommonSessionStatics.JoinSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCommonSession                              Session                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USessionMigrationSequence* UCommonSessionStatics::STATIC_JoinSession(class APlayerController* PlayerController, const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionStatics.JoinSession");
		
		UCommonSessionStatics_JoinSession_Params params {};
		params.PlayerController = PlayerController;
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4ADD0
	 * 		Name   -> Function OnlineIntegration.CommonSessionStatics.FetchFriendSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UOnlineFriend*                               Friend                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              CompletionDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonSessionStatics::STATIC_FetchFriendSession(class UOnlineFriend* Friend, const class FScriptDelegate& CompletionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonSessionStatics.FetchFriendSession");
		
		UCommonSessionStatics_FetchFriendSession_Params params {};
		params.Friend = Friend;
		params.CompletionDelegate = CompletionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonSessionStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonSessionStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.CommonSessionStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C650
	 * 		Name   -> Function OnlineIntegration.CommonUserStatusWidget.OnCommonUserInitializeComplete
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ULocalUserInfo*                              InuUserInfo                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonUserStatusWidget::OnCommonUserInitializeComplete(class ULocalUserInfo* InuUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserStatusWidget.OnCommonUserInitializeComplete");
		
		UCommonUserStatusWidget_OnCommonUserInitializeComplete_Params params {};
		params.InuUserInfo = InuUserInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUserStatusWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUserStatusWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.CommonUserStatusWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4CE00
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.WhenLocalUserInfoIsCreated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonUserSubsystem::WhenLocalUserInfoIsCreated(const class FScriptDelegate& Delegate, int32_t PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.WhenLocalUserInfoIsCreated");
		
		UCommonUserSubsystem_WhenLocalUserInfoIsCreated_Params params {};
		params.Delegate = Delegate;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4CC60
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.TryToLogOutUser
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroyPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonUserSubsystem::TryToLogOutUser(int32_t LocalPlayerIndex, bool bDestroyPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.TryToLogOutUser");
		
		UCommonUserSubsystem_TryToLogOutUser_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		params.bDestroyPlayer = bDestroyPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4CD40
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.TryToLoginForOnlinePlay
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonUserSubsystem::TryToLoginForOnlinePlay(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.TryToLoginForOnlinePlay");
		
		UCommonUserSubsystem_TryToLoginForOnlinePlay_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4CA80
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.TryToInitializeUser
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FCommonUserInitializeParams                 Params                                                     (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UCommonUserSubsystem::TryToInitializeUser(const struct FCommonUserInitializeParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.TryToInitializeUser");
		
		UCommonUserSubsystem_TryToInitializeUser_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C960
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.TryToInitializeForLocalPlay
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputDeviceId                              PrimaryInputDevice                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanUseGuestLogin                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonUserSubsystem::TryToInitializeForLocalPlay(int32_t LocalPlayerIndex, const struct FInputDeviceId& PrimaryInputDevice, bool bCanUseGuestLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.TryToInitializeForLocalPlay");
		
		UCommonUserSubsystem_TryToInitializeForLocalPlay_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		params.PrimaryInputDevice = PrimaryInputDevice;
		params.bCanUseGuestLogin = bCanUseGuestLogin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C930
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.ShouldWaitForStartInput
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonUserSubsystem::ShouldWaitForStartInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.ShouldWaitForStartInput");
		
		UCommonUserSubsystem_ShouldWaitForStartInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C800
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.SetMaxLocalPlayers
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMaxLocalPLayers                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonUserSubsystem::SetMaxLocalPlayers(int32_t InMaxLocalPLayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.SetMaxLocalPlayers");
		
		UCommonUserSubsystem_SetMaxLocalPlayers_Params params {};
		params.InMaxLocalPLayers = InMaxLocalPLayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C120
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.ListenForLoginKeyInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FKey>                                AnyUserKeys                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKey>                                NewUserKeys                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FCommonUserInitializeParams                 Params                                                     (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCommonUserSubsystem::ListenForLoginKeyInput(TArray<struct FKey> AnyUserKeys, TArray<struct FKey> NewUserKeys, const struct FCommonUserInitializeParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.ListenForLoginKeyInput");
		
		UCommonUserSubsystem_ListenForLoginKeyInput_Params params {};
		params.AnyUserKeys = AnyUserKeys;
		params.NewUserKeys = NewUserKeys;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BBB0
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForUniqueNetId
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            NetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForUniqueNetId(const struct FUniqueNetIdRepl& NetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForUniqueNetId");
		
		UCommonUserSubsystem_GetUserInfoForUniqueNetId_Params params {};
		params.NetId = NetId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BB20
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForPlatformUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FPlatformUserId                             PlatformUser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForPlatformUser(const struct FPlatformUserId& PlatformUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForPlatformUser");
		
		UCommonUserSubsystem_GetUserInfoForPlatformUser_Params params {};
		params.PlatformUser = PlatformUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BA80
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		int32_t                                            LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayerIndex(int32_t LocalPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayerIndex");
		
		UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Params params {};
		params.LocalPlayerIndex = LocalPlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B9E0
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForLocalPlayer(class ULocalPlayer* LocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForLocalPlayer");
		
		UCommonUserSubsystem_GetUserInfoForLocalPlayer_Params params {};
		params.LocalPlayer = LocalPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B950
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForInputDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FInputDeviceId                              InputDevice                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForInputDevice(const struct FInputDeviceId& InputDevice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForInputDevice");
		
		UCommonUserSubsystem_GetUserInfoForInputDevice_Params params {};
		params.InputDevice = InputDevice;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B8B0
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForControllerId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULocalUserInfo* UCommonUserSubsystem::GetUserInfoForControllerId(int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetUserInfoForControllerId");
		
		UCommonUserSubsystem_GetUserInfoForControllerId_Params params {};
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B6C0
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetNumLocalPlayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonUserSubsystem::GetNumLocalPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetNumLocalPlayers");
		
		UCommonUserSubsystem_GetNumLocalPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B4B0
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.GetMaxLocalPlayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonUserSubsystem::GetMaxLocalPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.GetMaxLocalPlayers");
		
		UCommonUserSubsystem_GetMaxLocalPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA40
	 * 		Name   -> Function OnlineIntegration.CommonUserSubsystem.CreateAuthenticationSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPlatformUserId                             PlatformUserId                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOnlineAsyncOperation* UCommonUserSubsystem::CreateAuthenticationSequence(const struct FPlatformUserId& PlatformUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.CommonUserSubsystem.CreateAuthenticationSequence");
		
		UCommonUserSubsystem_CreateAuthenticationSequence_Params params {};
		params.PlatformUserId = PlatformUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUserSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUserSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.CommonUserSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalUserInfoBackend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalUserInfoBackend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.LocalUserInfoBackend");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4CDE0
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.UnlinkExternalAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULocalUserInfo::UnlinkExternalAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.UnlinkExternalAccount");
		
		ULocalUserInfo_UnlinkExternalAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C4A0
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.LogoutExternalAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForgetCachedAuth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULocalUserInfo::LogoutExternalAccount(bool bForgetCachedAuth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.LogoutExternalAccount");
		
		ULocalUserInfo_LogoutExternalAccount_Params params {};
		params.bForgetCachedAuth = bForgetCachedAuth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C480
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.LoginExternalAccount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULocalUserInfo::LoginExternalAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.LoginExternalAccount");
		
		ULocalUserInfo_LoginExternalAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BDE0
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.IsLoggedIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineIntegrationUnmappedContext                  Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULocalUserInfo::IsLoggedIn(EOnlineIntegrationUnmappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.IsLoggedIn");
		
		ULocalUserInfo_IsLoggedIn_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B800
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.GetUnmappedContextNickname
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineIntegrationUnmappedContext                  Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULocalUserInfo::GetUnmappedContextNickname(EOnlineIntegrationUnmappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.GetUnmappedContextNickname");
		
		ULocalUserInfo_GetUnmappedContextNickname_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B4E0
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.GetNetId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineIntegrationMappedContext                    Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUniqueNetIdRepl ULocalUserInfo::GetNetId(EOnlineIntegrationMappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.GetNetId");
		
		ULocalUserInfo_GetNetId_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B400
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.GetMappedContextNickname
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineIntegrationMappedContext                    Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULocalUserInfo::GetMappedContextNickname(EOnlineIntegrationMappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.GetMappedContextNickname");
		
		ULocalUserInfo_GetMappedContextNickname_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B370
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.GetLoginStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EOnlineIntegrationUnmappedContext                  Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECommonUserLoginStatus ULocalUserInfo::GetLoginStatus(EOnlineIntegrationUnmappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.GetLoginStatus");
		
		ULocalUserInfo_GetLoginStatus_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B110
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.GetDebugString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ULocalUserInfo::GetDebugString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.GetDebugString");
		
		ULocalUserInfo_GetDebugString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AB30
	 * 		Name   -> Function OnlineIntegration.LocalUserInfo.CreateFriendList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UOnlineFriendList* ULocalUserInfo::CreateFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.LocalUserInfo.CreateFriendList");
		
		ULocalUserInfo_CreateFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalUserInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalUserInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.LocalUserInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineAsyncOperation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineAsyncOperation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineAsyncOperation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineAuthenticationSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineAuthenticationSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineAuthenticationSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineFriendBackend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineFriendBackend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineFriendBackend");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA00
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.RejectGameInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOnlineFriend::RejectGameInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.RejectGameInvite");
		
		UOnlineFriend_RejectGameInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA00
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.JoinGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOnlineFriend::JoinGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.JoinGame");
		
		UOnlineFriend_JoinGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BEA0
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.IsPresenceJoinable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnlineFriend::IsPresenceJoinable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.IsPresenceJoinable");
		
		UOnlineFriend_IsPresenceJoinable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BE70
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.IsPlayingThisGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnlineFriend::IsPlayingThisGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.IsPlayingThisGame");
		
		UOnlineFriend_IsPlayingThisGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BDB0
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.IsEffectivelyOnline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnlineFriend::IsEffectivelyOnline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.IsEffectivelyOnline");
		
		UOnlineFriend_IsEffectivelyOnline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4BD90
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.InviteToSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOnlineFriend::InviteToSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.InviteToSession");
		
		UOnlineFriend_InviteToSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4B340
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.GetLocalUserInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ULocalUserInfo* UOnlineFriend::GetLocalUserInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.GetLocalUserInfo");
		
		UOnlineFriend_GetLocalUserInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AFF0
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.GetAdvertisedNATType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ECommonUserNATType UOnlineFriend::GetAdvertisedNATType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.GetAdvertisedNATType");
		
		UOnlineFriend_GetAdvertisedNATType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA00
	 * 		Name   -> Function OnlineIntegration.OnlineFriend.AcceptGameInvite
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOnlineFriend::AcceptGameInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriend.AcceptGameInvite");
		
		UOnlineFriend_AcceptGameInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineFriend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineFriend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineFriend");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C890
	 * 		Name   -> Function OnlineIntegration.OnlineFriendList.SetSearchTerm
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InSearchTerm                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineFriendList::SetSearchTerm(const class FString& InSearchTerm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriendList.SetSearchTerm");
		
		UOnlineFriendList_SetSearchTerm_Params params {};
		params.InSearchTerm = InSearchTerm;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C5B0
	 * 		Name   -> Function OnlineIntegration.OnlineFriendList.MatchesFilters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOnlineFriend*                               Friend                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineFriendList::MatchesFilters(class UOnlineFriend* Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriendList.MatchesFilters");
		
		UOnlineFriendList_MatchesFilters_Params params {};
		params.Friend = Friend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4C530
	 * 		Name   -> Function OnlineIntegration.OnlineFriendList.MakeContextRelevant
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOnlineIntegrationUnmappedContext                  Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineFriendList::MakeContextRelevant(EOnlineIntegrationUnmappedContext Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineFriendList.MakeContextRelevant");
		
		UOnlineFriendList_MakeContextRelevant_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineFriendList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineFriendList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineFriendList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineIntegrationPIESettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineIntegrationPIESettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineIntegrationPIESettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineIntegrationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineIntegrationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineIntegrationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A370
	 * 		Name   -> Function OnlineIntegration.OnlineIntegrationSubsystem.ShouldWaitForStartInput
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnlineIntegrationSubsystem::ShouldWaitForStartInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineIntegrationSubsystem.ShouldWaitForStartInput");
		
		UOnlineIntegrationSubsystem_ShouldWaitForStartInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A070
	 * 		Name   -> Function OnlineIntegration.OnlineIntegrationSubsystem.HasTraitTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                TraitTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOnlineIntegrationSubsystem::HasTraitTag(const struct FGameplayTag& TraitTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineIntegrationSubsystem.HasTraitTag");
		
		UOnlineIntegrationSubsystem_HasTraitTag_Params params {};
		params.TraitTag = TraitTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A040
	 * 		Name   -> Function OnlineIntegration.OnlineIntegrationSubsystem.GetUserManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonUserSubsystem* UOnlineIntegrationSubsystem::GetUserManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineIntegrationSubsystem.GetUserManager");
		
		UOnlineIntegrationSubsystem_GetUserManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A010
	 * 		Name   -> Function OnlineIntegration.OnlineIntegrationSubsystem.GetSessionManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonSessionSubsystem* UOnlineIntegrationSubsystem::GetSessionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineIntegrationSubsystem.GetSessionManager");
		
		UOnlineIntegrationSubsystem_GetSessionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineIntegrationSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineIntegrationSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineIntegrationSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A290
	 * 		Name   -> Function OnlineIntegration.OnlineSessionInfoViewModel.SetSessionHandle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCommonSession                              InSessionHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UCommonSessionSubsystem*                     SessionSubsystem                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineSessionInfoViewModel::SetSessionHandle(const struct FCommonSession& InSessionHandle, class UCommonSessionSubsystem* SessionSubsystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineSessionInfoViewModel.SetSessionHandle");
		
		UOnlineSessionInfoViewModel_SetSessionHandle_Params params {};
		params.InSessionHandle = InSessionHandle;
		params.SessionSubsystem = SessionSubsystem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D4AA00
	 * 		Name   -> Function OnlineIntegration.OnlineSessionInfoViewModel.InvitePressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOnlineSessionInfoViewModel::InvitePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineSessionInfoViewModel.InvitePressed");
		
		UOnlineSessionInfoViewModel_InvitePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A140
	 * 		Name   -> Function OnlineIntegration.OnlineSessionInfoViewModel.InviteFriend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOnlineFriend*                               Friend                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnlineSessionInfoViewModel::InviteFriend(class UOnlineFriend* Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineSessionInfoViewModel.InviteFriend");
		
		UOnlineSessionInfoViewModel_InviteFriend_Params params {};
		params.Friend = Friend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSessionInfoViewModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineSessionInfoViewModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineSessionInfoViewModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F6D7A1D0
	 * 		Name   -> Function OnlineIntegration.OnlineModelConversionFunctionLibrary.MakeBrushFromPlayerAvatar
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FPlayerAvatar                               PlayerAvatar                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UOnlineModelConversionFunctionLibrary::STATIC_MakeBrushFromPlayerAvatar(const struct FPlayerAvatar& PlayerAvatar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineIntegration.OnlineModelConversionFunctionLibrary.MakeBrushFromPlayerAvatar");
		
		UOnlineModelConversionFunctionLibrary_MakeBrushFromPlayerAvatar_Params params {};
		params.PlayerAvatar = PlayerAvatar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineModelConversionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineModelConversionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineModelConversionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineAuthenticationHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineAuthenticationHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineAuthenticationHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionCreationInteractionHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionCreationInteractionHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.SessionCreationInteractionHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineUserPresence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineUserPresence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.OnlineUserPresence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionMigrationSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionMigrationSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.SessionMigrationSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionCreationSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionCreationSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.SessionCreationSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USessionJoiningSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionJoiningSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineIntegration.SessionJoiningSequence");
		return ptr;
	}

}


