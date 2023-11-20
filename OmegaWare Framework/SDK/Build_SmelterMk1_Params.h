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
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.GetManufacturingBackground
	 */
	struct ABuild_SmelterMk1_C_GetManufacturingBackground_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterial*                                           MaterialOptional;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.PlaySFXStartUp
	 */
	struct ABuild_SmelterMk1_C_PlaySFXStartUp_Params
	{
	public:
		bool                                                       LoopEffectsBool;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8F9N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.PlaySFXShutDown
	 */
	struct ABuild_SmelterMk1_C_PlaySFXShutDown_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.Destroy_VFX
	 */
	struct ABuild_SmelterMk1_C_Destroy_VFX_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.AttachParent
	 */
	struct ABuild_SmelterMk1_C_AttachParent_Params
	{
	public:
		class USceneComponent*                                     Particle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.Start_VFX
	 */
	struct ABuild_SmelterMk1_C_Start_VFX_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.StopIdlingLoopEffects
	 */
	struct ABuild_SmelterMk1_C_StopIdlingLoopEffects_Params
	{
	public:
		bool                                                       didLosePower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.OnIsProducingChanged
	 */
	struct ABuild_SmelterMk1_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.Deactivate_VFX
	 */
	struct ABuild_SmelterMk1_C_Deactivate_VFX_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.StopProductionLoopEffects
	 */
	struct ABuild_SmelterMk1_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.StartIdlingLoopEffects
	 */
	struct ABuild_SmelterMk1_C_StartIdlingLoopEffects_Params
	{
	public:
		bool                                                       didGainPower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.StartProductionLoopEffects
	 */
	struct ABuild_SmelterMk1_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.LostSignificance
	 */
	struct ABuild_SmelterMk1_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.GainedSignificance
	 */
	struct ABuild_SmelterMk1_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.OnCurrentPotentialChanged
	 */
	struct ABuild_SmelterMk1_C_OnCurrentPotentialChanged_Params
	{
	public:
		float                                                      newCurrentPotential;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_SmelterMk1.Build_SmelterMk1_C.ExecuteUbergraph_Build_SmelterMk1
	 */
	struct ABuild_SmelterMk1_C_ExecuteUbergraph_Build_SmelterMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O14D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
