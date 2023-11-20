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
	 * Function Build_Packager.Build_Packager_C.Play_SFX_ActiveResidue
	 */
	struct ABuild_Packager_C_Play_SFX_ActiveResidue_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Kill_SFX_Ambience
	 */
	struct ABuild_Packager_C_Kill_SFX_Ambience_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Stop_SFX_Ambience
	 */
	struct ABuild_Packager_C_Stop_SFX_Ambience_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Start_SFX_Ambience
	 */
	struct ABuild_Packager_C_Start_SFX_Ambience_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.CheckCurrentRecipe_VFX
	 */
	struct ABuild_Packager_C_CheckCurrentRecipe_VFX_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Stop_VFX_Production
	 */
	struct ABuild_Packager_C_Stop_VFX_Production_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Destroy_VFX
	 */
	struct ABuild_Packager_C_Destroy_VFX_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Spawn_VFX_Emitters
	 */
	struct ABuild_Packager_C_Spawn_VFX_Emitters_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Start_VFX_Production
	 */
	struct ABuild_Packager_C_Start_VFX_Production_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.StartProductionLoopEffects
	 */
	struct ABuild_Packager_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Packager.Build_Packager_C.StopProductionLoopEffects
	 */
	struct ABuild_Packager_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Packager.Build_Packager_C.GainedSignificance
	 */
	struct ABuild_Packager_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.LostSignificance
	 */
	struct ABuild_Packager_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.OnIsProducingChanged
	 */
	struct ABuild_Packager_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Packager.Build_Packager_C.OnHasPowerChanged
	 */
	struct ABuild_Packager_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Packager.Build_Packager_C.ReceiveBeginPlay
	 */
	struct ABuild_Packager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Play_SFX_Residue
	 */
	struct ABuild_Packager_C_Play_SFX_Residue_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.GetParticle
	 */
	struct ABuild_Packager_C_GetParticle_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.PlayEndVfx
	 */
	struct ABuild_Packager_C_PlayEndVfx_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.Play_VFX_Messy
	 */
	struct ABuild_Packager_C_Play_VFX_Messy_Params
	{	};

	/**
	 * Function Build_Packager.Build_Packager_C.ExecuteUbergraph_Build_Packager
	 */
	struct ABuild_Packager_C_ExecuteUbergraph_Build_Packager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
