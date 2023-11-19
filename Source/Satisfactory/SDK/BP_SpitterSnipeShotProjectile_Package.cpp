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
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlaySFXImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SpitterSnipeShotProjectile_C::PlaySFXImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlaySFXImpact");
		
		ABP_SpitterSnipeShotProjectile_C_PlaySFXImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.StopSFXLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SpitterSnipeShotProjectile_C::StopSFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.StopSFXLoop");
		
		ABP_SpitterSnipeShotProjectile_C_StopSFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlaySFXLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SpitterSnipeShotProjectile_C::PlaySFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlaySFXLoop");
		
		ABP_SpitterSnipeShotProjectile_C_PlaySFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SpitterSnipeShotProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.ReceiveBeginPlay");
		
		ABP_SpitterSnipeShotProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlayExplosionEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_SpitterSnipeShotProjectile_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.PlayExplosionEffects");
		
		ABP_SpitterSnipeShotProjectile_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.ExecuteUbergraph_BP_SpitterSnipeShotProjectile
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpitterSnipeShotProjectile_C::ExecuteUbergraph_BP_SpitterSnipeShotProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C.ExecuteUbergraph_BP_SpitterSnipeShotProjectile");
		
		ABP_SpitterSnipeShotProjectile_C_ExecuteUbergraph_BP_SpitterSnipeShotProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpitterSnipeShotProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpitterSnipeShotProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpitterSnipeShotProjectile.BP_SpitterSnipeShotProjectile_C");
		return ptr;
	}

}


