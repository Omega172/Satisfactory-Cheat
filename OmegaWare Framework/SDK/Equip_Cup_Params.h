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
	 * Function Equip_Cup.Equip_Cup_C.WasEquipped
	 */
	struct AEquip_Cup_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_Cup.Equip_Cup_C.DoHandleDefaultEquipmentActionEvent
	 */
	struct AEquip_Cup_C_DoHandleDefaultEquipmentActionEvent_Params
	{
	public:
		EDefaultEquipmentAction                                    Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDefaultEquipmentActionEvent                               actionEvent;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Cup.Equip_Cup_C.ExecuteUbergraph_Equip_Cup
	 */
	struct AEquip_Cup_C_ExecuteUbergraph_Equip_Cup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
