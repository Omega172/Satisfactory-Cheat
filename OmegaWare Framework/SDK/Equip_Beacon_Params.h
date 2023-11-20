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
	 * Function Equip_Beacon.Equip_Beacon_C.SpawnBeacon
	 */
	struct AEquip_Beacon_C_SpawnBeacon_Params
	{	};

	/**
	 * Function Equip_Beacon.Equip_Beacon_C.WasEquipped
	 */
	struct AEquip_Beacon_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Beacon.Equip_Beacon_C.WasUnEquipped
	 */
	struct AEquip_Beacon_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_Beacon.Equip_Beacon_C.PlayConsumeEffects
	 */
	struct AEquip_Beacon_C_PlayConsumeEffects_Params
	{
	public:
		class UFGConsumableDescriptor*                             consumable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Beacon.Equip_Beacon_C.ExecuteUbergraph_Equip_Beacon
	 */
	struct AEquip_Beacon_C_ExecuteUbergraph_Equip_Beacon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DYV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
