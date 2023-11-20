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
	 * BlueprintGeneratedClass Holo_StreetLight.Holo_StreetLight_C
	 * Size -> 0x0010 (FullSize[0x0698] - InheritedSize[0x0688])
	 */
	class AHolo_StreetLight_C : public AFGFactoryHologram
	{
	public:
		unsigned char                                              UnknownData_0KCX[0x8];                                   // 0x0688(0x0008) Fix Super Size
		class UStaticMeshComponent*                                Arrow;                                                   // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
