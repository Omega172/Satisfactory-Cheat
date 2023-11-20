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
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetOnlineAuthenticationSequence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOnlineAuthenticationSequence*               ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetOnlineAuthenticationSequence(class UOnlineAuthenticationSequence* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetOnlineAuthenticationSequence");
		
		UBPW_OnlineStatus_C_SetOnlineAuthenticationSequence_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoSecondaryBackend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfoBackend*                       ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetLocalUserInfoSecondaryBackend(class ULocalUserInfoBackend* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoSecondaryBackend");
		
		UBPW_OnlineStatus_C_SetLocalUserInfoSecondaryBackend_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoPlatformBackend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfoBackend*                       ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetLocalUserInfoPlatformBackend(class ULocalUserInfoBackend* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfoPlatformBackend");
		
		UBPW_OnlineStatus_C_SetLocalUserInfoPlatformBackend_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULocalUserInfo*                              ViewModel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetLocalUserInfo(class ULocalUserInfo* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetLocalUserInfo");
		
		UBPW_OnlineStatus_C_SetLocalUserInfo_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.__4d2c0517-430d-3f7f-b369-bea16fcf09b7_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::__4d2c0517430d3f7fb369bea16fcf09b7_SourceToDest(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.__4d2c0517-430d-3f7f-b369-bea16fcf09b7_SourceToDest");
		
		UBPW_OnlineStatus_C___4d2c0517430d3f7fb369bea16fcf09b7_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.__f697fb59-449f-c25f-d46e-61b67d7f097c_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::__f697fb59449fc25fd46e61b67d7f097c_SourceToDest(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.__f697fb59-449f-c25f-d46e-61b67d7f097c_SourceToDest");
		
		UBPW_OnlineStatus_C___f697fb59449fc25fd46e61b67d7f097c_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.__0e976d06-4ebd-ea49-2632-efa504336e24_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::__0e976d064ebdea492632efa504336e24_SourceToDest(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.__0e976d06-4ebd-ea49-2632-efa504336e24_SourceToDest");
		
		UBPW_OnlineStatus_C___0e976d064ebdea492632efa504336e24_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.__ac76ecaa-4310-13b1-4257-39af0f70d6ab_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::__ac76ecaa431013b1425739af0f70d6ab_SourceToDest(ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.__ac76ecaa-4310-13b1-4257-39af0f70d6ab_SourceToDest");
		
		UBPW_OnlineStatus_C___ac76ecaa431013b1425739af0f70d6ab_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.OnUnlinkPopupClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::OnUnlinkPopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.OnUnlinkPopupClosed");
		
		UBPW_OnlineStatus_C_OnUnlinkPopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.ShowUnlinkConfirmationPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::ShowUnlinkConfirmationPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.ShowUnlinkConfirmationPopup");
		
		UBPW_OnlineStatus_C_ShowUnlinkConfirmationPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.UpdateStatusTextDependingOnPendingChanges
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserLoginStatus                             UserStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPW_OnlineStatus_C::UpdateStatusTextDependingOnPendingChanges(ECommonUserLoginStatus UserStatus, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.UpdateStatusTextDependingOnPendingChanges");
		
		UBPW_OnlineStatus_C_UpdateStatusTextDependingOnPendingChanges_Params params {};
		params.UserStatus = UserStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetPlayDurationText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBPW_OnlineStatus_C::GetPlayDurationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetPlayDurationText");
		
		UBPW_OnlineStatus_C_GetPlayDurationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageVisibilityFromSessionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              GameSession                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::ManageVisibilityFromSessionState(const struct FCommonSession& GameSession, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageVisibilityFromSessionState");
		
		UBPW_OnlineStatus_C_ManageVisibilityFromSessionState_Params params {};
		params.GameSession = GameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageMainInfoVisibilityFromSessionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	ESlateVisibility UBPW_OnlineStatus_C::ManageMainInfoVisibilityFromSessionState(const struct FCommonSession& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.ManageMainInfoVisibilityFromSessionState");
		
		UBPW_OnlineStatus_C_ManageMainInfoVisibilityFromSessionState_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetExternalUserNameVisibilityFromLoginStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserLoginStatus                             LoginStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetExternalUserNameVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetExternalUserNameVisibilityFromLoginStatus");
		
		UBPW_OnlineStatus_C_SetExternalUserNameVisibilityFromLoginStatus_Params params {};
		params.LoginStatus = LoginStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility_FromSessionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FCommonSession                              GameSession                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SecondaryPlatformStatusVisibility_FromSessionState(const struct FCommonSession& GameSession, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility_FromSessionState");
		
		UBPW_OnlineStatus_C_SecondaryPlatformStatusVisibility_FromSessionState_Params params {};
		params.GameSession = GameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.__5c4a4556-4123-5571-5eda-10bd3b6a238f_SourceToDest
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::__5c4a4556412355715eda10bd3b6a238f_SourceToDest(class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.__5c4a4556-4123-5571-5eda-10bd3b6a238f_SourceToDest");
		
		UBPW_OnlineStatus_C___5c4a4556412355715eda10bd3b6a238f_SourceToDest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.AggregateStatusToStatusMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               ConnectionPending                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasLinkedAccount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasError                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           Material                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::AggregateStatusToStatusMaterial(bool ConnectionPending, bool HasLinkedAccount, bool HasError, class UMaterialInstance** Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.AggregateStatusToStatusMaterial");
		
		UBPW_OnlineStatus_C_AggregateStatusToStatusMaterial_Params params {};
		params.ConnectionPending = ConnectionPending;
		params.HasLinkedAccount = HasLinkedAccount;
		params.HasError = HasError;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Material != nullptr)
			*Material = params.Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetSecondaryPlatformLogo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PlatformName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetSecondaryPlatformLogo(const class FName& PlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetSecondaryPlatformLogo");
		
		UBPW_OnlineStatus_C_SetSecondaryPlatformLogo_Params params {};
		params.PlatformName = PlatformName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetSessionNameText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::GetSessionNameText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.GetSessionNameText");
		
		UBPW_OnlineStatus_C_GetSessionNameText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetPrimaryPlatformLogo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PlatformName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SetPrimaryPlatformLogo(const class FName& PlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SetPrimaryPlatformLogo");
		
		UBPW_OnlineStatus_C_SetPrimaryPlatformLogo_Params params {};
		params.PlatformName = PlatformName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.PlatformIconFromPlatformName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        PlatformName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::PlatformIconFromPlatformName(const class FName& PlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.PlatformIconFromPlatformName");
		
		UBPW_OnlineStatus_C_PlatformIconFromPlatformName_Params params {};
		params.PlatformName = PlatformName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SlateBrushFromPlayerAvatarOrDefault
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlayerAvatar                               PlayerAvatar                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UBPW_OnlineStatus_C::SlateBrushFromPlayerAvatarOrDefault(const struct FPlayerAvatar& PlayerAvatar, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SlateBrushFromPlayerAvatarOrDefault");
		
		UBPW_OnlineStatus_C_SlateBrushFromPlayerAvatarOrDefault_Params params {};
		params.PlayerAvatar = PlayerAvatar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsPlatformInUse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::SecondaryPlatformStatusVisibility(bool IsPlatformInUse, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.SecondaryPlatformStatusVisibility");
		
		UBPW_OnlineStatus_C_SecondaryPlatformStatusVisibility_Params params {};
		params.IsPlatformInUse = IsPlatformInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.UnlinkAccountsVisibilityFromHasLinkedAccountBool
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               LoginStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::UnlinkAccountsVisibilityFromHasLinkedAccountBool(bool LoginStatus, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.UnlinkAccountsVisibilityFromHasLinkedAccountBool");
		
		UBPW_OnlineStatus_C_UnlinkAccountsVisibilityFromHasLinkedAccountBool_Params params {};
		params.LoginStatus = LoginStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.LoginButtonVisibilityFromLoginStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserLoginStatus                             LoginStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLoginPending                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHasLinkedAccount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::LoginButtonVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, bool bLoginPending, bool bHasLinkedAccount, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.LoginButtonVisibilityFromLoginStatus");
		
		UBPW_OnlineStatus_C_LoginButtonVisibilityFromLoginStatus_Params params {};
		params.LoginStatus = LoginStatus;
		params.bLoginPending = bLoginPending;
		params.bHasLinkedAccount = bHasLinkedAccount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserNATType                                 NATType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (Parm, OutParm)
	 */
	void UBPW_OnlineStatus_C::NATTypeToColor(ECommonUserNATType NATType, struct FSlateColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToColor");
		
		UBPW_OnlineStatus_C_NATTypeToColor_Params params {};
		params.NATType = NATType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.LogoutButtonVisibilityFromLoginStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserLoginStatus                             LoginStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPendingLoginChange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Visibility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::LogoutButtonVisibilityFromLoginStatus(ECommonUserLoginStatus LoginStatus, bool bPendingLoginChange, ESlateVisibility* Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.LogoutButtonVisibilityFromLoginStatus");
		
		UBPW_OnlineStatus_C_LogoutButtonVisibilityFromLoginStatus_Params params {};
		params.LoginStatus = LoginStatus;
		params.bPendingLoginChange = bPendingLoginChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visibility != nullptr)
			*Visibility = params.Visibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		ECommonUserNATType                                 NATType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBPW_OnlineStatus_C::NATTypeToText(ECommonUserNATType NATType, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.NATTypeToText");
		
		UBPW_OnlineStatus_C_NATTypeToText_Params params {};
		params.NATType = NATType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Unlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Login_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_OnlineStatus_C_BndEvt__BPW_OnlineStatus_Button_Logout_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_OnlineStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.Construct");
		
		UBPW_OnlineStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_OnlineStatus.BPW_OnlineStatus_C.ExecuteUbergraph_BPW_OnlineStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OnlineStatus_C::ExecuteUbergraph_BPW_OnlineStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OnlineStatus.BPW_OnlineStatus_C.ExecuteUbergraph_BPW_OnlineStatus");
		
		UBPW_OnlineStatus_C_ExecuteUbergraph_BPW_OnlineStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OnlineStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OnlineStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OnlineStatus.BPW_OnlineStatus_C");
		return ptr;
	}

}


