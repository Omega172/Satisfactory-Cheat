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
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Packager_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimGraph");
		
		UBPA_Packager_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Packager_AnimGraphNode_TransitionResult_728B98F24ED6DA44FBAF50B217ECD3A5
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Packager_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Packager_AnimGraphNode_TransitionResult_728B98F24ED6DA44FBAF50B217ECD3A5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Packager_AnimGraphNode_TransitionResult_728B98F24ED6DA44FBAF50B217ECD3A5");
		
		UBPA_Packager_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Packager_AnimGraphNode_TransitionResult_728B98F24ED6DA44FBAF50B217ECD3A5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_Play_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_VFX");
		
		UBPA_Packager_C_AnimNotify_Play_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_RandomAnimNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_RandomAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_RandomAnimNotify");
		
		UBPA_Packager_C_AnimNotify_RandomAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_ResetRandomAnimNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_ResetRandomAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_ResetRandomAnimNotify");
		
		UBPA_Packager_C_AnimNotify_ResetRandomAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_End_VFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_Play_End_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_End_VFX");
		
		UBPA_Packager_C_AnimNotify_Play_End_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_VFX_Mess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_Play_VFX_Mess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_VFX_Mess");
		
		UBPA_Packager_C_AnimNotify_Play_VFX_Mess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_SFX_Residue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Packager_C::AnimNotify_Play_SFX_Residue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.AnimNotify_Play_SFX_Residue");
		
		UBPA_Packager_C_AnimNotify_Play_SFX_Residue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Packager.BPA_Packager_C.ExecuteUbergraph_BPA_Packager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Packager_C::ExecuteUbergraph_BPA_Packager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Packager.BPA_Packager_C.ExecuteUbergraph_BPA_Packager");
		
		UBPA_Packager_C_ExecuteUbergraph_BPA_Packager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Packager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Packager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Packager.BPA_Packager_C");
		return ptr;
	}

}


