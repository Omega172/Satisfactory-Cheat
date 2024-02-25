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
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct ABP_ConsumeableEquipment_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetOverwriteTickRate
	 */
	struct ABP_ConsumeableEquipment_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetShowLowFuelWarning
	 */
	struct ABP_ConsumeableEquipment_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBoomBoxPlaying
	 */
	struct ABP_ConsumeableEquipment_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetCurrentBoomBoxTape
	 */
	struct ABP_ConsumeableEquipment_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetObjectScannerTarget
	 */
	struct ABP_ConsumeableEquipment_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackMode
	 */
	struct ABP_ConsumeableEquipment_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackHasPower
	 */
	struct ABP_ConsumeableEquipment_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHoverPackDistance
	 */
	struct ABP_ConsumeableEquipment_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetHUD_ESlotClass
	 */
	struct ABP_ConsumeableEquipment_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoAmount
	 */
	struct ABP_ConsumeableEquipment_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetUpdateOnTick
	 */
	struct ABP_ConsumeableEquipment_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAmmoDescriptor
	 */
	struct ABP_ConsumeableEquipment_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelDescriptor
	 */
	struct ABP_ConsumeableEquipment_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetFuelPercent
	 */
	struct ABP_ConsumeableEquipment_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetIsBurningFuel
	 */
	struct ABP_ConsumeableEquipment_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.GetAlwaysShowContent
	 */
	struct ABP_ConsumeableEquipment_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.PlayConsumeEffects
	 */
	struct ABP_ConsumeableEquipment_C_PlayConsumeEffects_Params
	{
	public:
		class UFGConsumableDescriptor*                             consumable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ReceiveTick
	 */
	struct ABP_ConsumeableEquipment_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.WasEquipped
	 */
	struct ABP_ConsumeableEquipment_C_WasEquipped_Params
	{	};

	/**
	 * Function BP_ConsumeableEquipment.BP_ConsumeableEquipment_C.ExecuteUbergraph_BP_ConsumeableEquipment
	 */
	struct ABP_ConsumeableEquipment_C_ExecuteUbergraph_BP_ConsumeableEquipment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
