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
	 * Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimGraph
	 */
	struct UBPA_TrainDockingStation_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_StartOffset
	 */
	struct UBPA_TrainDockingStation_C_AnimNotify_StartOffset_Params
	{	};

	/**
	 * Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.AnimNotify_EndOffset
	 */
	struct UBPA_TrainDockingStation_C_AnimNotify_EndOffset_Params
	{	};

	/**
	 * Function BPA_TrainDockingStation.BPA_TrainDockingStation_C.ExecuteUbergraph_BPA_TrainDockingStation
	 */
	struct UBPA_TrainDockingStation_C_ExecuteUbergraph_BPA_TrainDockingStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
