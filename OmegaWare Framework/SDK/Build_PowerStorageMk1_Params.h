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
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.PlayActivationSFX
	 */
	struct ABuild_PowerStorageMk1_C_PlayActivationSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.StopSFXWhenEmpty
	 */
	struct ABuild_PowerStorageMk1_C_StopSFXWhenEmpty_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.PlayActivationQuickSFX
	 */
	struct ABuild_PowerStorageMk1_C_PlayActivationQuickSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.StopLightningSFX
	 */
	struct ABuild_PowerStorageMk1_C_StopLightningSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.PlayLightningSFX
	 */
	struct ABuild_PowerStorageMk1_C_PlayLightningSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.OpeningSFX
	 */
	struct ABuild_PowerStorageMk1_C_OpeningSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.ClosingSFX
	 */
	struct ABuild_PowerStorageMk1_C_ClosingSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.SpawnSFXOnSignificance
	 */
	struct ABuild_PowerStorageMk1_C_SpawnSFXOnSignificance_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.StopSFX
	 */
	struct ABuild_PowerStorageMk1_C_StopSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.StatesForSFX
	 */
	struct ABuild_PowerStorageMk1_C_StatesForSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.KillSFX
	 */
	struct ABuild_PowerStorageMk1_C_KillSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.CheckActivationStateSFX
	 */
	struct ABuild_PowerStorageMk1_C_CheckActivationStateSFX_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.UpdateSFXState
	 */
	struct ABuild_PowerStorageMk1_C_UpdateSFXState_Params
	{
	public:
		EBatteryStatus                                             BatteryState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.UpdateStoredAmount
	 */
	struct ABuild_PowerStorageMk1_C_UpdateStoredAmount_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.UpdateState
	 */
	struct ABuild_PowerStorageMk1_C_UpdateState_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.GetLookAtDecription
	 */
	struct ABuild_PowerStorageMk1_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.IsUseable
	 */
	struct ABuild_PowerStorageMk1_C_IsUseable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.ReceiveBeginPlay
	 */
	struct ABuild_PowerStorageMk1_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.StatusChanged
	 */
	struct ABuild_PowerStorageMk1_C_StatusChanged_Params
	{
	public:
		EBatteryStatus                                             Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.IndicatorLevelChanged
	 */
	struct ABuild_PowerStorageMk1_C_IndicatorLevelChanged_Params
	{
	public:
		unsigned char                                              indicatorLevel;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.GainedSignificance
	 */
	struct ABuild_PowerStorageMk1_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.LostSignificance
	 */
	struct ABuild_PowerStorageMk1_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_PowerStorageMk1.Build_PowerStorageMk1_C.ExecuteUbergraph_Build_PowerStorageMk1
	 */
	struct ABuild_PowerStorageMk1_C_ExecuteUbergraph_Build_PowerStorageMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
