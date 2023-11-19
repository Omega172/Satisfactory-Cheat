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
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimGraph
	 */
	struct UAnim_SmallSpitter_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.CalculateAnimGraphVariables
	 */
	struct UAnim_SmallSpitter_C_CalculateAnimGraphVariables_Params
	{	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4
	 */
	struct UAnim_SmallSpitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_6F7C35D64C630E211DF61988112FB6A4_Params
	{	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217
	 */
	struct UAnim_SmallSpitter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmallSpitter_AnimGraphNode_TransitionResult_03EBA1B14615160DFD1DFEBCC1D6D217_Params
	{	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.AnimNotify_SpitterWalkToRunNotify
	 */
	struct UAnim_SmallSpitter_C_AnimNotify_SpitterWalkToRunNotify_Params
	{	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnRadialDamageTaken
	 */
	struct UAnim_SmallSpitter_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.OnPointDamageTaken
	 */
	struct UAnim_SmallSpitter_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.BlueprintUpdateAnimation
	 */
	struct UAnim_SmallSpitter_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_SmallSpitter.Anim_SmallSpitter_C.ExecuteUbergraph_Anim_SmallSpitter
	 */
	struct UAnim_SmallSpitter_C_ExecuteUbergraph_Anim_SmallSpitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
