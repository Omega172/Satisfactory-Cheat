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
	 * Function BPA_3pParachute.BPA_3pParachute_C.AnimGraph
	 */
	struct UBPA_3pParachute_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_3pParachute.BPA_3pParachute_C.BlueprintUpdateAnimation
	 */
	struct UBPA_3pParachute_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_3pParachute.BPA_3pParachute_C.BlueprintBeginPlay
	 */
	struct UBPA_3pParachute_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function BPA_3pParachute.BPA_3pParachute_C.ExecuteUbergraph_BPA_3pParachute
	 */
	struct UBPA_3pParachute_C_ExecuteUbergraph_BPA_3pParachute_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
