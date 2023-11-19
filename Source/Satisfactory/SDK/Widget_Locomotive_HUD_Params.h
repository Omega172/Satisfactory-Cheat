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
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.UnbindMappingContext
	 */
	struct UWidget_Locomotive_HUD_C_UnbindMappingContext_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.SetupMappingContexts
	 */
	struct UWidget_Locomotive_HUD_C_SetupMappingContexts_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StartStopCheckNextStation
	 */
	struct UWidget_Locomotive_HUD_C_StartStopCheckNextStation_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ZML[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.UpdateNextStationBox
	 */
	struct UWidget_Locomotive_HUD_C_UpdateNextStationBox_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.CheckCanDock
	 */
	struct UWidget_Locomotive_HUD_C_CheckCanDock_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.DockTrain
	 */
	struct UWidget_Locomotive_HUD_C_DockTrain_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.CheckHasPower
	 */
	struct UWidget_Locomotive_HUD_C_CheckHasPower_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.SetSpeedometerPosition
	 */
	struct UWidget_Locomotive_HUD_C_SetSpeedometerPosition_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetPowerConsumptionText
	 */
	struct UWidget_Locomotive_HUD_C_GetPowerConsumptionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.GetSpeedInKMHText
	 */
	struct UWidget_Locomotive_HUD_C_GetSpeedInKMHText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.InpActEvt_IA_Trains_Dock_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_Locomotive_HUD_C_InpActEvt_IA_Trains_Dock_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Tick
	 */
	struct UWidget_Locomotive_HUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StartBrakeIndicatorAnim
	 */
	struct UWidget_Locomotive_HUD_C_StartBrakeIndicatorAnim_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.StopBrakeIndicatorAnim
	 */
	struct UWidget_Locomotive_HUD_C_StopBrakeIndicatorAnim_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Construct
	 */
	struct UWidget_Locomotive_HUD_C_Construct_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.CheckIsDocked
	 */
	struct UWidget_Locomotive_HUD_C_CheckIsDocked_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.Destruct
	 */
	struct UWidget_Locomotive_HUD_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.UpdateStats
	 */
	struct UWidget_Locomotive_HUD_C_UpdateStats_Params
	{	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.OnSelfDrivingChanged
	 */
	struct UWidget_Locomotive_HUD_C_OnSelfDrivingChanged_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Locomotive_HUD.Widget_Locomotive_HUD_C.ExecuteUbergraph_Widget_Locomotive_HUD
	 */
	struct UWidget_Locomotive_HUD_C_ExecuteUbergraph_Widget_Locomotive_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
