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
	 * Function BPW_HUD_ESlot_Ammo.BPW_HUD_ESlot_Ammo_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_Ammo_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Ammo.BPW_HUD_ESlot_Ammo_C.OnSlotSizeChanged
	 */
	struct UBPW_HUD_ESlot_Ammo_C_OnSlotSizeChanged_Params
	{
	public:
		bool                                                       IsSmall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Ammo.BPW_HUD_ESlot_Ammo_C.ExecuteUbergraph_BPW_HUD_ESlot_Ammo
	 */
	struct UBPW_HUD_ESlot_Ammo_C_ExecuteUbergraph_BPW_HUD_ESlot_Ammo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
