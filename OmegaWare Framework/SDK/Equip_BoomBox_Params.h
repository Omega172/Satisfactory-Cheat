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
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetShowInfoUntilFuelPercentIsFull
	 */
	struct AEquip_BoomBox_C_GetShowInfoUntilFuelPercentIsFull_Params
	{
	public:
		bool                                                       ReturnVaule;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetOverwriteTickRate
	 */
	struct AEquip_BoomBox_C_GetOverwriteTickRate_Params
	{
	public:
		double                                                     TickRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetShowLowFuelWarning
	 */
	struct AEquip_BoomBox_C_GetShowLowFuelWarning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetIsBoomBoxPlaying
	 */
	struct AEquip_BoomBox_C_GetIsBoomBoxPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetCurrentBoomBoxTape
	 */
	struct AEquip_BoomBox_C_GetCurrentBoomBoxTape_Params
	{
	public:
		class UClass*                                              mTapeData;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetHUD_ESlotClass
	 */
	struct AEquip_BoomBox_C_GetHUD_ESlotClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetAmmoAmount
	 */
	struct AEquip_BoomBox_C_GetAmmoAmount_Params
	{
	public:
		int32_t                                                    AmmoCurrent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmmoMax;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetUpdateOnTick
	 */
	struct AEquip_BoomBox_C_GetUpdateOnTick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetAmmoDescriptor
	 */
	struct AEquip_BoomBox_C_GetAmmoDescriptor_Params
	{
	public:
		class UClass*                                              AmmoClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetFuelDescriptor
	 */
	struct AEquip_BoomBox_C_GetFuelDescriptor_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetFuelPercent
	 */
	struct AEquip_BoomBox_C_GetFuelPercent_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetIsBurningFuel
	 */
	struct AEquip_BoomBox_C_GetIsBurningFuel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetAlwaysShowContent
	 */
	struct AEquip_BoomBox_C_GetAlwaysShowContent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetHoverPackDistance
	 */
	struct AEquip_BoomBox_C_GetHoverPackDistance_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetHoverPackHasPower
	 */
	struct AEquip_BoomBox_C_GetHoverPackHasPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetHoverPackMode
	 */
	struct AEquip_BoomBox_C_GetHoverPackMode_Params
	{
	public:
		EHoverPackMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.GetObjectScannerTarget
	 */
	struct AEquip_BoomBox_C_GetObjectScannerTarget_Params
	{
	public:
		class UClass*                                              ScannableItemDescriptor;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.Easter Egg Morse Code
	 */
	struct AEquip_BoomBox_C_EasterEggMorseCode_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.FireEasterEgg
	 */
	struct AEquip_BoomBox_C_FireEasterEgg_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.PlayTapAnimation
	 */
	struct AEquip_BoomBox_C_PlayTapAnimation_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.FireTurboBassLogic
	 */
	struct AEquip_BoomBox_C_FireTurboBassLogic_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.FireTurboBassEffects
	 */
	struct AEquip_BoomBox_C_FireTurboBassEffects_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.CurrentTapeChanged
	 */
	struct AEquip_BoomBox_C_CurrentTapeChanged_Params
	{
	public:
		class UClass*                                              currentTape;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.PlaybackPositionUpdate
	 */
	struct AEquip_BoomBox_C_PlaybackPositionUpdate_Params
	{
	public:
		float                                                      CurrentPosition;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDuration;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.PlaybackStateChanged
	 */
	struct AEquip_BoomBox_C_PlaybackStateChanged_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.RepeatModeChanged
	 */
	struct AEquip_BoomBox_C_RepeatModeChanged_Params
	{
	public:
		EBoomBoxRepeatMode                                         NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.CurrentSongChanged
	 */
	struct AEquip_BoomBox_C_CurrentSongChanged_Params
	{
	public:
		struct FSongData                                           currentSong;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.BoomBoxModeChanged
	 */
	struct AEquip_BoomBox_C_BoomBoxModeChanged_Params
	{
	public:
		EBoomBoxMode                                               NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.WasEquipped
	 */
	struct AEquip_BoomBox_C_WasEquipped_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.WasUnEquipped
	 */
	struct AEquip_BoomBox_C_WasUnEquipped_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.AudioVolumeChanged
	 */
	struct AEquip_BoomBox_C_AudioVolumeChanged_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.OnMenuOpen
	 */
	struct AEquip_BoomBox_C_OnMenuOpen_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.OnBeginTurbobassSequence
	 */
	struct AEquip_BoomBox_C_OnBeginTurbobassSequence_Params
	{	};

	/**
	 * Function Equip_BoomBox.Equip_BoomBox_C.ExecuteUbergraph_Equip_BoomBox
	 */
	struct AEquip_BoomBox_C_ExecuteUbergraph_Equip_BoomBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9LN9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
