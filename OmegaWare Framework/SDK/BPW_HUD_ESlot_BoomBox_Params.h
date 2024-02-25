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
	 * Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_BoomBox_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.OnSlotSizeChanged
	 */
	struct UBPW_HUD_ESlot_BoomBox_C_OnSlotSizeChanged_Params
	{
	public:
		bool                                                       IsSmall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.IconLoaded
	 */
	struct UBPW_HUD_ESlot_BoomBox_C_IconLoaded_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_BoomBox.BPW_HUD_ESlot_BoomBox_C.ExecuteUbergraph_BPW_HUD_ESlot_BoomBox
	 */
	struct UBPW_HUD_ESlot_BoomBox_C_ExecuteUbergraph_BPW_HUD_ESlot_BoomBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
