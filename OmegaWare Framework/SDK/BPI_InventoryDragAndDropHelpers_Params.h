#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetItemDescriptor
	 */
	struct UBPI_InventoryDragAndDropHelpers_C_GetItemDescriptor_Params
	{
	public:
		class UClass*                                              itemDescriptor;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.GetDragAndDropType
	 */
	struct UBPI_InventoryDragAndDropHelpers_C_GetDragAndDropType_Params
	{
	public:
		EInventorySlot_DragAndDropTypes                            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C.CentralStorageSlotWasDropped
	 */
	struct UBPI_InventoryDragAndDropHelpers_C_CentralStorageSlotWasDropped_Params
	{
	public:
		class UFGInventoryComponent*                               TargetInventory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetIdx;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
