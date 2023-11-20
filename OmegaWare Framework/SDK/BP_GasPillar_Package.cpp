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
	 * 		Name   -> Function BP_GasPillar.BP_GasPillar_C.PlayImpactAudio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GasPillar_C::PlayImpactAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GasPillar.BP_GasPillar_C.PlayImpactAudio");
		
		ABP_GasPillar_C_PlayImpactAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_GasPillar.BP_GasPillar_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GasPillar_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GasPillar.BP_GasPillar_C.ReceiveDestroyed");
		
		ABP_GasPillar_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_GasPillar.BP_GasPillar_C.PlayDestructEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GasPillar_C::PlayDestructEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GasPillar.BP_GasPillar_C.PlayDestructEffects");
		
		ABP_GasPillar_C_PlayDestructEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_GasPillar.BP_GasPillar_C.OnChaosPhysicsCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FChaosPhysicsCollisionInfo                  CollisionInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_GasPillar_C::OnChaosPhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GasPillar.BP_GasPillar_C.OnChaosPhysicsCollision");
		
		ABP_GasPillar_C_OnChaosPhysicsCollision_Params params {};
		params.CollisionInfo = CollisionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_GasPillar.BP_GasPillar_C.ExecuteUbergraph_BP_GasPillar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GasPillar_C::ExecuteUbergraph_BP_GasPillar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GasPillar.BP_GasPillar_C.ExecuteUbergraph_BP_GasPillar");
		
		ABP_GasPillar_C_ExecuteUbergraph_BP_GasPillar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GasPillar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GasPillar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GasPillar.BP_GasPillar_C");
		return ptr;
	}

}


