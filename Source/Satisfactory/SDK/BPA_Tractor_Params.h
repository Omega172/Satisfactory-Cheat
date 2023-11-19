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
	 * Function BPA_Tractor.BPA_Tractor_C.AnimGraph
	 */
	struct UBPA_Tractor_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Tractor.BPA_Tractor_C.BlueprintUpdateAnimation
	 */
	struct UBPA_Tractor_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Tractor.BPA_Tractor_C.BlueprintInitializeAnimation
	 */
	struct UBPA_Tractor_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BPA_Tractor.BPA_Tractor_C.ExecuteUbergraph_BPA_Tractor
	 */
	struct UBPA_Tractor_C_ExecuteUbergraph_BPA_Tractor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
