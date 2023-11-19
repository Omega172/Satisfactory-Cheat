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
	 * BlueprintGeneratedClass BTD_DistanceCheck.BTD_DistanceCheck_C
	 * Size -> 0x0088 (FullSize[0x0128] - InheritedSize[0x00A0])
	 */
	class UBTD_DistanceCheck_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              mFirstBBKey;                                             // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              mSecondBBKey;                                            // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FVector                                             mFirst;                                                  // 0x00F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             mSecond;                                                 // 0x0108(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mDistanceThreshold;                                      // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector GetLocationFromBBKey(const struct FBlackboardKeySelector& Key);
		bool PerformConditionCheck(class AActor* OwnerActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
