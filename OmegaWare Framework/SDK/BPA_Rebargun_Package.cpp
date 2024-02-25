/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Rebargun_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.AnimGraph");
		
		UBPA_Rebargun_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Rebargun_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.BlueprintUpdateAnimation");
		
		UBPA_Rebargun_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Rebargun_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.BlueprintInitializeAnimation");
		
		UBPA_Rebargun_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideEjectMag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rebargun_C::AnimNotify_HideEjectMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideEjectMag");
		
		UBPA_Rebargun_C_AnimNotify_HideEjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideCurrentMag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rebargun_C::AnimNotify_HideCurrentMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_HideCurrentMag");
		
		UBPA_Rebargun_C_AnimNotify_HideCurrentMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_ShowCurrentMag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Rebargun_C::AnimNotify_ShowCurrentMag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.AnimNotify_ShowCurrentMag");
		
		UBPA_Rebargun_C_AnimNotify_ShowCurrentMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPA_Rebargun.BPA_Rebargun_C.ExecuteUbergraph_BPA_Rebargun
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Rebargun_C::ExecuteUbergraph_BPA_Rebargun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Rebargun.BPA_Rebargun_C.ExecuteUbergraph_BPA_Rebargun");
		
		UBPA_Rebargun_C_ExecuteUbergraph_BPA_Rebargun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_Rebargun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Rebargun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Rebargun.BPA_Rebargun_C");
		return ptr;
	}

}


