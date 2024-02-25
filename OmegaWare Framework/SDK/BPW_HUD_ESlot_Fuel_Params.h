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
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelType
	 */
	struct UBPW_HUD_ESlot_Fuel_C_SetFuelType_Params
	{
	public:
		class UClass*                                              mFuelClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelInInventory
	 */
	struct UBPW_HUD_ESlot_Fuel_C_SetFuelInInventory_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateESlotData
	 */
	struct UBPW_HUD_ESlot_Fuel_C_UpdateESlotData_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.Construct
	 */
	struct UBPW_HUD_ESlot_Fuel_C_Construct_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelPercent
	 */
	struct UBPW_HUD_ESlot_Fuel_C_UpdateFuelPercent_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelClass
	 */
	struct UBPW_HUD_ESlot_Fuel_C_UpdateFuelClass_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.UpdateFuelInInventory
	 */
	struct UBPW_HUD_ESlot_Fuel_C_UpdateFuelInInventory_Params
	{	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.SetFuelPercent
	 */
	struct UBPW_HUD_ESlot_Fuel_C_SetFuelPercent_Params
	{
	public:
		double                                                     mCurrentFuelPercent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_HUD_ESlot_Fuel.BPW_HUD_ESlot_Fuel_C.ExecuteUbergraph_BPW_HUD_ESlot_Fuel
	 */
	struct UBPW_HUD_ESlot_Fuel_C_ExecuteUbergraph_BPW_HUD_ESlot_Fuel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
