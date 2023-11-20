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
	 * BlueprintGeneratedClass Build_MinerMk1.Build_MinerMk1_C
	 * Size -> 0x0078 (FullSize[0x0868] - InheritedSize[0x07F0])
	 */
	class ABuild_MinerMk1_C : public AFGBuildableResourceExtractor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MainMesh_skl;                                            // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerInput;                                              // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               Ladder_2;                                                // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output0;                                                 // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FParticleMap>                                mParticleMap;                                            // 0x0830(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystemComponent*                            mDrillingVfx01;                                          // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVentFfx01;                                              // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mVentFfx02;                                              // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       CanPlayAfterStartUpStopped;                              // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WVHN[0x7];                                   // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        IsPlayingDirtSFX;                                        // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void GetExtractedResource(class UClass** Resource);
		void GetMiningParticles(class UParticleSystem** FirstParticle, class UParticleSystem** SecondParticle, bool* foundParticle);
		void GainedSignificance();
		void StartProductionLoopEffects(bool didStartProducing);
		void StopProductionLoopEffects(bool didStopProducing);
		void LostSignificance();
		void ReceiveDestroyed();
		void OnIsProducingChanged(bool newIsProducing);
		void ExecuteUbergraph_Build_MinerMk1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
