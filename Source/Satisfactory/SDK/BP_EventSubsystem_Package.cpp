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
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.GetPossedCharacters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APawn*>                               outPawns                                                   (Parm, OutParm)
	 */
	void ABP_EventSubsystem_C::GetPossedCharacters(TArray<class APawn*>* outPawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.GetPossedCharacters");
		
		ABP_EventSubsystem_C_GetPossedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outPawns != nullptr)
			*outPawns = params.outPawns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_EventSubsystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.ReceiveBeginPlay");
		
		ABP_EventSubsystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.SpawnGift
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_EventSubsystem_C::SpawnGift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.SpawnGift");
		
		ABP_EventSubsystem_C_SpawnGift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.PurchasedSchematicDelegate_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      purchasedSchematic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_EventSubsystem_C::PurchasedSchematicDelegate_Event_1(class UClass* purchasedSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.PurchasedSchematicDelegate_Event_1");
		
		ABP_EventSubsystem_C_PurchasedSchematicDelegate_Event_1_Params params {};
		params.purchasedSchematic = purchasedSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.Reduce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventSubsystem_C::Reduce(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.Reduce");
		
		ABP_EventSubsystem_C_Reduce_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_EventSubsystem.BP_EventSubsystem_C.ExecuteUbergraph_BP_EventSubsystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventSubsystem_C::ExecuteUbergraph_BP_EventSubsystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventSubsystem.BP_EventSubsystem_C.ExecuteUbergraph_BP_EventSubsystem");
		
		ABP_EventSubsystem_C_ExecuteUbergraph_BP_EventSubsystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EventSubsystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EventSubsystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventSubsystem.BP_EventSubsystem_C");
		return ptr;
	}

}


