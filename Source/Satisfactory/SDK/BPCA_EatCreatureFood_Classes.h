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
	 * BlueprintGeneratedClass BPCA_EatCreatureFood.BPCA_EatCreatureFood_C
	 * Size -> 0x0029 (FullSize[0x0149] - InheritedSize[0x0120])
	 */
	class UBPCA_EatCreatureFood_C : public UFGCreatureAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0120(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              TargetFood;                                              // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     FoodSearchRadius;                                        // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnvQueryInstanceBlueprintWrapper*                   LocalQuery;                                              // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ItemDescriptor;                                          // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsMovingToFood;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanPerformAction();
		void OnFail_4FAD94544D2A6D37380427B7044188E7(EPathFollowingResult MovementResult);
		void OnSuccess_4FAD94544D2A6D37380427B7044188E7(EPathFollowingResult MovementResult);
		void PerformAction();
		void OnCreatureFoodQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void MoveToFood(class AActor* FoodActor);
		void EatFood(class AActor* FoodActor);
		void CancelAction();
		void ActionTick(float DeltaTime);
		void CleanupAction(bool actionSuccess);
		void ExecuteUbergraph_BPCA_EatCreatureFood(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
