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
	 * BlueprintGeneratedClass Build_XmassTree.Build_XmassTree_C
	 * Size -> 0x0094 (FullSize[0x066C] - InheritedSize[0x05D8])
	 */
	class ABuild_XmassTree_C : public AFGBuildable
	{
	public:
		unsigned char                                              UnknownData_7E3C[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Clearance;                                               // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Balls_01;                                             // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Balls_04;                                             // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Balls_03;                                             // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Balls_02;                                             // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Parcels1;                                             // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Tier_4_Star;                                             // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                T3_SM_TreeLights_02;                                     // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                T2_SM_TreeLights_01;                                     // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T3_Parcels;                                              // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       ISM_Tier1;                                               // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T2_Balls_04;                                             // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T2_Balls_02;                                             // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T2_Balls_03;                                             // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       T2_Balls_01;                                             // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Base;                                                    // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    tier;                                                    // 0x0668(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Tier();
		void EventPurchasedSchematic(class UClass* purchasedSchematic);
		void ReceiveBeginPlay();
		void UpgradeTier(int32_t newTier);
		void SetTier();
		void Tier1();
		void Tier2();
		void Tier3();
		void Tier4();
		void ExecuteUbergraph_Build_XmassTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
