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
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.KillSFX
	 */
	struct ABP_FrackingSatellite_C_KillSFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.SpawnSFX
	 */
	struct ABP_FrackingSatellite_C_SpawnSFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.SwitchOnResource
	 */
	struct ABP_FrackingSatellite_C_SwitchOnResource_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.RandomStartOfVFX
	 */
	struct ABP_FrackingSatellite_C_RandomStartOfVFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.RandomStartOfSFX
	 */
	struct ABP_FrackingSatellite_C_RandomStartOfSFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.SpawnFirstUseSFX
	 */
	struct ABP_FrackingSatellite_C_SpawnFirstUseSFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.SpawnFirstUseFX
	 */
	struct ABP_FrackingSatellite_C_SpawnFirstUseFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.KillVFX
	 */
	struct ABP_FrackingSatellite_C_KillVFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.SpawnVFX
	 */
	struct ABP_FrackingSatellite_C_SpawnVFX_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.EffectsOccupiedState
	 */
	struct ABP_FrackingSatellite_C_EffectsOccupiedState_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.ResetOccupiedEffects
	 */
	struct ABP_FrackingSatellite_C_ResetOccupiedEffects_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.UpdateAudioState
	 */
	struct ABP_FrackingSatellite_C_UpdateAudioState_Params
	{
	public:
		EFrackingSatelliteState                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFirstTimeActivated;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.UpdateVisualState
	 */
	struct ABP_FrackingSatellite_C_UpdateVisualState_Params
	{
	public:
		EFrackingSatelliteState                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFirstTimeActivated;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.GainedSignificance
	 */
	struct ABP_FrackingSatellite_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.LostSignificance
	 */
	struct ABP_FrackingSatellite_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.OnIsOccupiedChanged
	 */
	struct ABP_FrackingSatellite_C_OnIsOccupiedChanged_Params
	{
	public:
		bool                                                       newIsOccupied;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.OnStateChanged
	 */
	struct ABP_FrackingSatellite_C_OnStateChanged_Params
	{
	public:
		EFrackingSatelliteState                                    State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFirstTimeActivated;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.ReceiveBeginPlay
	 */
	struct ABP_FrackingSatellite_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FrackingSatellite.BP_FrackingSatellite_C.ExecuteUbergraph_BP_FrackingSatellite
	 */
	struct ABP_FrackingSatellite_C_ExecuteUbergraph_BP_FrackingSatellite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
