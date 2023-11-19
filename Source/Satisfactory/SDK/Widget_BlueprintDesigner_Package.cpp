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
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CloseBlueprintEditor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::CloseBlueprintEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CloseBlueprintEditor");
		
		UWidget_BlueprintDesigner_C_CloseBlueprintEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetGameModeSettingFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::GetGameModeSettingFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetGameModeSettingFeedback");
		
		UWidget_BlueprintDesigner_C_GetGameModeSettingFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ValidateBlueprintRecord
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FBlueprintRecord                            ValidatedRecord                                            (Parm, OutParm)
	 */
	void UWidget_BlueprintDesigner_C::ValidateBlueprintRecord(const struct FBlueprintRecord& BlueprintRecord, struct FBlueprintRecord* ValidatedRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ValidateBlueprintRecord");
		
		UWidget_BlueprintDesigner_C_ValidateBlueprintRecord_Params params {};
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidatedRecord != nullptr)
			*ValidatedRecord = params.ValidatedRecord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectorySelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_BlueprintDirectorySelector_C*           mDirectorySelector                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetDirectorySelector(class UBPW_BlueprintDirectorySelector_C* mDirectorySelector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectorySelector");
		
		UWidget_BlueprintDesigner_C_SetDirectorySelector_Params params {};
		params.mDirectorySelector = mDirectorySelector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ResetPopupOverlay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::ResetPopupOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ResetPopupOverlay");
		
		UWidget_BlueprintDesigner_C_ResetPopupOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AddWidgetToPopupOverlay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::AddWidgetToPopupOverlay(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AddWidgetToPopupOverlay");
		
		UWidget_BlueprintDesigner_C_AddWidgetToPopupOverlay_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetNameErrorTooltip
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::SetNameErrorTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetNameErrorTooltip");
		
		UWidget_BlueprintDesigner_C_SetNameErrorTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowDirectoryMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::ShowDirectoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowDirectoryMenu");
		
		UWidget_BlueprintDesigner_C_ShowDirectoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateSaveButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::UpdateSaveButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateSaveButtonVisibility");
		
		UWidget_BlueprintDesigner_C_UpdateSaveButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetInvalidNameSymbolsAsString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::GetInvalidNameSymbolsAsString(class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetInvalidNameSymbolsAsString");
		
		UWidget_BlueprintDesigner_C_GetInvalidNameSymbolsAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CheckIfTextIsFreeOfInvalidSymbols
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               TextIsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::CheckIfTextIsFreeOfInvalidSymbols(const class FText& Name, bool* TextIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CheckIfTextIsFreeOfInvalidSymbols");
		
		UWidget_BlueprintDesigner_C_CheckIfTextIsFreeOfInvalidSymbols_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextIsValid != nullptr)
			*TextIsValid = params.TextIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateNameWarning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BlueprintDesigner_C::UpdateNameWarning(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateNameWarning");
		
		UWidget_BlueprintDesigner_C_UpdateNameWarning_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.NullCheckCategories
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintCategory*                        InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintSubCategory*                     InSubCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintCategory*                        OutCategory                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGBlueprintSubCategory*                     OutSubCategory                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::NullCheckCategories(class UFGBlueprintCategory* InCategory, class UFGBlueprintSubCategory* InSubCategory, class UFGBlueprintCategory** OutCategory, class UFGBlueprintSubCategory** OutSubCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.NullCheckCategories");
		
		UWidget_BlueprintDesigner_C_NullCheckCategories_Params params {};
		params.InCategory = InCategory;
		params.InSubCategory = InSubCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCategory != nullptr)
			*OutCategory = params.OutCategory;
		if (OutSubCategory != nullptr)
			*OutSubCategory = params.OutSubCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptLoad
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::AttemptLoad(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptLoad");
		
		UWidget_BlueprintDesigner_C_AttemptLoad_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetSaveButtonTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_BlueprintDesigner_C::GetSaveButtonTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetSaveButtonTooltip");
		
		UWidget_BlueprintDesigner_C_GetSaveButtonTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetSaveButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetSaveButtonVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetSaveButtonVisibility");
		
		UWidget_BlueprintDesigner_C_SetSaveButtonVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnCostUpdated
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         cost                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BlueprintDesigner_C::OnCostUpdated(TArray<struct FItemAmount> cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnCostUpdated");
		
		UWidget_BlueprintDesigner_C_OnCostUpdated_Params params {};
		params.cost = cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::GenerateCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateCost");
		
		UWidget_BlueprintDesigner_C_GenerateCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemovePromptClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnRemovePromptClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemovePromptClosed");
		
		UWidget_BlueprintDesigner_C_OnRemovePromptClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetAvailableName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FString UWidget_BlueprintDesigner_C::GetAvailableName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetAvailableName");
		
		UWidget_BlueprintDesigner_C_GetAvailableName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnSavePromptClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnSavePromptClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnSavePromptClosed");
		
		UWidget_BlueprintDesigner_C_OnSavePromptClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptSave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::AttemptSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptSave");
		
		UWidget_BlueprintDesigner_C_AttemptSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateUsedBlueprintNames
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::GenerateUsedBlueprintNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateUsedBlueprintNames");
		
		UWidget_BlueprintDesigner_C_GenerateUsedBlueprintNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetUsedNameWarningTooltip
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UWidget_BlueprintDesigner_C::GetUsedNameWarningTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetUsedNameWarningTooltip");
		
		UWidget_BlueprintDesigner_C_GetUsedNameWarningTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_BlueprintDesigner_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnPreviewKeyDown");
		
		UWidget_BlueprintDesigner_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIsBlueprintEditor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsBlueprintEditor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetIsBlueprintEditor(bool mIsBlueprintEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIsBlueprintEditor");
		
		UWidget_BlueprintDesigner_C_SetIsBlueprintEditor_Params params {};
		params.mIsBlueprintEditor = mIsBlueprintEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetBlueprintRecord
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            mBlueprintRecord                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BlueprintDesigner_C::SetBlueprintRecord(const struct FBlueprintRecord& mBlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetBlueprintRecord");
		
		UWidget_BlueprintDesigner_C_SetBlueprintRecord_Params params {};
		params.mBlueprintRecord = mBlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Get Blueprint Record
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (Parm, OutParm)
	 */
	void UWidget_BlueprintDesigner_C::GetBlueprintRecord(struct FBlueprintRecord* BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Get Blueprint Record");
		
		UWidget_BlueprintDesigner_C_GetBlueprintRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueprintRecord != nullptr)
			*BlueprintRecord = params.BlueprintRecord;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_BlueprintDirectoryData              mDirectory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetDirectory(const struct FStruct_BlueprintDirectoryData& mDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectory");
		
		UWidget_BlueprintDesigner_C_SetDirectory_Params params {};
		params.mDirectory = mDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerClosed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BlueprintDesigner_C::OnColorPickerClosed(TArray<struct FLinearColor>* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerClosed");
		
		UWidget_BlueprintDesigner_C_OnColorPickerClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetColor(const struct FLinearColor& mColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetColor");
		
		UWidget_BlueprintDesigner_C_SetColor_Params params {};
		params.mColor = mColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIconID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mIconID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::SetIconID(int32_t mIconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIconID");
		
		UWidget_BlueprintDesigner_C_SetIconID_Params params {};
		params.mIconID = mIconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnIconSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnIconSelected(class UObject* Object, int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnIconSelected");
		
		UWidget_BlueprintDesigner_C_OnIconSelected_Params params {};
		params.Object = Object;
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.FillOutInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::FillOutInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.FillOutInfo");
		
		UWidget_BlueprintDesigner_C_FillOutInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Init");
		
		UWidget_BlueprintDesigner_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Construct");
		
		UWidget_BlueprintDesigner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ClearDesigner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::ClearDesigner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ClearDesigner");
		
		UWidget_BlueprintDesigner_C_ClearDesigner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SaveBlueprint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::SaveBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SaveBlueprint");
		
		UWidget_BlueprintDesigner_C_SaveBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnImageBrowserCancel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::OnImageBrowserCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnImageBrowserCancel");
		
		UWidget_BlueprintDesigner_C_OnImageBrowserCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnEscapePressed");
		
		UWidget_BlueprintDesigner_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_BlueprintDesigner_C::BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnDirectorySelectorClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DirectoryHasBeenSet                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_BlueprintDirectoryData              DirectoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnDirectorySelectorClosed(bool DirectoryHasBeenSet, const struct FStruct_BlueprintDirectoryData& DirectoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnDirectorySelectorClosed");
		
		UWidget_BlueprintDesigner_C_OnDirectorySelectorClosed_Params params {};
		params.DirectoryHasBeenSet = DirectoryHasBeenSet;
		params.DirectoryData = DirectoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::OnColorPickerCanceled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerCanceled");
		
		UWidget_BlueprintDesigner_C_OnColorPickerCanceled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosePromptClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnClosePromptClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosePromptClosed");
		
		UWidget_BlueprintDesigner_C_OnClosePromptClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowClosePrompt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::ShowClosePrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowClosePrompt");
		
		UWidget_BlueprintDesigner_C_ShowClosePrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ExecuteUbergraph_Widget_BlueprintDesigner
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::ExecuteUbergraph_Widget_BlueprintDesigner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ExecuteUbergraph_Widget_BlueprintDesigner");
		
		UWidget_BlueprintDesigner_C_ExecuteUbergraph_Widget_BlueprintDesigner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BlueprintDesigner_C::OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosed__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemoveBlueprint__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BlueprintDesigner_C::OnRemoveBlueprint__DelegateSignature(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemoveBlueprint__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_OnRemoveBlueprint__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnBlueprintUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BlueprintDesigner_C::OnBlueprintUpdated__DelegateSignature(class UObject* blueprintDescriptor, const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnBlueprintUpdated__DelegateSignature");
		
		UWidget_BlueprintDesigner_C_OnBlueprintUpdated__DelegateSignature_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BlueprintDesigner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BlueprintDesigner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BlueprintDesigner.Widget_BlueprintDesigner_C");
		return ptr;
	}

}


