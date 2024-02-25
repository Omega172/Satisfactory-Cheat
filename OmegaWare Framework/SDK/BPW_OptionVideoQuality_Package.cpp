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
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateOptionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionVideoQuality_C::UpdateOptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateOptionText");
		
		UBPW_OptionVideoQuality_C_UpdateOptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateSelectionValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionVideoQuality_C::UpdateSelectionValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.UpdateSelectionValue");
		
		UBPW_OptionVideoQuality_C_UpdateSelectionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.HandleSelection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               incrementSelection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueChanged                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionVideoQuality_C::HandleSelection(bool incrementSelection, bool* ValueChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.HandleSelection");
		
		UBPW_OptionVideoQuality_C_HandleSelection_Params params {};
		params.incrementSelection = incrementSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueChanged != nullptr)
			*ValueChanged = params.ValueChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnInitValueController
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPW_OptionVideoQuality_C::OnInitValueController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnInitValueController");
		
		UBPW_OptionVideoQuality_C_OnInitValueController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_OptionVideoQuality_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.OnOptionValueUpdated");
		
		UBPW_OptionVideoQuality_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.ExecuteUbergraph_BPW_OptionVideoQuality
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_OptionVideoQuality_C::ExecuteUbergraph_BPW_OptionVideoQuality(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_OptionVideoQuality.BPW_OptionVideoQuality_C.ExecuteUbergraph_BPW_OptionVideoQuality");
		
		UBPW_OptionVideoQuality_C_ExecuteUbergraph_BPW_OptionVideoQuality_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_OptionVideoQuality_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_OptionVideoQuality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_OptionVideoQuality.BPW_OptionVideoQuality_C");
		return ptr;
	}

}


