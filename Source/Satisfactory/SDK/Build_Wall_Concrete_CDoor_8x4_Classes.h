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
	 * BlueprintGeneratedClass Build_Wall_Concrete_CDoor_8x4.Build_Wall_Concrete_CDoor_8x4_C
	 * Size -> 0x0017 (FullSize[0x0690] - InheritedSize[0x0679])
	 */
	class ABuild_Wall_Concrete_CDoor_8x4_C : public ABUILD_SingleDoor_Base_01_C
	{
	public:
		unsigned char                                              UnknownData_UL69[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGColoredInstanceMeshProxy*                         BuildingMeshProxy1;                                      // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         mDoorFrame;                                              // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
