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
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_GeneratorCoal_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimGraph");
		
		UBPA_GeneratorCoal_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_CoalGenEnteredProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredProducingState");
		
		UBPA_GeneratorCoal_C_AnimNotify_CoalGenEnteredProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftProducingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_CoalGenLeftProducingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftProducingState");
		
		UBPA_GeneratorCoal_C_AnimNotify_CoalGenLeftProducingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_CoalGenEnteredOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenEnteredOfflineState");
		
		UBPA_GeneratorCoal_C_AnimNotify_CoalGenEnteredOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftOfflineState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_CoalGenLeftOfflineState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_CoalGenLeftOfflineState");
		
		UBPA_GeneratorCoal_C_AnimNotify_CoalGenLeftOfflineState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_steamVfxNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_steamVfxNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_steamVfxNotify");
		
		UBPA_GeneratorCoal_C_AnimNotify_steamVfxNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_StopCoalAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorCoal_C::AnimNotify_StopCoalAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.AnimNotify_StopCoalAnimation");
		
		UBPA_GeneratorCoal_C_AnimNotify_StopCoalAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.ExecuteUbergraph_BPA_GeneratorCoal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_GeneratorCoal_C::ExecuteUbergraph_BPA_GeneratorCoal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorCoal.BPA_GeneratorCoal_C.ExecuteUbergraph_BPA_GeneratorCoal");
		
		UBPA_GeneratorCoal_C_ExecuteUbergraph_BPA_GeneratorCoal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_GeneratorCoal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_GeneratorCoal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_GeneratorCoal.BPA_GeneratorCoal_C");
		return ptr;
	}

}


