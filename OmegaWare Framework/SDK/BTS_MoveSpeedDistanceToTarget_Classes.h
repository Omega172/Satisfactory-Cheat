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
	 * BlueprintGeneratedClass BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UBTS_MoveSpeedDistanceToTarget_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<double, EMoveSpeed>                                   DistanceMovespeedMap;                                    // 0x00A0(0x0050) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              TargetBBKey;                                             // 0x00F0(0x0028) Edit, BlueprintVisible
		double                                                     TargetDistanceSqr;                                       // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFGCreature*                                         CachedCreature;                                          // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		struct FVector GetLocationFromBBKey(const struct FBlackboardKeySelector& Key);
		void GetMovespeedForDistance(double DistanceSqr, EMoveSpeed* MoveSpeed);
		void UpdateTargetDistance();
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveActivation(class AActor* OwnerActor);
		void ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
