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
	 * BlueprintGeneratedClass BPCA_MoveToTarget.BPCA_MoveToTarget_C
	 * Size -> 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
	 */
	class UBPCA_MoveToTarget_C : public UFGCreatureAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEnvQueryInstanceBlueprintWrapper*                   LocalQuery;                                              // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mAcceptanceRadius;                                       // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mAcceptanceRadiusMax;                                    // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMoveSpeed                                                 mMoveSpeed;                                              // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_66C4[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mCurrentAcceptanceRadius;                                // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFail_6D342B944E73041A5FE5DC844675B4A7(EPathFollowingResult MovementResult);
		void OnSuccess_6D342B944E73041A5FE5DC844675B4A7(EPathFollowingResult MovementResult);
		void PerformAction();
		void CancelAction();
		void ExecuteUbergraph_BPCA_MoveToTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
