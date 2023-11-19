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
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnDropdownSelectionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_AntiAliasMethod_C::OnDropdownSelectionChanged(ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnDropdownSelectionChanged");
		
		UBPW_Option_AntiAliasMethod_C_OnDropdownSelectionChanged_Params params {};
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.UpdateCurrentValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_AntiAliasMethod_C::UpdateCurrentValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.UpdateCurrentValue");
		
		UBPW_Option_AntiAliasMethod_C_UpdateCurrentValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_AntiAliasMethod_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Construct");
		
		UBPW_Option_AntiAliasMethod_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnUpscalingMethodChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      updatedCvar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_AntiAliasMethod_C::OnUpscalingMethodChanged(const class FString& updatedCvar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnUpscalingMethodChanged");
		
		UBPW_Option_AntiAliasMethod_C_OnUpscalingMethodChanged_Params params {};
		params.updatedCvar = updatedCvar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_AntiAliasMethod_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Destruct");
		
		UBPW_Option_AntiAliasMethod_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.ExecuteUbergraph_BPW_Option_AntiAliasMethod
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_AntiAliasMethod_C::ExecuteUbergraph_BPW_Option_AntiAliasMethod(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.ExecuteUbergraph_BPW_Option_AntiAliasMethod");
		
		UBPW_Option_AntiAliasMethod_C_ExecuteUbergraph_BPW_Option_AntiAliasMethod_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Option_AntiAliasMethod_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Option_AntiAliasMethod_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C");
		return ptr;
	}

}


