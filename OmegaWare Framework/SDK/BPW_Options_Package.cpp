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
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OverrideSwitching
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGButtonWidget*                             buttonWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_Options_C::OverrideSwitching(class UFGButtonWidget* buttonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OverrideSwitching");
		
		UBPW_Options_C_OverrideSwitching_Params params {};
		params.buttonWidget = buttonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ClearSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ClearSelection");
		
		UBPW_Options_C_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnMenuClose
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CancelParentFunction                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::OnMenuClose(bool* CancelParentFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnMenuClose");
		
		UBPW_Options_C_OnMenuClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CancelParentFunction != nullptr)
			*CancelParentFunction = params.CancelParentFunction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchResult                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Options_C::OnSearch(const class FText& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnSearch");
		
		UBPW_Options_C_OnSearch_Params params {};
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnOptionRowUnhovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGDynamicOptionsRow*                        optionRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::OnOptionRowUnhovered(class UFGDynamicOptionsRow* optionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnOptionRowUnhovered");
		
		UBPW_Options_C_OnOptionRowUnhovered_Params params {};
		params.optionRow = optionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnOptionRowHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGDynamicOptionsRow*                        optionRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::OnOptionRowHovered(class UFGDynamicOptionsRow* optionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnOptionRowHovered");
		
		UBPW_Options_C_OnOptionRowHovered_Params params {};
		params.optionRow = optionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.BindToHoveredUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGDynamicOptionsRow*                        optionRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::BindToHoveredUnhovered(class UFGDynamicOptionsRow* optionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.BindToHoveredUnhovered");
		
		UBPW_Options_C_BindToHoveredUnhovered_Params params {};
		params.optionRow = optionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnOptionCategoryClicked
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::OnOptionCategoryClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnOptionCategoryClicked");
		
		UBPW_Options_C_OnOptionCategoryClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.GetOptionsMenuLanguageEntries
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, class FText>                   LanguageEntries                                            (Parm, OutParm)
	 */
	void UBPW_Options_C::GetOptionsMenuLanguageEntries(TMap<class FString, class FText>* LanguageEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.GetOptionsMenuLanguageEntries");
		
		UBPW_Options_C_GetOptionsMenuLanguageEntries_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LanguageEntries != nullptr)
			*LanguageEntries = params.LanguageEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.HandleUnsavedChanges
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Revert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::HandleUnsavedChanges(bool Revert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.HandleUnsavedChanges");
		
		UBPW_Options_C_HandleUnsavedChanges_Params params {};
		params.Revert = Revert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.GetActiveCategory
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EOptionCategory                                    OptionCategory                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::GetActiveCategory(EOptionCategory* OptionCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.GetActiveCategory");
		
		UBPW_Options_C_GetActiveCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionCategory != nullptr)
			*OptionCategory = params.OptionCategory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ApplyAllDynamicOptionsRows
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::ApplyAllDynamicOptionsRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ApplyAllDynamicOptionsRows");
		
		UBPW_Options_C_ApplyAllDynamicOptionsRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.UpdateAllDynamicOptionRows
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::UpdateAllDynamicOptionRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.UpdateAllDynamicOptionRows");
		
		UBPW_Options_C_UpdateAllDynamicOptionRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.SetupOptionCategories
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::SetupOptionCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.SetupOptionCategories");
		
		UBPW_Options_C_SetupOptionCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.SetupSubmenuOptionsForSpawnAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUserWidget*>                         ActiveOptions                                              (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPW_Options_C::SetupSubmenuOptionsForSpawnAnim(TArray<class UUserWidget*>* ActiveOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.SetupSubmenuOptionsForSpawnAnim");
		
		UBPW_Options_C_SetupSubmenuOptionsForSpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveOptions != nullptr)
			*ActiveOptions = params.ActiveOptions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnDefaultKeybindPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::OnDefaultKeybindPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnDefaultKeybindPressed");
		
		UBPW_Options_C_OnDefaultKeybindPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Options_C::BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_Options_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Options_C::BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_Options_C_BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnMenuExit
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               noAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::OnMenuExit(class UWidget* prevMenu, bool noAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnMenuExit");
		
		UBPW_Options_C_OnMenuExit_Params params {};
		params.prevMenu = prevMenu;
		params.noAnimation = noAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.CheckResolutionChanges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::CheckResolutionChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.CheckResolutionChanges");
		
		UBPW_Options_C_CheckResolutionChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ResolutionChangedAccepted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::ResolutionChangedAccepted(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ResolutionChangedAccepted");
		
		UBPW_Options_C_ResolutionChangedAccepted_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ShowConfirmResetPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::ShowConfirmResetPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ShowConfirmResetPopup");
		
		UBPW_Options_C_ShowConfirmResetPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OpenRequireRestartIfRequired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::OpenRequireRestartIfRequired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OpenRequireRestartIfRequired");
		
		UBPW_Options_C_OpenRequireRestartIfRequired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ApplyChanges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::ApplyChanges(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ApplyChanges");
		
		UBPW_Options_C_ApplyChanges_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Options_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.Destruct");
		
		UBPW_Options_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.CheckUnsavedChanges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::CheckUnsavedChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.CheckUnsavedChanges");
		
		UBPW_Options_C_CheckUnsavedChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnEscape");
		
		UBPW_Options_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ResetActiveSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::ResetActiveSettings(bool confirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ResetActiveSettings");
		
		UBPW_Options_C_ResetActiveSettings_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ShowConfirmChangesPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::ShowConfirmChangesPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ShowConfirmChangesPopup");
		
		UBPW_Options_C_ShowConfirmChangesPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.UpdateTooltipAndResetApplyVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::UpdateTooltipAndResetApplyVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.UpdateTooltipAndResetApplyVisibility");
		
		UBPW_Options_C_UpdateTooltipAndResetApplyVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_Options_C::BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_Options_C_BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Options_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.Construct");
		
		UBPW_Options_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.ExecuteUbergraph_BPW_Options
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Options_C::ExecuteUbergraph_BPW_Options(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.ExecuteUbergraph_BPW_Options");
		
		UBPW_Options_C_ExecuteUbergraph_BPW_Options_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnLanguageMapPopulated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::OnLanguageMapPopulated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnLanguageMapPopulated__DelegateSignature");
		
		UBPW_Options_C_OnLanguageMapPopulated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Options.BPW_Options_C.OnBackClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Options_C::OnBackClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Options.BPW_Options_C.OnBackClicked__DelegateSignature");
		
		UBPW_Options_C_OnBackClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Options_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Options_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Options.BPW_Options_C");
		return ptr;
	}

}


