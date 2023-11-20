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
	 * Function BPA_TruckStation.BPA_TruckStation_C.AnimGraph
	 */
	struct UBPA_TruckStation_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.SeekUnLoadIntoReverseTime
	 */
	struct UBPA_TruckStation_C_SeekUnLoadIntoReverseTime_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.SeekLoadIntoReverseTime
	 */
	struct UBPA_TruckStation_C_SeekLoadIntoReverseTime_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_DockingStationBlendedOffline
	 */
	struct UBPA_TruckStation_C_AnimNotify_DockingStationBlendedOffline_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.OnProducingChange
	 */
	struct UBPA_TruckStation_C_OnProducingChange_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterLoad
	 */
	struct UBPA_TruckStation_C_AnimNotify_EnterLoad_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.AnimNotify_EnterUnload
	 */
	struct UBPA_TruckStation_C_AnimNotify_EnterUnload_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.ResetTruckStationOnSignificanceGain
	 */
	struct UBPA_TruckStation_C_ResetTruckStationOnSignificanceGain_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.StopTruckStationOnSignificanceLost
	 */
	struct UBPA_TruckStation_C_StopTruckStationOnSignificanceLost_Params
	{	};

	/**
	 * Function BPA_TruckStation.BPA_TruckStation_C.ExecuteUbergraph_BPA_TruckStation
	 */
	struct UBPA_TruckStation_C_ExecuteUbergraph_BPA_TruckStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8XYB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
