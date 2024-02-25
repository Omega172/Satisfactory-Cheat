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
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FlyingBabyCrab_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveBeginPlay");
		
		ABP_FlyingBabyCrab_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.UpdateSignificanceTickRate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTickRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTickEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FlyingBabyCrab_C::UpdateSignificanceTickRate(float NewTickRate, bool bTickEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.UpdateSignificanceTickRate");
		
		ABP_FlyingBabyCrab_C_UpdateSignificanceTickRate_Params params {};
		params.NewTickRate = NewTickRate;
		params.bTickEnabled = bTickEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FlyingBabyCrab_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveEndPlay");
		
		ABP_FlyingBabyCrab_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FlyingBabyCrab_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.GainedSignificance");
		
		ABP_FlyingBabyCrab_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_FlyingBabyCrab_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.LostSignificance");
		
		ABP_FlyingBabyCrab_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FlyingBabyCrab_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.OnExplode");
		
		ABP_FlyingBabyCrab_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ExecuteUbergraph_BP_FlyingBabyCrab
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FlyingBabyCrab_C::ExecuteUbergraph_BP_FlyingBabyCrab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ExecuteUbergraph_BP_FlyingBabyCrab");
		
		ABP_FlyingBabyCrab_C_ExecuteUbergraph_BP_FlyingBabyCrab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FlyingBabyCrab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FlyingBabyCrab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingBabyCrab.BP_FlyingBabyCrab_C");
		return ptr;
	}

}


