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
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCrosshairKeyDescriptor
	 */
	struct ABP_ChargedWeapon_C_GetCrosshairKeyDescriptor_Params
	{
	public:
		class UClass*                                              KeyDescriptor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUD_ESlotClass
	 */
	struct ABP_ChargedWeapon_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoAmount
	 */
	struct ABP_ChargedWeapon_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetUpdateOnTick
	 */
	struct ABP_ChargedWeapon_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAmmoDescriptor
	 */
	struct ABP_ChargedWeapon_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelDescriptor
	 */
	struct ABP_ChargedWeapon_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetFuelPercent
	 */
	struct ABP_ChargedWeapon_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBurningFuel
	 */
	struct ABP_ChargedWeapon_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetAlwaysShowContent
	 */
	struct ABP_ChargedWeapon_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackDistance
	 */
	struct ABP_ChargedWeapon_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackHasPower
	 */
	struct ABP_ChargedWeapon_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHoverPackMode
	 */
	struct ABP_ChargedWeapon_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetObjectScannerTarget
	 */
	struct ABP_ChargedWeapon_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetCurrentBoomBoxTape
	 */
	struct ABP_ChargedWeapon_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetIsBoomBoxPlaying
	 */
	struct ABP_ChargedWeapon_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowLowFuelWarning
	 */
	struct ABP_ChargedWeapon_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetOverwriteTickRate
	 */
	struct ABP_ChargedWeapon_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct ABP_ChargedWeapon_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.GetHUDBoxWidget
	 */
	struct ABP_ChargedWeapon_C_GetHUDBoxWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.ReceiveBeginPlay
	 */
	struct ABP_ChargedWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingPressed
	 */
	struct ABP_ChargedWeapon_C_OnAmmoCyclingPressed_Params
	{	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.OnAmmoCyclingReleased
	 */
	struct ABP_ChargedWeapon_C_OnAmmoCyclingReleased_Params
	{	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.ShowCycleAmmoUI
	 */
	struct ABP_ChargedWeapon_C_ShowCycleAmmoUI_Params
	{	};

	/**
	 * Function BP_ChargedWeapon.BP_ChargedWeapon_C.ExecuteUbergraph_BP_ChargedWeapon
	 */
	struct ABP_ChargedWeapon_C_ExecuteUbergraph_BP_ChargedWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
