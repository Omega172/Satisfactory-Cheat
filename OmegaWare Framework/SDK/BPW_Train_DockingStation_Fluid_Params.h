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
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.UpdateTransferData
	 */
	struct UBPW_Train_DockingStation_Fluid_C_UpdateTransferData_Params
	{
	public:
		bool                                                       IsLoading;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E36F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.SetHeaderText
	 */
	struct UBPW_Train_DockingStation_Fluid_C_SetHeaderText_Params
	{	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.Init
	 */
	struct UBPW_Train_DockingStation_Fluid_C_Init_Params
	{	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.Construct
	 */
	struct UBPW_Train_DockingStation_Fluid_C_Construct_Params
	{	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.Tick
	 */
	struct UBPW_Train_DockingStation_Fluid_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UBPW_Train_DockingStation_Fluid_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.OnReplicationDetailActorReplicated
	 */
	struct UBPW_Train_DockingStation_Fluid_C_OnReplicationDetailActorReplicated_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_4_OnFlush__DelegateSignature
	 */
	struct UBPW_Train_DockingStation_Fluid_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_4_OnFlush__DelegateSignature_Params
	{
	public:
		bool                                                       FlushNetwork;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1D1K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     DrainDuration;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_0_OnDrainCompleted__DelegateSignature
	 */
	struct UBPW_Train_DockingStation_Fluid_C_BndEvt__BPW_PipeModule_K2Node_ComponentBoundEvent_0_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_3_onSwitchChanged__DelegateSignature
	 */
	struct UBPW_Train_DockingStation_Fluid_C_BndEvt__BPW_OnOffSwitch_K2Node_ComponentBoundEvent_3_onSwitchChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.On Transfer Rate Updated
	 */
	struct UBPW_Train_DockingStation_Fluid_C_OnTransferRateUpdated_Params
	{
	public:
		int32_t                                                    itemTransferRate;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.PreConstruct
	 */
	struct UBPW_Train_DockingStation_Fluid_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Train_DockingStation_Fluid.BPW_Train_DockingStation_Fluid_C.ExecuteUbergraph_BPW_Train_DockingStation_Fluid
	 */
	struct UBPW_Train_DockingStation_Fluid_C_ExecuteUbergraph_BPW_Train_DockingStation_Fluid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
