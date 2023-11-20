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
	 * Function Anim_Hog.Anim_Hog_C.AnimGraph
	 */
	struct UAnim_Hog_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.StopIdleSFX
	 */
	struct UAnim_Hog_C_StopIdleSFX_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.CalculateAnimGraphVariables
	 */
	struct UAnim_Hog_C_CalculateAnimGraphVariables_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.OnPointDamageTaken
	 */
	struct UAnim_Hog_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.OnAnyDamageTaken
	 */
	struct UAnim_Hog_C_OnAnyDamageTaken_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.OnRadialDamageTaken
	 */
	struct UAnim_Hog_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.AnimNotify_Notify_Hog_LeftIdle
	 */
	struct UAnim_Hog_C_AnimNotify_Notify_Hog_LeftIdle_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.BlueprintUpdateAnimation
	 */
	struct UAnim_Hog_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.AnimNotify_Alpha_Hog_Roar
	 */
	struct UAnim_Hog_C_AnimNotify_Alpha_Hog_Roar_Params
	{	};

	/**
	 * Function Anim_Hog.Anim_Hog_C.ExecuteUbergraph_Anim_Hog
	 */
	struct UAnim_Hog_C_ExecuteUbergraph_Anim_Hog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3IE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
