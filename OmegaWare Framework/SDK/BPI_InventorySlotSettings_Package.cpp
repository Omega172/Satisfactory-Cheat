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
	 * 		Name   -> Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetInventorySettingsClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventorySlotSettings_C::GetInventorySettingsClass(class UClass** Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetInventorySettingsClass");
		
		UBPI_InventorySlotSettings_C_GetInventorySettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetPreferredFuelIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventorySlotSettings_C::GetPreferredFuelIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetPreferredFuelIndex");
		
		UBPI_InventorySlotSettings_C_GetPreferredFuelIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetCurrentFuelIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventorySlotSettings_C::GetCurrentFuelIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetCurrentFuelIndex");
		
		UBPI_InventorySlotSettings_C_GetCurrentFuelIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetFuelTypes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              FuelTypes                                                  (Parm, OutParm)
	 */
	void UBPI_InventorySlotSettings_C::GetFuelTypes(TArray<class UClass*>* FuelTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetFuelTypes");
		
		UBPI_InventorySlotSettings_C_GetFuelTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FuelTypes != nullptr)
			*FuelTypes = params.FuelTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InventorySlotSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InventorySlotSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InventorySlotSettings.BPI_InventorySlotSettings_C");
		return ptr;
	}

}


