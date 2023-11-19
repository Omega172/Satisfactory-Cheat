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
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.SpeedKmH
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TrainSoundComponent_C::SpeedKmH(double* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.SpeedKmH");
		
		UBP_TrainSoundComponent_C_SpeedKmH_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnThrottleReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnThrottleReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnThrottleReleased");
		
		UBP_TrainSoundComponent_C_OnThrottleReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnThrottleApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnThrottleApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnThrottleApplied");
		
		UBP_TrainSoundComponent_C_OnThrottleApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnDynamicBrakesReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnDynamicBrakesReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnDynamicBrakesReleased");
		
		UBP_TrainSoundComponent_C_OnDynamicBrakesReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnAirBrakesReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnAirBrakesReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnAirBrakesReleased");
		
		UBP_TrainSoundComponent_C_OnAirBrakesReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStoppedMovingRelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnStoppedMovingRelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStoppedMovingRelay");
		
		UBP_TrainSoundComponent_C_OnStoppedMovingRelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnAirBrakesApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnAirBrakesApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnAirBrakesApplied");
		
		UBP_TrainSoundComponent_C_OnAirBrakesApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.StartIdleSounds
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::StartIdleSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.StartIdleSounds");
		
		UBP_TrainSoundComponent_C_StartIdleSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.StopAllSounds
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::StopAllSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.StopAllSounds");
		
		UBP_TrainSoundComponent_C_StopAllSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnDynamicBrakesApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnDynamicBrakesApplied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnDynamicBrakesApplied");
		
		UBP_TrainSoundComponent_C_OnDynamicBrakesApplied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStartedMoving
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnStartedMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStartedMoving");
		
		UBP_TrainSoundComponent_C_OnStartedMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStoppedMoving
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_TrainSoundComponent_C::OnStoppedMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.OnStoppedMoving");
		
		UBP_TrainSoundComponent_C_OnStoppedMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.ExecuteUbergraph_BP_TrainSoundComponent
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TrainSoundComponent_C::ExecuteUbergraph_BP_TrainSoundComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrainSoundComponent.BP_TrainSoundComponent_C.ExecuteUbergraph_BP_TrainSoundComponent");
		
		UBP_TrainSoundComponent_C_ExecuteUbergraph_BP_TrainSoundComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TrainSoundComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TrainSoundComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainSoundComponent.BP_TrainSoundComponent_C");
		return ptr;
	}

}


