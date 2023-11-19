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
	 * 		Name   -> Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_SnowballWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimGraph");
		
		UBPA_SnowballWeapon_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimNotify_NobeliskDetonate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_SnowballWeapon_C::AnimNotify_NobeliskDetonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimNotify_NobeliskDetonate");
		
		UBPA_SnowballWeapon_C_AnimNotify_NobeliskDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimNotify_NobeliskThrowRelease
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_SnowballWeapon_C::AnimNotify_NobeliskThrowRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.AnimNotify_NobeliskThrowRelease");
		
		UBPA_SnowballWeapon_C_AnimNotify_NobeliskThrowRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.ExecuteUbergraph_BPA_SnowballWeapon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_SnowballWeapon_C::ExecuteUbergraph_BPA_SnowballWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_SnowballWeapon.BPA_SnowballWeapon_C.ExecuteUbergraph_BPA_SnowballWeapon");
		
		UBPA_SnowballWeapon_C_ExecuteUbergraph_BPA_SnowballWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_SnowballWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_SnowballWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_SnowballWeapon.BPA_SnowballWeapon_C");
		return ptr;
	}

}


