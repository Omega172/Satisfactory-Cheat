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
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.GetSmoothedValues
	 */
	struct UWidget_PipelineInspector_C_GetSmoothedValues_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.InitFluid
	 */
	struct UWidget_PipelineInspector_C_InitFluid_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateGauge
	 */
	struct UWidget_PipelineInspector_C_UpdateGauge_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateTank
	 */
	struct UWidget_PipelineInspector_C_UpdateTank_Params
	{
	public:
		double                                                     mNewValue;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.UpdateFlowRate
	 */
	struct UWidget_PipelineInspector_C_UpdateFlowRate_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatFlow
	 */
	struct UWidget_PipelineInspector_C_FormatFlow_Params
	{
	public:
		double                                                     Flow;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.FormatContentPct
	 */
	struct UWidget_PipelineInspector_C_FormatContentPct_Params
	{
	public:
		double                                                     Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.Init
	 */
	struct UWidget_PipelineInspector_C_Init_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_PipelineInspector_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.Tick
	 */
	struct UWidget_PipelineInspector_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.OnCustomTick
	 */
	struct UWidget_PipelineInspector_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.Flush
	 */
	struct UWidget_PipelineInspector_C_Flush_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.Construct
	 */
	struct UWidget_PipelineInspector_C_Construct_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_7_OnFlush__DelegateSignature
	 */
	struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_7_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnFullNetworkClicked__DelegateSignature
	 */
	struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnFullNetworkClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_11_OnThisBufferClicked__DelegateSignature
	 */
	struct UWidget_PipelineInspector_C_BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_11_OnThisBufferClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PipelineInspector.Widget_PipelineInspector_C.ExecuteUbergraph_Widget_PipelineInspector
	 */
	struct UWidget_PipelineInspector_C_ExecuteUbergraph_Widget_PipelineInspector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
