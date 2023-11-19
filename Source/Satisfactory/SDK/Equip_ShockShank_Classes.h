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
	 * BlueprintGeneratedClass Equip_ShockShank.Equip_ShockShank_C
	 * Size -> 0x0028 (FullSize[0x04E8] - InheritedSize[0x04C0])
	 */
	class AEquip_ShockShank_C : public AFGEquipmentStunSpear
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ShockShankTaser_01;                                      // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ShockShank_skl;                                          // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mAKShockShankLoop;                                       // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mPunchAnimationWeight;                                   // 0x04E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void PlayStingerAnimation1P();
		void PlayEquipAnimation();
		void WasUnEquipped();
		void WasEquipped();
		void PlaySwingAnimation(class UAnimMontage* Animation_1P, class UAkAudioEvent* AudioEvent, class UCameraAnimationSequence* CameraAnim);
		void PlayStunEffects(bool secondSwing);
		void ExecuteUbergraph_Equip_ShockShank(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
