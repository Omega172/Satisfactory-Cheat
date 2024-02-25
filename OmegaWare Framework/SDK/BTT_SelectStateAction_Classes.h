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
	 * BlueprintGeneratedClass BTT_SelectStateAction.BTT_SelectStateAction_C
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UBTT_SelectStateAction_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              SelectedActionKey;                                       // 0x00B0(0x0028) Edit, BlueprintVisible
		class UFGAction*                                           SelectedAbility;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     SelectedScore;                                           // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UFGAction*>                                   FilteredActions;                                         // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AFGCreature*                                         CachedCreature;                                          // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void TryToSelect(double ActionScore, bool Filter, class UFGAction* Action);
		void SetupAndFilterActions(TArray<class UFGAction*>* TotalActions, TArray<class UFGAction*>* FilteredActions);
		void PrintInvalidActionWarning(class APawn* Pawn);
		void ReceiveExecute(class AActor* OwnerActor);
		void BreakActionSelection();
		void ExecuteUbergraph_BTT_SelectStateAction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
