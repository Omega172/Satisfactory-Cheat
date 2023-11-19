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
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.AnimGraph
	 */
	struct UAnim_PortableMiner_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.BlueprintUpdateAnimation
	 */
	struct UAnim_PortableMiner_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartMiningVfxNotify
	 */
	struct UAnim_PortableMiner_C_AnimNotify_StartMiningVfxNotify_Params
	{	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerEnteredOfflineState
	 */
	struct UAnim_PortableMiner_C_AnimNotify_PortableMinerEnteredOfflineState_Params
	{	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_PortableMinerLeftOfflineState
	 */
	struct UAnim_PortableMiner_C_AnimNotify_PortableMinerLeftOfflineState_Params
	{	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.AnimNotify_StartBurnerVfxNotify
	 */
	struct UAnim_PortableMiner_C_AnimNotify_StartBurnerVfxNotify_Params
	{	};

	/**
	 * Function Anim_PortableMiner.Anim_PortableMiner_C.ExecuteUbergraph_Anim_PortableMiner
	 */
	struct UAnim_PortableMiner_C_ExecuteUbergraph_Anim_PortableMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y0XR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
