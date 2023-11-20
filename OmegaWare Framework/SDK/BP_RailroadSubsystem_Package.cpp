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
	 * 		Name   -> Function BP_RailroadSubsystem.BP_RailroadSubsystem_C.OnTrainsCollided
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AFGTrain*                                    first                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AFGTrain*                                    Second                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RailroadSubsystem_C::OnTrainsCollided(class AFGTrain* first, class AFGTrain* Second)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RailroadSubsystem.BP_RailroadSubsystem_C.OnTrainsCollided");
		
		ABP_RailroadSubsystem_C_OnTrainsCollided_Params params {};
		params.first = first;
		params.Second = Second;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_RailroadSubsystem.BP_RailroadSubsystem_C.ExecuteUbergraph_BP_RailroadSubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RailroadSubsystem_C::ExecuteUbergraph_BP_RailroadSubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RailroadSubsystem.BP_RailroadSubsystem_C.ExecuteUbergraph_BP_RailroadSubsystem");
		
		ABP_RailroadSubsystem_C_ExecuteUbergraph_BP_RailroadSubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RailroadSubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RailroadSubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailroadSubsystem.BP_RailroadSubsystem_C");
		return ptr;
	}

}


