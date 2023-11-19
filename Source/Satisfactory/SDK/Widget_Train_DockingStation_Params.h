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
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.UpdateTransferData
	 */
	struct UWidget_Train_DockingStation_C_UpdateTransferData_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AP33[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.DropInventorySlotStack
	 */
	struct UWidget_Train_DockingStation_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.SetHeaderText
	 */
	struct UWidget_Train_DockingStation_C_SetHeaderText_Params
	{	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.Init
	 */
	struct UWidget_Train_DockingStation_C_Init_Params
	{	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.Construct
	 */
	struct UWidget_Train_DockingStation_C_Construct_Params
	{	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UWidget_Train_DockingStation_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_Train_DockingStation_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.OnReplicationDetailActorReplicated
	 */
	struct UWidget_Train_DockingStation_C_OnReplicationDetailActorReplicated_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_3_onSwitchChanged__DelegateSignature
	 */
	struct UWidget_Train_DockingStation_C_BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_3_onSwitchChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.On Transfer Rate Updated
	 */
	struct UWidget_Train_DockingStation_C_OnTransferRateUpdated_Params
	{
	public:
		int32_t                                                    itemTransferRate;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Train_DockingStation.Widget_Train_DockingStation_C.ExecuteUbergraph_Widget_Train_DockingStation
	 */
	struct UWidget_Train_DockingStation_C_ExecuteUbergraph_Widget_Train_DockingStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
