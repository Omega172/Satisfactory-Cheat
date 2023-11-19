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
	 * Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.SetEquipmentObject
	 */
	struct UBPW_HUD_ESlot_Consumable_C_SetEquipmentObject_Params
	{
	public:
		class AFGEquipment*                                        mEquipmentObject;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_Consumable_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Consumable.BPW_HUD_ESlot_Consumable_C.ExecuteUbergraph_BPW_HUD_ESlot_Consumable
	 */
	struct UBPW_HUD_ESlot_Consumable_C_ExecuteUbergraph_BPW_HUD_ESlot_Consumable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7YB2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
