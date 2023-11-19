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
	 * 		Name   -> Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DestructibleLargeRock_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ReceiveBeginPlay");
		
		ABP_DestructibleLargeRock_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.PlayDestructEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DestructibleLargeRock_C::PlayDestructEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.PlayDestructEffects");
		
		ABP_DestructibleLargeRock_C_PlayDestructEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ExecuteUbergraph_BP_DestructibleLargeRock
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DestructibleLargeRock_C::ExecuteUbergraph_BP_DestructibleLargeRock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DestructibleLargeRock.BP_DestructibleLargeRock_C.ExecuteUbergraph_BP_DestructibleLargeRock");
		
		ABP_DestructibleLargeRock_C_ExecuteUbergraph_BP_DestructibleLargeRock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DestructibleLargeRock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DestructibleLargeRock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DestructibleLargeRock.BP_DestructibleLargeRock_C");
		return ptr;
	}

}


