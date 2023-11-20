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
	 * Function Equip_GasMask.Equip_GasMask_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_GasMask_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetOverwriteTickRate
	 */
	struct AEquip_GasMask_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetShowLowFuelWarning
	 */
	struct AEquip_GasMask_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_GasMask_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_GasMask_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetObjectScannerTarget
	 */
	struct AEquip_GasMask_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetHoverPackMode
	 */
	struct AEquip_GasMask_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetHoverPackHasPower
	 */
	struct AEquip_GasMask_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetHoverPackDistance
	 */
	struct AEquip_GasMask_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetAlwaysShowContent
	 */
	struct AEquip_GasMask_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetIsBurningFuel
	 */
	struct AEquip_GasMask_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetFuelPercent
	 */
	struct AEquip_GasMask_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetHUD_ESlotClass
	 */
	struct AEquip_GasMask_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetAmmoAmount
	 */
	struct AEquip_GasMask_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetUpdateOnTick
	 */
	struct AEquip_GasMask_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetAmmoDescriptor
	 */
	struct AEquip_GasMask_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.GetFuelDescriptor
	 */
	struct AEquip_GasMask_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.WasEquipped
	 */
	struct AEquip_GasMask_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.WasUnEquipped
	 */
	struct AEquip_GasMask_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.EnablePostProcessing
	 */
	struct AEquip_GasMask_C_EnablePostProcessing_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_GasMask.Equip_GasMask_C.ExecuteUbergraph_Equip_GasMask
	 */
	struct AEquip_GasMask_C_ExecuteUbergraph_Equip_GasMask_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12ZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
