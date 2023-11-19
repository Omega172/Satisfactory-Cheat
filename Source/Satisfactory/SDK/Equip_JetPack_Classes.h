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
	 * BlueprintGeneratedClass Equip_JetPack.Equip_JetPack_C
	 * Size -> 0x0020 (FullSize[0x0540] - InheritedSize[0x0520])
	 */
	class AEquip_JetPack_C : public AFGJetPack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      FuelTypeDescriptos;                                      // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetInventorySettingsClass(class UClass** Class);
		void GetPreferredFuelIndex(int32_t* Index);
		void GetCurrentFuelIndex(int32_t* Index);
		void GetFuelTypes(TArray<class UClass*>* FuelTypes);
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
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		void SetActiveAudioRTPCs();
		void ValidateFuelTypeDescriptors();
		void SetFuelTypeDescriptors();
		void OnStartThrusting();
		void OnStopThrusting();
		void ReceiveTick(float DeltaSeconds);
		void WasEquipped();
		void WasUnEquipped();
		void ReceiveBeginPlay();
		void OnBurnPercentChanged();
		void OnFuelTypeChanged();
		void OnFuelAmountChanged();
		void ExecuteUbergraph_Equip_JetPack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
