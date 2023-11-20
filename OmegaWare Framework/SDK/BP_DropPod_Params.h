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
	 * Function BP_DropPod.BP_DropPod_C.RequiresPowerToOpen
	 */
	struct ABP_DropPod_C_RequiresPowerToOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.GetPowerConnection
	 */
	struct ABP_DropPod_C_GetPowerConnection_Params
	{
	public:
		class UFGPowerConnectionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.Repair
	 */
	struct ABP_DropPod_C_Repair_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.GetRepairAmount
	 */
	struct ABP_DropPod_C_GetRepairAmount_Params
	{
	public:
		struct FItemAmount                                         Amount;                                                  // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.GetPowerConsumption
	 */
	struct ABP_DropPod_C_GetPowerConsumption_Params
	{
	public:
		double                                                     Power;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.NeedsPower
	 */
	struct ABP_DropPod_C_NeedsPower_Params
	{
	public:
		bool                                                       NeedsPower;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZU5S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.NeedsRepair
	 */
	struct ABP_DropPod_C_NeedsRepair_Params
	{
	public:
		bool                                                       NeedsRepair;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.RollLoot
	 */
	struct ABP_DropPod_C_RollLoot_Params
	{	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.OnOpened
	 */
	struct ABP_DropPod_C_OnOpened_Params
	{	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.StopIsLookedAt
	 */
	struct ABP_DropPod_C_StopIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.StartIsLookedAt
	 */
	struct ABP_DropPod_C_StartIsLookedAt_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.ReceiveBeginPlay
	 */
	struct ABP_DropPod_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.OnUse
	 */
	struct ABP_DropPod_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.OnRepair
	 */
	struct ABP_DropPod_C_OnRepair_Params
	{
	public:
		class AFGCharacterPlayer*                                  InteractingCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DropPod.BP_DropPod_C.ExecuteUbergraph_BP_DropPod
	 */
	struct ABP_DropPod_C_ExecuteUbergraph_BP_DropPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GCAY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
