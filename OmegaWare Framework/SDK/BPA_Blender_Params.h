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
	 * Function BPA_Blender.BPA_Blender_C.AnimGraph
	 */
	struct UBPA_Blender_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Blender.BPA_Blender_C.AnimNotify_RandomAnimNotify
	 */
	struct UBPA_Blender_C_AnimNotify_RandomAnimNotify_Params
	{	};

	/**
	 * Function BPA_Blender.BPA_Blender_C.ExecuteUbergraph_BPA_Blender
	 */
	struct UBPA_Blender_C_ExecuteUbergraph_BPA_Blender_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
