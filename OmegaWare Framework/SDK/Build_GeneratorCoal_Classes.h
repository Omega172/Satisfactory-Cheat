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
	 * BlueprintGeneratedClass Build_GeneratorCoal.Build_GeneratorCoal_C
	 * Size -> 0x0074 (FullSize[0x084C] - InheritedSize[0x07D8])
	 */
	class ABuild_GeneratorCoal_C : public AFGBuildableGeneratorFuel
	{
	public:
		unsigned char                                              UnknownData_5ACK[0x8];                                   // 0x07D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGPipeConnectionFactory*                            FGPipeConnectionFactory;                                 // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryLegsComponent*                             FGFactoryLegs;                                           // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MainMesh;                                                // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ProductionIndicatorInstanced_C*                  BP_ProductionIndicatorInstanced;                         // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LadderComponent_C*                               BP_LadderComponent;                                      // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Input0;                                                  // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mCoalGenSmokeVfx;                                        // 0x0828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                mCoalGenSmokeLOD_VFX;                                    // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        m_SFXSockets;                                            // 0x0838(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    m_CurrentPotential;                                      // 0x0848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GainedSignificance();
		void StartProductionLoopEffects(bool didStartProducing);
		void StopProductionLoopEffects(bool didStopProducing);
		void LostSignificance();
		void Factory_ReceiveStartProducing();
		void Factory_ReceiveStopProducing();
		void OnCurrentPotentialChanged(float newCurrentPotential);
		void ExecuteUbergraph_Build_GeneratorCoal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
