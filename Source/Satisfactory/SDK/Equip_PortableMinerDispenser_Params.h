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
	 * Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.SpawnPortableMiner
	 */
	struct AEquip_PortableMinerDispenser_C_SpawnPortableMiner_Params
	{
	public:
		class AFGResourceNode*                                     ResourceNode;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.PlaySpawnEffects
	 */
	struct AEquip_PortableMinerDispenser_C_PlaySpawnEffects_Params
	{
	public:
		class ABP_PortableMiner_C*                                 PortableMiner;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasEquipped
	 */
	struct AEquip_PortableMinerDispenser_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.WasUnEquipped
	 */
	struct AEquip_PortableMinerDispenser_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_PortableMinerDispenser.Equip_PortableMinerDispenser_C.ExecuteUbergraph_Equip_PortableMinerDispenser
	 */
	struct AEquip_PortableMinerDispenser_C_ExecuteUbergraph_Equip_PortableMinerDispenser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
