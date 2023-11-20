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
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.StopSFXLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HogRockThrowProjectile_C::StopSFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.StopSFXLoop");
		
		ABP_HogRockThrowProjectile_C_StopSFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.PlaySFXLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HogRockThrowProjectile_C::PlaySFXLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.PlaySFXLoop");
		
		ABP_HogRockThrowProjectile_C_PlaySFXLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.PlayExplosionEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_HogRockThrowProjectile_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.PlayExplosionEffects");
		
		ABP_HogRockThrowProjectile_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HogRockThrowProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ReceiveBeginPlay");
		
		ABP_HogRockThrowProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HogRockThrowProjectile_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ReceiveEndPlay");
		
		ABP_HogRockThrowProjectile_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ExecuteUbergraph_BP_HogRockThrowProjectile
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HogRockThrowProjectile_C::ExecuteUbergraph_BP_HogRockThrowProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C.ExecuteUbergraph_BP_HogRockThrowProjectile");
		
		ABP_HogRockThrowProjectile_C_ExecuteUbergraph_BP_HogRockThrowProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HogRockThrowProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HogRockThrowProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HogRockThrowProjectile.BP_HogRockThrowProjectile_C");
		return ptr;
	}

}


