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
	 * BlueprintGeneratedClass Equip_GasMask.Equip_GasMask_C
	 * Size -> 0x0018 (FullSize[0x04C8] - InheritedSize[0x04B0])
	 */
	class AEquip_GasMask_C : public AFGGasMask
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               PPComponent;                                             // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Gasmask_01;                                           // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

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
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void WasEquipped();
		void WasUnEquipped();
		void EnablePostProcessing(bool IsEnabled);
		void ExecuteUbergraph_Equip_GasMask(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
