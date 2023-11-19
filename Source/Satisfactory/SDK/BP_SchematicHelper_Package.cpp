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
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.DoSchematicHasUnlocks
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasUnlocks                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_DoSchematicHasUnlocks(class UClass* schematic, class UObject* __WorldContext, bool* HasUnlocks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.DoSchematicHasUnlocks");
		
		UBP_SchematicHelper_C_DoSchematicHasUnlocks_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasUnlocks != nullptr)
			*HasUnlocks = params.HasUnlocks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumArmEquipmentSlotsUnlocked
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numSlots                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_GetNumArmEquipmentSlotsUnlocked(class UClass* schematic, class UObject* __WorldContext, int32_t* numSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumArmEquipmentSlotsUnlocked");
		
		UBP_SchematicHelper_C_GetNumArmEquipmentSlotsUnlocked_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numSlots != nullptr)
			*numSlots = params.numSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumInventorySlotsUnlocked
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numSlots                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_GetNumInventorySlotsUnlocked(class UClass* schematic, class UObject* __WorldContext, int32_t* numSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetNumInventorySlotsUnlocked");
		
		UBP_SchematicHelper_C_GetNumInventorySlotsUnlocked_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (numSlots != nullptr)
			*numSlots = params.numSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksHandSlots
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_GetUnlocksHandSlots(class UClass* schematic, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksHandSlots");
		
		UBP_SchematicHelper_C_GetUnlocksHandSlots_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksInventorySlot
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_GetUnlocksInventorySlot(class UClass* schematic, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlocksInventorySlot");
		
		UBP_SchematicHelper_C_GetUnlocksInventorySlot_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetRecipesFromSchematic
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              Recipes                                                    (Parm, OutParm)
	 */
	void UBP_SchematicHelper_C::STATIC_GetRecipesFromSchematic(class UClass* schematic, class UObject* __WorldContext, TArray<class UClass*>* Recipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetRecipesFromSchematic");
		
		UBP_SchematicHelper_C_GetRecipesFromSchematic_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Recipes != nullptr)
			*Recipes = params.Recipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlockDataStructFromSchematic
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFUnlockDataStruct>                  UnlockDataStruct                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_SchematicHelper_C::STATIC_GetUnlockDataStructFromSchematic(class UClass* schematic, class UObject* __WorldContext, TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.GetUnlockDataStructFromSchematic");
		
		UBP_SchematicHelper_C_GetUnlockDataStructFromSchematic_Params params {};
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockDataStruct != nullptr)
			*UnlockDataStruct = params.UnlockDataStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedInAnyWay
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WolrdContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_IsSchematicLockedInAnyWay(class UObject* WolrdContext, class UClass* schematic, class UObject* __WorldContext, bool* IsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedInAnyWay");
		
		UBP_SchematicHelper_C_IsSchematicLockedInAnyWay_Params params {};
		params.WolrdContext = WolrdContext;
		params.schematic = schematic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocked != nullptr)
			*IsLocked = params.IsLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedByTutorial
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSchematicLockedByTutorial                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_IsSchematicLockedByTutorial(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicLockedByTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicLockedByTutorial");
		
		UBP_SchematicHelper_C_IsSchematicLockedByTutorial_Params params {};
		params.WorldContext = WorldContext;
		params.SchematicClass = SchematicClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSchematicLockedByTutorial != nullptr)
			*IsSchematicLockedByTutorial = params.IsSchematicLockedByTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicDependentLocked
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSchematicDependentLocked                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_IsSchematicDependentLocked(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicDependentLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicDependentLocked");
		
		UBP_SchematicHelper_C_IsSchematicDependentLocked_Params params {};
		params.WorldContext = WorldContext;
		params.SchematicClass = SchematicClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSchematicDependentLocked != nullptr)
			*IsSchematicDependentLocked = params.IsSchematicDependentLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPartOfTutorial
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSchematicPartOfTutortial                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_IsSchematicPartOfTutorial(class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicPartOfTutortial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPartOfTutorial");
		
		UBP_SchematicHelper_C_IsSchematicPartOfTutorial_Params params {};
		params.SchematicClass = SchematicClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSchematicPartOfTutortial != nullptr)
			*IsSchematicPartOfTutortial = params.IsSchematicPartOfTutortial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPhaseLocked
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSchematicPhaseLocked                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SchematicHelper_C::STATIC_IsSchematicPhaseLocked(class UObject* WorldContext, class UClass* SchematicClass, class UObject* __WorldContext, bool* IsSchematicPhaseLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SchematicHelper.BP_SchematicHelper_C.IsSchematicPhaseLocked");
		
		UBP_SchematicHelper_C_IsSchematicPhaseLocked_Params params {};
		params.WorldContext = WorldContext;
		params.SchematicClass = SchematicClass;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSchematicPhaseLocked != nullptr)
			*IsSchematicPhaseLocked = params.IsSchematicPhaseLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SchematicHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SchematicHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SchematicHelper.BP_SchematicHelper_C");
		return ptr;
	}

}


