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
	 * Function Build_OilRefinery.Build_OilRefinery_C.GetManufacturingBackground
	 */
	struct ABuild_OilRefinery_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.AtachParticle
	 */
	struct ABuild_OilRefinery_C_AtachParticle_Params
	{
	public:
		class USceneComponent*                                     Particle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Stop_SFX_Exhaust
	 */
	struct ABuild_OilRefinery_C_Stop_SFX_Exhaust_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Start_SFX_Exhaust
	 */
	struct ABuild_OilRefinery_C_Start_SFX_Exhaust_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Stop_SFX_Tank
	 */
	struct ABuild_OilRefinery_C_Stop_SFX_Tank_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Start_SFX_Tank
	 */
	struct ABuild_OilRefinery_C_Start_SFX_Tank_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Kill_SFX_Significance
	 */
	struct ABuild_OilRefinery_C_Kill_SFX_Significance_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Stop_SFX_Furnace
	 */
	struct ABuild_OilRefinery_C_Stop_SFX_Furnace_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Start_SFX_FurnaceQuick
	 */
	struct ABuild_OilRefinery_C_Start_SFX_FurnaceQuick_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Start_SFX_Furnace
	 */
	struct ABuild_OilRefinery_C_Start_SFX_Furnace_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Destroy_VFX
	 */
	struct ABuild_OilRefinery_C_Destroy_VFX_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Spawn_VFX_Emitters
	 */
	struct ABuild_OilRefinery_C_Spawn_VFX_Emitters_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Stop_VFX_Production
	 */
	struct ABuild_OilRefinery_C_Stop_VFX_Production_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.Start_VFX_Production
	 */
	struct ABuild_OilRefinery_C_Start_VFX_Production_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.OnIsProducingChanged
	 */
	struct ABuild_OilRefinery_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.OnHasPowerChanged
	 */
	struct ABuild_OilRefinery_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.LostSignificance
	 */
	struct ABuild_OilRefinery_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.OnCurrentPotentialChanged
	 */
	struct ABuild_OilRefinery_C_OnCurrentPotentialChanged_Params
	{
	public:
		float                                                      newCurrentPotential;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.GainedSignificance
	 */
	struct ABuild_OilRefinery_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.StopProductionLoopEffects
	 */
	struct ABuild_OilRefinery_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.StartProductionLoopEffects
	 */
	struct ABuild_OilRefinery_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilRefinery.Build_OilRefinery_C.ExecuteUbergraph_Build_OilRefinery
	 */
	struct ABuild_OilRefinery_C_ExecuteUbergraph_Build_OilRefinery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
