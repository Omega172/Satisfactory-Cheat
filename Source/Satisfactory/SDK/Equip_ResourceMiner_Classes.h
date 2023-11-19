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
	 * BlueprintGeneratedClass Equip_ResourceMiner.Equip_ResourceMiner_C
	 * Size -> 0x0030 (FullSize[0x04E0] - InheritedSize[0x04B0])
	 */
	class AEquip_ResourceMiner_C : public AFGResourceMiner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mCachedWorldGenerator;                                   // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     mFirstDecal;                                             // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     mSecondDecal;                                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     mThirdDecal;                                             // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void PlayFinalEffect();
		void PlayMiningEffect();
		void StartCameraShake();
		void PlaySecondEffects();
		void K2_OnStartedMining();
		void K2_OnStoppedMining(class AFGResourceNode* oldResourceNode);
		void ExecuteUbergraph_Equip_ResourceMiner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
