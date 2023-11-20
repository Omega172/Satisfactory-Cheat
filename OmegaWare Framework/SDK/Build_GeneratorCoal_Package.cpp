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
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.GainedSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorCoal_C::GainedSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.GainedSignificance");
		
		ABuild_GeneratorCoal_C_GainedSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.StartProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStartProducing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorCoal_C::StartProductionLoopEffects(bool didStartProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.StartProductionLoopEffects");
		
		ABuild_GeneratorCoal_C_StartProductionLoopEffects_Params params {};
		params.didStartProducing = didStartProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.StopProductionLoopEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               didStopProducing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorCoal_C::StopProductionLoopEffects(bool didStopProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.StopProductionLoopEffects");
		
		ABuild_GeneratorCoal_C_StopProductionLoopEffects_Params params {};
		params.didStopProducing = didStopProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.LostSignificance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABuild_GeneratorCoal_C::LostSignificance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.LostSignificance");
		
		ABuild_GeneratorCoal_C_LostSignificance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStartProducing
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_GeneratorCoal_C::Factory_ReceiveStartProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStartProducing");
		
		ABuild_GeneratorCoal_C_Factory_ReceiveStartProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStopProducing
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABuild_GeneratorCoal_C::Factory_ReceiveStopProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStopProducing");
		
		ABuild_GeneratorCoal_C_Factory_ReceiveStopProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.OnCurrentPotentialChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newCurrentPotential                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorCoal_C::OnCurrentPotentialChanged(float newCurrentPotential)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.OnCurrentPotentialChanged");
		
		ABuild_GeneratorCoal_C_OnCurrentPotentialChanged_Params params {};
		params.newCurrentPotential = newCurrentPotential;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_GeneratorCoal.Build_GeneratorCoal_C.ExecuteUbergraph_Build_GeneratorCoal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_GeneratorCoal_C::ExecuteUbergraph_Build_GeneratorCoal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_GeneratorCoal.Build_GeneratorCoal_C.ExecuteUbergraph_Build_GeneratorCoal");
		
		ABuild_GeneratorCoal_C_ExecuteUbergraph_Build_GeneratorCoal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_GeneratorCoal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_GeneratorCoal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_GeneratorCoal.Build_GeneratorCoal_C");
		return ptr;
	}

}


