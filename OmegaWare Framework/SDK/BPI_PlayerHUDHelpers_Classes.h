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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PlayerHUDHelpers_C : public UInterface
	{
	public:
		void ForceUpdateEquipmentCrosshair();
		void OnCloseAllHUD_ESlots();
		void OnOpenAllHUD_ESlots();
		void OnUpdateHUD_ESlot(EEquipmentSlot EquipmentSlotType);
		void SetBuildgunMode(EBuildMenu_Modes Mode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
