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
	 * Function Build_PipelinePump.Build_PipelinePump_C.PlayEngineSound
	 */
	struct ABuild_PipelinePump_C_PlayEngineSound_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.StopPumpSoundSignificance
	 */
	struct ABuild_PipelinePump_C_StopPumpSoundSignificance_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.StopPumpSound
	 */
	struct ABuild_PipelinePump_C_StopPumpSound_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.PlayPumpSound
	 */
	struct ABuild_PipelinePump_C_PlayPumpSound_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.CheckHeadliftDifference
	 */
	struct ABuild_PipelinePump_C_CheckHeadliftDifference_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.ApplyFluidDescriptorColor
	 */
	struct ABuild_PipelinePump_C_ApplyFluidDescriptorColor_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.OnPumpStopped
	 */
	struct ABuild_PipelinePump_C_OnPumpStopped_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.BuildEffectFinishedEvent
	 */
	struct ABuild_PipelinePump_C_BuildEffectFinishedEvent_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.FluidDescriptorSetNotify
	 */
	struct ABuild_PipelinePump_C_FluidDescriptorSetNotify_Params
	{
	public:
		class UClass*                                              fluidDesc;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_PipelinePump_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.LostSignificance
	 */
	struct ABuild_PipelinePump_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.GainedSignificance
	 */
	struct ABuild_PipelinePump_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.StopIsLookedAtForDismantle
	 */
	struct ABuild_PipelinePump_C_StopIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.OnMaterialInstancesUpdated
	 */
	struct ABuild_PipelinePump_C_OnMaterialInstancesUpdated_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.ReceiveBeginPlay
	 */
	struct ABuild_PipelinePump_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.ReceiveTick
	 */
	struct ABuild_PipelinePump_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.OnHasPowerChanged
	 */
	struct ABuild_PipelinePump_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.StartProductionLoopEffects
	 */
	struct ABuild_PipelinePump_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.StopProductionLoopEffects
	 */
	struct ABuild_PipelinePump_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePump.Build_PipelinePump_C.ExecuteUbergraph_Build_PipelinePump
	 */
	struct ABuild_PipelinePump_C_ExecuteUbergraph_Build_PipelinePump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
