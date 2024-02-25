/**
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
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.SpawnCostEffectActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  SpawnLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetExtent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABuildEffect_Default_C::SpawnCostEffectActor(const struct FTransform& SpawnLocation, const struct FVector& TargetLocation, float TargetExtent, class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.SpawnCostEffectActor");
		
		ABuildEffect_Default_C_SpawnCostEffectActor_Params params {};
		params.SpawnLocation = SpawnLocation;
		params.TargetLocation = TargetLocation;
		params.TargetExtent = TargetExtent;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.OnReached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuildEffect_Default_C::OnReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.OnReached");
		
		ABuildEffect_Default_C_OnReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.PlayThumbSound
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuildEffect_Default_C::PlayThumbSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.PlayThumbSound");
		
		ABuildEffect_Default_C_PlayThumbSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuildEffect_Default_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.ReceiveBeginPlay");
		
		ABuildEffect_Default_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.UpdateSplineVFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuildEffect_Default_C::UpdateSplineVFX(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.UpdateSplineVFX");
		
		ABuildEffect_Default_C_UpdateSplineVFX_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BuildEffect_Default.BuildEffect_Default_C.ExecuteUbergraph_BuildEffect_Default
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuildEffect_Default_C::ExecuteUbergraph_BuildEffect_Default(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BuildEffect_Default.BuildEffect_Default_C.ExecuteUbergraph_BuildEffect_Default");
		
		ABuildEffect_Default_C_ExecuteUbergraph_BuildEffect_Default_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuildEffect_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuildEffect_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BuildEffect_Default.BuildEffect_Default_C");
		return ptr;
	}

}


