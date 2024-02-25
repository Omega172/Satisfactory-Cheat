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
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDronePortName
	 */
	struct UBPW_DroneStationTooltip_C_GetDronePortName_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetBatteriesUsed
	 */
	struct UBPW_DroneStationTooltip_C_GetBatteriesUsed_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetTransportRate
	 */
	struct UBPW_DroneStationTooltip_C_GetTransportRate_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.GetDroneStatus
	 */
	struct UBPW_DroneStationTooltip_C_GetDroneStatus_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Destruct
	 */
	struct UBPW_DroneStationTooltip_C_Destruct_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedRoundTripTimeChanged
	 */
	struct UBPW_DroneStationTooltip_C_OnEstimatedRoundTripTimeChanged_Params
	{
	public:
		float                                                      estimatedRoundTripTime;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnDroneStatusChanged
	 */
	struct UBPW_DroneStationTooltip_C_OnDroneStatusChanged_Params
	{
	public:
		EDroneStatus                                               droneStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.Construct
	 */
	struct UBPW_DroneStationTooltip_C_Construct_Params
	{	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnEstimatedTransportRateChanged
	 */
	struct UBPW_DroneStationTooltip_C_OnEstimatedTransportRateChanged_Params
	{
	public:
		int32_t                                                    estimatedTransportRate;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.OnStatisticsChanged
	 */
	struct UBPW_DroneStationTooltip_C_OnStatisticsChanged_Params
	{
	public:
		struct FFGDroneTripStatistics                              droneTripStatistics;                                     // 0x0000(0x0054)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_DroneStationTooltip.BPW_DroneStationTooltip_C.ExecuteUbergraph_BPW_DroneStationTooltip
	 */
	struct UBPW_DroneStationTooltip_C_ExecuteUbergraph_BPW_DroneStationTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
