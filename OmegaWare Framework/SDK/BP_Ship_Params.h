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
	 * Function BP_Ship.BP_Ship_C.UpdateSignificanceTickRate
	 */
	struct ABP_Ship_C_UpdateSignificanceTickRate_Params
	{
	public:
		float                                                      NewTickRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTickEnabled;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ship.BP_Ship_C.GainedSignificance
	 */
	struct ABP_Ship_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_Ship.BP_Ship_C.LostSignificance
	 */
	struct ABP_Ship_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_Ship.BP_Ship_C.ReceiveBeginPlay
	 */
	struct ABP_Ship_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Ship.BP_Ship_C.ReceiveEndPlay
	 */
	struct ABP_Ship_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ship.BP_Ship_C.ExecuteUbergraph_BP_Ship
	 */
	struct ABP_Ship_C_ExecuteUbergraph_BP_Ship_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
