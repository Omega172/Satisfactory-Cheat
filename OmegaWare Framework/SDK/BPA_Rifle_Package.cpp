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
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Rifle_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.AnimGraph");
		
		UBPA_Rifle_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.SetReloadedOnce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasReloadedOnce                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Rifle_C::SetReloadedOnce(bool HasReloadedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.SetReloadedOnce");
		
		UBPA_Rifle_C_SetReloadedOnce_Params params {};
		params.HasReloadedOnce = HasReloadedOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Rifle_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.BlueprintInitializeAnimation");
		
		UBPA_Rifle_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.AnimNotify_FGHideEjectMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rifle_C::AnimNotify_FGHideEjectMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.AnimNotify_FGHideEjectMagazine");
		
		UBPA_Rifle_C_AnimNotify_FGHideEjectMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.AnimNotify_HideCurrentAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rifle_C::AnimNotify_HideCurrentAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.AnimNotify_HideCurrentAmmo");
		
		UBPA_Rifle_C_AnimNotify_HideCurrentAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.AnimNotify_ShowCurrentAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rifle_C::AnimNotify_ShowCurrentAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.AnimNotify_ShowCurrentAmmo");
		
		UBPA_Rifle_C_AnimNotify_ShowCurrentAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_Rifle.BPA_Rifle_C.ExecuteUbergraph_BPA_Rifle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Rifle_C::ExecuteUbergraph_BPA_Rifle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rifle.BPA_Rifle_C.ExecuteUbergraph_BPA_Rifle");
		
		UBPA_Rifle_C_ExecuteUbergraph_BPA_Rifle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Rifle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Rifle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Rifle.BPA_Rifle_C");
		return ptr;
	}

}


