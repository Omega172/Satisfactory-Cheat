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
	 * BlueprintGeneratedClass Build_Wall_Conveyor_8x4_03_Steel.Build_Wall_Conveyor_8x4_03_Steel_C
	 * Size -> 0x0010 (FullSize[0x0620] - InheritedSize[0x0610])
	 */
	class ABuild_Wall_Conveyor_8x4_03_Steel_C : public AFGBuildableWall
	{
	public:
		class UFGColoredInstanceMeshProxy*                         FGColoredInstanceMeshProxy;                              // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       SnapOnly0;                                               // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
