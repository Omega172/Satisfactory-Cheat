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
	 * BlueprintGeneratedClass BPCA_MoveToFlank.BPCA_MoveToFlank_C
	 * Size -> 0x0031 (FullSize[0x0151] - InheritedSize[0x0120])
	 */
	class UBPCA_MoveToFlank_C : public UFGCreatureAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEnvQueryInstanceBlueprintWrapper*                   LocalQuery;                                              // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mFlankDistance;                                          // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mFlankDistanceMax;                                       // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxFlankAngle;                                          // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMinimumMovementDistance;                                // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMoveSpeed                                                 mFlankMoveSpeed;                                         // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnMoveFinished_FA44375D41DCADB91D5BD7B172F3CADA(EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_FA44375D41DCADB91D5BD7B172F3CADA();
		void PerformAction();
		void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void CleanupAction(bool actionSuccess);
		void ExecuteUbergraph_BPCA_MoveToFlank(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
