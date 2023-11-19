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
	 * BlueprintGeneratedClass BP_Locomotive.BP_Locomotive_C
	 * Size -> 0x0091 (FullSize[0x0741] - InheritedSize[0x06B0])
	 */
	class ABP_Locomotive_C : public AFGLocomotive
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SpotlightBeam;                                           // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            EngineRunning_02;                                        // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            EngineRunning_01;                                        // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsThrottleZero;                                         // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSteeringZero;                                         // 0x06E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XB28[0x6];                                   // 0x06EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mHUDClass;                                               // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mPossessed;                                              // 0x06F8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BGA6[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         mEngineCurve;                                            // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mAllowEndHonk;                                           // 0x0708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mPlayHonkAlternative;                                    // 0x0709(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JVNW[0x6];                                   // 0x070A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mCachedName;                                             // 0x0710(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        mVelocityTimer;                                          // 0x0728(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mLocomotiveImpact;                                       // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mLocomotiveDerail;                                       // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mSpotLightsAreEnabled;                                   // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DefaultLightColor(struct FVector* Value);
		class UStaticMesh* GetDerailHologramMesh();
		void SpawnCollisionVFX(double ImpactForceScale);
		void EasterEgg(double NewParam);
		void PlayLocomotiveImpactSFX(double ImpactForce);
		void SpawnDeRailVFX(const struct FVector& Location, double Velocity, const struct FVector& ForwardVector, EPhysicalSurface Surface);
		void CheckValidationForStop();
		void PlayLocomotiveImpactDerailSFX(double ImpactForce);
		void CheckActorVelocity();
		bool IsPossessed();
		void ReceiveBeginPlay();
		void ReceiveUnpossessed(class AController* OldController);
		void ReceivePossessed(class AController* NewController);
		void OnNameChanged();
		void UpdateTrainName();
		void GainedSignificance();
		void LostSignificance();
		void UpdateCamera(float DeltaTime);
		void UpdateVFX();
		void OnHonkBegin();
		void OnHonkEnd();
		void BeginHonk(bool AllowAlternativeHonk);
		void EndHonk();
		void MulticastOnHonkShort();
		void MulticastOnHonkDanger();
		void HonkShort();
		void HonkDanger();
		void ReceiveOnRerail();
		void ReceiveOnCollided(class AFGRailroadVehicle* withVehicle, float ImpactVelocity, bool isPrimaryEvent, bool IsDerailed);
		void SetCustomizationData(const struct FFactoryCustomizationData& customizationData);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ExecuteUbergraph_BP_Locomotive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
