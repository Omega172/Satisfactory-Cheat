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
	 * Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.ForceUpdateEquipmentCrosshair
	 */
	struct UBPI_PlayerHUDHelpers_C_ForceUpdateEquipmentCrosshair_Params
	{	};

	/**
	 * Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnCloseAllHUD_ESlots
	 */
	struct UBPI_PlayerHUDHelpers_C_OnCloseAllHUD_ESlots_Params
	{	};

	/**
	 * Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnOpenAllHUD_ESlots
	 */
	struct UBPI_PlayerHUDHelpers_C_OnOpenAllHUD_ESlots_Params
	{	};

	/**
	 * Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.OnUpdateHUD_ESlot
	 */
	struct UBPI_PlayerHUDHelpers_C_OnUpdateHUD_ESlot_Params
	{
	public:
		EEquipmentSlot                                             EquipmentSlotType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerHUDHelpers.BPI_PlayerHUDHelpers_C.SetBuildgunMode
	 */
	struct UBPI_PlayerHUDHelpers_C_SetBuildgunMode_Params
	{
	public:
		EBuildMenu_Modes                                           Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
