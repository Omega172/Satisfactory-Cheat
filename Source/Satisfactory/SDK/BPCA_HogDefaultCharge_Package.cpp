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
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeHitSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::PlayChargeHitSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeHitSFX");
		
		UBPCA_HogDefaultCharge_C_PlayChargeHitSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.StopChargeSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::StopChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.StopChargeSFX");
		
		UBPCA_HogDefaultCharge_C_StopChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::PlayChargeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.PlayChargeSFX");
		
		UBPCA_HogDefaultCharge_C_PlayChargeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.DestroyChargeEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::DestroyChargeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.DestroyChargeEffect");
		
		UBPCA_HogDefaultCharge_C_DestroyChargeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.SpawnChargeEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::SpawnChargeEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.SpawnChargeEffect");
		
		UBPCA_HogDefaultCharge_C_SpawnChargeEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.CleanupAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               actionSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogDefaultCharge_C::CleanupAction(bool actionSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.CleanupAction");
		
		UBPCA_HogDefaultCharge_C_CleanupAction_Params params {};
		params.actionSuccess = actionSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.EndCharge
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::EndCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.EndCharge");
		
		UBPCA_HogDefaultCharge_C_EndCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ProcessHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterBase*                            hitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBPCA_HogDefaultCharge_C::ProcessHit(class AFGCharacterBase* hitCharacter, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ProcessHit");
		
		UBPCA_HogDefaultCharge_C_ProcessHit_Params params {};
		params.hitCharacter = hitCharacter;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.BeginCharge
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPCA_HogDefaultCharge_C::BeginCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.BeginCharge");
		
		UBPCA_HogDefaultCharge_C_BeginCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogDefaultCharge_C::ActionTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ActionTick");
		
		UBPCA_HogDefaultCharge_C_ActionTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ExecuteUbergraph_BPCA_HogDefaultCharge
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCA_HogDefaultCharge_C::ExecuteUbergraph_BPCA_HogDefaultCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C.ExecuteUbergraph_BPCA_HogDefaultCharge");
		
		UBPCA_HogDefaultCharge_C_ExecuteUbergraph_BPCA_HogDefaultCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCA_HogDefaultCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCA_HogDefaultCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCA_HogDefaultCharge.BPCA_HogDefaultCharge_C");
		return ptr;
	}

}


