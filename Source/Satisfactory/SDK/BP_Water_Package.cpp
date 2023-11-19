﻿/**
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
	 * 		Name   -> Function BP_Water.BP_Water_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Water_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Water.BP_Water_C.UserConstructionScript");
		
		ABP_Water_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Water_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Water_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Water.BP_Water_C");
		return ptr;
	}

}


