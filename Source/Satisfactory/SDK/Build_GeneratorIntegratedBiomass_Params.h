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
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnRep_mHighlightEffectState
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_OnRep_mHighlightEffectState_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GetBuildEffectTemplate
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_GetBuildEffectTemplate_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanBeSampled
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_CanBeSampled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.CanDismantle
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_CanDismantle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.GainedSignificance
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.LostSignificance
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveUpdateEffects
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_ReceiveUpdateEffects_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnIsProducingChanged
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.UpdateBuildableVisibility
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_UpdateBuildableVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isTutorialComplete;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ShowHighlightEffect
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_ShowHighlightEffect_Params
	{
	public:
		int32_t                                                    ExpectedState;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.DestroyHighlightEffect
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_DestroyHighlightEffect_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.OnUse
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_OnUse_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FUseState                                           State;                                                   // 0x0008(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveBeginPlay
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ReceiveEndPlay
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.SetHighlightState
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_SetHighlightState_Params
	{
	public:
		int32_t                                                    NewHighlightState;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorIntegratedBiomass.Build_GeneratorIntegratedBiomass_C.ExecuteUbergraph_Build_GeneratorIntegratedBiomass
	 */
	struct ABuild_GeneratorIntegratedBiomass_C_ExecuteUbergraph_Build_GeneratorIntegratedBiomass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
