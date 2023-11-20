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
	 * BlueprintGeneratedClass Build_Packager.Build_Packager_C
	 * Size -> 0x009C (FullSize[0x0878] - InheritedSize[0x07DC])
	 */
	class ABuild_Packager_C : public AFGBuildableManufacturer
	{
	public:
		unsigned char                                              UnknownData_CVH0[0x4];                                   // 0x07DC(0x0004) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Packager_01;                                          // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionFactory*                            PipeOutputFactory;                                       // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPipeConnectionFactory*                            PipeInputFactory;                                        // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Input0;                                                  // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output1;                                                 // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent;                                      // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPowered;                                               // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mProductionEffectsRunning;                               // 0x0839(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2B9R[0x6];                                   // 0x083A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mVentSmoke_01;                                           // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        mCurrentColor_VFX;                                       // 0x0848(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        SFX_Ambience;                                            // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FString                                              CurrentPackagingMode;                                    // 0x0860(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAkComponent*                                        SFXResidueRef;                                           // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void Play_SFX_ActiveResidue();
		void Kill_SFX_Ambience();
		void Stop_SFX_Ambience();
		void Start_SFX_Ambience();
		void CheckCurrentRecipe_VFX();
		void Stop_VFX_Production();
		void Destroy_VFX();
		void Spawn_VFX_Emitters();
		void Start_VFX_Production();
		void StartProductionLoopEffects(bool didStartProducing);
		void StopProductionLoopEffects(bool didStopProducing);
		void GainedSignificance();
		void LostSignificance();
		void OnIsProducingChanged(bool newIsProducing);
		void OnHasPowerChanged(bool newHasPower);
		void ReceiveBeginPlay();
		void Play_SFX_Residue();
		void GetParticle();
		void PlayEndVfx();
		void Play_VFX_Messy();
		void ExecuteUbergraph_Build_Packager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
