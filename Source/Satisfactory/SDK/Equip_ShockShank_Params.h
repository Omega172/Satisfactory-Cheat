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
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_ShockShank_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetOverwriteTickRate
	 */
	struct AEquip_ShockShank_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetShowLowFuelWarning
	 */
	struct AEquip_ShockShank_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_ShockShank_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_ShockShank_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetObjectScannerTarget
	 */
	struct AEquip_ShockShank_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetHoverPackMode
	 */
	struct AEquip_ShockShank_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetHoverPackHasPower
	 */
	struct AEquip_ShockShank_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetHoverPackDistance
	 */
	struct AEquip_ShockShank_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetAlwaysShowContent
	 */
	struct AEquip_ShockShank_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetIsBurningFuel
	 */
	struct AEquip_ShockShank_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetFuelPercent
	 */
	struct AEquip_ShockShank_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetFuelDescriptor
	 */
	struct AEquip_ShockShank_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetAmmoDescriptor
	 */
	struct AEquip_ShockShank_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetUpdateOnTick
	 */
	struct AEquip_ShockShank_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetAmmoAmount
	 */
	struct AEquip_ShockShank_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.GetHUD_ESlotClass
	 */
	struct AEquip_ShockShank_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.Play Stinger Animation 1P
	 */
	struct AEquip_ShockShank_C_PlayStingerAnimation1P_Params
	{	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.Play Equip Animation
	 */
	struct AEquip_ShockShank_C_PlayEquipAnimation_Params
	{	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.WasUnEquipped
	 */
	struct AEquip_ShockShank_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.WasEquipped
	 */
	struct AEquip_ShockShank_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.Play Swing Animation
	 */
	struct AEquip_ShockShank_C_PlaySwingAnimation_Params
	{
	public:
		class UAnimMontage*                                        Animation_1P;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       AudioEvent;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UCameraAnimationSequence*                            CameraAnim;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.PlayStunEffects
	 */
	struct AEquip_ShockShank_C_PlayStunEffects_Params
	{
	public:
		bool                                                       secondSwing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ShockShank.Equip_ShockShank_C.ExecuteUbergraph_Equip_ShockShank
	 */
	struct AEquip_ShockShank_C_ExecuteUbergraph_Equip_ShockShank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EF91[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
