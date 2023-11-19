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
	 * Function Anim_LandingPad.Anim_LandingPad_C.AnimGraph
	 */
	struct UAnim_LandingPad_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Anim_LandingPad.Anim_LandingPad_C.HasPowerChanged
	 */
	struct UAnim_LandingPad_C_HasPowerChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Anim_LandingPad.Anim_LandingPad_C.BlueprintInitializeAnimation
	 */
	struct UAnim_LandingPad_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function Anim_LandingPad.Anim_LandingPad_C.AnimNotify_AnimShutdown
	 */
	struct UAnim_LandingPad_C_AnimNotify_AnimShutdown_Params
	{	};

	/**
	 * Function Anim_LandingPad.Anim_LandingPad_C.ExecuteUbergraph_Anim_LandingPad
	 */
	struct UAnim_LandingPad_C_ExecuteUbergraph_Anim_LandingPad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_59HH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
