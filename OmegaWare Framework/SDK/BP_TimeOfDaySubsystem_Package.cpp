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
	 * 		Name   -> Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.CheckSpeedMultiplierReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TimeOfDaySubsystem_C::CheckSpeedMultiplierReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.CheckSpeedMultiplierReset");
		
		ABP_TimeOfDaySubsystem_C_CheckSpeedMultiplierReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_TimeOfDaySubsystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ReceiveBeginPlay");
		
		ABP_TimeOfDaySubsystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.SetTimeSpeedMultiplierResetTime
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            resetTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDaySubsystem_C::SetTimeSpeedMultiplierResetTime(int32_t resetTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.SetTimeSpeedMultiplierResetTime");
		
		ABP_TimeOfDaySubsystem_C_SetTimeSpeedMultiplierResetTime_Params params {};
		params.resetTime = resetTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ExecuteUbergraph_BP_TimeOfDaySubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDaySubsystem_C::ExecuteUbergraph_BP_TimeOfDaySubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ExecuteUbergraph_BP_TimeOfDaySubsystem");
		
		ABP_TimeOfDaySubsystem_C_ExecuteUbergraph_BP_TimeOfDaySubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TimeOfDaySubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TimeOfDaySubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C");
		return ptr;
	}

}


