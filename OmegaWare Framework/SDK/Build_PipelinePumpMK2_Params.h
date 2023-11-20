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
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.PlayEngineSound
	 */
	struct ABuild_PipelinePumpMk2_C_PlayEngineSound_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.StopPumpSound
	 */
	struct ABuild_PipelinePumpMk2_C_StopPumpSound_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.CheckHeadliftDifference
	 */
	struct ABuild_PipelinePumpMk2_C_CheckHeadliftDifference_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.StopPumpSoundSignificance
	 */
	struct ABuild_PipelinePumpMk2_C_StopPumpSoundSignificance_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.PlayPumpSound
	 */
	struct ABuild_PipelinePumpMk2_C_PlayPumpSound_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.ApplyFluidDescriptorColor
	 */
	struct ABuild_PipelinePumpMk2_C_ApplyFluidDescriptorColor_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.OnPumpStopped
	 */
	struct ABuild_PipelinePumpMk2_C_OnPumpStopped_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.ReceiveBeginPlay
	 */
	struct ABuild_PipelinePumpMk2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.LostSignificance
	 */
	struct ABuild_PipelinePumpMk2_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_PipelinePumpMk2_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.OnHasPowerChanged
	 */
	struct ABuild_PipelinePumpMk2_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.StopIsLookedAtForDismantle
	 */
	struct ABuild_PipelinePumpMk2_C_StopIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.FluidDescriptorSetNotify
	 */
	struct ABuild_PipelinePumpMk2_C_FluidDescriptorSetNotify_Params
	{
	public:
		class UClass*                                              fluidDesc;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.ReceiveTick
	 */
	struct ABuild_PipelinePumpMk2_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.OnMaterialInstancesUpdated
	 */
	struct ABuild_PipelinePumpMk2_C_OnMaterialInstancesUpdated_Params
	{	};

	/**
	 * Function Build_PipelinePumpMK2.Build_PipelinePumpMk2_C.ExecuteUbergraph_Build_PipelinePumpMk2
	 */
	struct ABuild_PipelinePumpMk2_C_ExecuteUbergraph_Build_PipelinePumpMk2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
