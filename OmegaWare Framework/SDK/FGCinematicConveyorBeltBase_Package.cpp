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
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UpdateTransforms
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTransform>                          Transforms1                                                (Parm, OutParm)
	 */
	void AFGCinematicConveyorBeltBase_C::UpdateTransforms(double Offset, TArray<struct FTransform>* Transforms1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UpdateTransforms");
		
		AFGCinematicConveyorBeltBase_C_UpdateTransforms_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transforms1 != nullptr)
			*Transforms1 = params.Transforms1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupMeshes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::SetupMeshes(class UStaticMesh* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupMeshes");
		
		AFGCinematicConveyorBeltBase_C_SetupMeshes_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupSpline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSplinePointData>                    InPoints                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AFGCinematicConveyorBeltBase_C::SetupSpline(TArray<struct FSplinePointData>* InPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.SetupSpline");
		
		AFGCinematicConveyorBeltBase_C_SetupSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPoints != nullptr)
			*InPoints = params.InPoints;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFGCinematicConveyorBeltBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.UserConstructionScript");
		
		AFGCinematicConveyorBeltBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA");
		
		AFGCinematicConveyorBeltBase_C_OnNotifyEnd_7E297705416152E6B54AF5A6AA930BFA_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA");
		
		AFGCinematicConveyorBeltBase_C_OnNotifyBegin_7E297705416152E6B54AF5A6AA930BFA_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnInterrupted_7E297705416152E6B54AF5A6AA930BFA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::OnInterrupted_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnInterrupted_7E297705416152E6B54AF5A6AA930BFA");
		
		AFGCinematicConveyorBeltBase_C_OnInterrupted_7E297705416152E6B54AF5A6AA930BFA_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnBlendOut_7E297705416152E6B54AF5A6AA930BFA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::OnBlendOut_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnBlendOut_7E297705416152E6B54AF5A6AA930BFA");
		
		AFGCinematicConveyorBeltBase_C_OnBlendOut_7E297705416152E6B54AF5A6AA930BFA_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnCompleted_7E297705416152E6B54AF5A6AA930BFA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::OnCompleted_7E297705416152E6B54AF5A6AA930BFA(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.OnCompleted_7E297705416152E6B54AF5A6AA930BFA");
		
		AFGCinematicConveyorBeltBase_C_OnCompleted_7E297705416152E6B54AF5A6AA930BFA_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveTick");
		
		AFGCinematicConveyorBeltBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFGCinematicConveyorBeltBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ReceiveBeginPlay");
		
		AFGCinematicConveyorBeltBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.restart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFGCinematicConveyorBeltBase_C::restart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.restart");
		
		AFGCinematicConveyorBeltBase_C_restart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ExecuteUbergraph_FGCinematicConveyorBeltBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFGCinematicConveyorBeltBase_C::ExecuteUbergraph_FGCinematicConveyorBeltBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C.ExecuteUbergraph_FGCinematicConveyorBeltBase");
		
		AFGCinematicConveyorBeltBase_C_ExecuteUbergraph_FGCinematicConveyorBeltBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFGCinematicConveyorBeltBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFGCinematicConveyorBeltBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FGCinematicConveyorBeltBase.FGCinematicConveyorBeltBase_C");
		return ptr;
	}

}


