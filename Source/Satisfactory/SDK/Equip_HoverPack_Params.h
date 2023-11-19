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
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_HoverPack_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetOverwriteTickRate
	 */
	struct AEquip_HoverPack_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetShowLowFuelWarning
	 */
	struct AEquip_HoverPack_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_HoverPack_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_HoverPack_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetObjectScannerTarget
	 */
	struct AEquip_HoverPack_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHoverPackMode
	 */
	struct AEquip_HoverPack_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHoverPackHasPower
	 */
	struct AEquip_HoverPack_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHoverPackDistance
	 */
	struct AEquip_HoverPack_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHUD_ESlotClass
	 */
	struct AEquip_HoverPack_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetAmmoAmount
	 */
	struct AEquip_HoverPack_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetUpdateOnTick
	 */
	struct AEquip_HoverPack_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetAmmoDescriptor
	 */
	struct AEquip_HoverPack_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetFuelDescriptor
	 */
	struct AEquip_HoverPack_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetFuelPercent
	 */
	struct AEquip_HoverPack_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetIsBurningFuel
	 */
	struct AEquip_HoverPack_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetAlwaysShowContent
	 */
	struct AEquip_HoverPack_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetRangeWarningNrmlzdDistThreshold
	 */
	struct AEquip_HoverPack_C_GetRangeWarningNrmlzdDistThreshold_Params
	{
	public:
		double                                                     RangeWarningNormalizedDistanceThreshold;                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.IsHoverpackHovering
	 */
	struct AEquip_HoverPack_C_IsHoverpackHovering_Params
	{
	public:
		bool                                                       IsHovering;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHoverpackStates
	 */
	struct AEquip_HoverPack_C_GetHoverpackStates_Params
	{
	public:
		EHoverPackMode                                             HoverpackState;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetConnectionDistance
	 */
	struct AEquip_HoverPack_C_GetConnectionDistance_Params
	{
	public:
		double                                                     ConnectionDistance;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetMaxConnectionDistance
	 */
	struct AEquip_HoverPack_C_GetMaxConnectionDistance_Params
	{
	public:
		double                                                     ConnectionMaxDistance;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetPowerConnectionBool
	 */
	struct AEquip_HoverPack_C_GetPowerConnectionBool_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetCurrentNormalisedConnectionDistance
	 */
	struct AEquip_HoverPack_C_GetCurrentNormalisedConnectionDistance_Params
	{
	public:
		double                                                     NormalisedConnectionDistance;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.GetHUDBoxWidget
	 */
	struct AEquip_HoverPack_C_GetHUDBoxWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.PlayHoverSound
	 */
	struct AEquip_HoverPack_C_PlayHoverSound_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.CheckBatteryPowerLevelSlowFalling
	 */
	struct AEquip_HoverPack_C_CheckBatteryPowerLevelSlowFalling_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.StopEngineSound
	 */
	struct AEquip_HoverPack_C_StopEngineSound_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.StopSlowFallingSound
	 */
	struct AEquip_HoverPack_C_StopSlowFallingSound_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.Update_Connection_VFX
	 */
	struct AEquip_HoverPack_C_Update_Connection_VFX_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.NewConnection_VFX
	 */
	struct AEquip_HoverPack_C_NewConnection_VFX_Params
	{
	public:
		struct FVector                                             NewPowerPoleLocation;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.SetIsHoveringSwitch
	 */
	struct AEquip_HoverPack_C_SetIsHoveringSwitch_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.PlayFallingSound
	 */
	struct AEquip_HoverPack_C_PlayFallingSound_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.UpdateRailSurf
	 */
	struct AEquip_HoverPack_C_UpdateRailSurf_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.UpdateHover
	 */
	struct AEquip_HoverPack_C_UpdateHover_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.UpdateControllerMouseDelta
	 */
	struct AEquip_HoverPack_C_UpdateControllerMouseDelta_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.PlaySlowFallingSound
	 */
	struct AEquip_HoverPack_C_PlaySlowFallingSound_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.UpdatePlayerSpeedRTPC
	 */
	struct AEquip_HoverPack_C_UpdatePlayerSpeedRTPC_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.OnPowerConnectionLocationUpdated
	 */
	struct AEquip_HoverPack_C_OnPowerConnectionLocationUpdated_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.WasUnEquipped
	 */
	struct AEquip_HoverPack_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.UpdateJoystickScreen
	 */
	struct AEquip_HoverPack_C_UpdateJoystickScreen_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.OnHoverModeChanged
	 */
	struct AEquip_HoverPack_C_OnHoverModeChanged_Params
	{
	public:
		EHoverPackMode                                             NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.HoverPackSFXHover
	 */
	struct AEquip_HoverPack_C_HoverPackSFXHover_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.HoverPackSFXInactive
	 */
	struct AEquip_HoverPack_C_HoverPackSFXInactive_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.HoverPackSFXSlowFalling
	 */
	struct AEquip_HoverPack_C_HoverPackSFXSlowFalling_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.HoverPackSFXRailSurfing
	 */
	struct AEquip_HoverPack_C_HoverPackSFXRailSurfing_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.WasEquipped
	 */
	struct AEquip_HoverPack_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.OnConnectionStatusUpdated
	 */
	struct AEquip_HoverPack_C_OnConnectionStatusUpdated_Params
	{
	public:
		bool                                                       HasConnection;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.TriggerHoverActiveAnimation
	 */
	struct AEquip_HoverPack_C_TriggerHoverActiveAnimation_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.TriggerDeActivateHoverAnimation
	 */
	struct AEquip_HoverPack_C_TriggerDeActivateHoverAnimation_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.SetupJoystickMaterial
	 */
	struct AEquip_HoverPack_C_SetupJoystickMaterial_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.ReceiveBeginPlay
	 */
	struct AEquip_HoverPack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Equip_HoverPack.Equip_HoverPack_C.ExecuteUbergraph_Equip_HoverPack
	 */
	struct AEquip_HoverPack_C_ExecuteUbergraph_Equip_HoverPack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SBT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
