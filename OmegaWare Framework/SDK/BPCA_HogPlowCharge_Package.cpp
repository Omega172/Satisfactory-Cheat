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
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeHitSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::PlayPlowChargeHitSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeHitSFX");
		
		UBPCA_HogPlowCharge_C_PlayPlowChargeHitSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.StopPlowChargeSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::StopPlowChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.StopPlowChargeSFX");
		
		UBPCA_HogPlowCharge_C_StopPlowChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::PlayPlowChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.PlayPlowChargeSFX");
		
		UBPCA_HogPlowCharge_C_PlayPlowChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.DestroyChargeEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::DestroyChargeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.DestroyChargeEffect");
		
		UBPCA_HogPlowCharge_C_DestroyChargeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.SpawnChargeEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::SpawnChargeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.SpawnChargeEffect");
		
		UBPCA_HogPlowCharge_C_SpawnChargeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.BeginCharge
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::BeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.BeginCharge");
		
		UBPCA_HogPlowCharge_C_BeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.EndCharge
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPCA_HogPlowCharge_C::EndCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.EndCharge");
		
		UBPCA_HogPlowCharge_C_EndCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.CleanupAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               actionSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogPlowCharge_C::CleanupAction(bool actionSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.CleanupAction");
		
		UBPCA_HogPlowCharge_C_CleanupAction_Params params {};
		params.actionSuccess = actionSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ProcessHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterBase*                            hitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPCA_HogPlowCharge_C::ProcessHit(class AFGCharacterBase* hitCharacter, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ProcessHit");
		
		UBPCA_HogPlowCharge_C_ProcessHit_Params params {};
		params.hitCharacter = hitCharacter;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogPlowCharge_C::ActionTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ActionTick");
		
		UBPCA_HogPlowCharge_C_ActionTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ExecuteUbergraph_BPCA_HogPlowCharge
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogPlowCharge_C::ExecuteUbergraph_BPCA_HogPlowCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogPlowCharge.BPCA_HogPlowCharge_C.ExecuteUbergraph_BPCA_HogPlowCharge");
		
		UBPCA_HogPlowCharge_C_ExecuteUbergraph_BPCA_HogPlowCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_HogPlowCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_HogPlowCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_HogPlowCharge.BPCA_HogPlowCharge_C");
		return ptr;
	}

}


