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
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_GeneratorNuclear_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimGraph");
		
		UBPA_GeneratorNuclear_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerSetup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::ReloadTimerSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerSetup");
		
		UBPA_GeneratorNuclear_C_ReloadTimerSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::ReloadTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimer");
		
		UBPA_GeneratorNuclear_C_ReloadTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredReloadState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_GenNuclearEnteredReloadState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredReloadState");
		
		UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearEnteredReloadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearStartupVfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_GenNuclearStartupVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearStartupVfx");
		
		UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearStartupVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearShutdownVfx
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_GenNuclearShutdownVfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearShutdownVfx");
		
		UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearShutdownVfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_GenNuclearEnteredProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearEnteredProducing");
		
		UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearEnteredProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearLeftProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_GenNuclearLeftProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_GenNuclearLeftProducing");
		
		UBPA_GeneratorNuclear_C_AnimNotify_GenNuclearLeftProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::ReloadTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ReloadTimerEvent");
		
		UBPA_GeneratorNuclear_C_ReloadTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_AnimShutdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_GeneratorNuclear_C::AnimNotify_AnimShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.AnimNotify_AnimShutdown");
		
		UBPA_GeneratorNuclear_C_AnimNotify_AnimShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ExecuteUbergraph_BPA_GeneratorNuclear
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_GeneratorNuclear_C::ExecuteUbergraph_BPA_GeneratorNuclear(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_GeneratorNuclear.BPA_GeneratorNuclear_C.ExecuteUbergraph_BPA_GeneratorNuclear");
		
		UBPA_GeneratorNuclear_C_ExecuteUbergraph_BPA_GeneratorNuclear_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_GeneratorNuclear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_GeneratorNuclear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_GeneratorNuclear.BPA_GeneratorNuclear_C");
		return ptr;
	}

}


