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
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.GetManufacturingBackground
	 */
	struct ABuild_FoundryMk1_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.KillProducingSFX
	 */
	struct ABuild_FoundryMk1_C_KillProducingSFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.StopProducingSFX
	 */
	struct ABuild_FoundryMk1_C_StopProducingSFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.PlayShutDownSFX
	 */
	struct ABuild_FoundryMk1_C_PlayShutDownSFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.PlayProducingSFX
	 */
	struct ABuild_FoundryMk1_C_PlayProducingSFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.PlayStartUpSFX
	 */
	struct ABuild_FoundryMk1_C_PlayStartUpSFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.Destroy_VFX
	 */
	struct ABuild_FoundryMk1_C_Destroy_VFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.AttachParent
	 */
	struct ABuild_FoundryMk1_C_AttachParent_Params
	{
	public:
		class USceneComponent*                                     Particle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.SetupProductionEffects
	 */
	struct ABuild_FoundryMk1_C_SetupProductionEffects_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.RemoveIdleEffects
	 */
	struct ABuild_FoundryMk1_C_RemoveIdleEffects_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.Spawn_VFX
	 */
	struct ABuild_FoundryMk1_C_Spawn_VFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.StopProductionLoopEffects
	 */
	struct ABuild_FoundryMk1_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.LostSignificance
	 */
	struct ABuild_FoundryMk1_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.GainedSignificance
	 */
	struct ABuild_FoundryMk1_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.Deactivate_VFX
	 */
	struct ABuild_FoundryMk1_C_Deactivate_VFX_Params
	{	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.OnIsProducingChanged
	 */
	struct ABuild_FoundryMk1_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.StartProductionLoopEffects
	 */
	struct ABuild_FoundryMk1_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_FoundryMk1.Build_FoundryMk1_C.ExecuteUbergraph_Build_FoundryMk1
	 */
	struct ABuild_FoundryMk1_C_ExecuteUbergraph_Build_FoundryMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
