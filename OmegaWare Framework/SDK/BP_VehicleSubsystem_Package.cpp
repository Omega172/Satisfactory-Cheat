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
	 * 		Name   -> Function BP_VehicleSubsystem.BP_VehicleSubsystem_C.OnThereBeDeadlocks
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleSubsystem_C::OnThereBeDeadlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleSubsystem.BP_VehicleSubsystem_C.OnThereBeDeadlocks");
		
		ABP_VehicleSubsystem_C_OnThereBeDeadlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleSubsystem.BP_VehicleSubsystem_C.ExecuteUbergraph_BP_VehicleSubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VehicleSubsystem_C::ExecuteUbergraph_BP_VehicleSubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleSubsystem.BP_VehicleSubsystem_C.ExecuteUbergraph_BP_VehicleSubsystem");
		
		ABP_VehicleSubsystem_C_ExecuteUbergraph_BP_VehicleSubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VehicleSubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VehicleSubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleSubsystem.BP_VehicleSubsystem_C");
		return ptr;
	}

}


