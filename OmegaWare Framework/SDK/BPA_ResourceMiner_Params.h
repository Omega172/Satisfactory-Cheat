#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimGraph
	 */
	struct UBPA_ResourceMiner_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineComplete
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_MineComplete_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StopMining
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_StopMining_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_MineVfx
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_MineVfx_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_StartCameraShake
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_StartCameraShake_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_PickRingSound
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_PickRingSound_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.AnimNotify_SecondMineVfx
	 */
	struct UBPA_ResourceMiner_C_AnimNotify_SecondMineVfx_Params
	{	};

	/**
	 * Function BPA_ResourceMiner.BPA_ResourceMiner_C.ExecuteUbergraph_BPA_ResourceMiner
	 */
	struct UBPA_ResourceMiner_C_ExecuteUbergraph_BPA_ResourceMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ST3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
