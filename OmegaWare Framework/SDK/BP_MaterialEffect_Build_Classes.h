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
	 * BlueprintGeneratedClass BP_MaterialEffect_Build.BP_MaterialEffect_Build_C
	 * Size -> 0x0478 (FullSize[0x0608] - InheritedSize[0x0190])
	 */
	class UBP_MaterialEffect_Build_C : public UFGMaterialEffect_Build
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0190(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    mCurrentStep;                                            // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D9T9[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mElapsedTime;                                            // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mThrowDuration;                                          // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDisplacementDuration;                                   // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaterializeAmountCurrent;                               // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaterializeAmount;                                      // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDisplacementAmount;                                     // 0x01C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  mThrowCurve;                                             // 0x01D0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mThrowQueue;                                             // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mCostAmountPerThrow;                                     // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_84YE[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mMaterializeAmountPerThrow;                              // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mGlowPower;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mVolume;                                                 // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mElapsedTimeCorrectionBuildup;                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  mOffsetCurve_Buildup;                                    // 0x0290(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRuntimeFloatCurve                                  mOffsetCurve_Drop;                                       // 0x0318(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRuntimeFloatCurve                                  mGlowPowerCurve;                                         // 0x03A0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRuntimeFloatCurve                                  mVolumeCurve;                                            // 0x0428(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mItemsThrown;                                            // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2IFR[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             mBoxBounds;                                              // 0x04B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mOrigin;                                                 // 0x04D0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRuntimeFloatCurve                                  mParticleCurve;                                          // 0x04E8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FRuntimeFloatCurve                                  mParticleVeloCurve;                                      // 0x0570(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UStaticMeshComponent*>                        mProxies;                                                // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void setupNormal();
		void PlayThumpSound();
		void InitMaterialParameters();
		void SetupBounds();
		void GotoNextStep();
		void CalcCostQueueNewLength(int32_t* NewLength);
		void DebugFillCostQueue();
		void CalcDisplacementAmount(double* Amount);
		void UpdateCostQueue();
		void SetupCostQueue();
		void SetupDuration();
		void SetupMeshes();
		void SpawnFootEmitters();
		void OnUpdate(float DeltaTime);
		void OnEnded();
		void PreStarted();
		void OnStarted();
		void OnCostActorReachedTarget();
		void destroyproxies();
		void ExecuteUbergraph_BP_MaterialEffect_Build(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
