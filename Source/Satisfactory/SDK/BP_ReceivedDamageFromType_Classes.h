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
	 * BlueprintGeneratedClass BP_ReceivedDamageFromType.BP_ReceivedDamageFromType_C
	 * Size -> 0x0021 (FullSize[0x0079] - InheritedSize[0x0058])
	 */
	class UBP_ReceivedDamageFromType_C : public UFGCreatureInterruptTest
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0058(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      DamageTypes;                                             // 0x0060(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     MinDamageThreshold;                                      // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TookDamage;                                              // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ExecuteCheck();
		void Initialize_Blueprint(class APawn* Pawn, class AController* Controller, class UFGAction* ownerAction);
		void OnPawnReceivedDamages(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ExecuteUbergraph_BP_ReceivedDamageFromType(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
