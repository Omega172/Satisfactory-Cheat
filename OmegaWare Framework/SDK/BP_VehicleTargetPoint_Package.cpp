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
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.SelectMode
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EMeshWaypointSelection                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VehicleTargetPoint_C::SelectMode(EMeshWaypointSelection* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.SelectMode");
		
		ABP_VehicleTargetPoint_C_SelectMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Show Claim Debug Visual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABP_VehicleTargetPoint_C::ShowClaimDebugVisual()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Show Claim Debug Visual");
		
		ABP_VehicleTargetPoint_C_ShowClaimDebugVisual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GetLookAtDecription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	class FText ABP_VehicleTargetPoint_C::GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GetLookAtDecription");
		
		ABP_VehicleTargetPoint_C_GetLookAtDecription_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateUseState
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     atLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         componentHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   out_useState                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VehicleTargetPoint_C::UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateUseState");
		
		ABP_VehicleTargetPoint_C_UpdateUseState_Params params {};
		params.byCharacter = byCharacter;
		params.atLocation = atLocation;
		params.componentHit = componentHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_useState != nullptr)
			*out_useState = params.out_useState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update Visuals
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::UpdateVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update Visuals");
		
		ABP_VehicleTargetPoint_C_UpdateVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ShouldSave
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABP_VehicleTargetPoint_C::ShouldSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ShouldSave");
		
		ABP_VehicleTargetPoint_C_ShouldSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.NeedTransform
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_VehicleTargetPoint_C::NeedTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.NeedTransform");
		
		ABP_VehicleTargetPoint_C_NeedTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GatherDependencies
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UObject*>                             out_dependentObjects                                       (Parm, OutParm)
	 */
	void ABP_VehicleTargetPoint_C::GatherDependencies(TArray<class UObject*>* out_dependentObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.GatherDependencies");
		
		ABP_VehicleTargetPoint_C_GatherDependencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (out_dependentObjects != nullptr)
			*out_dependentObjects = params.out_dependentObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ReceiveBeginPlay");
		
		ABP_VehicleTargetPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VehicleTargetPoint_C::OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.OnUse");
		
		ABP_VehicleTargetPoint_C_OnUse_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StartIsLookedAt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VehicleTargetPoint_C::StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StartIsLookedAt");
		
		ABP_VehicleTargetPoint_C_StartIsLookedAt_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StopIsLookedAt
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AFGCharacterPlayer*                          byCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FUseState                                   State                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_VehicleTargetPoint_C::StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.StopIsLookedAt");
		
		ABP_VehicleTargetPoint_C_StopIsLookedAt_Params params {};
		params.byCharacter = byCharacter;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsLoopTargetChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::IsLoopTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsLoopTargetChanged");
		
		ABP_VehicleTargetPoint_C_IsLoopTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.TargetSpeedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::TargetSpeedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.TargetSpeedChanged");
		
		ABP_VehicleTargetPoint_C_TargetSpeedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.HostStationChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::HostStationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.HostStationChanged");
		
		ABP_VehicleTargetPoint_C_HostStationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsDockingTargetChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::IsDockingTargetChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsDockingTargetChanged");
		
		ABP_VehicleTargetPoint_C_IsDockingTargetChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsTemporaryChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::IsTemporaryChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsTemporaryChanged");
		
		ABP_VehicleTargetPoint_C_IsTemporaryChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsClaimedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::IsClaimedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.IsClaimedChanged");
		
		ABP_VehicleTargetPoint_C_IsClaimedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateVisualNextFrame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VehicleTargetPoint_C::UpdateVisualNextFrame(class UStaticMesh* NewMesh, class UMaterialInstance* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.UpdateVisualNextFrame");
		
		ABP_VehicleTargetPoint_C_UpdateVisualNextFrame_Params params {};
		params.NewMesh = NewMesh;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VehicleTargetPoint_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.Update");
		
		ABP_VehicleTargetPoint_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ExecuteUbergraph_BP_VehicleTargetPoint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VehicleTargetPoint_C::ExecuteUbergraph_BP_VehicleTargetPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleTargetPoint.BP_VehicleTargetPoint_C.ExecuteUbergraph_BP_VehicleTargetPoint");
		
		ABP_VehicleTargetPoint_C_ExecuteUbergraph_BP_VehicleTargetPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VehicleTargetPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VehicleTargetPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleTargetPoint.BP_VehicleTargetPoint_C");
		return ptr;
	}

}


