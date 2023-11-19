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
	 * Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.CheckSpeedMultiplierReset
	 */
	struct ABP_TimeOfDaySubsystem_C_CheckSpeedMultiplierReset_Params
	{	};

	/**
	 * Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ReceiveBeginPlay
	 */
	struct ABP_TimeOfDaySubsystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.SetTimeSpeedMultiplierResetTime
	 */
	struct ABP_TimeOfDaySubsystem_C_SetTimeSpeedMultiplierResetTime_Params
	{
	public:
		int32_t                                                    resetTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TimeOfDaySubsystem.BP_TimeOfDaySubsystem_C.ExecuteUbergraph_BP_TimeOfDaySubsystem
	 */
	struct ABP_TimeOfDaySubsystem_C_ExecuteUbergraph_BP_TimeOfDaySubsystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JEX1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
