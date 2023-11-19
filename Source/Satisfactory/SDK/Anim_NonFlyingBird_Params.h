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
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimGraph
	 */
	struct UAnim_NonFlyingBird_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.CalculateAnimGraphVariables
	 */
	struct UAnim_NonFlyingBird_C_CalculateAnimGraphVariables_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D
	 */
	struct UAnim_NonFlyingBird_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD
	 */
	struct UAnim_NonFlyingBird_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnRadialDamageTaken
	 */
	struct UAnim_NonFlyingBird_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.OnPointDamageTaken
	 */
	struct UAnim_NonFlyingBird_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBEnteredIdleLuringState
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_NFBEnteredIdleLuringState_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Jump
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_Jump_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_Land
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_Land_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_EnteredMoving
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_NFB_EnteredMoving_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFBLeftLuringState
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_NFBLeftLuringState_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_NFB_LeftMoving
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_NFB_LeftMoving_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_VO_Long
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_VO_Long_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.BlueprintUpdateAnimation
	 */
	struct UAnim_NonFlyingBird_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.AnimNotify_AnimNotify_NFB_JumpLoop
	 */
	struct UAnim_NonFlyingBird_C_AnimNotify_AnimNotify_NFB_JumpLoop_Params
	{	};

	/**
	 * Function Anim_NonFlyingBird.Anim_NonFlyingBird_C.ExecuteUbergraph_Anim_NonFlyingBird
	 */
	struct UAnim_NonFlyingBird_C_ExecuteUbergraph_Anim_NonFlyingBird_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
