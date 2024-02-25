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
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.IsCreativeModeEnabled
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::IsCreativeModeEnabled(bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.IsCreativeModeEnabled");
		
		UWidget_PlayMenu_Alpha_C_IsCreativeModeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetAdvancedGameSettingsVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::SetAdvancedGameSettingsVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetAdvancedGameSettingsVisibility");
		
		UWidget_PlayMenu_Alpha_C_SetAdvancedGameSettingsVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuClose
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CancelParentFunction                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::OnMenuClose(bool* CancelParentFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuClose");
		
		UWidget_PlayMenu_Alpha_C_OnMenuClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CancelParentFunction != nullptr)
			*CancelParentFunction = params.CancelParentFunction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.UpdateCreativeModeEnabledFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CreativeModeEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::UpdateCreativeModeEnabledFeedback(bool CreativeModeEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.UpdateCreativeModeEnabledFeedback");
		
		UWidget_PlayMenu_Alpha_C_UpdateCreativeModeEnabledFeedback_Params params {};
		params.CreativeModeEnabled = CreativeModeEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocUnhovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::OnStartingLocUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocUnhovered");
		
		UWidget_PlayMenu_Alpha_C_OnStartingLocUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::OnStartingLocHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocHovered");
		
		UWidget_PlayMenu_Alpha_C_OnStartingLocHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckStartingTierSetSkipIntro
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::CheckStartingTierSetSkipIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckStartingTierSetSkipIntro");
		
		UWidget_PlayMenu_Alpha_C_CheckStartingTierSetSkipIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.InitStartingLocs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::InitStartingLocs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.InitStartingLocs");
		
		UWidget_PlayMenu_Alpha_C_InitStartingLocs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetStartButtonEnable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::SetStartButtonEnable(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetStartButtonEnable");
		
		UWidget_PlayMenu_Alpha_C_SetStartButtonEnable_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckSessionNameForError
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::CheckSessionNameForError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckSessionNameForError");
		
		UWidget_PlayMenu_Alpha_C_CheckSessionNameForError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetPlayButtonError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_PlayMenu_Alpha_C::SetPlayButtonError(bool Error, const class FText& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetPlayButtonError");
		
		UWidget_PlayMenu_Alpha_C_SetPlayButtonError_Params params {};
		params.Error = Error;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature(const class FString& SelectedOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature_Params params {};
		params.SelectedOption = SelectedOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartLocClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartingLocationsDataStruct                mStartingLocs                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::OnStartLocClicked(const struct FStartingLocationsDataStruct& mStartingLocs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartLocClicked");
		
		UWidget_PlayMenu_Alpha_C_OnStartLocClicked_Params params {};
		params.mStartingLocs = mStartingLocs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.PreConstruct");
		
		UWidget_PlayMenu_Alpha_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuEnter
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     prevMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::OnMenuEnter(class UWidget* prevMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuEnter");
		
		UWidget_PlayMenu_Alpha_C_OnMenuEnter_Params params {};
		params.prevMenu = prevMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.Construct");
		
		UWidget_PlayMenu_Alpha_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEscape");
		
		UWidget_PlayMenu_Alpha_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.EnterAdvancedGameSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::EnterAdvancedGameSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.EnterAdvancedGameSettings");
		
		UWidget_PlayMenu_Alpha_C_EnterAdvancedGameSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEnterCreativeModePopupClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::OnEnterCreativeModePopupClosed(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEnterCreativeModePopupClosed");
		
		UWidget_PlayMenu_Alpha_C_OnEnterCreativeModePopupClosed_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_PlayMenu_Alpha_C::BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.ExecuteUbergraph_Widget_PlayMenu_Alpha
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayMenu_Alpha_C::ExecuteUbergraph_Widget_PlayMenu_Alpha(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.ExecuteUbergraph_Widget_PlayMenu_Alpha");
		
		UWidget_PlayMenu_Alpha_C_ExecuteUbergraph_Widget_PlayMenu_Alpha_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PlayMenu_Alpha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PlayMenu_Alpha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C");
		return ptr;
	}

}


