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
	 * Function Equip_MedKit.Equip_MedKit_C.GetHUD_ESlotClass
	 */
	struct AEquip_MedKit_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetAmmoAmount
	 */
	struct AEquip_MedKit_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetUpdateOnTick
	 */
	struct AEquip_MedKit_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetAmmoDescriptor
	 */
	struct AEquip_MedKit_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetFuelDescriptor
	 */
	struct AEquip_MedKit_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetFuelPercent
	 */
	struct AEquip_MedKit_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetIsBurningFuel
	 */
	struct AEquip_MedKit_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetAlwaysShowContent
	 */
	struct AEquip_MedKit_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetHoverPackDistance
	 */
	struct AEquip_MedKit_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetHoverPackHasPower
	 */
	struct AEquip_MedKit_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetHoverPackMode
	 */
	struct AEquip_MedKit_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetObjectScannerTarget
	 */
	struct AEquip_MedKit_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_MedKit_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_MedKit_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetShowLowFuelWarning
	 */
	struct AEquip_MedKit_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetOverwriteTickRate
	 */
	struct AEquip_MedKit_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_MedKit_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.PlayEquipSFX
	 */
	struct AEquip_MedKit_C_PlayEquipSFX_Params
	{	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.WasEquipped
	 */
	struct AEquip_MedKit_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.WasUnEquipped
	 */
	struct AEquip_MedKit_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.PlayConsumeEffects
	 */
	struct AEquip_MedKit_C_PlayConsumeEffects_Params
	{
	public:
		class UFGConsumableDescriptor*                             consumable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_MedKit.Equip_MedKit_C.ExecuteUbergraph_Equip_MedKit
	 */
	struct AEquip_MedKit_C_ExecuteUbergraph_Equip_MedKit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
