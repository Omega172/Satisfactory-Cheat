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
	 * BlueprintGeneratedClass Build_StorageBlueprint.Build_StorageBlueprint_C
	 * Size -> 0x0010 (FullSize[0x0770] - InheritedSize[0x0760])
	 */
	class ABuild_StorageBlueprint_C : public AFGBuildableStorage
	{
	public:
		class UBoxComponent*                                       Box;                                                     // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MainMesh;                                                // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CanBeSampled();
		bool CanDismantle();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
