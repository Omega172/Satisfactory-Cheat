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
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.UpdateResolutionValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::UpdateResolutionValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.UpdateResolutionValue");
		
		UBPW_Option_ScreenResolution_C_UpdateResolutionValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingApply
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_ScreenResolution_C::IsPendingApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingApply");
		
		UBPW_Option_ScreenResolution_C_IsPendingApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingRestart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_ScreenResolution_C::IsPendingRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.IsPendingRestart");
		
		UBPW_Option_ScreenResolution_C_IsPendingRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.CacheCurrentScreenResolution
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::CacheCurrentScreenResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.CacheCurrentScreenResolution");
		
		UBPW_Option_ScreenResolution_C_CacheCurrentScreenResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetResolution
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedResolution                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_ScreenResolution_C::SetResolution(const class FString& SelectedResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetResolution");
		
		UBPW_Option_ScreenResolution_C_SetResolution_Params params {};
		params.SelectedResolution = SelectedResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetupResolutionDropdown
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::SetupResolutionDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.SetupResolutionDropdown");
		
		UBPW_Option_ScreenResolution_C_SetupResolutionDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_ScreenResolution_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.PreConstruct");
		
		UBPW_Option_ScreenResolution_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionApplied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::OnOptionApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionApplied");
		
		UBPW_Option_ScreenResolution_C_OnOptionApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionReverted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::OnOptionReverted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionReverted");
		
		UBPW_Option_ScreenResolution_C_OnOptionReverted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.Construct");
		
		UBPW_Option_ScreenResolution_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionValueUpdated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_ScreenResolution_C::OnOptionValueUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.OnOptionValueUpdated");
		
		UBPW_Option_ScreenResolution_C_OnOptionValueUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.ExecuteUbergraph_BPW_Option_ScreenResolution
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_ScreenResolution_C::ExecuteUbergraph_BPW_Option_ScreenResolution(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C.ExecuteUbergraph_BPW_Option_ScreenResolution");
		
		UBPW_Option_ScreenResolution_C_ExecuteUbergraph_BPW_Option_ScreenResolution_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Option_ScreenResolution_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Option_ScreenResolution_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C");
		return ptr;
	}

}


