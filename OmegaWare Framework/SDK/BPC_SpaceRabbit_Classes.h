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
	 * BlueprintGeneratedClass BPC_SpaceRabbit.BPC_SpaceRabbit_C
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	class ABPC_SpaceRabbit_C : public ABP_CreatureController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AChar_SpaceRabbit_C*                                 CachedSpaceRabbit;                                       // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		bool IsActorConsideredThreat(class AActor* Actor);
		bool CanBeAlertedByTarget(class AActor* Target);
		void ReceivePossess(class APawn* PossessedPawn);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BPC_SpaceRabbit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
