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
	 * Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimGraph
	 */
	struct UBPA_FrackingSmasher_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_RandomAnimNotify
	 */
	struct UBPA_FrackingSmasher_C_AnimNotify_RandomAnimNotify_Params
	{	};

	/**
	 * Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_ResetRandomAnimNotify
	 */
	struct UBPA_FrackingSmasher_C_AnimNotify_ResetRandomAnimNotify_Params
	{	};

	/**
	 * Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.AnimNotify_CameraShakeNotify
	 */
	struct UBPA_FrackingSmasher_C_AnimNotify_CameraShakeNotify_Params
	{	};

	/**
	 * Function BPA_FrackingSmasher.BPA_FrackingSmasher_C.ExecuteUbergraph_BPA_FrackingSmasher
	 */
	struct UBPA_FrackingSmasher_C_ExecuteUbergraph_BPA_FrackingSmasher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
