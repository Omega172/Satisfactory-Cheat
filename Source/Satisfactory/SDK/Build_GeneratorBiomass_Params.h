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
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStartEffects
	 */
	struct ABuild_GeneratorBiomass_C_HandleStartEffects_Params
	{
	public:
		bool                                                       bStartProducing;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9XLP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.HandleStopEffects
	 */
	struct ABuild_GeneratorBiomass_C_HandleStopEffects_Params
	{
	public:
		bool                                                       bStopProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M7WL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorBiomass_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorBiomass_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.LostSignificance
	 */
	struct ABuild_GeneratorBiomass_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ReceiveUpdateEffects
	 */
	struct ABuild_GeneratorBiomass_C_ReceiveUpdateEffects_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.GainedSignificance
	 */
	struct ABuild_GeneratorBiomass_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStartProducing
	 */
	struct ABuild_GeneratorBiomass_C_Factory_ReceiveStartProducing_Params
	{	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_GeneratorBiomass_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_GeneratorBiomass.Build_GeneratorBiomass_C.ExecuteUbergraph_Build_GeneratorBiomass
	 */
	struct ABuild_GeneratorBiomass_C_ExecuteUbergraph_Build_GeneratorBiomass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
