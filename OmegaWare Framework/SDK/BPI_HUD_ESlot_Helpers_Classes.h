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
	 * BlueprintGeneratedClass BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_HUD_ESlot_Helpers_C : public UInterface
	{
	public:
		void GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule);
		void GetOverwriteTickRate(double* TickRate);
		bool GetShowLowFuelWarning();
		bool GetIsBoomBoxPlaying();
		void GetCurrentBoomBoxTape(class UClass** mTapeData);
		void GetObjectScannerTarget(class UClass** ScannableItemDescriptor);
		void GetHoverPackMode(EHoverPackMode* Mode);
		bool GetHoverPackHasPower();
		void GetHoverPackDistance(double* Value);
		bool GetAlwaysShowContent();
		bool GetIsBurningFuel();
		void GetFuelPercent(double* Value);
		void GetFuelDescriptor(class UClass** Class);
		void GetAmmoDescriptor(class UClass** AmmoClass);
		bool GetUpdateOnTick();
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		void GetHUD_ESlotClass(class UClass** Class);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
