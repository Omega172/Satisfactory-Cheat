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
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingApply
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_QuickSwitchLanguage_C::IsPendingApply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingApply");
		
		UBPW_Option_QuickSwitchLanguage_C_IsPendingApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingRestart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPW_Option_QuickSwitchLanguage_C::IsPendingRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.IsPendingRestart");
		
		UBPW_Option_QuickSwitchLanguage_C_IsPendingRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetLanguage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedLanguage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_QuickSwitchLanguage_C::SetLanguage(const class FString& SelectedLanguage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetLanguage");
		
		UBPW_Option_QuickSwitchLanguage_C_SetLanguage_Params params {};
		params.SelectedLanguage = SelectedLanguage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetupLanguageDropdown
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_QuickSwitchLanguage_C::SetupLanguageDropdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.SetupLanguageDropdown");
		
		UBPW_Option_QuickSwitchLanguage_C_SetupLanguageDropdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_QuickSwitchLanguage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.PreConstruct");
		
		UBPW_Option_QuickSwitchLanguage_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.OnOptionApplied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Option_QuickSwitchLanguage_C::OnOptionApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.OnOptionApplied");
		
		UBPW_Option_QuickSwitchLanguage_C_OnOptionApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.ExecuteUbergraph_BPW_Option_QuickSwitchLanguage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Option_QuickSwitchLanguage_C::ExecuteUbergraph_BPW_Option_QuickSwitchLanguage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C.ExecuteUbergraph_BPW_Option_QuickSwitchLanguage");
		
		UBPW_Option_QuickSwitchLanguage_C_ExecuteUbergraph_BPW_Option_QuickSwitchLanguage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Option_QuickSwitchLanguage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Option_QuickSwitchLanguage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Option_QuickSwitchLanguage.BPW_Option_QuickSwitchLanguage_C");
		return ptr;
	}

}


