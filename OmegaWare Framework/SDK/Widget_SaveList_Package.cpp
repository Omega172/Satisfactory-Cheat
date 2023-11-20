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
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ForceDeselectSave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::ForceDeselectSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ForceDeselectSave");
		
		UWidget_SaveList_C_ForceDeselectSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.SetDeleteButtonEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::SetDeleteButtonEnabled(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.SetDeleteButtonEnabled");
		
		UWidget_SaveList_C_SetDeleteButtonEnabled_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnSaveListUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::OnSaveListUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnSaveListUpdated");
		
		UWidget_SaveList_C_OnSaveListUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnSessionsUpdated
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSessionSaveStruct>                  Sessions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CurrentSession                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::OnSessionsUpdated(bool Success, TArray<struct FSessionSaveStruct>* Sessions, int32_t CurrentSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnSessionsUpdated");
		
		UWidget_SaveList_C_OnSessionsUpdated_Params params {};
		params.Success = Success;
		params.CurrentSession = CurrentSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sessions != nullptr)
			*Sessions = params.Sessions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.SetSaveManager
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::SetSaveManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.SetSaveManager");
		
		UWidget_SaveList_C_SetSaveManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnSaveFileDeleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::OnSaveFileDeleted(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnSaveFileDeleted");
		
		UWidget_SaveList_C_OnSaveFileDeleted_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.GetSaveErrorMessage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ESaveExists                                        saveFileExists                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ErrorMessage                                               (Parm, OutParm)
	 */
	void UWidget_SaveList_C::GetSaveErrorMessage(ESaveExists saveFileExists, class FText* ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.GetSaveErrorMessage");
		
		UWidget_SaveList_C_GetSaveErrorMessage_Params params {};
		params.saveFileExists = saveFileExists;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ConvertIntToTwoDidgitText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Int                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UWidget_SaveList_C::ConvertIntToTwoDidgitText(int32_t Int)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ConvertIntToTwoDidgitText");
		
		UWidget_SaveList_C_ConvertIntToTwoDidgitText_Params params {};
		params.Int = Int;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ClearSaves
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::ClearSaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ClearSaves");
		
		UWidget_SaveList_C_ClearSaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.PopulateSessions
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::PopulateSessions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.PopulateSessions");
		
		UWidget_SaveList_C_PopulateSessions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.DeleteSaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::DeleteSaveGame(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.DeleteSaveGame");
		
		UWidget_SaveList_C_DeleteSaveGame_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.SaveGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Confrim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::SaveGame(bool Confrim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.SaveGame");
		
		UWidget_SaveList_C_SaveGame_Params params {};
		params.Confrim = Confrim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.GetDesiredSaveGameName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      saveName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::GetDesiredSaveGameName(class FString* saveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.GetDesiredSaveGameName");
		
		UWidget_SaveList_C_GetDesiredSaveGameName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (saveName != nullptr)
			*saveName = params.saveName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.RefreshSaveList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::RefreshSaveList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.RefreshSaveList");
		
		UWidget_SaveList_C_RefreshSaveList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.InternalAddSaveGame
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSaveHeader                                 Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_SaveList_C::InternalAddSaveGame(const struct FSaveHeader& Header)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.InternalAddSaveGame");
		
		UWidget_SaveList_C_InternalAddSaveGame_Params params {};
		params.Header = Header;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnEscape");
		
		UWidget_SaveList_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ConfirmDeleteSessionPopUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::ConfirmDeleteSessionPopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ConfirmDeleteSessionPopUp");
		
		UWidget_SaveList_C_ConfirmDeleteSessionPopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ConfirmOverwriteSavePopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::ConfirmOverwriteSavePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ConfirmOverwriteSavePopup");
		
		UWidget_SaveList_C_ConfirmOverwriteSavePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnWorldSave
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ErrorMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_SaveList_C::OnWorldSave(bool wasSuccessful, const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnWorldSave");
		
		UWidget_SaveList_C_OnWorldSave_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SaveList_C::BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__mDeleteSaveButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnMenuEnter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::OnMenuEnter(class UWidget* prevMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnMenuEnter");
		
		UWidget_SaveList_C_OnMenuEnter_Params params {};
		params.prevMenu = prevMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.PreConstruct");
		
		UWidget_SaveList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_SaveList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.Construct");
		
		UWidget_SaveList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.On Session Entry Generated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::OnSessionEntryGenerated(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.On Session Entry Generated");
		
		UWidget_SaveList_C_OnSessionEntryGenerated_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveInputBox_K2Node_ComponentBoundEvent_7_OnTextCommited__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveList_mSavesList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_SaveList_C::BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature");
		
		UWidget_SaveList_C_BndEvt__Widget_SaveList_Widget_SaveInputBox_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.ExecuteUbergraph_Widget_SaveList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_SaveList_C::ExecuteUbergraph_Widget_SaveList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.ExecuteUbergraph_Widget_SaveList");
		
		UWidget_SaveList_C_ExecuteUbergraph_Widget_SaveList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnBackClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnBackClicked__DelegateSignature");
		
		UWidget_SaveList_C_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_SaveList.Widget_SaveList_C.OnSaveClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_SaveList_C::OnSaveClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_SaveList.Widget_SaveList_C.OnSaveClicked__DelegateSignature");
		
		UWidget_SaveList_C_OnSaveClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_SaveList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_SaveList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SaveList.Widget_SaveList_C");
		return ptr;
	}

}


