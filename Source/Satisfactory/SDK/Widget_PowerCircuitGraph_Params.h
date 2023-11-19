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
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowGameModeFeedback
	 */
	struct UWidget_PowerCircuitGraph_C_ShowGameModeFeedback_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.OnMouseButtonUp
	 */
	struct UWidget_PowerCircuitGraph_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.CachePowerStorageInfo
	 */
	struct UWidget_PowerCircuitGraph_C_CachePowerStorageInfo_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.SetShowConnectionError
	 */
	struct UWidget_PowerCircuitGraph_C_SetShowConnectionError_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ShowPowerStorage
	 */
	struct UWidget_PowerCircuitGraph_C_ShowPowerStorage_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdatePowerStorageInfo
	 */
	struct UWidget_PowerCircuitGraph_C_UpdatePowerStorageInfo_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.UpdateData
	 */
	struct UWidget_PowerCircuitGraph_C_UpdateData_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Construct
	 */
	struct UWidget_PowerCircuitGraph_C_Construct_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.Destruct
	 */
	struct UWidget_PowerCircuitGraph_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature
	 */
	struct UWidget_PowerCircuitGraph_C_BndEvt__BPW_PowerStorageInfo_K2Node_ComponentBoundEvent_0_OnShowInfoClicked__DelegateSignature_Params
	{
	public:
		bool                                                       ShowInfo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.IsPowerCircuitValidChanged
	 */
	struct UWidget_PowerCircuitGraph_C_IsPowerCircuitValidChanged_Params
	{
	public:
		bool                                                       isPowerCircuitValid;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.AddToClickCount
	 */
	struct UWidget_PowerCircuitGraph_C_AddToClickCount_Params
	{	};

	/**
	 * Function Widget_PowerCircuitGraph.Widget_PowerCircuitGraph_C.ExecuteUbergraph_Widget_PowerCircuitGraph
	 */
	struct UWidget_PowerCircuitGraph_C_ExecuteUbergraph_Widget_PowerCircuitGraph_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2NMO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
