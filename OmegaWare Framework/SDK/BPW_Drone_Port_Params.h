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
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.InitInventoryWidgetCallbacks
	 */
	struct UBPW_Drone_Port_C_InitInventoryWidgetCallbacks_Params
	{
	public:
		class UWidget_Inventory_C*                                 InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.TryDropOnSlot
	 */
	struct UBPW_Drone_Port_C_TryDropOnSlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             TargetSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_InventorySlot_C*                             OtherSlot;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       SwapItemIfOccupied;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3V51[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetInOutTransferTooltip
	 */
	struct UBPW_Drone_Port_C_GetInOutTransferTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetMaxTransferTooltip
	 */
	struct UBPW_Drone_Port_C_GetMaxTransferTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.DropInventorySlotStack
	 */
	struct UBPW_Drone_Port_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteriesPerMinTooltip
	 */
	struct UBPW_Drone_Port_C_GetBatteriesPerMinTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountSearchResultsText
	 */
	struct UBPW_Drone_Port_C_SetAmountSearchResultsText_Params
	{
	public:
		int32_t                                                    StationLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStationName;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHD5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.SetAmountOfStationsText
	 */
	struct UBPW_Drone_Port_C_SetAmountOfStationsText_Params
	{
	public:
		int32_t                                                    StationLength;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMUM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.ClearAndHideSearchResults
	 */
	struct UBPW_Drone_Port_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnSearchCreateResults
	 */
	struct UBPW_Drone_Port_C_OnSearchCreateResults_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateAllStationsList
	 */
	struct UBPW_Drone_Port_C_PopulateAllStationsList_Params
	{
	public:
		bool                                                       connectionsOnly;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H40P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Filter;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UVerticalBox*                                        VerticalBox;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.UnbindAllEvents
	 */
	struct UBPW_Drone_Port_C_UnbindAllEvents_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetPowerTooltip
	 */
	struct UBPW_Drone_Port_C_GetPowerTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetRoundtripTooltip
	 */
	struct UBPW_Drone_Port_C_GetRoundtripTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetBatteryTooltip
	 */
	struct UBPW_Drone_Port_C_GetBatteryTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.PopulateConnectedStationsList
	 */
	struct UBPW_Drone_Port_C_PopulateConnectedStationsList_Params
	{
	public:
		bool                                                       connectionsOnly;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V1LS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Filter;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UVerticalBox*                                        ConnectedStationsList;                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UVerticalBox*                                        CurrentStationList;                                      // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneTransferRate
	 */
	struct UBPW_Drone_Port_C_UpdateDroneTransferRate_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDronePortStats
	 */
	struct UBPW_Drone_Port_C_UpdateDronePortStats_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateDroneStatus
	 */
	struct UBPW_Drone_Port_C_UpdateDroneStatus_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.SetStationNameInputText
	 */
	struct UBPW_Drone_Port_C_SetStationNameInputText_Params
	{
	public:
		class FText                                                mStationNameText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.Init Station Name Input Text
	 */
	struct UBPW_Drone_Port_C_InitStationNameInputText_Params
	{
	public:
		class AFGDroneStationInfo*                                 stationInfo;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.GetManufacturingWarningVisibility
	 */
	struct UBPW_Drone_Port_C_GetManufacturingWarningVisibility_Params
	{
	public:
		class ABuild_DroneStation_C*                               DroneStation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.UpdateWindowText
	 */
	struct UBPW_Drone_Port_C_UpdateWindowText_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.Construct
	 */
	struct UBPW_Drone_Port_C_Construct_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.Init
	 */
	struct UBPW_Drone_Port_C_Init_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__mSortButtonInput_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__mSortButtonOutput_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatusChanged
	 */
	struct UBPW_Drone_Port_C_OnDroneStatusChanged_Params
	{
	public:
		EDroneStatus                                               droneStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedRoundTripTimeChanged
	 */
	struct UBPW_Drone_Port_C_OnEstimatedRoundTripTimeChanged_Params
	{
	public:
		float                                                      estimatedRoundTripTime;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasPowerChanged
	 */
	struct UBPW_Drone_Port_C_OnHasPowerChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnHasStandbyChanged
	 */
	struct UBPW_Drone_Port_C_OnHasStandbyChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.Destruct
	 */
	struct UBPW_Drone_Port_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.EventSetPairedStationText
	 */
	struct UBPW_Drone_Port_C_EventSetPairedStationText_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnEstimatedTransportRateChanged
	 */
	struct UBPW_Drone_Port_C_OnEstimatedTransportRateChanged_Params
	{
	public:
		int32_t                                                    estimatedTransportRate;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.Event UpdateConnectedStationList
	 */
	struct UBPW_Drone_Port_C_EventUpdateConnectedStationList_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnDroneStatisticsChanged
	 */
	struct UBPW_Drone_Port_C_OnDroneStatisticsChanged_Params
	{
	public:
		struct FFGDroneTripStatistics                              droneTripStatistics;                                     // 0x0000(0x0054)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.OnSetupInventories
	 */
	struct UBPW_Drone_Port_C_OnSetupInventories_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.DronePort WarningMessageCheck
	 */
	struct UBPW_Drone_Port_C_DronePortWarningMessageCheck_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_Drone_Port_C_BndEvt__BPW_Drone_Port_mStationNameTextObject_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Drone_Port.BPW_Drone_Port_C.ExecuteUbergraph_BPW_Drone_Port
	 */
	struct UBPW_Drone_Port_C_ExecuteUbergraph_BPW_Drone_Port_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W0MU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
