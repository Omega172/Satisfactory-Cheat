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
	 * Function Build_Valve.Build_Valve_C.UpdateMaterial
	 */
	struct ABuild_Valve_C_UpdateMaterial_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.ApplyFluidDescriptorColor
	 */
	struct ABuild_Valve_C_ApplyFluidDescriptorColor_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.OnPumpStopped
	 */
	struct ABuild_Valve_C_OnPumpStopped_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.OnHasPowerChanged
	 */
	struct ABuild_Valve_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Valve.Build_Valve_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_Valve_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.StopIsLookedAtForDismantle
	 */
	struct ABuild_Valve_C_StopIsLookedAtForDismantle_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Valve.Build_Valve_C.ReceiveBeginPlay
	 */
	struct ABuild_Valve_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.BuildEffectFinishedEvent
	 */
	struct ABuild_Valve_C_BuildEffectFinishedEvent_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.FluidDescriptorSetNotify
	 */
	struct ABuild_Valve_C_FluidDescriptorSetNotify_Params
	{
	public:
		class UClass*                                              fluidDesc;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Valve.Build_Valve_C.LostSignificance
	 */
	struct ABuild_Valve_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.ReceiveTick
	 */
	struct ABuild_Valve_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Valve.Build_Valve_C.GainedSignificance
	 */
	struct ABuild_Valve_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.OnMaterialInstancesUpdated
	 */
	struct ABuild_Valve_C_OnMaterialInstancesUpdated_Params
	{	};

	/**
	 * Function Build_Valve.Build_Valve_C.ExecuteUbergraph_Build_Valve
	 */
	struct ABuild_Valve_C_ExecuteUbergraph_Build_Valve_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
