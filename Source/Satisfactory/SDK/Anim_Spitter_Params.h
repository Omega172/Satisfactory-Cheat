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
	 * Function Anim_Spitter.Anim_Spitter_C.AnimGraph
	 */
	struct UAnim_Spitter_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.CalculateAnimGraphVariables
	 */
	struct UAnim_Spitter_C_CalculateAnimGraphVariables_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46
	 */
	struct UAnim_Spitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_E5A14AC943454B0D928B91923D852F46_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266
	 */
	struct UAnim_Spitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_Spitter_AnimGraphNode_TransitionResult_F59AB4D046321D1D1D4ED6BFFA4CE266_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SpitterWalkToRunNotify
	 */
	struct UAnim_Spitter_C_AnimNotify_SpitterWalkToRunNotify_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.OnRadialDamageTaken
	 */
	struct UAnim_Spitter_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.OnPointDamageTaken
	 */
	struct UAnim_Spitter_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.BlueprintUpdateAnimation
	 */
	struct UAnim_Spitter_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.AnimNotify_SniperVFX_ChargeUp
	 */
	struct UAnim_Spitter_C_AnimNotify_SniperVFX_ChargeUp_Params
	{	};

	/**
	 * Function Anim_Spitter.Anim_Spitter_C.ExecuteUbergraph_Anim_Spitter
	 */
	struct UAnim_Spitter_C_ExecuteUbergraph_Anim_Spitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IAKD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
