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
	 * Function Equip_JetPack.Equip_JetPack_C.GetInventorySettingsClass
	 */
	struct AEquip_JetPack_C_GetInventorySettingsClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetPreferredFuelIndex
	 */
	struct AEquip_JetPack_C_GetPreferredFuelIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetCurrentFuelIndex
	 */
	struct AEquip_JetPack_C_GetCurrentFuelIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetFuelTypes
	 */
	struct AEquip_JetPack_C_GetFuelTypes_Params
	{
	public:
		TArray<class UClass*>                                      FuelTypes;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_JetPack_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetOverwriteTickRate
	 */
	struct AEquip_JetPack_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetShowLowFuelWarning
	 */
	struct AEquip_JetPack_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_JetPack_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_JetPack_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetObjectScannerTarget
	 */
	struct AEquip_JetPack_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetHoverPackMode
	 */
	struct AEquip_JetPack_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetHoverPackHasPower
	 */
	struct AEquip_JetPack_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetHoverPackDistance
	 */
	struct AEquip_JetPack_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetAlwaysShowContent
	 */
	struct AEquip_JetPack_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetIsBurningFuel
	 */
	struct AEquip_JetPack_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetHUD_ESlotClass
	 */
	struct AEquip_JetPack_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetAmmoAmount
	 */
	struct AEquip_JetPack_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetUpdateOnTick
	 */
	struct AEquip_JetPack_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetAmmoDescriptor
	 */
	struct AEquip_JetPack_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetFuelDescriptor
	 */
	struct AEquip_JetPack_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.GetFuelPercent
	 */
	struct AEquip_JetPack_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.SetActiveAudioRTPCs
	 */
	struct AEquip_JetPack_C_SetActiveAudioRTPCs_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.Validate Fuel Type Descriptors
	 */
	struct AEquip_JetPack_C_ValidateFuelTypeDescriptors_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.SetFuelTypeDescriptors
	 */
	struct AEquip_JetPack_C_SetFuelTypeDescriptors_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.OnStartThrusting
	 */
	struct AEquip_JetPack_C_OnStartThrusting_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.OnStopThrusting
	 */
	struct AEquip_JetPack_C_OnStopThrusting_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.ReceiveTick
	 */
	struct AEquip_JetPack_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.WasEquipped
	 */
	struct AEquip_JetPack_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.WasUnEquipped
	 */
	struct AEquip_JetPack_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.ReceiveBeginPlay
	 */
	struct AEquip_JetPack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.OnBurnPercentChanged
	 */
	struct AEquip_JetPack_C_OnBurnPercentChanged_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.OnFuelTypeChanged
	 */
	struct AEquip_JetPack_C_OnFuelTypeChanged_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.OnFuelAmountChanged
	 */
	struct AEquip_JetPack_C_OnFuelAmountChanged_Params
	{	};

	/**
	 * Function Equip_JetPack.Equip_JetPack_C.ExecuteUbergraph_Equip_JetPack
	 */
	struct AEquip_JetPack_C_ExecuteUbergraph_Equip_JetPack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1SK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
