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
	 * Function BPA_Waterpump.BPA_Waterpump_C.AnimGraph
	 */
	struct UBPA_Waterpump_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_Waterpump.BPA_Waterpump_C.AnimNotify_StopWaterPumpAnim
	 */
	struct UBPA_Waterpump_C_AnimNotify_StopWaterPumpAnim_Params
	{	};

	/**
	 * Function BPA_Waterpump.BPA_Waterpump_C.ExecuteUbergraph_BPA_Waterpump
	 */
	struct UBPA_Waterpump_C_ExecuteUbergraph_BPA_Waterpump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_26Q8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
