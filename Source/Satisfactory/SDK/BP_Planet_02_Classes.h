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
	 * BlueprintGeneratedClass BP_Planet_02.BP_Planet_02_C
	 * Size -> 0x0160 (FullSize[0x0460] - InheritedSize[0x0300])
	 */
	class ABP_Planet_02_C : public AFGPlanet
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_PlanetDisk_01;                                        // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Planet;                                                  // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Origin;                                                  // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  mMaterial;                                               // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mMaterialInstance;                                       // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         mOpacityCurve;                                           // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mInitialLocation;                                        // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       mAnimToPlay;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       FadeOutRim;                                              // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FadeInRim;                                               // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80Z4[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         mRimLightCurve;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mDefaultPlayRate;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLastPlayRate;                                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAnimationLength;                                        // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mPlanetRadiusKM;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mPlanetDistance;                                         // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mPlanetRotationAxis;                                     // 0x0380(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFGTimeOfDaySubsystem*                               mCachedTODSubsystem;                                     // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mInitialOffsetTime;                                      // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mPlayerPlanetRadiusKM;                                   // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDaysPerRotation;                                        // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumSubBodies;                                           // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WNDF[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        mSubBody;                                                // 0x03C0(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		TArray<double>                                             mSubBodiesScaleFactor;                                   // 0x03D0(0x0010) Edit, BlueprintVisible
		TArray<class UStaticMesh*>                                 mSubBodiesMesh;                                          // 0x03E0(0x0010) Edit, BlueprintVisible
		TArray<double>                                             mSubBodiesRotationSpeed;                                 // 0x03F0(0x0010) Edit, BlueprintVisible
		TArray<double>                                             mSubBodiesDistance;                                      // 0x0400(0x0010) Edit, BlueprintVisible
		TArray<double>                                             mSubBodiesRotationOffset;                                // 0x0410(0x0010) Edit, BlueprintVisible
		double                                                     mOrbitOffsetKM;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasDIsk;                                                // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6HIK[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                mDiskComponent;                                          // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mRingInnerOffset;                                        // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDiskSize;                                               // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            mRotation;                                               // 0x0448(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		void ConstructSubBody(int32_t Index);
		void RotationPerDay(double* Degrees);
		void GetTimeOfDaySubsystem(class AFGTimeOfDaySubsystem** TimeSubsystem);
		void UpdateLocation();
		void UpdateMaterialParameters();
		void UserConstructionScript();
		void PostLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PostSaveGame(int32_t saveVersion, int32_t GameVersion);
		void PreLoadGame(int32_t saveVersion, int32_t GameVersion);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void UpdatePreview();
		void PreSaveGame(int32_t saveVersion, int32_t GameVersion);
		void SetMovementMultiplier(float Multiplier);
		void EnableMovement(bool Enabled);
		void SetPosition(float pct);
		void ExecuteUbergraph_BP_Planet_02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
