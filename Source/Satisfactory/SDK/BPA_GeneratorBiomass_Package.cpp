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
	 * 		Name   -> Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_GeneratorBiomass_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimGraph");
		
		UBPA_GeneratorBiomass_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelPoweredState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorBiomass_C::AnimNotify_BioGenEnteredFunnelPoweredState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelPoweredState");
		
		UBPA_GeneratorBiomass_C_AnimNotify_BioGenEnteredFunnelPoweredState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelShutdownState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorBiomass_C::AnimNotify_BioGenEnteredFunnelShutdownState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.AnimNotify_BioGenEnteredFunnelShutdownState");
		
		UBPA_GeneratorBiomass_C_AnimNotify_BioGenEnteredFunnelShutdownState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.ExecuteUbergraph_BPA_GeneratorBiomass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_GeneratorBiomass_C::ExecuteUbergraph_BPA_GeneratorBiomass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorBiomass.BPA_GeneratorBiomass_C.ExecuteUbergraph_BPA_GeneratorBiomass");
		
		UBPA_GeneratorBiomass_C_ExecuteUbergraph_BPA_GeneratorBiomass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_GeneratorBiomass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_GeneratorBiomass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_GeneratorBiomass.BPA_GeneratorBiomass_C");
		return ptr;
	}

}


