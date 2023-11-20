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
	 * Function BPW_Graph.BPW_Graph_C.PositionDataPreviews
	 */
	struct UBPW_Graph_C_PositionDataPreviews_Params
	{	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnShowGraph
	 */
	struct UBPW_Graph_C_OnShowGraph_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnHideGraph
	 */
	struct UBPW_Graph_C_OnHideGraph_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.GetDataPreviewAreaHeight
	 */
	struct UBPW_Graph_C_GetDataPreviewAreaHeight_Params
	{
	public:
		double                                                     Height;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.UpdateMultipleGraphs
	 */
	struct UBPW_Graph_C_UpdateMultipleGraphs_Params
	{
	public:
		TArray<struct FStruct_GraphData>                           Graphs;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.ConvertValueToText
	 */
	struct UBPW_Graph_C_ConvertValueToText_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Suffix;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Result;                                                  // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnRedrawCompleted
	 */
	struct UBPW_Graph_C_OnRedrawCompleted_Params
	{	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnDataPreviewUnhovered
	 */
	struct UBPW_Graph_C_OnDataPreviewUnhovered_Params
	{	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnDataPreviewHovered
	 */
	struct UBPW_Graph_C_OnDataPreviewHovered_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.RemoveGraph
	 */
	struct UBPW_Graph_C_RemoveGraph_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.SetPreviewValueToLastPoint
	 */
	struct UBPW_Graph_C_SetPreviewValueToLastPoint_Params
	{	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.AddDataPreview
	 */
	struct UBPW_Graph_C_AddDataPreview_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.RedrawGraph
	 */
	struct UBPW_Graph_C_RedrawGraph_Params
	{
	public:
		bool                                                       RecalculateHighestPoint;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_170M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnMouseMove
	 */
	struct UBPW_Graph_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.UpdateOrAddSingleGraphLine
	 */
	struct UBPW_Graph_C_UpdateOrAddSingleGraphLine_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                GraphPreviewDataSuffix;                                  // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        GraphColor;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<double>                                             GraphData;                                               // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       CalculateHighestPoint;                                   // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDQA[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnPaint
	 */
	struct UBPW_Graph_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.Construct
	 */
	struct UBPW_Graph_C_Construct_Params
	{	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnMouseLeave
	 */
	struct UBPW_Graph_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.PreConstruct
	 */
	struct UBPW_Graph_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.OnScalingUpdated
	 */
	struct UBPW_Graph_C_OnScalingUpdated_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph.BPW_Graph_C.ExecuteUbergraph_BPW_Graph
	 */
	struct UBPW_Graph_C_ExecuteUbergraph_BPW_Graph_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
