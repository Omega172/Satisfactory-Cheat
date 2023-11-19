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
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Manufacturer_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.AnimGraph");
		
		UBPA_Manufacturer_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuEnteredProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Manufacturer_C::AnimNotify_ManuEnteredProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuEnteredProducing");
		
		UBPA_Manufacturer_C_AnimNotify_ManuEnteredProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuLeftProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Manufacturer_C::AnimNotify_ManuLeftProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.AnimNotify_ManuLeftProducing");
		
		UBPA_Manufacturer_C_AnimNotify_ManuLeftProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.StartAnimationSoundFromDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Manufacturer_C::StartAnimationSoundFromDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.StartAnimationSoundFromDuration");
		
		UBPA_Manufacturer_C_StartAnimationSoundFromDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.StopAnimationSoundFromDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Manufacturer_C::StopAnimationSoundFromDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.StopAnimationSoundFromDuration");
		
		UBPA_Manufacturer_C_StopAnimationSoundFromDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.StopActiveAnimationAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Manufacturer_C::StopActiveAnimationAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.StopActiveAnimationAudio");
		
		UBPA_Manufacturer_C_StopActiveAnimationAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Manufacturer.BPA_Manufacturer_C.ExecuteUbergraph_BPA_Manufacturer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Manufacturer_C::ExecuteUbergraph_BPA_Manufacturer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Manufacturer.BPA_Manufacturer_C.ExecuteUbergraph_BPA_Manufacturer");
		
		UBPA_Manufacturer_C_ExecuteUbergraph_BPA_Manufacturer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Manufacturer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Manufacturer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Manufacturer.BPA_Manufacturer_C");
		return ptr;
	}

}


