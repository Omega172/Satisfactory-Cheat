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
	 * Function BPA_1pLadder.BPA_1pLadder_C.AnimGraph
	 */
	struct UBPA_1pLadder_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_1pLadder.BPA_1pLadder_C.CalculateAnimGraphValues
	 */
	struct UBPA_1pLadder_C_CalculateAnimGraphValues_Params
	{	};

	/**
	 * Function BPA_1pLadder.BPA_1pLadder_C.BlueprintUpdateAnimation
	 */
	struct UBPA_1pLadder_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_1pLadder.BPA_1pLadder_C.ExecuteUbergraph_BPA_1pLadder
	 */
	struct UBPA_1pLadder_C_ExecuteUbergraph_BPA_1pLadder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
