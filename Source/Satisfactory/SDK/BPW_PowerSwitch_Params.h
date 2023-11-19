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
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.Cleanup
	 */
	struct UBPW_PowerSwitch_C_Cleanup_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchChanged
	 */
	struct UBPW_PowerSwitch_C_OnPowerSwitchChanged_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_2
	 */
	struct UBPW_PowerSwitch_C_OnmGetPowerCircuit_2_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnmGetPowerCircuit_1
	 */
	struct UBPW_PowerSwitch_C_OnmGetPowerCircuit_1_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetupGraphData
	 */
	struct UBPW_PowerSwitch_C_SetupGraphData_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleClicks
	 */
	struct UBPW_PowerSwitch_C_PlaySFXHandleClicks_Params
	{
	public:
		double                                                     HandleValue;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.PlaySFXHandleSwitch
	 */
	struct UBPW_PowerSwitch_C_PlaySFXHandleSwitch_Params
	{
	public:
		bool                                                       SwitchToggle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_57YB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.SetSwitchHandlePosition
	 */
	struct UBPW_PowerSwitch_C_SetSwitchHandlePosition_Params
	{
	public:
		double                                                     InValue;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnLerpFinished
	 */
	struct UBPW_PowerSwitch_C_OnLerpFinished_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateIndicatorPanel
	 */
	struct UBPW_PowerSwitch_C_UpdateIndicatorPanel_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetCurrentLerpValue
	 */
	struct UBPW_PowerSwitch_C_GetCurrentLerpValue_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.StartLerpHandle
	 */
	struct UBPW_PowerSwitch_C_StartLerpHandle_Params
	{
	public:
		bool                                                       StartedUp;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsReturning;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetFloatCurveHandleValue
	 */
	struct UBPW_PowerSwitch_C_GetFloatCurveHandleValue_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StartedUp;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PBDX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.LerpHandle
	 */
	struct UBPW_PowerSwitch_C_LerpHandle_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnSwitchTriggered
	 */
	struct UBPW_PowerSwitch_C_OnSwitchTriggered_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.CalculateSwitchHandleValue
	 */
	struct UBPW_PowerSwitch_C_CalculateSwitchHandleValue_Params
	{
	public:
		double                                                     InValue;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GoingDown;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXNU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomGraphData
	 */
	struct UBPW_PowerSwitch_C_RandomGraphData_Params
	{
	public:
		TArray<double>                                             Data;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.RandomizeGraph
	 */
	struct UBPW_PowerSwitch_C_RandomizeGraph_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.UpdateGraphInfo
	 */
	struct UBPW_PowerSwitch_C_UpdateGraphInfo_Params
	{
	public:
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ConnectionIndex;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphUpdateTime
	 */
	struct UBPW_PowerSwitch_C_GetGraphUpdateTime_Params
	{
	public:
		double                                                     UpdateTime;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.GetGraphData
	 */
	struct UBPW_PowerSwitch_C_GetGraphData_Params
	{
	public:
		class UFGPowerConnectionComponent*                         PowerConnection;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DataIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDYB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             Data;                                                    // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.Construct
	 */
	struct UBPW_PowerSwitch_C_Construct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnUpdateGraph
	 */
	struct UBPW_PowerSwitch_C_OnUpdateGraph_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.Destruct
	 */
	struct UBPW_PowerSwitch_C_Destruct_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UBPW_PowerSwitch_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_PowerSwitch_C_BndEvt__Slider_141_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UBPW_PowerSwitch_C_BndEvt__mSwitchHandle_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature
	 */
	struct UBPW_PowerSwitch_C_BndEvt__BPW_PowerSwitch_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.OnPowerSwitchUpdated
	 */
	struct UBPW_PowerSwitch_C_OnPowerSwitchUpdated_Params
	{	};

	/**
	 * Function BPW_PowerSwitch.BPW_PowerSwitch_C.ExecuteUbergraph_BPW_PowerSwitch
	 */
	struct UBPW_PowerSwitch_C_ExecuteUbergraph_BPW_PowerSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OJP9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
