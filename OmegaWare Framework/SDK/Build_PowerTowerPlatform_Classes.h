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
	 * BlueprintGeneratedClass Build_PowerTowerPlatform.Build_PowerTowerPlatform_C
	 * Size -> 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
	 */
	class ABuild_PowerTowerPlatform_C : public ABuild_PowerTower_C
	{
	public:
		class UBP_LadderComponent_C*                               Ladder;                                                  // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         PlatformMesh;                                            // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
