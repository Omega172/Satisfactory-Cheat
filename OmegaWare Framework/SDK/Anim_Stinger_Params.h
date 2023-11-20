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
	 * Function Anim_Stinger.Anim_Stinger_C.AnimGraph
	 */
	struct UAnim_Stinger_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.StopSlitherSFXByClass
	 */
	struct UAnim_Stinger_C_StopSlitherSFXByClass_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.PlaySlitherSFXByClass
	 */
	struct UAnim_Stinger_C_PlaySlitherSFXByClass_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.CalculateAnimGraphVariables
	 */
	struct UAnim_Stinger_C_CalculateAnimGraphVariables_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.OnRadialDamageTaken
	 */
	struct UAnim_Stinger_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.OnPointDamageTaken
	 */
	struct UAnim_Stinger_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.BlueprintUpdateAnimation
	 */
	struct UAnim_Stinger_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.AnimNotify_Vfx_Leap
	 */
	struct UAnim_Stinger_C_AnimNotify_Vfx_Leap_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.AnimNotify_StopLeapVFX
	 */
	struct UAnim_Stinger_C_AnimNotify_StopLeapVFX_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.AnimNotify_IdleToWalk
	 */
	struct UAnim_Stinger_C_AnimNotify_IdleToWalk_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.AnimNotify_WalkToIdle
	 */
	struct UAnim_Stinger_C_AnimNotify_WalkToIdle_Params
	{	};

	/**
	 * Function Anim_Stinger.Anim_Stinger_C.ExecuteUbergraph_Anim_Stinger
	 */
	struct UAnim_Stinger_C_ExecuteUbergraph_Anim_Stinger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
