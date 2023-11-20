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
	 * 		Name   -> Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.PlayExplosionEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_SpitterSingleProjectile_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.PlayExplosionEffects");
		
		ABP_SpitterSingleProjectile_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SpitterSingleProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.ReceiveBeginPlay");
		
		ABP_SpitterSingleProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.ExecuteUbergraph_BP_SpitterSingleProjectile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpitterSingleProjectile_C::ExecuteUbergraph_BP_SpitterSingleProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C.ExecuteUbergraph_BP_SpitterSingleProjectile");
		
		ABP_SpitterSingleProjectile_C_ExecuteUbergraph_BP_SpitterSingleProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpitterSingleProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpitterSingleProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpitterSingleProjectile.BP_SpitterSingleProjectile_C");
		return ptr;
	}

}


