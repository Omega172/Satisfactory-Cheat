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
	 * 		Name   -> Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_FrackingSmasher_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimGraph");
		
		UBPA_FrackingSmasher_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_RandomAnimNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_FrackingSmasher_C::AnimNotify_RandomAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_RandomAnimNotify");
		
		UBPA_FrackingSmasher_C_AnimNotify_RandomAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_ResetRandomAnimNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_FrackingSmasher_C::AnimNotify_ResetRandomAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_ResetRandomAnimNotify");
		
		UBPA_FrackingSmasher_C_AnimNotify_ResetRandomAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_CameraShakeNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_FrackingSmasher_C::AnimNotify_CameraShakeNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_CameraShakeNotify");
		
		UBPA_FrackingSmasher_C_AnimNotify_CameraShakeNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.ExecuteUbergraph_BPA_FrackingSmasher
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_FrackingSmasher_C::ExecuteUbergraph_BPA_FrackingSmasher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.ExecuteUbergraph_BPA_FrackingSmasher");
		
		UBPA_FrackingSmasher_C_ExecuteUbergraph_BPA_FrackingSmasher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_FrackingSmasher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_FrackingSmasher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_FrackingSmasher.BPA_FrackingSmasher_C");
		return ptr;
	}

}


