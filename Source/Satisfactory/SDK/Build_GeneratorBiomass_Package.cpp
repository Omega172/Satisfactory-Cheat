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
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStartEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStartProducing                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::HandleStartEffects(bool bStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStartEffects");
		
		ABuild_GeneratorBiomass_C_HandleStartEffects_Params params {};
		params.bStartProducing = bStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStopEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStopProducing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::HandleStopEffects(bool bStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStopEffects");
		
		ABuild_GeneratorBiomass_C_HandleStopEffects_Params params {};
		params.bStopProducing = bStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StartProductionLoopEffects");
		
		ABuild_GeneratorBiomass_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StopProductionLoopEffects");
		
		ABuild_GeneratorBiomass_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorBiomass_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.LostSignificance");
		
		ABuild_GeneratorBiomass_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ReceiveUpdateEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::ReceiveUpdateEffects(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ReceiveUpdateEffects");
		
		ABuild_GeneratorBiomass_C_ReceiveUpdateEffects_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorBiomass_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.GainedSignificance");
		
		ABuild_GeneratorBiomass_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStartProducing
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_GeneratorBiomass_C::Factory_ReceiveStartProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStartProducing");
		
		ABuild_GeneratorBiomass_C_Factory_ReceiveStartProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStopProducing
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_GeneratorBiomass_C::Factory_ReceiveStopProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStopProducing");
		
		ABuild_GeneratorBiomass_C_Factory_ReceiveStopProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ExecuteUbergraph_Build_GeneratorBiomass
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorBiomass_C::ExecuteUbergraph_Build_GeneratorBiomass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ExecuteUbergraph_Build_GeneratorBiomass");
		
		ABuild_GeneratorBiomass_C_ExecuteUbergraph_Build_GeneratorBiomass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_GeneratorBiomass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_GeneratorBiomass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorBiomass.Build_GeneratorBiomass_C");
		return ptr;
	}

}


