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
	 * 		Name   -> Function BP_DistanceToCurrentTargetInterruptCheck.BP_DistanceToCurrentTargetInterruptCheck_C.ExecuteCheck
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_DistanceToCurrentTargetInterruptCheck_C::ExecuteCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DistanceToCurrentTargetInterruptCheck.BP_DistanceToCurrentTargetInterruptCheck_C.ExecuteCheck");
		
		UBP_DistanceToCurrentTargetInterruptCheck_C_ExecuteCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DistanceToCurrentTargetInterruptCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DistanceToCurrentTargetInterruptCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DistanceToCurrentTargetInterruptCheck.BP_DistanceToCurrentTargetInterruptCheck_C");
		return ptr;
	}

}


