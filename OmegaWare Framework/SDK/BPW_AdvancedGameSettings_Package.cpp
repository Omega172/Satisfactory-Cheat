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
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.MarkOptionAsDirty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::MarkOptionAsDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.MarkOptionAsDirty");
		
		UBPW_AdvancedGameSettings_C_MarkOptionAsDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SearchText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_AdvancedGameSettings_C::OnSearch(const class FText& SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnSearch");
		
		UBPW_AdvancedGameSettings_C_OnSearch_Params params {};
		params.SearchText = SearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowUnhovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGDynamicOptionsRow*                        optionRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::OnOptionRowUnhovered(class UFGDynamicOptionsRow* optionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowUnhovered");
		
		UBPW_AdvancedGameSettings_C_OnOptionRowUnhovered_Params params {};
		params.optionRow = optionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGDynamicOptionsRow*                        optionRow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::OnOptionRowHovered(class UFGDynamicOptionsRow* optionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowHovered");
		
		UBPW_AdvancedGameSettings_C_OnOptionRowHovered_Params params {};
		params.optionRow = optionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnGameModeCategoryClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::OnGameModeCategoryClicked(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnGameModeCategoryClicked");
		
		UBPW_AdvancedGameSettings_C_OnGameModeCategoryClicked_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.SetupGameModeCategories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::SetupGameModeCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.SetupGameModeCategories");
		
		UBPW_AdvancedGameSettings_C_SetupGameModeCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmChangesPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::ShowConfirmChangesPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmChangesPopup");
		
		UBPW_AdvancedGameSettings_C_ShowConfirmChangesPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ApplyChanges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::ApplyChanges(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ApplyChanges");
		
		UBPW_AdvancedGameSettings_C_ApplyChanges_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmResetPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::ShowConfirmResetPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmResetPopup");
		
		UBPW_AdvancedGameSettings_C_ShowConfirmResetPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ResetChanges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ConfirmClicked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::ResetChanges(bool ConfirmClicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ResetChanges");
		
		UBPW_AdvancedGameSettings_C_ResetChanges_Params params {};
		params.ConfirmClicked = ConfirmClicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnEscape
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::OnEscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnEscape");
		
		UBPW_AdvancedGameSettings_C_OnEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.Construct");
		
		UBPW_AdvancedGameSettings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.PreConstruct");
		
		UBPW_AdvancedGameSettings_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_AdvancedGameSettings_C::BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ExecuteUbergraph_BPW_AdvancedGameSettings
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AdvancedGameSettings_C::ExecuteUbergraph_BPW_AdvancedGameSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ExecuteUbergraph_BPW_AdvancedGameSettings");
		
		UBPW_AdvancedGameSettings_C_ExecuteUbergraph_BPW_AdvancedGameSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnResetClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::OnResetClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnResetClicked__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_OnResetClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnBackButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AdvancedGameSettings_C::OnBackButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnBackButtonClicked__DelegateSignature");
		
		UBPW_AdvancedGameSettings_C_OnBackButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AdvancedGameSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AdvancedGameSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C");
		return ptr;
	}

}


