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
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ShowGameModesCheckbox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::ShowGameModesCheckbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ShowGameModesCheckbox");
		
		UWidget_LoadSession_C_ShowGameModesCheckbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.TryShowUnstableSaveVersion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FScriptDelegate                              CloseDelegate                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::TryShowUnstableSaveVersion(class APlayerController* Controller, const class FText& Body, const class FScriptDelegate& CloseDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.TryShowUnstableSaveVersion");
		
		UWidget_LoadSession_C_TryShowUnstableSaveVersion_Params params {};
		params.Controller = Controller;
		params.Body = Body;
		params.CloseDelegate = CloseDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.On Sessions Enumerated
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSessionSaveStruct>                  Sessions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentSession                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::OnSessionsEnumerated(bool Success, TArray<struct FSessionSaveStruct> Sessions, int32_t CurrentSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.On Sessions Enumerated");
		
		UWidget_LoadSession_C_OnSessionsEnumerated_Params params {};
		params.Success = Success;
		params.Sessions = Sessions;
		params.CurrentSession = CurrentSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.SetMenuType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELoadSession_MenuTypes                             mMenuType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::SetMenuType(ELoadSession_MenuTypes mMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SetMenuType");
		
		UWidget_LoadSession_C_SetMenuType_Params params {};
		params.mMenuType = mMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.SetSaveManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::SetSaveManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SetSaveManager");
		
		UWidget_LoadSession_C_SetSaveManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.PopulateSavesFromSession
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSessionSaveStruct                          Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_LoadSession_C::PopulateSavesFromSession(const struct FSessionSaveStruct& Session)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.PopulateSavesFromSession");
		
		UWidget_LoadSession_C_PopulateSavesFromSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSession
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSessionSaveStruct                          Session                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::IsValidCurrentSession(const struct FSessionSaveStruct& Session, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSession");
		
		UWidget_LoadSession_C_IsValidCurrentSession_Params params {};
		params.Session = Session;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.UpdateCurrentSession
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::UpdateCurrentSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.UpdateCurrentSession");
		
		UWidget_LoadSession_C_UpdateCurrentSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSave
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::IsValidCurrentSave(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.IsValidCurrentSave");
		
		UWidget_LoadSession_C_IsValidCurrentSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.PopulateSessionList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::PopulateSessionList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.PopulateSessionList");
		
		UWidget_LoadSession_C_PopulateSessionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSessionPopUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::ConfirmDeleteSessionPopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSessionPopUp");
		
		UWidget_LoadSession_C_ConfirmDeleteSessionPopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSession
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::EventDeleteSession(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSession");
		
		UWidget_LoadSession_C_EventDeleteSession_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::EventDeleteSave(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.EventDeleteSave");
		
		UWidget_LoadSession_C_EventDeleteSave_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSavePopUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::ConfirmDeleteSavePopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ConfirmDeleteSavePopUp");
		
		UWidget_LoadSession_C_ConfirmDeleteSavePopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnEscape");
		
		UWidget_LoadSession_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.SpawnAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayBackgroundAnim                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::SpawnAnim(bool PlayBackgroundAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SpawnAnim");
		
		UWidget_LoadSession_C_SpawnAnim_Params params {};
		params.PlayBackgroundAnim = PlayBackgroundAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.LoadCurrentSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::LoadCurrentSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.LoadCurrentSave");
		
		UWidget_LoadSession_C_LoadCurrentSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.OnMenuEnter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::OnMenuEnter(class UWidget* prevMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnMenuEnter");
		
		UWidget_LoadSession_C_OnMenuEnter_Params params {};
		params.prevMenu = prevMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.SaveDeleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::SaveDeleted(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SaveDeleted");
		
		UWidget_LoadSession_C_SaveDeleted_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.SessionDeleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::SessionDeleted(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.SessionDeleted");
		
		UWidget_LoadSession_C_SessionDeleted_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ClosedLoadPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::ClosedLoadPopup(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ClosedLoadPopup");
		
		UWidget_LoadSession_C_ClosedLoadPopup_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.Construct");
		
		UWidget_LoadSession_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ForceReloadMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::ForceReloadMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ForceReloadMenu");
		
		UWidget_LoadSession_C_ForceReloadMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.PreConstruct");
		
		UWidget_LoadSession_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.OnUploadSavePopupClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::OnUploadSavePopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnUploadSavePopupClosed");
		
		UWidget_LoadSession_C_OnUploadSavePopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_LoadSession_C::BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__DeleteSessionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_LoadSession_C::BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__DeleteSave_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_10_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsHovered = bIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsHovered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSessionList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsHovered = bIsHovered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_mSaveList_K2Node_ComponentBoundEvent_6_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ModCheckPopupPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::ModCheckPopupPressed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ModCheckPopupPressed");
		
		UWidget_LoadSession_C_ModCheckPopupPressed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature");
		
		UWidget_LoadSession_C_BndEvt__Widget_LoadSession_BPW_OptionsCheckbox_1_K2Node_ComponentBoundEvent_9_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.Event Load Game With Advanced Game Settings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::EventLoadGameWithAdvancedGameSettings(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.Event Load Game With Advanced Game Settings");
		
		UWidget_LoadSession_C_EventLoadGameWithAdvancedGameSettings_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.ExecuteUbergraph_Widget_LoadSession
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::ExecuteUbergraph_Widget_LoadSession(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.ExecuteUbergraph_Widget_LoadSession");
		
		UWidget_LoadSession_C_ExecuteUbergraph_Widget_LoadSession_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.OnLoadClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSaveHeader                                 SaveGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsPrivateGame                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LoadSession_C::OnLoadClicked__DelegateSignature(const struct FSaveHeader& SaveGame, bool IsPrivateGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnLoadClicked__DelegateSignature");
		
		UWidget_LoadSession_C_OnLoadClicked__DelegateSignature_Params params {};
		params.SaveGame = SaveGame;
		params.IsPrivateGame = IsPrivateGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LoadSession.Widget_LoadSession_C.OnBackClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_LoadSession_C::OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LoadSession.Widget_LoadSession_C.OnBackClicked__DelegateSignature");
		
		UWidget_LoadSession_C_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_LoadSession_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_LoadSession_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_LoadSession.Widget_LoadSession_C");
		return ptr;
	}

}


