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
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_ObjectScanner_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetOverwriteTickRate
	 */
	struct AEquip_ObjectScanner_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetShowLowFuelWarning
	 */
	struct AEquip_ObjectScanner_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_ObjectScanner_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_ObjectScanner_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetObjectScannerTarget
	 */
	struct AEquip_ObjectScanner_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetHUD_ESlotClass
	 */
	struct AEquip_ObjectScanner_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetAmmoAmount
	 */
	struct AEquip_ObjectScanner_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetUpdateOnTick
	 */
	struct AEquip_ObjectScanner_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetAmmoDescriptor
	 */
	struct AEquip_ObjectScanner_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetFuelDescriptor
	 */
	struct AEquip_ObjectScanner_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetFuelPercent
	 */
	struct AEquip_ObjectScanner_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetIsBurningFuel
	 */
	struct AEquip_ObjectScanner_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetAlwaysShowContent
	 */
	struct AEquip_ObjectScanner_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetHoverPackDistance
	 */
	struct AEquip_ObjectScanner_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetHoverPackHasPower
	 */
	struct AEquip_ObjectScanner_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.GetHoverPackMode
	 */
	struct AEquip_ObjectScanner_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.PaintScannerScreen
	 */
	struct AEquip_ObjectScanner_C_PaintScannerScreen_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.K2_PlayScannerBeepVFX
	 */
	struct AEquip_ObjectScanner_C_K2_PlayScannerBeepVFX_Params
	{	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.PlayCycleAnimation
	 */
	struct AEquip_ObjectScanner_C_PlayCycleAnimation_Params
	{
	public:
		EFGScannerCycleDirection                                   cycleDirection;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.K2_OnClosestObjectStateChanged
	 */
	struct AEquip_ObjectScanner_C_K2_OnClosestObjectStateChanged_Params
	{	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasEquipped
	 */
	struct AEquip_ObjectScanner_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.WasUnEquipped
	 */
	struct AEquip_ObjectScanner_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_ObjectScanner.Equip_ObjectScanner_C.ExecuteUbergraph_Equip_ObjectScanner
	 */
	struct AEquip_ObjectScanner_C_ExecuteUbergraph_Equip_ObjectScanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HXBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
