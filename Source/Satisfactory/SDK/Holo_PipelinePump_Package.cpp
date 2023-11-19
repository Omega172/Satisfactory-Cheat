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
	 * 		Name   -> Function Holo_PipelinePump.Holo_PipelinePump_C.UpdateOrAddInstances
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTransform>                          EndLocations                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTransform>                          SnapLocations                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTransform>                          MovingLocations                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AHolo_PipelinePump_C::UpdateOrAddInstances(TArray<struct FTransform>* EndLocations, TArray<struct FTransform>* SnapLocations, TArray<struct FTransform>* MovingLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_PipelinePump.Holo_PipelinePump_C.UpdateOrAddInstances");
		
		AHolo_PipelinePump_C_UpdateOrAddInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndLocations != nullptr)
			*EndLocations = params.EndLocations;
		if (SnapLocations != nullptr)
			*SnapLocations = params.SnapLocations;
		if (MovingLocations != nullptr)
			*MovingLocations = params.MovingLocations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Holo_PipelinePump.Holo_PipelinePump_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_PipelinePump_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_PipelinePump.Holo_PipelinePump_C.ReceiveTick");
		
		AHolo_PipelinePump_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Holo_PipelinePump.Holo_PipelinePump_C.ExecuteUbergraph_Holo_PipelinePump
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHolo_PipelinePump_C::ExecuteUbergraph_Holo_PipelinePump(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Holo_PipelinePump.Holo_PipelinePump_C.ExecuteUbergraph_Holo_PipelinePump");
		
		AHolo_PipelinePump_C_ExecuteUbergraph_Holo_PipelinePump_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHolo_PipelinePump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHolo_PipelinePump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Holo_PipelinePump.Holo_PipelinePump_C");
		return ptr;
	}

}


