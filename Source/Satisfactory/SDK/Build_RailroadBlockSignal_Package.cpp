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
	 * 		Name   -> Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.OnVisualStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_RailroadBlockSignal_C::OnVisualStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.OnVisualStateChanged");
		
		ABuild_RailroadBlockSignal_C_OnVisualStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.OnDrawDebugVisualState
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABuild_RailroadBlockSignal_C::OnDrawDebugVisualState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.OnDrawDebugVisualState");
		
		ABuild_RailroadBlockSignal_C_OnDrawDebugVisualState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.ExecuteUbergraph_Build_RailroadBlockSignal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_RailroadBlockSignal_C::ExecuteUbergraph_Build_RailroadBlockSignal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadBlockSignal.Build_RailroadBlockSignal_C.ExecuteUbergraph_Build_RailroadBlockSignal");
		
		ABuild_RailroadBlockSignal_C_ExecuteUbergraph_Build_RailroadBlockSignal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_RailroadBlockSignal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_RailroadBlockSignal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_RailroadBlockSignal.Build_RailroadBlockSignal_C");
		return ptr;
	}

}


