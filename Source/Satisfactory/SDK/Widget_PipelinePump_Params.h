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
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.GetHeadliftTooltip
	 */
	struct UWidget_PipelinePump_C_GetHeadliftTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.ActivateHeadLiftWarning
	 */
	struct UWidget_PipelinePump_C_ActivateHeadLiftWarning_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.UpdateWarnings
	 */
	struct UWidget_PipelinePump_C_UpdateWarnings_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.SetStaticInfo
	 */
	struct UWidget_PipelinePump_C_SetStaticInfo_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.UpdateStats
	 */
	struct UWidget_PipelinePump_C_UpdateStats_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.GetFlowText
	 */
	struct UWidget_PipelinePump_C_GetFlowText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.GetBackPressureText
	 */
	struct UWidget_PipelinePump_C_GetBackPressureText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.GetPressureText
	 */
	struct UWidget_PipelinePump_C_GetPressureText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.GetFlowLimitText
	 */
	struct UWidget_PipelinePump_C_GetFlowLimitText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.Init
	 */
	struct UWidget_PipelinePump_C_Init_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_PipelinePump_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.OnCustomTick
	 */
	struct UWidget_PipelinePump_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.BndEvt__mFactory_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature
	 */
	struct UWidget_PipelinePump_C_BndEvt__mFactory_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelinePump.Widget_PipelinePump_C.ExecuteUbergraph_Widget_PipelinePump
	 */
	struct UWidget_PipelinePump_C_ExecuteUbergraph_Widget_PipelinePump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_46S6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
