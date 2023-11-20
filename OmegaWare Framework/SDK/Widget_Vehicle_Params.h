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
	 * Function Widget_Vehicle.Widget_Vehicle_C.CheckIfRecordMenuShouldOpen
	 */
	struct UWidget_Vehicle_C_CheckIfRecordMenuShouldOpen_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OpenSaveViaRecordMenu
	 */
	struct UWidget_Vehicle_C_OpenSaveViaRecordMenu_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OpenLoadViaRecordMenu
	 */
	struct UWidget_Vehicle_C_OpenLoadViaRecordMenu_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OpenSave
	 */
	struct UWidget_Vehicle_C_OpenSave_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OpenLoad
	 */
	struct UWidget_Vehicle_C_OpenLoad_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OnRecordMenuOpened
	 */
	struct UWidget_Vehicle_C_OnRecordMenuOpened_Params
	{
	public:
		class UWidget_RecordMenu_C*                                RecordMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OnSaveClosed
	 */
	struct UWidget_Vehicle_C_OnSaveClosed_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OnLoadClosed
	 */
	struct UWidget_Vehicle_C_OnLoadClosed_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.UnbindMappingContexts
	 */
	struct UWidget_Vehicle_C_UnbindMappingContexts_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.SetupMappingContexts
	 */
	struct UWidget_Vehicle_C_SetupMappingContexts_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Dock
	 */
	struct UWidget_Vehicle_C_Dock_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.UpdateManualDockText
	 */
	struct UWidget_Vehicle_C_UpdateManualDockText_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.SetupKeybindings
	 */
	struct UWidget_Vehicle_C_SetupKeybindings_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.GetHealthPercent
	 */
	struct UWidget_Vehicle_C_GetHealthPercent_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OnItemAddedOrRemoved
	 */
	struct UWidget_Vehicle_C_OnItemAddedOrRemoved_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumAddedRemoved;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.UpdateTransferStatus
	 */
	struct UWidget_Vehicle_C_UpdateTransferStatus_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.GetCurrentSpeedinKMHText
	 */
	struct UWidget_Vehicle_C_GetCurrentSpeedinKMHText_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Init
	 */
	struct UWidget_Vehicle_C_Init_Params
	{
	public:
		class ABP_WheeledVehicle_C*                                Vehicle;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Stop Recording
	 */
	struct UWidget_Vehicle_C_StopRecording_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F8TZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.UpdateHUDStartRecording
	 */
	struct UWidget_Vehicle_C_UpdateHUDStartRecording_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4
	 */
	struct UWidget_Vehicle_C_InpActEvt_IA_LoadPath_K2Node_EnhancedInputActionEvent_4_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_Vehicle_C_InpActEvt_IA_TogglePathVisibility_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_Vehicle_C_InpActEvt_IA_SavePath_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_Vehicle_C_InpActEvt_IA_Dock_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Construct
	 */
	struct UWidget_Vehicle_C_Construct_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Tick
	 */
	struct UWidget_Vehicle_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.AutoPilotCheck
	 */
	struct UWidget_Vehicle_C_AutoPilotCheck_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Destruct
	 */
	struct UWidget_Vehicle_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Event Update Vehicle Data
	 */
	struct UWidget_Vehicle_C_EventUpdateVehicleData_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OnManualDockingStateChanged
	 */
	struct UWidget_Vehicle_C_OnManualDockingStateChanged_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.Clear Path
	 */
	struct UWidget_Vehicle_C_ClearPath_Params
	{	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.ExecuteUbergraph_Widget_Vehicle
	 */
	struct UWidget_Vehicle_C_ExecuteUbergraph_Widget_Vehicle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PWR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Vehicle.Widget_Vehicle_C.OpenRecordMenu__DelegateSignature
	 */
	struct UWidget_Vehicle_C_OpenRecordMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
