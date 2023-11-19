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
	 * Function Build_HadronCollider.Build_HadronCollider_C.GetManufacturingBackground
	 */
	struct ABuild_HadronCollider_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.Destroy_Production_VFX
	 */
	struct ABuild_HadronCollider_C_Destroy_Production_VFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.Spawn_Production_VFX
	 */
	struct ABuild_HadronCollider_C_Spawn_Production_VFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.Spawn_Large_Loop_VFX
	 */
	struct ABuild_HadronCollider_C_Spawn_Large_Loop_VFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.Spawn_Medium_Loop_VFX
	 */
	struct ABuild_HadronCollider_C_Spawn_Medium_Loop_VFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.Spawn_Small_Loop_VFX
	 */
	struct ABuild_HadronCollider_C_Spawn_Small_Loop_VFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.StopLightningTimers
	 */
	struct ABuild_HadronCollider_C_StopLightningTimers_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.TimerLightningBoltsPerRing
	 */
	struct ABuild_HadronCollider_C_TimerLightningBoltsPerRing_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.TriggerLightningBoltsPerRing
	 */
	struct ABuild_HadronCollider_C_TriggerLightningBoltsPerRing_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.DeActivateSFX
	 */
	struct ABuild_HadronCollider_C_DeActivateSFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.ActivateSFX
	 */
	struct ABuild_HadronCollider_C_ActivateSFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.LostSignificanceSFX
	 */
	struct ABuild_HadronCollider_C_LostSignificanceSFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.GainSignificanceSFX
	 */
	struct ABuild_HadronCollider_C_GainSignificanceSFX_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.UpdateDuration
	 */
	struct ABuild_HadronCollider_C_UpdateDuration_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.UpdateStartTime
	 */
	struct ABuild_HadronCollider_C_UpdateStartTime_Params
	{
	public:
		double                                                     CustomOffset;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.ChagePowerOnMaterial
	 */
	struct ABuild_HadronCollider_C_ChagePowerOnMaterial_Params
	{
	public:
		bool                                                       bPowered;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0LF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.UpdateMaterial
	 */
	struct ABuild_HadronCollider_C_UpdateMaterial_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.OnMaterialInstancesUpdated
	 */
	struct ABuild_HadronCollider_C_OnMaterialInstancesUpdated_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.OnIsProducingChanged
	 */
	struct ABuild_HadronCollider_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.StartProductionLoopEffects
	 */
	struct ABuild_HadronCollider_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.StopProductionLoopEffects
	 */
	struct ABuild_HadronCollider_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.GainedSignificance
	 */
	struct ABuild_HadronCollider_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.LostSignificance
	 */
	struct ABuild_HadronCollider_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.RecipeChanged
	 */
	struct ABuild_HadronCollider_C_RecipeChanged_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.OnHasPowerChanged
	 */
	struct ABuild_HadronCollider_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       newHasPower;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.ReceiveBeginPlay
	 */
	struct ABuild_HadronCollider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_HadronCollider.Build_HadronCollider_C.ExecuteUbergraph_Build_HadronCollider
	 */
	struct ABuild_HadronCollider_C_ExecuteUbergraph_Build_HadronCollider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
