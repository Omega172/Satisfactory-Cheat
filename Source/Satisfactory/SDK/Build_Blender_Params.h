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
	 * Function Build_Blender.Build_Blender_C.GetManufacturingBackground
	 */
	struct ABuild_Blender_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.AssignColors
	 */
	struct ABuild_Blender_C_AssignColors_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.UpdateColors
	 */
	struct ABuild_Blender_C_UpdateColors_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.CheckForAkNotifesActive
	 */
	struct ABuild_Blender_C_CheckForAkNotifesActive_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Start_SFX_OnSignificance
	 */
	struct ABuild_Blender_C_Start_SFX_OnSignificance_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Kill_SFX_Production
	 */
	struct ABuild_Blender_C_Kill_SFX_Production_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Stop_SFX_Production
	 */
	struct ABuild_Blender_C_Stop_SFX_Production_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Start_SFX_Production
	 */
	struct ABuild_Blender_C_Start_SFX_Production_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.CheckCurrentRecipeVFX
	 */
	struct ABuild_Blender_C_CheckCurrentRecipeVFX_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Destroy_VFX
	 */
	struct ABuild_Blender_C_Destroy_VFX_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Spawn_VFX_Emitters
	 */
	struct ABuild_Blender_C_Spawn_VFX_Emitters_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Stop_VFX_Production
	 */
	struct ABuild_Blender_C_Stop_VFX_Production_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.Start_VFX_Production
	 */
	struct ABuild_Blender_C_Start_VFX_Production_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.LostSignificance
	 */
	struct ABuild_Blender_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.GainedSignificance
	 */
	struct ABuild_Blender_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.StartProductionLoopEffects
	 */
	struct ABuild_Blender_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.OnIsProducingChanged
	 */
	struct ABuild_Blender_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.StopProductionLoopEffects
	 */
	struct ABuild_Blender_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.ReceiveBeginPlay
	 */
	struct ABuild_Blender_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.UpdateRecipeColors
	 */
	struct ABuild_Blender_C_UpdateRecipeColors_Params
	{
	public:
		class UClass*                                              newRecipe;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.StartIsAimedAtForColor
	 */
	struct ABuild_Blender_C_StartIsAimedAtForColor_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.StopIsAimedAtForColor
	 */
	struct ABuild_Blender_C_StopIsAimedAtForColor_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_Blender.Build_Blender_C.Create Liquid Mesh Component
	 */
	struct ABuild_Blender_C_CreateLiquidMeshComponent_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.K2_OnBuildEffectFinished
	 */
	struct ABuild_Blender_C_K2_OnBuildEffectFinished_Params
	{	};

	/**
	 * Function Build_Blender.Build_Blender_C.ExecuteUbergraph_Build_Blender
	 */
	struct ABuild_Blender_C_ExecuteUbergraph_Build_Blender_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
