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
	 * 		Name   -> Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPowerCircuitFuseTriggered_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.Construct");
		
		UPowerCircuitFuseTriggered_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.ExecuteUbergraph_PowerCircuitFuseTriggered
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPowerCircuitFuseTriggered_C::ExecuteUbergraph_PowerCircuitFuseTriggered(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C.ExecuteUbergraph_PowerCircuitFuseTriggered");
		
		UPowerCircuitFuseTriggered_C_ExecuteUbergraph_PowerCircuitFuseTriggered_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPowerCircuitFuseTriggered_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerCircuitFuseTriggered_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PowerCircuitFuseTriggered.PowerCircuitFuseTriggered_C");
		return ptr;
	}

}


