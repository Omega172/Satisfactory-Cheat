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
	 * Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.GainedSignificance
	 */
	struct ABuild_GeneratorGeoThermal_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.LostSignificance
	 */
	struct ABuild_GeneratorGeoThermal_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorGeoThermal_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorGeoThermal_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorGeoThermal.Build_GeneratorGeoThermal_C.ExecuteUbergraph_Build_GeneratorGeoThermal
	 */
	struct ABuild_GeneratorGeoThermal_C_ExecuteUbergraph_Build_GeneratorGeoThermal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
