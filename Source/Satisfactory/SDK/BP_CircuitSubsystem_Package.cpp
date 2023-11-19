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
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnFuseSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CircuitSubsystem_C::PowerCircuit_OnFuseSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnFuseSet");
		
		ABP_CircuitSubsystem_C_PowerCircuit_OnFuseSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayFuseSetSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CircuitSubsystem_C::Multicast_PlayFuseSetSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayFuseSetSound");
		
		ABP_CircuitSubsystem_C_Multicast_PlayFuseSetSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayBatteryWarningSound
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CircuitSubsystem_C::Multicast_PlayBatteryWarningSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayBatteryWarningSound");
		
		ABP_CircuitSubsystem_C_Multicast_PlayBatteryWarningSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnCriticalBatteryDepletion
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              depletionPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CircuitSubsystem_C::PowerCircuit_OnCriticalBatteryDepletion(float depletionPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnCriticalBatteryDepletion");
		
		ABP_CircuitSubsystem_C_PowerCircuit_OnCriticalBatteryDepletion_Params params {};
		params.depletionPercent = depletionPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnPrioritySwitchesTurnedOff
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CircuitSubsystem_C::PowerCircuit_OnPrioritySwitchesTurnedOff(int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnPrioritySwitchesTurnedOff");
		
		ABP_CircuitSubsystem_C_PowerCircuit_OnPrioritySwitchesTurnedOff_Params params {};
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_OnPriotirySwitchGroupTurnedOff
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CircuitSubsystem_C::Multicast_OnPriotirySwitchGroupTurnedOff(int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_OnPriotirySwitchGroupTurnedOff");
		
		ABP_CircuitSubsystem_C_Multicast_OnPriotirySwitchGroupTurnedOff_Params params {};
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.ExecuteUbergraph_BP_CircuitSubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CircuitSubsystem_C::ExecuteUbergraph_BP_CircuitSubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.ExecuteUbergraph_BP_CircuitSubsystem");
		
		ABP_CircuitSubsystem_C_ExecuteUbergraph_BP_CircuitSubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CircuitSubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CircuitSubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CircuitSubsystem.BP_CircuitSubsystem_C");
		return ptr;
	}

}


