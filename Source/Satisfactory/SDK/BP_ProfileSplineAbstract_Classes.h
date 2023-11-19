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
	 * BlueprintGeneratedClass BP_ProfileSplineAbstract.BP_ProfileSplineAbstract_C
	 * Size -> 0x0008 (FullSize[0x0308] - InheritedSize[0x0300])
	 */
	class ABP_ProfileSplineAbstract_C : public AFGProfileSpline
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void DisableTick();
		void EnableTick();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
