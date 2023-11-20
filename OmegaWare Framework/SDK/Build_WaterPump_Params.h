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
	 * Function Build_WaterPump.Build_WaterPump_C.GetBuildEffectTemplate
	 */
	struct ABuild_WaterPump_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.KillSFXOnLostSignificance
	 */
	struct ABuild_WaterPump_C_KillSFXOnLostSignificance_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.PlaySFXOnGainSignificance
	 */
	struct ABuild_WaterPump_C_PlaySFXOnGainSignificance_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.CheckSFXSeekInTime
	 */
	struct ABuild_WaterPump_C_CheckSFXSeekInTime_Params
	{
	public:
		bool                                                       IsProducing;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.GetAnimPlayRate
	 */
	struct ABuild_WaterPump_C_GetAnimPlayRate_Params
	{
	public:
		double                                                     PlayRate;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.SetText
	 */
	struct ABuild_WaterPump_C_SetText_Params
	{
	public:
		class FString                                              intText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__FinishedFunc
	 */
	struct ABuild_WaterPump_C_mWaterpumpTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.mWaterpumpTimeline__UpdateFunc
	 */
	struct ABuild_WaterPump_C_mWaterpumpTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.StartProductionLoopEffects
	 */
	struct ABuild_WaterPump_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.StopProductionLoopEffects
	 */
	struct ABuild_WaterPump_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.ReceiveBeginPlay
	 */
	struct ABuild_WaterPump_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.LostSignificance
	 */
	struct ABuild_WaterPump_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.GainedSignificance
	 */
	struct ABuild_WaterPump_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.ReceiveDestroyed
	 */
	struct ABuild_WaterPump_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.StartVFXIteration
	 */
	struct ABuild_WaterPump_C_StartVFXIteration_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.OnIsProducingChanged
	 */
	struct ABuild_WaterPump_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.Start_VFX_Loop
	 */
	struct ABuild_WaterPump_C_Start_VFX_Loop_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.Stop_VFX_Loop
	 */
	struct ABuild_WaterPump_C_Stop_VFX_Loop_Params
	{	};

	/**
	 * Function Build_WaterPump.Build_WaterPump_C.ExecuteUbergraph_Build_WaterPump
	 */
	struct ABuild_WaterPump_C_ExecuteUbergraph_Build_WaterPump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
