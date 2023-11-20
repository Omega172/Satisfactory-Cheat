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
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_DroneTransport_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.AnimGraph");
		
		UBPA_DroneTransport_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_DroneTransport_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.BlueprintUpdateAnimation");
		
		UBPA_DroneTransport_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.OnFlyingModeChange
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EDroneFlyingMode                                   NewFlyingMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_DroneTransport_C::OnFlyingModeChange(EDroneFlyingMode NewFlyingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.OnFlyingModeChange");
		
		UBPA_DroneTransport_C_OnFlyingModeChange_Params params {};
		params.NewFlyingMode = NewFlyingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.StartDocking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_DroneTransport_C::StartDocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.StartDocking");
		
		UBPA_DroneTransport_C_StartDocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.StartTakeOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_DroneTransport_C::StartTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.StartTakeOff");
		
		UBPA_DroneTransport_C_StartTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_PropellerStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_DroneTransport_C::AnimNotify_PropellerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_PropellerStart");
		
		UBPA_DroneTransport_C_AnimNotify_PropellerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_DroneTransport_C::AnimNotify_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.AnimNotify_Deactivate");
		
		UBPA_DroneTransport_C_AnimNotify_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPA_DroneTransport.BPA_DroneTransport_C.ExecuteUbergraph_BPA_DroneTransport
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_DroneTransport_C::ExecuteUbergraph_BPA_DroneTransport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_DroneTransport.BPA_DroneTransport_C.ExecuteUbergraph_BPA_DroneTransport");
		
		UBPA_DroneTransport_C_ExecuteUbergraph_BPA_DroneTransport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPA_DroneTransport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_DroneTransport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_DroneTransport.BPA_DroneTransport_C");
		return ptr;
	}

}


