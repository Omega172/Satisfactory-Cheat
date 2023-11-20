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
	 * BlueprintGeneratedClass Equip_HazmatSuit.Equip_HazmatSuit_C
	 * Size -> 0x0041 (FullSize[0x04D1] - InheritedSize[0x0490])
	 */
	class AEquip_HazmatSuit_C : public AFGSuitBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0490(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mImmunity;                                               // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsWorking;                                              // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mHasNegatedDamage;                                       // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A2R6[0x6];                                   // 0x04AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mDamageNegated;                                          // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mFilterDuration;                                         // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCountdown;                                              // 0x04C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDisableEffectTimer;                                     // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsBurningFuel;                                          // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		bool GetIsBurningFuel();
		bool GetAlwaysShowContent();
		void EnablePostProcessing(bool Enabled);
		float AdjustDamage(float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void WasUnEquipped();
		void ReceiveTick(float DeltaSeconds);
		void WasEquipped();
		void StartHasBurnedFuelTimer();
		void ExecuteUbergraph_Equip_HazmatSuit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
