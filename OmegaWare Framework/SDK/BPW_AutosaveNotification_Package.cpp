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
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UnMinimizeNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AutosaveNotification_C::UnMinimizeNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UnMinimizeNotification");
		
		UBPW_AutosaveNotification_C_UnMinimizeNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.SetupTimeUntilAutosave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AutosaveNotification_C::SetupTimeUntilAutosave(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.SetupTimeUntilAutosave");
		
		UBPW_AutosaveNotification_C_SetupTimeUntilAutosave_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AutosaveNotification_C::OnAutosaveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveFinished");
		
		UBPW_AutosaveNotification_C_OnAutosaveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveInProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AutosaveNotification_C::OnAutosaveInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveInProgress");
		
		UBPW_AutosaveNotification_C_OnAutosaveInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveStarting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TimeUntilAutosave                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AutosaveNotification_C::OnAutosaveStarting(double TimeUntilAutosave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.OnAutosaveStarting");
		
		UBPW_AutosaveNotification_C_OnAutosaveStarting_Params params {};
		params.TimeUntilAutosave = TimeUntilAutosave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_AutosaveNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.Construct");
		
		UBPW_AutosaveNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UpdateAutosaveTimerText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_AutosaveNotification_C::UpdateAutosaveTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.UpdateAutosaveTimerText");
		
		UBPW_AutosaveNotification_C_UpdateAutosaveTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.CloseNotificationDelayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AutosaveNotification_C::CloseNotificationDelayed(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.CloseNotificationDelayed");
		
		UBPW_AutosaveNotification_C_CloseNotificationDelayed_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.ExecuteUbergraph_BPW_AutosaveNotification
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_AutosaveNotification_C::ExecuteUbergraph_BPW_AutosaveNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_AutosaveNotification.BPW_AutosaveNotification_C.ExecuteUbergraph_BPW_AutosaveNotification");
		
		UBPW_AutosaveNotification_C_ExecuteUbergraph_BPW_AutosaveNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_AutosaveNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_AutosaveNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_AutosaveNotification.BPW_AutosaveNotification_C");
		return ptr;
	}

}


