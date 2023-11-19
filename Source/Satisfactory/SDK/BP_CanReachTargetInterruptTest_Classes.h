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
	 * BlueprintGeneratedClass BP_CanReachTargetInterruptTest.BP_CanReachTargetInterruptTest_C
	 * Size -> 0x0001 (FullSize[0x0059] - InheritedSize[0x0058])
	 */
	class UBP_CanReachTargetInterruptTest_C : public UFGCreatureInterruptTest
	{
	public:
		bool                                                       mInvertResult;                                           // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ExecuteCheck();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
