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
	 * 		Name   -> Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.PlayPickupEffect
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_ItemPickup_Spawnable_C::PlayPickupEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.PlayPickupEffect");
		
		ABP_ItemPickup_Spawnable_C_PlayPickupEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.PlaySpawnEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_ItemPickup_Spawnable_C::PlaySpawnEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.PlaySpawnEffect");
		
		ABP_ItemPickup_Spawnable_C_PlaySpawnEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.ExecuteUbergraph_BP_ItemPickup_Spawnable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemPickup_Spawnable_C::ExecuteUbergraph_BP_ItemPickup_Spawnable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C.ExecuteUbergraph_BP_ItemPickup_Spawnable");
		
		ABP_ItemPickup_Spawnable_C_ExecuteUbergraph_BP_ItemPickup_Spawnable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemPickup_Spawnable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemPickup_Spawnable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemPickup_Spawnable.BP_ItemPickup_Spawnable_C");
		return ptr;
	}

}


