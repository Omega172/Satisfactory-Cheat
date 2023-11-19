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
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.AnimGraph
	 */
	struct UAnim_SpaceGiraffe_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.CalculateAnimGraphValues
	 */
	struct UAnim_SpaceGiraffe_C_CalculateAnimGraphValues_Params
	{	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19
	 */
	struct UAnim_SpaceGiraffe_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_5BBF92D944CF08F557873D8B5513CC19_Params
	{	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10
	 */
	struct UAnim_SpaceGiraffe_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SpaceGiraffe_AnimGraphNode_TransitionResult_120EBA2A4C99D3C03736878049EF1F10_Params
	{	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnPointDamageTaken
	 */
	struct UAnim_SpaceGiraffe_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.OnRadialDamageTaken
	 */
	struct UAnim_SpaceGiraffe_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.StartRotation
	 */
	struct UAnim_SpaceGiraffe_C_StartRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.BlueprintUpdateAnimation
	 */
	struct UAnim_SpaceGiraffe_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_SpaceGiraffe.Anim_SpaceGiraffe_C.ExecuteUbergraph_Anim_SpaceGiraffe
	 */
	struct UAnim_SpaceGiraffe_C_ExecuteUbergraph_Anim_SpaceGiraffe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
