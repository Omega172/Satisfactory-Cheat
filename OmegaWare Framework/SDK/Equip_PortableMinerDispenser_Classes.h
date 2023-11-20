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
	 * BlueprintGeneratedClass Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C
	 * Size -> 0x0018 (FullSize[0x04C8] - InheritedSize[0x04B0])
	 */
	class AEquip_PortableMinerDispenser_C : public AFGPortableMinerDispenser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              _1P_PortableMiner;                                       // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnPortableMiner(class AFGResourceNode* ResourceNode);
		void PlaySpawnEffects(class ABP_PortableMiner_C* PortableMiner);
		void WasEquipped();
		void WasUnEquipped();
		void ExecuteUbergraph_Equip_PortableMinerDispenser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
