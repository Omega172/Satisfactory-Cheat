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
	 * BlueprintGeneratedClass Equip_MedKit.Equip_MedKit_C
	 * Size -> 0x0040 (FullSize[0x04C0] - InheritedSize[0x0480])
	 */
	class AEquip_MedKit_C : public AFGConsumableEquipment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Medkit_01;                                            // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Medkit;                                               // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRandomAnim;                                             // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCanPress;                                               // 0x049C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XWQB[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMedkitAnimationData>                        mAnimData;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMedkitAnimationData                                mCurrentAnimData;                                        // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
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
		void PlayEquipSFX();
		void WasEquipped();
		void WasUnEquipped();
		void PlayConsumeEffects(class UFGConsumableDescriptor* consumable);
		void ExecuteUbergraph_Equip_MedKit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
