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
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLocalUserInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::SetLocalUserInfo(class ULocalUserInfo* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLocalUserInfo");
		
		UBP_MainMenuWidget_C_SetLocalUserInfo_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.__c16791d0-4621-8d4e-6c6c-1eb1cc2cea8e_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               ButtonEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::__c16791d046218d4e6c6c1eb1cc2cea8e_SourceToDest(bool* ButtonEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.__c16791d0-4621-8d4e-6c6c-1eb1cc2cea8e_SourceToDest");
		
		UBP_MainMenuWidget_C___c16791d046218d4e6c6c1eb1cc2cea8e_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonEnabled != nullptr)
			*ButtonEnabled = params.ButtonEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetJoinButtonEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::SetJoinButtonEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetJoinButtonEnabled");
		
		UBP_MainMenuWidget_C_SetJoinButtonEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnlinePlayButtonVisibilityFromPrivilegeAvailability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserPrivilegeAvailability                   CanPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECommonUserPrivilegeAvailability                   CanPlayOnline                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ButtonEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::OnlinePlayButtonVisibilityFromPrivilegeAvailability(ECommonUserPrivilegeAvailability CanPlay, ECommonUserPrivilegeAvailability CanPlayOnline, bool* ButtonEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnlinePlayButtonVisibilityFromPrivilegeAvailability");
		
		UBP_MainMenuWidget_C_OnlinePlayButtonVisibilityFromPrivilegeAvailability_Params params {};
		params.CanPlay = CanPlay;
		params.CanPlayOnline = CanPlayOnline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonEnabled != nullptr)
			*ButtonEnabled = params.ButtonEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLoadGameButtonEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::SetLoadGameButtonEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetLoadGameButtonEnabled");
		
		UBP_MainMenuWidget_C_SetLoadGameButtonEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetNewGameButtonEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::SetNewGameButtonEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetNewGameButtonEnabled");
		
		UBP_MainMenuWidget_C_SetNewGameButtonEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::SetContinueButtonEnabled(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonEnabled");
		
		UBP_MainMenuWidget_C_SetContinueButtonEnabled_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.AnyPlayButtonVisibilityFromPrivilegeAvailability
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserPrivilegeAvailability                   CanPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ButtonEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::AnyPlayButtonVisibilityFromPrivilegeAvailability(ECommonUserPrivilegeAvailability CanPlay, bool* ButtonEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.AnyPlayButtonVisibilityFromPrivilegeAvailability");
		
		UBP_MainMenuWidget_C_AnyPlayButtonVisibilityFromPrivilegeAvailability_Params params {};
		params.CanPlay = CanPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonEnabled != nullptr)
			*ButtonEnabled = params.ButtonEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClearMainMenuSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::ClearMainMenuSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClearMainMenuSelection");
		
		UBP_MainMenuWidget_C_ClearMainMenuSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateMultiplayerStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::UpdateMultiplayerStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateMultiplayerStatus");
		
		UBP_MainMenuWidget_C_UpdateMultiplayerStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateNATType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::UpdateNATType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateNATType");
		
		UBP_MainMenuWidget_C_UpdateNATType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetLogedInUsernameText
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ENetIdType                                         Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        LoginStatusText                                            (Parm, OutParm)
	 */
	void UBP_MainMenuWidget_C::GetLogedInUsernameText(ENetIdType Platform, class FText* LoginStatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetLogedInUsernameText");
		
		UBP_MainMenuWidget_C_GetLogedInUsernameText_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoginStatusText != nullptr)
			*LoginStatusText = params.LoginStatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnSavesEnumerated
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSaveHeader>                         saves                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_MainMenuWidget_C::OnSavesEnumerated(bool Success, TArray<struct FSaveHeader>* saves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnSavesEnumerated");
		
		UBP_MainMenuWidget_C_OnSavesEnumerated_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (saves != nullptr)
			*saves = params.saves;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSaveHeader                                 recentSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MainMenuWidget_C::SetContinueButtonVisibility(const struct FSaveHeader& recentSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.SetContinueButtonVisibility");
		
		UBP_MainMenuWidget_C_SetContinueButtonVisibility_Params params {};
		params.recentSave = recentSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetMostRecentSaveName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::GetMostRecentSaveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetMostRecentSaveName");
		
		UBP_MainMenuWidget_C_GetMostRecentSaveName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetExperimentalVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::GetExperimentalVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetExperimentalVisibility");
		
		UBP_MainMenuWidget_C_GetExperimentalVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateUsername
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::UpdateUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateUsername");
		
		UBP_MainMenuWidget_C_UpdateUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateVersionString
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::UpdateVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.UpdateVersionString");
		
		UBP_MainMenuWidget_C_UpdateVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.CacheMostRecentSave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::CacheMostRecentSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.CacheMostRecentSave");
		
		UBP_MainMenuWidget_C_CacheMostRecentSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetVersionString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBP_MainMenuWidget_C::GetVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.GetVersionString");
		
		UBP_MainMenuWidget_C_GetVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnEscape");
		
		UBP_MainMenuWidget_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__mButtonQuit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.Construct");
		
		UBP_MainMenuWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__mButtonMP_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Bool                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::OnExit(bool Bool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExit");
		
		UBP_MainMenuWidget_C_OnExit_Params params {};
		params.Bool = Bool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.NATTypeUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECachedNATType                                     NATType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::NATTypeUpdated(ECachedNATType NATType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.NATTypeUpdated");
		
		UBP_MainMenuWidget_C_NATTypeUpdated_Params params {};
		params.NATType = NATType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.Destruct");
		
		UBP_MainMenuWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMenuEnter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::OnMenuEnter(class UWidget* prevMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMenuEnter");
		
		UBP_MainMenuWidget_C_OnMenuEnter_Params params {};
		params.prevMenu = prevMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.LoginStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoginState                                        oldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELoginState                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::LoginStateChanged(ELoginState oldState, ELoginState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.LoginStateChanged");
		
		UBP_MainMenuWidget_C_LoginStateChanged_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__mButtonContinue_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClosedLoadPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::ClosedLoadPopup(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.ClosedLoadPopup");
		
		UBP_MainMenuWidget_C_ClosedLoadPopup_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMultiplayerStatusUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnMultiplayerStatusUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnMultiplayerStatusUpdated");
		
		UBP_MainMenuWidget_C_OnMultiplayerStatusUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.ModCheckPopupPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::ModCheckPopupPressed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.ModCheckPopupPressed");
		
		UBP_MainMenuWidget_C_ModCheckPopupPressed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     oldWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     newWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature(class UWidget* oldWidget, class UWidget* newWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature");
		
		UBP_MainMenuWidget_C_BndEvt__BP_MainMenuWidget_mSwitcher_K2Node_ComponentBoundEvent_4_OnActiveWidgetSet__DelegateSignature_Params params {};
		params.oldWidget = oldWidget;
		params.newWidget = newWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.UserInfoCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              UserInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::UserInfoCreated(class ULocalUserInfo* UserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.UserInfoCreated");
		
		UBP_MainMenuWidget_C_UserInfoCreated_Params params {};
		params.UserInfo = UserInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.ExecuteUbergraph_BP_MainMenuWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenuWidget_C::ExecuteUbergraph_BP_MainMenuWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.ExecuteUbergraph_BP_MainMenuWidget");
		
		UBP_MainMenuWidget_C_ExecuteUbergraph_BP_MainMenuWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnCreditsClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnCreditsClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnCreditsClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnCreditsClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnModsClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnModsClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnModsClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnModsClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnOptionsClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnOptionsClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnOptionsClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnOptionsClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnLoadClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnLoadClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnLoadClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnLoadClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExitClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnExitClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnExitClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnExitClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnBrowseClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnBrowseClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnBrowseClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnBrowseClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnPlayClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenuWidget_C::OnPlayClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenuWidget.BP_MainMenuWidget_C.OnPlayClicked__DelegateSignature");
		
		UBP_MainMenuWidget_C_OnPlayClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenuWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenuWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenuWidget.BP_MainMenuWidget_C");
		return ptr;
	}

}


