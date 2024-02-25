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
	 * 		Name   -> Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.CanBeSampled
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_RailroadTrackIntegrated_C::CanBeSampled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.CanBeSampled");
		
		ABuild_RailroadTrackIntegrated_C_CanBeSampled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.CanDismantle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABuild_RailroadTrackIntegrated_C::CanDismantle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.CanDismantle");
		
		ABuild_RailroadTrackIntegrated_C_CanDismantle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.PlayConstructSound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABuild_RailroadTrackIntegrated_C::PlayConstructSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.PlayConstructSound");
		
		ABuild_RailroadTrackIntegrated_C_PlayConstructSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.ExecuteUbergraph_Build_RailroadTrackIntegrated
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_RailroadTrackIntegrated_C::ExecuteUbergraph_Build_RailroadTrackIntegrated(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C.ExecuteUbergraph_Build_RailroadTrackIntegrated");
		
		ABuild_RailroadTrackIntegrated_C_ExecuteUbergraph_Build_RailroadTrackIntegrated_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_RailroadTrackIntegrated_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_RailroadTrackIntegrated_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_RailroadTrackIntegrated.Build_RailroadTrackIntegrated_C");
		return ptr;
	}

}


