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
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.AnimGraph
	 */
	struct UBP_SpaceRabbitAnim_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetWalkingBackward
	 */
	struct UBP_SpaceRabbitAnim_C_SetWalkingBackward_Params
	{	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetFriend
	 */
	struct UBP_SpaceRabbitAnim_C_SetFriend_Params
	{
	public:
		bool                                                       IsFriend;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.CalculateAnimGraphValues
	 */
	struct UBP_SpaceRabbitAnim_C_CalculateAnimGraphValues_Params
	{	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintUpdateAnimation
	 */
	struct UBP_SpaceRabbitAnim_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnRadialDamageTaken
	 */
	struct UBP_SpaceRabbitAnim_C_OnRadialDamageTaken_Params
	{	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnPointDamageTaken
	 */
	struct UBP_SpaceRabbitAnim_C_OnPointDamageTaken_Params
	{
	public:
		struct FVector                                             shootDirection;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintBeginPlay
	 */
	struct UBP_SpaceRabbitAnim_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.ExecuteUbergraph_BP_SpaceRabbitAnim
	 */
	struct UBP_SpaceRabbitAnim_C_ExecuteUbergraph_BP_SpaceRabbitAnim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_081Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
