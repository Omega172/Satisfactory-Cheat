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
	 * BlueprintGeneratedClass BP_CircuitSubsystem.BP_CircuitSubsystem_C
	 * Size -> 0x0008 (FullSize[0x0428] - InheritedSize[0x0420])
	 */
	class ABP_CircuitSubsystem_C : public AFGCircuitSubsystem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PowerCircuit_OnFuseSet();
		void Multicast_PlayFuseSetSound();
		void Multicast_PlayBatteryWarningSound();
		void PowerCircuit_OnCriticalBatteryDepletion(float depletionPercent);
		void PowerCircuit_OnPrioritySwitchesTurnedOff(int32_t Priority);
		void Multicast_OnPriotirySwitchGroupTurnedOff(int32_t Priority);
		void ExecuteUbergraph_BP_CircuitSubsystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
