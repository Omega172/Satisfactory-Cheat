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
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_NobeliskDetonator_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimGraph");
		
		UBPA_NobeliskDetonator_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_NobeliskDetonate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::AnimNotify_NobeliskDetonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_NobeliskDetonate");
		
		UBPA_NobeliskDetonator_C_AnimNotify_NobeliskDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_NobeliskThrowRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::AnimNotify_NobeliskThrowRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_NobeliskThrowRelease");
		
		UBPA_NobeliskDetonator_C_AnimNotify_NobeliskThrowRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.BlueprintInitializeAnimation");
		
		UBPA_NobeliskDetonator_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_HideCurrentMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::AnimNotify_HideCurrentMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_HideCurrentMagazine");
		
		UBPA_NobeliskDetonator_C_AnimNotify_HideCurrentMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_ShowCurrentMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::AnimNotify_ShowCurrentMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_ShowCurrentMagazine");
		
		UBPA_NobeliskDetonator_C_AnimNotify_ShowCurrentMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_HideEjectMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_NobeliskDetonator_C::AnimNotify_HideEjectMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.AnimNotify_HideEjectMagazine");
		
		UBPA_NobeliskDetonator_C_AnimNotify_HideEjectMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.ExecuteUbergraph_BPA_NobeliskDetonator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_NobeliskDetonator_C::ExecuteUbergraph_BPA_NobeliskDetonator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_NobeliskDetonator.BPA_NobeliskDetonator_C.ExecuteUbergraph_BPA_NobeliskDetonator");
		
		UBPA_NobeliskDetonator_C_ExecuteUbergraph_BPA_NobeliskDetonator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_NobeliskDetonator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_NobeliskDetonator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_NobeliskDetonator.BPA_NobeliskDetonator_C");
		return ptr;
	}

}


