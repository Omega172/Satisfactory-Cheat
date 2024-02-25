﻿/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.ShouldSave
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABP_NobeliskGas_C::ShouldSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.ShouldSave");
		
		ABP_NobeliskGas_C_ShouldSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.GatherDependencies
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UObject*>                             out_dependentObjects                                       (Parm, OutParm)
	 */
	void ABP_NobeliskGas_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.GatherDependencies");
		
		ABP_NobeliskGas_C_GatherDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_dependentObjects != nullptr)
			*out_dependentObjects = params.out_dependentObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.NeedTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_NobeliskGas_C::NeedTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.NeedTransform");
		
		ABP_NobeliskGas_C_NeedTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.PlayExplosionEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_NobeliskGas_C::PlayExplosionEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.PlayExplosionEffects");
		
		ABP_NobeliskGas_C_PlayExplosionEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NobeliskGas_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.ReceiveHit");
		
		ABP_NobeliskGas_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_NobeliskGas_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.OnExplode");
		
		ABP_NobeliskGas_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.OnImpact
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_NobeliskGas_C::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.OnImpact");
		
		ABP_NobeliskGas_C_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_NobeliskGas.BP_NobeliskGas_C.ExecuteUbergraph_BP_NobeliskGas
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NobeliskGas_C::ExecuteUbergraph_BP_NobeliskGas(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NobeliskGas.BP_NobeliskGas_C.ExecuteUbergraph_BP_NobeliskGas");
		
		ABP_NobeliskGas_C_ExecuteUbergraph_BP_NobeliskGas_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NobeliskGas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NobeliskGas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NobeliskGas.BP_NobeliskGas_C");
		return ptr;
	}

}


