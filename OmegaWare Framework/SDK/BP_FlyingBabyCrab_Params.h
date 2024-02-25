﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveBeginPlay
	 */
	struct ABP_FlyingBabyCrab_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.UpdateSignificanceTickRate
	 */
	struct ABP_FlyingBabyCrab_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ReceiveEndPlay
	 */
	struct ABP_FlyingBabyCrab_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.GainedSignificance
	 */
	struct ABP_FlyingBabyCrab_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.LostSignificance
	 */
	struct ABP_FlyingBabyCrab_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.OnExplode
	 */
	struct ABP_FlyingBabyCrab_C_OnExplode_Params
	{	};

	/**
	 * Function BP_FlyingBabyCrab.BP_FlyingBabyCrab_C.ExecuteUbergraph_BP_FlyingBabyCrab
	 */
	struct ABP_FlyingBabyCrab_C_ExecuteUbergraph_BP_FlyingBabyCrab_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ADO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
