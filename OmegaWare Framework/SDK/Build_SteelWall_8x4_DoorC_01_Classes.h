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
	 * BlueprintGeneratedClass Build_SteelWall_8x4_DoorC_01.Build_SteelWall_8x4_DoorC_01_C
	 * Size -> 0x0017 (FullSize[0x0690] - InheritedSize[0x0679])
	 */
	class ABuild_SteelWall_8x4_DoorC_01_C : public ABUILD_SingleDoor_Base_01_C
	{
	public:
		unsigned char                                              UnknownData_3US1[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy1;                             // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
