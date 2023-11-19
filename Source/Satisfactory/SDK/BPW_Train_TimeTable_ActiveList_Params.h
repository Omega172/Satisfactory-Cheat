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
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetIsSelfDrivingEnabled
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_SetIsSelfDrivingEnabled_Params
	{
	public:
		bool                                                       mIsSelfDrivingEnabled;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HFC1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationUnhovered
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_StationUnhovered_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.StationHovered
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_StationHovered_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetupStationBindings
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_SetupStationBindings_Params
	{
	public:
		class UBPW_Train_TimeTable_Station_C*                      StationWidget;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.RemoveInvalidDuplicateStops
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_RemoveInvalidDuplicateStops_Params
	{
	public:
		TArray<struct FTimeTableStop>                              InStops;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTimeTableStop>                              OutStops;                                                // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.MoveSingleStationToBottom
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_MoveSingleStationToBottom_Params
	{
	public:
		class UBPW_Train_TimeTable_Station_C*                      Station;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WX81[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PendingMoveStationToBottom
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_PendingMoveStationToBottom_Params
	{
	public:
		class UBPW_Train_TimeTable_Station_C*                      TimeTableStation;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsNextStationAfterMoveMove;                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q90Q[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.AdjustStopsInitalOrder
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_AdjustStopsInitalOrder_Params
	{
	public:
		TArray<class UBPW_Train_TimeTable_Station_C*>              StationsIn;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<class UBPW_Train_TimeTable_Station_C*>              StationsOut;                                             // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.SetTimeTable
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_SetTimeTable_Params
	{
	public:
		class AFGRailroadTimeTable*                                mTimeTable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.UpdateTimeTableOrder
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_UpdateTimeTableOrder_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OFUB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.CreateTimeTable
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_CreateTimeTable_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.PreConstruct
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Construct
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnMoveStationsToBottom
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_OnMoveStationsToBottom_Params
	{
	public:
		class UBPW_Train_TimeTable_Station_C*                      Station;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnTimeTableUpdate
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_OnTimeTableUpdate_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.Destruct
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.ExecuteUbergraph_BPW_Train_TimeTable_ActiveList
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_ExecuteUbergraph_BPW_Train_TimeTable_ActiveList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationUnhovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_OnStationUnhovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Train_TimeTable_ActiveList.BPW_Train_TimeTable_ActiveList_C.OnStationHovered__DelegateSignature
	 */
	struct UBPW_Train_TimeTable_ActiveList_C_OnStationHovered__DelegateSignature_Params
	{
	public:
		struct FTimeTableStop                                      Station;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
