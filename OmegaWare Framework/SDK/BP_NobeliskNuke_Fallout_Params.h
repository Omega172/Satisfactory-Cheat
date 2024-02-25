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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveBeginPlay
	 */
	struct ABP_NobeliskNuke_Fallout_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ReceiveEndPlay
	 */
	struct ABP_NobeliskNuke_Fallout_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.UpdateDecay
	 */
	struct ABP_NobeliskNuke_Fallout_C_UpdateDecay_Params
	{	};

	/**
	 * Function BP_NobeliskNuke_Fallout.BP_NobeliskNuke_Fallout_C.ExecuteUbergraph_BP_NobeliskNuke_Fallout
	 */
	struct ABP_NobeliskNuke_Fallout_C_ExecuteUbergraph_BP_NobeliskNuke_Fallout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75YE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
