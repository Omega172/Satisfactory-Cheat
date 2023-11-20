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
	 * BlueprintGeneratedClass BPI_InventorySlotSettings.BPI_InventorySlotSettings_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_InventorySlotSettings_C : public UInterface
	{
	public:
		void GetInventorySettingsClass(class UClass** Class);
		void GetPreferredFuelIndex(int32_t* Index);
		void GetCurrentFuelIndex(int32_t* Index);
		void GetFuelTypes(TArray<class UClass*>* FuelTypes);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
