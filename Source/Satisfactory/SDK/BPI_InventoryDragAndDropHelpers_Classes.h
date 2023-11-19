#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_InventoryDragAndDropHelpers.BPI_InventoryDragAndDropHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_InventoryDragAndDropHelpers_C : public UInterface
	{
	public:
		void GetItemDescriptor(class UClass** itemDescriptor);
		void GetDragAndDropType(EInventorySlot_DragAndDropTypes* Type);
		void CentralStorageSlotWasDropped(class UFGInventoryComponent* TargetInventory, int32_t TargetIdx);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
