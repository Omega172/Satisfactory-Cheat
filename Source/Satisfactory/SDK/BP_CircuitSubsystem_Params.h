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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnFuseSet
	 */
	struct ABP_CircuitSubsystem_C_PowerCircuit_OnFuseSet_Params
	{	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayFuseSetSound
	 */
	struct ABP_CircuitSubsystem_C_Multicast_PlayFuseSetSound_Params
	{	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_PlayBatteryWarningSound
	 */
	struct ABP_CircuitSubsystem_C_Multicast_PlayBatteryWarningSound_Params
	{	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnCriticalBatteryDepletion
	 */
	struct ABP_CircuitSubsystem_C_PowerCircuit_OnCriticalBatteryDepletion_Params
	{
	public:
		float                                                      depletionPercent;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.PowerCircuit_OnPrioritySwitchesTurnedOff
	 */
	struct ABP_CircuitSubsystem_C_PowerCircuit_OnPrioritySwitchesTurnedOff_Params
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.Multicast_OnPriotirySwitchGroupTurnedOff
	 */
	struct ABP_CircuitSubsystem_C_Multicast_OnPriotirySwitchGroupTurnedOff_Params
	{
	public:
		int32_t                                                    Priority;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CircuitSubsystem.BP_CircuitSubsystem_C.ExecuteUbergraph_BP_CircuitSubsystem
	 */
	struct ABP_CircuitSubsystem_C_ExecuteUbergraph_BP_CircuitSubsystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
