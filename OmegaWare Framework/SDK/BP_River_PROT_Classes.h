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
	 * BlueprintGeneratedClass BP_River_PROT.BP_River_PROT_C
	 * Size -> 0x0094 (FullSize[0x0494] - InheritedSize[0x0400])
	 */
	class ABP_River_PROT_C : public AFGRiver
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    mCachedMaterialQuality;                                  // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P0ML[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mMainRiverSFX;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		EDynamicWaterState                                         MainRiverBaseState;                                      // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDynamicWaterState                                         RapidRiverLayerState;                                    // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDynamicWaterState                                         TurbulentRiverLayerState;                                // 0x041A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0JLQ[0x5];                                   // 0x041B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        mRapidRiverSFX;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mTurbulentRiverSFX;                                      // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       TurbulentLayeredEvent;                                   // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       RapidLayeredEvent;                                       // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       MainRiverEvent;                                          // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  mTranformSimulatedInstance;                              // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FTransform>                                  mTransformRapidInstance;                                 // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FTransform>                                  mTransformTurbulentInstance;                             // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      AttenuationScalingFactorMain;                            // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttenuationScalingFactorRapid;                           // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttenuationScalingFactorTurbulent;                       // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J1RO[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EmitterIntervals;                                        // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredSignificanceDistance;                             // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearAudioTransformData();
		void PlayTurbulentAudioOnSplinePoint();
		void PlayRapidAudioOnSplinePoint();
		void SetAdaptedAudioPositionOnSplinePoint();
		void StopAudioOnSpline();
		void PlayBaseAudioOnSpline();
		void SetBaseAudioPositionAlongSpline();
		void UpdateMaterial(const class FString& updatedCvar);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void GainedSignificance();
		void LostSignificance();
		void UpdateSignificanceTickRate(float NewTickRate, bool bTickEnabled);
		void ExecuteUbergraph_BP_River_PROT(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
