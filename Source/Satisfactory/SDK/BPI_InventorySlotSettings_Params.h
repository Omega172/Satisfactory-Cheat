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
	 * Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetInventorySettingsClass
	 */
	struct UBPI_InventorySlotSettings_C_GetInventorySettingsClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetPreferredFuelIndex
	 */
	struct UBPI_InventorySlotSettings_C_GetPreferredFuelIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetCurrentFuelIndex
	 */
	struct UBPI_InventorySlotSettings_C_GetCurrentFuelIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_InventorySlotSettings.BPI_InventorySlotSettings_C.GetFuelTypes
	 */
	struct UBPI_InventorySlotSettings_C_GetFuelTypes_Params
	{
	public:
		TArray<class UClass*>                                      FuelTypes;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
