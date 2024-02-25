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
	 * BlueprintGeneratedClass BP_Weapon.BP_Weapon_C
	 * Size -> 0x0028 (FullSize[0x05A0] - InheritedSize[0x0578])
	 */
	class ABP_Weapon_C : public AFGWeapon
	{
	public:
		unsigned char                                              UnknownData_WCZI[0x8];                                   // 0x0578(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mShowCycleAmmoRadialMenuTimer;                           // 0x0590(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_AmmoRadialSelector_C*                        mWidgetAmmoRadialMenu;                                   // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void GetCrosshairKeyDescriptor(class UClass** KeyDescriptor);
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
		void ReceiveBeginPlay();
		void OnAmmoCyclingPressed();
		void OnAmmoCyclingReleased();
		void ShowCycleAmmoUI();
		void PlayReloadEffects(bool hadAmmoLeft);
		void ExecuteUbergraph_BP_Weapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
