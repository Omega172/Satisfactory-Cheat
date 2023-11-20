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
	 * 		Name   -> Function PowerCircuitBatteryWarning.PowerCircuitBatteryWarning_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPowerCircuitBatteryWarning_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerCircuitBatteryWarning.PowerCircuitBatteryWarning_C.Construct");
		
		UPowerCircuitBatteryWarning_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function PowerCircuitBatteryWarning.PowerCircuitBatteryWarning_C.ExecuteUbergraph_PowerCircuitBatteryWarning
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPowerCircuitBatteryWarning_C::ExecuteUbergraph_PowerCircuitBatteryWarning(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerCircuitBatteryWarning.PowerCircuitBatteryWarning_C.ExecuteUbergraph_PowerCircuitBatteryWarning");
		
		UPowerCircuitBatteryWarning_C_ExecuteUbergraph_PowerCircuitBatteryWarning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerCircuitBatteryWarning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerCircuitBatteryWarning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PowerCircuitBatteryWarning.PowerCircuitBatteryWarning_C");
		return ptr;
	}

}


