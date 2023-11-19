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
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.SpawnSFXOnSignificance
	 */
	struct ABuild_FrackingSmasher_C_SpawnSFXOnSignificance_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.ActivateCurrentSFXNotify
	 */
	struct ABuild_FrackingSmasher_C_ActivateCurrentSFXNotify_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.SpawnSFX
	 */
	struct ABuild_FrackingSmasher_C_SpawnSFX_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.KillSFXOnSignificance
	 */
	struct ABuild_FrackingSmasher_C_KillSFXOnSignificance_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.CheckActiveNotifies
	 */
	struct ABuild_FrackingSmasher_C_CheckActiveNotifies_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.GainedSignificance
	 */
	struct ABuild_FrackingSmasher_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.LostSignificance
	 */
	struct ABuild_FrackingSmasher_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.StartProductionLoopEffects
	 */
	struct ABuild_FrackingSmasher_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.StopProductionLoopEffects
	 */
	struct ABuild_FrackingSmasher_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.OnIsProducingChanged
	 */
	struct ABuild_FrackingSmasher_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.PlayCameraShake
	 */
	struct ABuild_FrackingSmasher_C_PlayCameraShake_Params
	{	};

	/**
	 * Function Build_FrackingSmasher.Build_FrackingSmasher_C.ExecuteUbergraph_Build_FrackingSmasher
	 */
	struct ABuild_FrackingSmasher_C_ExecuteUbergraph_Build_FrackingSmasher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J2I7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
