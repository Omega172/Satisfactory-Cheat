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
	 * BlueprintGeneratedClass Equip_Chainsaw.Equip_Chainsaw_C
	 * Size -> 0x005A (FullSize[0x051A] - InheritedSize[0x04C0])
	 */
	class AEquip_Chainsaw_C : public AFGChainsaw
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Chainsaw_skl;                                            // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mUIWidget;                                               // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mSawingVFX;                                              // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mSawingMontageLength;                                    // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mInterpSawProgress;                                      // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mSawToEngage;                                            // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        CurrentStateSFX;                                         // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentOutputDataSFX;                                   // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mCurrentAkID;                                            // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BHGL[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        mSawingMontage;                                          // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mCurrentHasFuel;                                         // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFGChainsawState                                           mPreviousState;                                          // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void ChainsawStateTick_Idle();
		void OnChainsawStateTransition(EFGChainsawState oldState);
		bool IsSpinningUpTransitionFinished();
		void TickCurrentState(double DeltaTime);
		void ChainsawStateEnter_None();
		void ChainsawStateEnter_SpinningUp();
		void ChainsawStateExit_Sawing();
		void ChainsawStateTickSawing(double DeltaTime);
		void ChainsawStateEnter_Idle();
		void ChainsawStateEnter_Sawing();
		void ChainsawStateEnter_Engaged();
		void UpdateIdleAudioLoopSFX();
		void ChainsawStateEnter_SpinningUp_Normal();
		void ChainsawStateEnter_SpinningUp_Stinger();
		void StopOnUnEquippedSFX();
		void StopCurrentSFXByID();
		void StopAllAndPlayEnd();
		void TransitionToIdleSFX();
		void StartIdleEventSFX();
		void StartEngageEventSFX();
		void StartSawingEventSFX();
		void StopCurrentAKEvent();
		void GetCurrentOutputDataSFX();
		void InterpolateChainsawProgress(double DeltaTime);
		void CreatePhysicsFromFoliage(class UStaticMesh* InMesh, const struct FTransform& InTransform);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Equip_Chainsaw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
