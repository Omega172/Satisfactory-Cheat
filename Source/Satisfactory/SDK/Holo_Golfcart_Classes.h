﻿#pragma once

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
	 * BlueprintGeneratedClass Holo_Golfcart.Holo_Golfcart_C
	 * Size -> 0x0008 (FullSize[0x04E8] - InheritedSize[0x04E0])
	 */
	class AHolo_Golfcart_C : public AFGWheeledVehicleHologram
	{
	public:
		class UFGClearanceComponent*                               FGClearance;                                             // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
