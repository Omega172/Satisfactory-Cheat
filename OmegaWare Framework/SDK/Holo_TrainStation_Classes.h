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
	 * BlueprintGeneratedClass Holo_TrainStation.Holo_TrainStation_C
	 * Size -> 0x0010 (FullSize[0x06E0] - InheritedSize[0x06D0])
	 */
	class AHolo_TrainStation_C : public AFGTrainStationHologram
	{
	public:
		class UStaticMeshComponent*                                BuildingMeshProxy;                                       // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Arrow;                                                   // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
