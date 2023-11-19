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
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_HazmatSuit_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetOverwriteTickRate
	 */
	struct AEquip_HazmatSuit_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetShowLowFuelWarning
	 */
	struct AEquip_HazmatSuit_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_HazmatSuit_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_HazmatSuit_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetObjectScannerTarget
	 */
	struct AEquip_HazmatSuit_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackMode
	 */
	struct AEquip_HazmatSuit_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackHasPower
	 */
	struct AEquip_HazmatSuit_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHoverPackDistance
	 */
	struct AEquip_HazmatSuit_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetHUD_ESlotClass
	 */
	struct AEquip_HazmatSuit_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoAmount
	 */
	struct AEquip_HazmatSuit_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetUpdateOnTick
	 */
	struct AEquip_HazmatSuit_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAmmoDescriptor
	 */
	struct AEquip_HazmatSuit_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelDescriptor
	 */
	struct AEquip_HazmatSuit_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetFuelPercent
	 */
	struct AEquip_HazmatSuit_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetIsBurningFuel
	 */
	struct AEquip_HazmatSuit_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MKUW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.GetAlwaysShowContent
	 */
	struct AEquip_HazmatSuit_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.EnablePostProcessing
	 */
	struct AEquip_HazmatSuit_C_EnablePostProcessing_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.AdjustDamage
	 */
	struct AEquip_HazmatSuit_C_AdjustDamage_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RP66[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8ZO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasUnEquipped
	 */
	struct AEquip_HazmatSuit_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.ReceiveTick
	 */
	struct AEquip_HazmatSuit_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.WasEquipped
	 */
	struct AEquip_HazmatSuit_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.StartHasBurnedFuelTimer
	 */
	struct AEquip_HazmatSuit_C_StartHasBurnedFuelTimer_Params
	{	};

	/**
	 * Function Equip_HazmatSuit.Equip_HazmatSuit_C.ExecuteUbergraph_Equip_HazmatSuit
	 */
	struct AEquip_HazmatSuit_C_ExecuteUbergraph_Equip_HazmatSuit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
