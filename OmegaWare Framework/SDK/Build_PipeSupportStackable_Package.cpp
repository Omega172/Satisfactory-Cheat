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
	 * 		Name   -> Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeSupportStackable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.UserConstructionScript");
		
		ABuild_PipeSupportStackable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.PlayConstructSound_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_PipeSupportStackable_C::PlayConstructSound_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.PlayConstructSound_2");
		
		ABuild_PipeSupportStackable_C_PlayConstructSound_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.ExecuteUbergraph_Build_PipeSupportStackable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_PipeSupportStackable_C::ExecuteUbergraph_Build_PipeSupportStackable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_PipeSupportStackable.Build_PipeSupportStackable_C.ExecuteUbergraph_Build_PipeSupportStackable");
		
		ABuild_PipeSupportStackable_C_ExecuteUbergraph_Build_PipeSupportStackable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_PipeSupportStackable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_PipeSupportStackable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_PipeSupportStackable.Build_PipeSupportStackable_C");
		return ptr;
	}

}


