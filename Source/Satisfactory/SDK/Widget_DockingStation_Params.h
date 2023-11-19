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
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetRouteStatusToolTip
	 */
	struct UWidget_DockingStation_C_GetRouteStatusToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetTransferToolTip
	 */
	struct UWidget_DockingStation_C_GetTransferToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetMaxTransferTooltip
	 */
	struct UWidget_DockingStation_C_GetMaxTransferTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetPowerConsumptionToolTip
	 */
	struct UWidget_DockingStation_C_GetPowerConsumptionToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetFuelConsumptionToolTip
	 */
	struct UWidget_DockingStation_C_GetFuelConsumptionToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.TryDropOntoSlot
	 */
	struct UWidget_DockingStation_C_TryDropOntoSlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             TargetSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_InventorySlot_C*                             OtherSlot;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       SwapIfOccupied;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0B9S[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.SetInventoryComp
	 */
	struct UWidget_DockingStation_C_SetInventoryComp_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.UpdateStatistics
	 */
	struct UWidget_DockingStation_C_UpdateStatistics_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.UnbindDelegates
	 */
	struct UWidget_DockingStation_C_UnbindDelegates_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.BindDelegates
	 */
	struct UWidget_DockingStation_C_BindDelegates_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.InitStationNameInput
	 */
	struct UWidget_DockingStation_C_InitStationNameInput_Params
	{
	public:
		unsigned char                                              UnknownData_TG0X[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.UpdateTransferData
	 */
	struct UWidget_DockingStation_C_UpdateTransferData_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.GetTruckStationData
	 */
	struct UWidget_DockingStation_C_GetTruckStationData_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.SetStationNameInputText
	 */
	struct UWidget_DockingStation_C_SetStationNameInputText_Params
	{
	public:
		class FText                                                mStationNameText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.DropInventorySlotStack
	 */
	struct UWidget_DockingStation_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.SetHeaderText
	 */
	struct UWidget_DockingStation_C_SetHeaderText_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.Init
	 */
	struct UWidget_DockingStation_C_Init_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.Construct
	 */
	struct UWidget_DockingStation_C_Construct_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UWidget_DockingStation_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_DockingStation_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.OnReplicationDetailActorReplicated
	 */
	struct UWidget_DockingStation_C_OnReplicationDetailActorReplicated_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_DockingStation_C_BndEvt__mStationNameTextObject_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_1_onSwitchChanged__DelegateSignature
	 */
	struct UWidget_DockingStation_C_BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_1_onSwitchChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.Event Update Station Data
	 */
	struct UWidget_DockingStation_C_EventUpdateStationData_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.Destruct
	 */
	struct UWidget_DockingStation_C_Destruct_Params
	{	};

	/**
	 * Function Widget_DockingStation.Widget_DockingStation_C.ExecuteUbergraph_Widget_DockingStation
	 */
	struct UWidget_DockingStation_C_ExecuteUbergraph_Widget_DockingStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IK7T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
