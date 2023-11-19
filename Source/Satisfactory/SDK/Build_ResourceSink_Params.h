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
	 * Function Build_ResourceSink.Build_ResourceSink_C.GetLookAtDecription
	 */
	struct ABuild_ResourceSink_C_GetLookAtDecription_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		class FText                                                ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.PlayResourceSinkDebris
	 */
	struct ABuild_ResourceSink_C_PlayResourceSinkDebris_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StartVFXGainSignificance
	 */
	struct ABuild_ResourceSink_C_StartVFXGainSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.KillVFXLostSignificacne
	 */
	struct ABuild_ResourceSink_C_KillVFXLostSignificacne_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StopSFXLostSignificance
	 */
	struct ABuild_ResourceSink_C_StopSFXLostSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StartSFXGainSignificance
	 */
	struct ABuild_ResourceSink_C_StartSFXGainSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.GainedSignificance
	 */
	struct ABuild_ResourceSink_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.LostSignificance
	 */
	struct ABuild_ResourceSink_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.OnHasPowerChanged
	 */
	struct ABuild_ResourceSink_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.ReceiveBeginPlay
	 */
	struct ABuild_ResourceSink_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StartProductionLoopEffects
	 */
	struct ABuild_ResourceSink_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StopProductionLoopEffects
	 */
	struct ABuild_ResourceSink_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.ReceiveDestroyed
	 */
	struct ABuild_ResourceSink_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StartSFXEngineOnPower
	 */
	struct ABuild_ResourceSink_C_StartSFXEngineOnPower_Params
	{
	public:
		bool                                                       didGainPower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StopSFXEngineOnPower
	 */
	struct ABuild_ResourceSink_C_StopSFXEngineOnPower_Params
	{
	public:
		bool                                                       didLosePower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StartIdlingLoopEffects
	 */
	struct ABuild_ResourceSink_C_StartIdlingLoopEffects_Params
	{
	public:
		bool                                                       didGainPower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StopIdlingLoopEffects
	 */
	struct ABuild_ResourceSink_C_StopIdlingLoopEffects_Params
	{
	public:
		bool                                                       didLosePower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.ReceiveTick
	 */
	struct ABuild_ResourceSink_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.TickForGrinder
	 */
	struct ABuild_ResourceSink_C_TickForGrinder_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.TickForEngine
	 */
	struct ABuild_ResourceSink_C_TickForEngine_Params
	{	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.StopIsLookedAtForDismantle
	 */
	struct ABuild_ResourceSink_C_StopIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ResourceSink.Build_ResourceSink_C.ExecuteUbergraph_Build_ResourceSink
	 */
	struct ABuild_ResourceSink_C_ExecuteUbergraph_Build_ResourceSink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
