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
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.IsMovingTowardTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsMovingTowardTarget                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::IsMovingTowardTarget(bool* IsMovingTowardTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.IsMovingTowardTarget");
		
		ABP_SpitterSpreadShotMainProjectile_C_IsMovingTowardTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMovingTowardTarget != nullptr)
			*IsMovingTowardTarget = params.IsMovingTowardTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ShouldSpawnSubProjectiles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABP_SpitterSpreadShotMainProjectile_C::ShouldSpawnSubProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ShouldSpawnSubProjectiles");
		
		ABP_SpitterSpreadShotMainProjectile_C_ShouldSpawnSubProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.FireSubProjectiles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::FireSubProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.FireSubProjectiles");
		
		ABP_SpitterSpreadShotMainProjectile_C_FireSubProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveBeginPlay");
		
		ABP_SpitterSpreadShotMainProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.PlayExplosionEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.PlayExplosionEffects");
		
		ABP_SpitterSpreadShotMainProjectile_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ReceiveTick");
		
		ABP_SpitterSpreadShotMainProjectile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.OnImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.OnImpact");
		
		ABP_SpitterSpreadShotMainProjectile_C_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.Play Explosion Effects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.Play Explosion Effects");
		
		ABP_SpitterSpreadShotMainProjectile_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpitterSpreadShotMainProjectile_C::ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C.ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile");
		
		ABP_SpitterSpreadShotMainProjectile_C_ExecuteUbergraph_BP_SpitterSpreadShotMainProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpitterSpreadShotMainProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpitterSpreadShotMainProjectile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpitterSpreadShotMainProjectile.BP_SpitterSpreadShotMainProjectile_C");
		return ptr;
	}

}


