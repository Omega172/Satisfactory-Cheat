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
	 * 		Name   -> Function BP_FoliagePhysics.BP_FoliagePhysics_C.StartKillProcess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliagePhysics_C::StartKillProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliagePhysics.BP_FoliagePhysics_C.StartKillProcess");
		
		ABP_FoliagePhysics_C_StartKillProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FoliagePhysics.BP_FoliagePhysics_C.OnRep_mMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliagePhysics_C::OnRep_mMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliagePhysics.BP_FoliagePhysics_C.OnRep_mMesh");
		
		ABP_FoliagePhysics_C_OnRep_mMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FoliagePhysics.BP_FoliagePhysics_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FoliagePhysics_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliagePhysics.BP_FoliagePhysics_C.ReceiveBeginPlay");
		
		ABP_FoliagePhysics_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FoliagePhysics.BP_FoliagePhysics_C.SetupPhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliagePhysics_C::SetupPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliagePhysics.BP_FoliagePhysics_C.SetupPhysics");
		
		ABP_FoliagePhysics_C_SetupPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_FoliagePhysics.BP_FoliagePhysics_C.ExecuteUbergraph_BP_FoliagePhysics
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliagePhysics_C::ExecuteUbergraph_BP_FoliagePhysics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliagePhysics.BP_FoliagePhysics_C.ExecuteUbergraph_BP_FoliagePhysics");
		
		ABP_FoliagePhysics_C_ExecuteUbergraph_BP_FoliagePhysics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FoliagePhysics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FoliagePhysics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FoliagePhysics.BP_FoliagePhysics_C");
		return ptr;
	}

}


