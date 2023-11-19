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
	 * BlueprintGeneratedClass BP_ChargedWeapon.BP_ChargedWeapon_C
	 * Size -> 0x0028 (FullSize[0x05D8] - InheritedSize[0x05B0])
	 */
	class ABP_ChargedWeapon_C : public AFGChargedWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mShowCycleAmmoRadialMenuTimer;                           // 0x05C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_AmmoRadialSelector_C*                        mWidgetAmmoRadialMenu;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mRadialMenuShowUpTime;                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCrosshairKeyDescriptor(class UClass** KeyDescriptor);
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		bool GetIsBurningFuel();
		bool GetAlwaysShowContent();
		void GetHoverPackDistance(double* Value);
		bool GetHoverPackHasPower();
		void GetHoverPackMode(EHoverPackMode* Mode);
		void GetObjectScannerTarget(class UClass** ScannableItemDescriptor);
		void GetCurrentBoomBoxTape(class UClass** mTapeData);
		bool GetIsBoomBoxPlaying();
		bool GetShowLowFuelWarning();
		void GetOverwriteTickRate(double* TickRate);
		void GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule);
		void GetHUDBoxWidget(class UClass** WidgetClass);
		void ReceiveBeginPlay();
		void OnAmmoCyclingPressed();
		void OnAmmoCyclingReleased();
		void ShowCycleAmmoUI();
		void ExecuteUbergraph_BP_ChargedWeapon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
