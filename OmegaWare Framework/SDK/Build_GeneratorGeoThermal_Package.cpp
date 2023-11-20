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
	 * 		Name   -> Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorGeoThermal_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.GainedSignificance");
		
		ABuild_GeneratorGeoThermal_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorGeoThermal_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.LostSignificance");
		
		ABuild_GeneratorGeoThermal_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorGeoThermal_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StartProductionLoopEffects");
		
		ABuild_GeneratorGeoThermal_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorGeoThermal_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StopProductionLoopEffects");
		
		ABuild_GeneratorGeoThermal_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.ExecuteUbergraph_Build_GeneratorGeoThermal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorGeoThermal_C::ExecuteUbergraph_Build_GeneratorGeoThermal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.ExecuteUbergraph_Build_GeneratorGeoThermal");
		
		ABuild_GeneratorGeoThermal_C_ExecuteUbergraph_Build_GeneratorGeoThermal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_GeneratorGeoThermal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_GeneratorGeoThermal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C");
		return ptr;
	}

}


