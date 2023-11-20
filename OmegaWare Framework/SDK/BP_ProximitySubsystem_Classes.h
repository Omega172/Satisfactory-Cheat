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
	 * BlueprintGeneratedClass BP_ProximitySubsystem.BP_ProximitySubsystem_C
	 * Size -> 0x01F1 (FullSize[0x0571] - InheritedSize[0x0380])
	 */
	class ABP_ProximitySubsystem_C : public AFGProximitySubsystem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            mCurrentAreaParticle;                                    // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCurrentWindSpeed;                                       // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsOccluded;                                             // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TEYX[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mWindAreas;                                              // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        mWindOcclusionTimer;                                     // 0x03B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInDesertDune;                                          // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZE3Q[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APostProcessVolume*                                  mGlobalPostProcess;                                      // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   mHeatHaze_Mat;                                           // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   mPPI_OutlineColored;                                     // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumberOfWindOcclusionTraces;                            // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7MYC[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mWindOcclusionTraceDistance;                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mWindOcclusionTraceSpread;                               // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WindSideDir;                                             // 0x03F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WindDir;                                                 // 0x0408(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mOcclusionValuePerTrace;                                 // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SetOcclusionValue;                                       // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mCachedMapArea;                                          // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mAmbientLifeSpawnLocation;                               // 0x0438(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mCurrentAmbientLife_Particle;                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mSpawnRange;                                             // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastTickTimeFar;                                        // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAmbientFarFrequency;                                    // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAmbientSpawnFrequencyRandomFactor;                      // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mVFXQualityLevel;                                        // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FQA1[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             mSpawnNearVector;                                        // 0x0480(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSpawnRange_Far_Multiplier;                              // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mSpawnFarVector;                                         // 0x04A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAmbientNearFrequency;                                   // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastTickTimeNear;                                       // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxDistance_Search;                                     // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastTickTimeFallingLeaves;                              // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mFallingLeavesFrequency;                                 // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mPreviousFoliageID;                                      // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1PUV[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraComponent*                                   mNS_Bugs;                                                // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<EProximityEffectTypes>                              mProximityTypes;                                         // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     mMaxFoliageRadius;                                       // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            mCachedFoliageIstanceID;                                 // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EProximityEffectTypes>                              mProximityTypesSFX;                                      // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            mCachedSFXIstanceID;                                     // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            mCachedNatureIstanceID;                                  // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mCounterRemovingFoliageIndex;                            // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mCounterRemovingNatureIndex;                             // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mAreaDensity;                                            // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mCounterRemovingSFXIndex;                                // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxDistanceSearch;                                      // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mAmbienceTimer;                                          // 0x0560(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mSFXAmbienceTimer;                                       // 0x0568(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsDayTime;                                              // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Spawn_Fairies_VFX();
		void Spawn_TitanForest_Ground_VFX(bool IsInCave, EProximityEffectTypes TypeEnum);
		void AmbienceWindDirection(const struct FVector& FoliageLocation, struct FVector* WindDirection);
		void StartWeatherTimer();
		void IsFoliageWithinAttenuation(class UAkAudioEvent* AkEvent, const struct FVector& FoliageLocation, bool* IsWithinRadius);
		void SetupAreaAmbienceByFoliageType(TArray<int32_t>* MeshIDs, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* InstancedStaticMeshComp, const struct FVector& FoliageLocation, int32_t InstanceId);
		void ForecastPredictionOnAreas();
		void SpawnAkEventSFX(class UAkAudioEvent* AkEventDay, class UAkAudioEvent* AkEventNight, const struct FVector& SpawnLocation, int32_t FoliageIndex);
		void SpawnCascadeVFX(class UParticleSystem* CascadeFarDay, class UParticleSystem* CascadeCloseDay, class UParticleSystem* CascadeFarNight, class UParticleSystem* CascadeCloseNight, const struct FVector& SpawnLocation, int32_t FoliageIndex, bool ShouldSpawnInAir, double HeightAboveMesh);
		void SpawnNiagaraVFX(class UNiagaraSystem* NiagaraFarDay, class UNiagaraSystem* NiagaraCloseDay, class UNiagaraSystem* NiagaraFarNight, class UNiagaraSystem* NiagaraCloseNight, const struct FVector& SpawnLocation, bool ShouldUseFlipBookIndex, int32_t FoliageIndex, int32_t FlipBookIndex, bool ShouldAdjustSize, double Size, bool UseSpawnRate, double SpawnRate, bool UsingWindDirection);
		void GetFoliageID(TArray<int32_t>* FoliageIDs, int32_t* ChosenFoliageID, int32_t* GetFoliageIndex);
		void StartDynamicSFXAmbienceTimer();
		void StartAmbienceTimer();
		void SFXSwitchOnEnteredArea();
		void SetEcoSystemByArea(int32_t TypeOfEcoSystemInt);
		void CalculateEcoSystemByInt(int32_t Bushes, int32_t Trees, int32_t Rocks, int32_t Flowers, int32_t totalAmount, int32_t* TypeOfEcoSystem);
		void CheckAreaDynamicDensity(double AreaRadius, int32_t* AmountOfBushes, int32_t* AmountOfTrees, int32_t* AmountOfRocks, int32_t* AmountOfFlowers, int32_t* totalAmount);
		void CheckSFXDynamicAreaAmbience();
		void RemoveContainedSFXIndex(TArray<int32_t>* SFXArray, int32_t ContainedLifeID);
		void CheckContainedSFXCachedInstances(int32_t MaxSFXInstances);
		void CheckContainedCachedInstances(int32_t MaxAmbienceInstances);
		void RandomBackwardDirectionalVector(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* RandomDirectionalBackwardVector);
		void CheckAreaDensityByType(double AreaRadius, int32_t ModBy, int32_t* ModBushes, int32_t* ModTrees, int32_t* ModRocks, int32_t* ModFlowers, int32_t* totalAmount);
		void OnEnteredNewArea();
		void RemoveContainedFoliageIndex(TArray<int32_t>* LifeArray, int32_t ContainedLifeID);
		void CheckAreaDensity(double AreaRadius, int32_t ModBy, const struct FVector& SearchLocation, int32_t* CalculatedAmount);
		void SpawnEffectsOnFoliageNewLocation(class UInstancedStaticMeshComponent* Foliage, int32_t InstanceId, const struct FVector& FoliageOriginalLocation, struct FVector* FoliageTransformedLocation);
		void SetupSingleSFXFoliageType(TArray<int32_t>* MeshIndex, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* StaticMeshCompReference, const struct FVector& FoliageLocation, int32_t InstanceId);
		void CheckSingleLocationSFX();
		void RandomForwardDirectionalVector(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* RandomDirectionalForwardVector);
		void CheckSingleLocationAmbience();
		void SetupSingleAmbienceByFoliageType(TArray<int32_t>* MeshIDs, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* InstancedStaticMeshComp, const struct FVector& FoliageLocation, int32_t InstanceId);
		void IsFoliageInSight(const struct FVector& FoliageLocation, bool* IsFoliageInSight);
		void CheckAreaAmbience();
		void IsFoliageNear(const struct FVector& FoliageLocation, double SetDistanceForNearRadius, bool* isNear);
		void SetupAreaSFXFoliageType(TArray<int32_t>* MeshIndex, EProximityEffectTypes FoliageType, class UInstancedStaticMeshComponent* StaticMeshCompReference, int32_t IstanceID, const struct FVector& FoliageLocation);
		void Spawn_FireFlies_VFX();
		void Spawn_Flies_VFX();
		void Spawn_Ground_Scatter_VFX(bool IsInCave);
		void WorldAndForwardVector_Func(class AFGFoliageRemovalSubsystem** FoliageRemovalSystem, struct FVector* SpawnLocation_Near, struct FVector* SpawnLocation_Far);
		void Spawn_Falling_VFX(class AFGFoliageRemovalSubsystem* FoliageRemovalSystem);
		void Spawn_Scatter_Flying_VFX(const struct FVector& TreeLocation, bool bIsInCave);
		void Spawn_Beetles_01_VFX();
		void DuneDesert_AmbientLife_VFX();
		void Spawn_Butterflies_VFX();
		void Spawn_NearVFX(class AFGFoliageRemovalSubsystem* FoliageRemovalSystem);
		void Spawn_FarVFX();
		double GetValueByQuality(double Low, double Medium, double High, double Ultra, double UltraPlus);
		void UpdateQualitySettings(const class FString& Property);
		void SetupQuality();
		void SetupMapAreaEffect(class UClass* NewArea);
		void EnterAreaTimer();
		void OnEnteredMapArea(class AFGPlayerControllerBase* PlayerController, class UClass* NewArea);
		void Spawn_AmbientLife_Far();
		void ReceiveTick(float DeltaSeconds);
		void Spawn_AmbientLife_Near();
		void Spawn_FallingLeaves();
		void ReceiveBeginPlay();
		void isDayTime(bool isDayTime);
		void OnPawnChanged(class APawn* NewPawn);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_ProximitySubsystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
