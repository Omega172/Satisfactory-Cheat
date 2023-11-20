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
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.DestroyProductionVFX
	 */
	struct ABuild_GeneratorNuclear_C_DestroyProductionVFX_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartProductionVFX
	 */
	struct ABuild_GeneratorNuclear_C_StartProductionVFX_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveBeginPlay
	 */
	struct ABuild_GeneratorNuclear_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.GainedSignificance
	 */
	struct ABuild_GeneratorNuclear_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.LostSignificance
	 */
	struct ABuild_GeneratorNuclear_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorNuclear_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorNuclear_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StartIdlingLoopEffects
	 */
	struct ABuild_GeneratorNuclear_C_StartIdlingLoopEffects_Params
	{
	public:
		bool                                                       didGainPower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.StopIdlingLoopEffects
	 */
	struct ABuild_GeneratorNuclear_C_StopIdlingLoopEffects_Params
	{
	public:
		bool                                                       didLosePower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveUpdateEffects
	 */
	struct ABuild_GeneratorNuclear_C_ReceiveUpdateEffects_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ReceiveDestroyed
	 */
	struct ABuild_GeneratorNuclear_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.Factory_ReceiveStartProducing
	 */
	struct ABuild_GeneratorNuclear_C_Factory_ReceiveStartProducing_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_GeneratorNuclear_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_GeneratorNuclear.Build_GeneratorNuclear_C.ExecuteUbergraph_Build_GeneratorNuclear
	 */
	struct ABuild_GeneratorNuclear_C_ExecuteUbergraph_Build_GeneratorNuclear_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
