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
	 * BlueprintGeneratedClass Char_Player.Char_Player_C
	 * Size -> 0x0328 (FullSize[0x1218] - InheritedSize[0x0EF0])
	 */
	class AChar_Player_C : public AFGCharacterPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPostProcessComponent*                               PPRadiationDamage;                                       // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                HelmetMesh;                                              // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 FlashLight3P;                                            // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Flashlight_01;                                           // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FlashlightCone;                                          // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 FlashLight1P;                                            // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               TestPostProcess;                                         // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PPTakeDamage;                                            // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PPSpawnScanner;                                          // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_B76C40B14E59156709A748B4B016AE20;  // 0x0F48(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_B76C40B14E59156709A748B4B016AE20;  // 0x0F4C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GAY4[0x3];                                   // 0x0F4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0F50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EventScrollDown;                                         // 0x0F58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventScroll;                                             // 0x0F68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventScrollUp;                                           // 0x0F78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EventFire;                                               // 0x0F88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mDeltaTime;                                              // 0x0F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDesiredDamageIndicator;                                 // 0x0FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDamageIndicatorSpeed;                                   // 0x0FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLowHealthIndicatorPower;                                // 0x0FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentDamageIndicator;                                 // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxDamageIndicator;                                     // 0x0FC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastDamageTime;                                         // 0x0FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTargetCameraDistance;                                   // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSavedCameraDistance;                                    // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCameraDistanceMin;                                      // 0x0FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCameraDistanceMax;                                      // 0x0FE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTransitionDelay;                                        // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mTargetCameraOffset;                                     // 0x0FF8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mCameraOffset3P;                                         // 0x1010(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDistanceInterpolationSpeed;                             // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTargetCameraFOV;                                        // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSavedCameraFOV;                                         // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsFocusing;                                             // 0x1040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mMuteOnOff;                                              // 0x1041(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U1QV[0x6];                                   // 0x1042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mCameraDistanceDefault3P;                                // 0x1048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCameraDistanceFocus3P;                                  // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mFocusInterpolationSpeed;                                // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDefaultCameraInterpolationSpeed;                        // 0x1060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDefaultFOV;                                             // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mFocusFOV;                                               // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCameraDistanceMin3P;                                    // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mCameraDistanceMax3P;                                    // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                mPickupMontageSectionName;                               // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                mPickupMontageSectionName3p;                             // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mReviveWidget;                                           // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mPlayerHUDClass;                                         // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mFlashlightOn;                                           // 0x10A8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mWaitingForPlayerState;                                  // 0x10A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J7EE[0x6];                                   // 0x10AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULevelSequence*>                              mSequences;                                              // 0x10B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_InteractablesMarker_C*                           mInteractableMarker;                                     // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                mMineSection;                                            // 0x10C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFGCameraModifierLimitLook*                          mLookModifier;                                           // 0x10D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FDisabledInputGate                                  mLandingInputGate;                                       // 0x10D8(0x0002) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_HKRH[0x6];                                   // 0x10DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              mEmoteBuildgun;                                          // 0x10E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mRadiationNoise;                                         // 0x10E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mWarningPopupTimer;                                      // 0x10F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        mPlaytimeWarningMessages;                                // 0x10F8(0x0010) Edit, BlueprintVisible
		int32_t                                                    mPlaytimeWarningMessageIndex;                            // 0x1108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5SGH[0x4];                                   // 0x110C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCM_Slide_C*                                         mSlideCameraModifier;                                    // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mClearSlideVelocityTimer;                                // 0x1118(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                mHypertube_VfxCap;                                       // 0x1120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Hypertube_Vfx_Particle_02;                               // 0x1128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Hypertube_Vfx_Particle_01;                               // 0x1130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mClearSlideSpeedWindTimer;                               // 0x1138(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentSpeedWindTimer;                                  // 0x1140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mLastSlideSurfaceType;                                   // 0x1148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                mCurrentSlidingSurfaceType;                              // 0x114C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1630[0x4];                                   // 0x1154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mClearTubeTravelUpdateTimer;                             // 0x1158(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mLastFrameForwardDirection;                              // 0x1160(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastFrameDirectionDegrees;                              // 0x1178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mClearSlideVFXTimer;                                     // 0x1180(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Sliding_Particle;                                        // 0x1188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentWindSpeed;                                       // 0x1190(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mVFX_Capsule_Opacity;                                    // 0x1198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFGCharacterMovementComponent*                       mFGCharacterMovementCompRef;                             // 0x11A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mSwitchingPipes;                                         // 0x11A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mLastFrameEndPosTube;                                    // 0x11B0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mLastFrameEndRotTube;                                    // 0x11C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAkComponent*                                        mSFXFastJUnction;                                        // 0x11E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mPlaySpeedWind;                                          // 0x11E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WIII[0x7];                                   // 0x11E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mIsZiplineTraveling;                                     // 0x11F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mThirdPerson_ZiplineBurst_VFX;                           // 0x11F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                mHat;                                                    // 0x1200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mEmoteIndex;                                             // 0x1208(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6VHN[0x4];                                   // 0x120C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mSFXEmotePlaying;                                        // 0x1210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void SetNametagHeightOffset(double Offset);
		void ResetBoomboxGlobalRTPC();
		void ShootFingerGuns();
		struct FLinearColor GetDefaultRepresentationColor();
		void ResetUnderwaterEffects();
		void WaterSplashEnterSFX();
		void WaterSplashExitSFX();
		void PlayFlushAnimation(class AActor* hubActor);
		void ResetAudioReverb();
		void TubeTravelHardCorners(double CurveFloatValue);
		void AudioWindDirectionSpeedUpdate();
		void SlideVFX();
		void TubeTravelSpeedUpdate();
		void SlideSpeedWindUpdate();
		void SlideVelocityUpdate();
		void ToggleCodex();
		void ToggleInventory();
		void ToggleFlashlight();
		void RemovePlayerHUD(class AFGPlayerController* OldController);
		void SetupPlayerHUD(class AFGPlayerController* PlayerController);
		void HandleFlashlight();
		void GetHealthPct(double* healthPct);
		void UpdateDamageIndicator();
		void PlayDamageVO(class UDamageType* DamageType);
		void PlayDamageCameraShake();
		void ApplyDamagePP();
		void PlayImpactEffectSound(class UDamageType* DamageType);
		void CalculateOnscreenEffectBlendWeight(double* BlendWeight);
		void UpdateWindParticle();
		void GetPlayerCameraManager(class APlayerCameraManager** CameraManager);
		void FadeDamageIndicator();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnLoaded_5BB4F5014CAF3CF6F8C3388A769155DB(class UObject* Loaded);
		void ReceivePossessed(class AController* NewController);
		void OnLanded(const struct FHitResult& Hit);
		void CameraTick();
		void ReceiveDestroyed();
		void TakeDamageEvent(class AActor* DamagedActor, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void SetFirstPersonMode();
		void SetThirdPersonMode();
		void StartFocusAim();
		void StopFocusAim();
		void StartFreeRotate3P();
		void StopFreeRotate3P();
		void CameraZoomOut();
		void CameraZoomIn();
		void ReceiveDied();
		void ReceiveBeginPlay();
		void PlayPickupEffects();
		void SnapSpringArmToDesiredLocation();
		void OnReviveComplete();
		void ClientSetupPlayerHUD(class AController* InController);
		void ReceiveUnpossessed(class AController* OldController);
		void OnReceiveRadiationStart();
		void OnReceiveRadiationStop();
		void Server_SetFlashlightOn(bool FlashlightOn);
		void OnDisabledInputGateChanged(const struct FDisabledInputGate& NewValue);
		void SpeedWindEvent();
		void LimitLook(bool doLimit);
		void EndStartingPodCinematic();
		void DisableGravity();
		void OnSpawnDeathMarker();
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void OnRadiationIntensityUpdated(float radiationIntensity, float radiationImmunity);
		void TickVisuals(float dt);
		void OnSlideStartLocal();
		void OnSlideEndLocal();
		void OnSlideEndSimulated();
		void OnSlideStartSimulated();
		void PlayJumpEffects(bool boostJump);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void AudioTickEvent(double AudioTick);
		void SetScannerIK(bool SetScannerIK);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void PlayScannerPPeffect();
		void StartZiplineEffects();
		void StopZiplineEffects();
		void ActivateFingerGuns();
		void NotifyOnToggleInventory();
		void NotifyOnToggleCodex();
		void NotifyOnToggleFlashlight();
		void NotifyOnToggleQuickSearch();
		void BeginStartingPodExitCinematic();
		void ExecuteUbergraph_Char_Player(int32_t EntryPoint);
		void EventFire__DelegateSignature();
		void EventScroll__DelegateSignature(int32_t Index);
		void EventScrollDown__DelegateSignature();
		void EventScrollUp__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
