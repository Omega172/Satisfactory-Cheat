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
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetShouldOkayBeEnabled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_ColorPickerPopup_C::GetShouldOkayBeEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetShouldOkayBeEnabled");
		
		UBPW_ColorPickerPopup_C_GetShouldOkayBeEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ColorPickerPopup_C::GetColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetColor");
		
		UBPW_ColorPickerPopup_C_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ColorPickerPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.Construct");
		
		UBPW_ColorPickerPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ColorPickerPreset_Save_C*               SaveWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ColorPickerPopup_C::BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature(class UBPW_ColorPickerPreset_Save_C* SaveWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature");
		
		UBPW_ColorPickerPopup_C_BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature_Params params {};
		params.SaveWidget = SaveWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ColorPickerPopup_C::BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature");
		
		UBPW_ColorPickerPopup_C_BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.ExecuteUbergraph_BPW_ColorPickerPopup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ColorPickerPopup_C::ExecuteUbergraph_BPW_ColorPickerPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.ExecuteUbergraph_BPW_ColorPickerPopup");
		
		UBPW_ColorPickerPopup_C_ExecuteUbergraph_BPW_ColorPickerPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ColorPickerPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ColorPickerPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ColorPickerPopup.BPW_ColorPickerPopup_C");
		return ptr;
	}

}


