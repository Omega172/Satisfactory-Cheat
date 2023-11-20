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
	 * 		Name   -> Function BP_DestructibleSmallRock.BP_DestructibleSmallRock_C.PlayDestructEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DestructibleSmallRock_C::PlayDestructEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DestructibleSmallRock.BP_DestructibleSmallRock_C.PlayDestructEffects");
		
		ABP_DestructibleSmallRock_C_PlayDestructEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DestructibleSmallRock.BP_DestructibleSmallRock_C.ExecuteUbergraph_BP_DestructibleSmallRock
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DestructibleSmallRock_C::ExecuteUbergraph_BP_DestructibleSmallRock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DestructibleSmallRock.BP_DestructibleSmallRock_C.ExecuteUbergraph_BP_DestructibleSmallRock");
		
		ABP_DestructibleSmallRock_C_ExecuteUbergraph_BP_DestructibleSmallRock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DestructibleSmallRock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DestructibleSmallRock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleSmallRock.BP_DestructibleSmallRock_C");
		return ptr;
	}

}


