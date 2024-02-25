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
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ShowMappingConflictPopup
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FEnhancedActionKeyMapping>           HardConflicts                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<struct FEnhancedActionKeyMapping>           SoftConflicts                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UBPW_EnhancedKeybindButton_C::ShowMappingConflictPopup(TArray<struct FEnhancedActionKeyMapping>* HardConflicts, TArray<struct FEnhancedActionKeyMapping>* SoftConflicts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ShowMappingConflictPopup");
		
		UBPW_EnhancedKeybindButton_C_ShowMappingConflictPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HardConflicts != nullptr)
			*HardConflicts = params.HardConflicts;
		if (SoftConflicts != nullptr)
			*SoftConflicts = params.SoftConflicts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetModifierKeysPressed
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FInputEvent                                 InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FKey>                                ModifierKeys                                               (Parm, OutParm)
	 */
	void UBPW_EnhancedKeybindButton_C::GetModifierKeysPressed(const struct FInputEvent& InputEvent, TArray<struct FKey>* ModifierKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetModifierKeysPressed");
		
		UBPW_EnhancedKeybindButton_C_GetModifierKeysPressed_Params params {};
		params.InputEvent = InputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifierKeys != nullptr)
			*ModifierKeys = params.ModifierKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetKeyMappingDisplayName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UBPW_EnhancedKeybindButton_C::GetKeyMappingDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.GetKeyMappingDisplayName");
		
		UBPW_EnhancedKeybindButton_C_GetKeyMappingDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.UpdateKeyMapping
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_EnhancedKeybindButton_C::UpdateKeyMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.UpdateKeyMapping");
		
		UBPW_EnhancedKeybindButton_C_UpdateKeyMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.RebindKey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_EnhancedKeybindButton_C::RebindKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.RebindKey");
		
		UBPW_EnhancedKeybindButton_C_RebindKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.KeyBindingOverrideConfirmed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Confirmed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_EnhancedKeybindButton_C::KeyBindingOverrideConfirmed(bool Confirmed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.KeyBindingOverrideConfirmed");
		
		UBPW_EnhancedKeybindButton_C_KeyBindingOverrideConfirmed_Params params {};
		params.Confirmed = Confirmed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.HandleInput
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputEvent                                 InputEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FKey                                        keyPressed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_EnhancedKeybindButton_C::HandleInput(const struct FInputEvent& InputEvent, const struct FKey& keyPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.HandleInput");
		
		UBPW_EnhancedKeybindButton_C_HandleInput_Params params {};
		params.InputEvent = InputEvent;
		params.keyPressed = keyPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_EnhancedKeybindButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.Construct");
		
		UBPW_EnhancedKeybindButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_EnhancedKeybindButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_EnhancedKeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_EnhancedKeybindButton_C::BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_EnhancedKeybindButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ExecuteUbergraph_BPW_EnhancedKeybindButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_EnhancedKeybindButton_C::ExecuteUbergraph_BPW_EnhancedKeybindButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C.ExecuteUbergraph_BPW_EnhancedKeybindButton");
		
		UBPW_EnhancedKeybindButton_C_ExecuteUbergraph_BPW_EnhancedKeybindButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_EnhancedKeybindButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_EnhancedKeybindButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_EnhancedKeybindButton.BPW_EnhancedKeybindButton_C");
		return ptr;
	}

}


