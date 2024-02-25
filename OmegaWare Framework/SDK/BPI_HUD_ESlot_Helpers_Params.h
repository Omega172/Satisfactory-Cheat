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
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetOverwriteTickRate
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetShowLowFuelWarning
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetIsBoomBoxPlaying
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetCurrentBoomBoxTape
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetObjectScannerTarget
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetHoverPackMode
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetHoverPackHasPower
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetHoverPackDistance
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetAlwaysShowContent
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetIsBurningFuel
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetFuelPercent
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetFuelDescriptor
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetAmmoDescriptor
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetUpdateOnTick
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetAmmoAmount
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_HUD_ESlot_Helpers.BPI_HUD_ESlot_Helpers_C.GetHUD_ESlotClass
	 */
	struct UBPI_HUD_ESlot_Helpers_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
