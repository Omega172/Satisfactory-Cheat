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
	 * 		Name   -> Function Build_RailroadTrack.Build_RailroadTrack_C.GetBuildEffectTemplate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	void ABuild_RailroadTrack_C::GetBuildEffectTemplate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrack.Build_RailroadTrack_C.GetBuildEffectTemplate");
		
		ABuild_RailroadTrack_C_GetBuildEffectTemplate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_RailroadTrack.Build_RailroadTrack_C.PlayConstructSound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABuild_RailroadTrack_C::PlayConstructSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrack.Build_RailroadTrack_C.PlayConstructSound");
		
		ABuild_RailroadTrack_C_PlayConstructSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_RailroadTrack.Build_RailroadTrack_C.ExecuteUbergraph_Build_RailroadTrack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_RailroadTrack_C::ExecuteUbergraph_Build_RailroadTrack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_RailroadTrack.Build_RailroadTrack_C.ExecuteUbergraph_Build_RailroadTrack");
		
		ABuild_RailroadTrack_C_ExecuteUbergraph_Build_RailroadTrack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_RailroadTrack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_RailroadTrack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_RailroadTrack.Build_RailroadTrack_C");
		return ptr;
	}

}


