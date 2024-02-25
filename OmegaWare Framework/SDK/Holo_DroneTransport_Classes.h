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
	 * BlueprintGeneratedClass Holo_DroneTransport.Holo_DroneTransport_C
	 * Size -> 0x0008 (FullSize[0x04F8] - InheritedSize[0x04F0])
	 */
	class AHolo_DroneTransport_C : public AFGBuildableDroneHologram
	{
	public:
		class UFGClearanceComponent*                               FGClearance;                                             // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
