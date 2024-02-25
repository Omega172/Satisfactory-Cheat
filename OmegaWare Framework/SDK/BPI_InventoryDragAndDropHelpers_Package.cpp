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
	 * 		Name   -> Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetItemDescriptor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      itemDescriptor                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventoryDragAndDropHelpers_C::GetItemDescriptor(class UClass** itemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetItemDescriptor");
		
		UBPI_InventoryDragAndDropHelpers_C_GetItemDescriptor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemDescriptor != nullptr)
			*itemDescriptor = params.itemDescriptor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetDragAndDropType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EInventorySlot_DragAndDropTypes                    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventoryDragAndDropHelpers_C::GetDragAndDropType(EInventorySlot_DragAndDropTypes* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetDragAndDropType");
		
		UBPI_InventoryDragAndDropHelpers_C_GetDragAndDropType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.CentralStorageSlotWasDropped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       TargetInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_InventoryDragAndDropHelpers_C::CentralStorageSlotWasDropped(class UFGInventoryComponent* TargetInventory, int32_t TargetIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.CentralStorageSlotWasDropped");
		
		UBPI_InventoryDragAndDropHelpers_C_CentralStorageSlotWasDropped_Params params {};
		params.TargetInventory = TargetInventory;
		params.TargetIdx = TargetIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_InventoryDragAndDropHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_InventoryDragAndDropHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C");
		return ptr;
	}

}


