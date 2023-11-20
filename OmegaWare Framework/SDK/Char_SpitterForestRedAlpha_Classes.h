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
	 * BlueprintGeneratedClass Char_SpitterForestRedAlpha.Char_SpitterForestRedAlpha_C
	 * Size -> 0x0018 (FullSize[0x0A98] - InheritedSize[0x0A80])
	 */
	class AChar_SpitterForestRedAlpha_C : public ABP_Creature_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Horns;                                                   // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveDied();
		void NotifyOnTakeDamage(class AActor* DamagedActor, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Char_SpitterForestRedAlpha(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
