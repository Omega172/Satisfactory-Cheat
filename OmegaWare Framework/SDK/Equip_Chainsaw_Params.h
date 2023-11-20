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
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetHUD_ESlotClass
	 */
	struct AEquip_Chainsaw_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetAmmoAmount
	 */
	struct AEquip_Chainsaw_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetUpdateOnTick
	 */
	struct AEquip_Chainsaw_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetAmmoDescriptor
	 */
	struct AEquip_Chainsaw_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetFuelDescriptor
	 */
	struct AEquip_Chainsaw_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetFuelPercent
	 */
	struct AEquip_Chainsaw_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetIsBurningFuel
	 */
	struct AEquip_Chainsaw_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetAlwaysShowContent
	 */
	struct AEquip_Chainsaw_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetHoverPackDistance
	 */
	struct AEquip_Chainsaw_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetHoverPackHasPower
	 */
	struct AEquip_Chainsaw_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetHoverPackMode
	 */
	struct AEquip_Chainsaw_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetObjectScannerTarget
	 */
	struct AEquip_Chainsaw_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_Chainsaw_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_Chainsaw_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetShowLowFuelWarning
	 */
	struct AEquip_Chainsaw_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetOverwriteTickRate
	 */
	struct AEquip_Chainsaw_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_Chainsaw_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateTick_Idle
	 */
	struct AEquip_Chainsaw_C_ChainsawStateTick_Idle_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.OnChainsawStateTransition
	 */
	struct AEquip_Chainsaw_C_OnChainsawStateTransition_Params
	{
	public:
		EFGChainsawState                                           oldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.IsSpinningUpTransitionFinished
	 */
	struct AEquip_Chainsaw_C_IsSpinningUpTransitionFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L2WB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.TickCurrentState
	 */
	struct AEquip_Chainsaw_C_TickCurrentState_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_None
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_None_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_SpinningUp
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_SpinningUp_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateExit_Sawing
	 */
	struct AEquip_Chainsaw_C_ChainsawStateExit_Sawing_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.Chainsaw State Tick Sawing
	 */
	struct AEquip_Chainsaw_C_ChainsawStateTickSawing_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_Idle
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_Idle_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_Sawing
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_Sawing_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_Engaged
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_Engaged_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.UpdateIdleAudioLoopSFX
	 */
	struct AEquip_Chainsaw_C_UpdateIdleAudioLoopSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_SpinningUp_Normal
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_SpinningUp_Normal_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ChainsawStateEnter_SpinningUp_Stinger
	 */
	struct AEquip_Chainsaw_C_ChainsawStateEnter_SpinningUp_Stinger_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StopOnUnEquippedSFX
	 */
	struct AEquip_Chainsaw_C_StopOnUnEquippedSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StopCurrentSFXByID
	 */
	struct AEquip_Chainsaw_C_StopCurrentSFXByID_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StopAllAndPlayEnd
	 */
	struct AEquip_Chainsaw_C_StopAllAndPlayEnd_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.TransitionToIdleSFX
	 */
	struct AEquip_Chainsaw_C_TransitionToIdleSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StartIdleEventSFX
	 */
	struct AEquip_Chainsaw_C_StartIdleEventSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StartEngageEventSFX
	 */
	struct AEquip_Chainsaw_C_StartEngageEventSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StartSawingEventSFX
	 */
	struct AEquip_Chainsaw_C_StartSawingEventSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.StopCurrentAKEvent
	 */
	struct AEquip_Chainsaw_C_StopCurrentAKEvent_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.GetCurrentOutputDataSFX
	 */
	struct AEquip_Chainsaw_C_GetCurrentOutputDataSFX_Params
	{	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.InterpolateChainsawProgress
	 */
	struct AEquip_Chainsaw_C_InterpolateChainsawProgress_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.CreatePhysicsFromFoliage
	 */
	struct AEquip_Chainsaw_C_CreatePhysicsFromFoliage_Params
	{
	public:
		class UStaticMesh*                                         InMesh;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WCBD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ReceiveTick
	 */
	struct AEquip_Chainsaw_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_Chainsaw.Equip_Chainsaw_C.ExecuteUbergraph_Equip_Chainsaw
	 */
	struct AEquip_Chainsaw_C_ExecuteUbergraph_Equip_Chainsaw_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
