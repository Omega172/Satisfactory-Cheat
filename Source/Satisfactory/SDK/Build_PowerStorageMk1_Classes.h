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
	 * BlueprintGeneratedClass Build_PowerStorageMk1.Build_PowerStorageMk1_C
	 * Size -> 0x005C (FullSize[0x077C] - InheritedSize[0x0720])
	 */
	class ABuild_PowerStorageMk1_C : public AFGBuildablePowerStorage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_PowerStorage_01;                                      // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_PowerStorage_01;                                      // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mIndicatorMaterial;                                      // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXActivation;                                          // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EBatteryStatus                                             m_PreviousBatteryStatus;                                 // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QIWX[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mCurrentGameTimeSinceStateChange;                        // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXOpening;                                             // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXClosing;                                             // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSFXLightning;                                           // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mActivationEventID;                                      // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayActivationSFX();
		void StopSFXWhenEmpty();
		void PlayActivationQuickSFX();
		void StopLightningSFX();
		void PlayLightningSFX();
		void OpeningSFX();
		void ClosingSFX();
		void SpawnSFXOnSignificance();
		void StopSFX();
		void StatesForSFX();
		void KillSFX();
		void CheckActivationStateSFX();
		void UpdateSFXState(EBatteryStatus BatteryState);
		void UpdateStoredAmount(double Value);
		void UpdateState();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool IsUseable();
		void ReceiveBeginPlay();
		void StatusChanged(EBatteryStatus Status);
		void IndicatorLevelChanged(unsigned char indicatorLevel);
		void GainedSignificance();
		void LostSignificance();
		void ExecuteUbergraph_Build_PowerStorageMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
