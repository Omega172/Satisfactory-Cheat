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
	 * BlueprintGeneratedClass BP_FoliagePhysics.BP_FoliagePhysics_C
	 * Size -> 0x0020 (FullSize[0x0318] - InheritedSize[0x02F8])
	 */
	class ABP_FoliagePhysics_C : public AActor
	{
	public:
		unsigned char                                              UnknownData_2I58[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         mMesh;                                                   // 0x0310(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void StartKillProcess();
		void OnRep_mMesh();
		void ReceiveBeginPlay();
		void SetupPhysics();
		void ExecuteUbergraph_BP_FoliagePhysics(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
