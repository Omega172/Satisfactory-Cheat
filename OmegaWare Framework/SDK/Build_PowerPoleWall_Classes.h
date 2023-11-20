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
	 * BlueprintGeneratedClass Build_PowerPoleWall.Build_PowerPoleWall_C
	 * Size -> 0x0008 (FullSize[0x0618] - InheritedSize[0x0610])
	 */
	class ABuild_PowerPoleWall_C : public AFGBuildablePowerPole
	{
	public:
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
