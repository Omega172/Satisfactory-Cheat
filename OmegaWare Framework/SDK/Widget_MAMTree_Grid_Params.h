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
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown
	 */
	struct UWidget_MAMTree_Grid_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState
	 */
	struct UWidget_MAMTree_Grid_C_GetNodeState_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NewNodeData;                                             // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		EMamTree_NodeStates                                        NodeState;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched
	 */
	struct UWidget_MAMTree_Grid_C_IsSchematicResearched_Params
	{
	public:
		class UClass*                                              SchematicClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZS66[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode
	 */
	struct UWidget_MAMTree_Grid_C_ResetSelectedNode_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted
	 */
	struct UWidget_MAMTree_Grid_C_OnResearchStarted_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered
	 */
	struct UWidget_MAMTree_Grid_C_OnParentNodeUnhovered_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered
	 */
	struct UWidget_MAMTree_Grid_C_OnParentNodeHovered_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected
	 */
	struct UWidget_MAMTree_Grid_C_TellNodesIfOtherNodeIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases
	 */
	struct UWidget_MAMTree_Grid_C_SetupCavases_Params
	{
	public:
		class UCanvasPanel*                                        GridCanvas;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        NodeCanvas;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_MAMTree_Road_C*                              Roads;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback
	 */
	struct UWidget_MAMTree_Grid_C_EditorOnly_SetupTileFeedback_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntVector2D                                        NodeToUnhide;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree
	 */
	struct UWidget_MAMTree_Grid_C_OnGenerateTree_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked
	 */
	struct UWidget_MAMTree_Grid_C_OnNodeClicked_Params
	{
	public:
		bool                                                       NewCoordinates;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated
	 */
	struct UWidget_MAMTree_Grid_C_EditorOnly_OnActiveNodesUpdated_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared
	 */
	struct UWidget_MAMTree_Grid_C_OnDataCleared_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded
	 */
	struct UWidget_MAMTree_Grid_C_OnTreeLoaded_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid
	 */
	struct UWidget_MAMTree_Grid_C_IsSelectedNodeValid_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked
	 */
	struct UWidget_MAMTree_Grid_C_OnParentNodeClicked_Params
	{
	public:
		struct FIntVector2D                                        Coordinate;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads
	 */
	struct UWidget_MAMTree_Grid_C_UpdateRoads_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData
	 */
	struct UWidget_MAMTree_Grid_C_ClearData_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates
	 */
	struct UWidget_MAMTree_Grid_C_GetRoadPointsFromCoordinates_Params
	{
	public:
		struct FIntVector2D                                        StartCoordinates;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntVector2D                                        EndCoordinates;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector2D>                                   ConvertedRoadPoints;                                     // 0x0010(0x0010)  (Parm, OutParm)
		EDirection                                                 RoadDirection;                                           // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection
	 */
	struct UWidget_MAMTree_Grid_C_GetRoadDirection_Params
	{
	public:
		struct FIntVector2D                                        StartCoordinates;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FIntVector2D                                        EndCoordinates;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDirection                                                 ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GOW8[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad
	 */
	struct UWidget_MAMTree_Grid_C_DrawRoad_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FIntVector2D>                                mTempRoadTiles;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       HighlightedRoad;                                         // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CDQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints
	 */
	struct UWidget_MAMTree_Grid_C_GenerateOccupiedTilesFromRoadPoints_Params
	{
	public:
		struct FMAMTree_RoadStartEnd                               Road;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree
	 */
	struct UWidget_MAMTree_Grid_C_GenerateTree_Params
	{
	public:
		TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NodeData;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree
	 */
	struct UWidget_MAMTree_Grid_C_LoadSelectedTree_Params
	{	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree
	 */
	struct UWidget_MAMTree_Grid_C_SelectResearchTree_Params
	{
	public:
		class UClass*                                              researchTree;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates
	 */
	struct UWidget_MAMTree_Grid_C_GetInvalidCoordinates_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles
	 */
	struct UWidget_MAMTree_Grid_C_RemoveRelevantRoadOccupiedTiles_Params
	{
	public:
		struct FMAMTree_RoadStartEnd                               RoadStartEnd;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD
	 */
	struct UWidget_MAMTree_Grid_C_UpdateOccupiedRoadTiles_OLD_Params
	{
	public:
		struct FMAMTree_RoadStartEnd                               Road;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject
	 */
	struct UWidget_MAMTree_Grid_C_AddOrUpdateNodeObject_Params
	{
	public:
		struct FIntVector2D                                        Coordinate;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMAMTree_NodeData_Struct                            NodeData;                                                // 0x0008(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid
	 */
	struct UWidget_MAMTree_Grid_C_PositionWidgetOnGrid_Params
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FIntVector2D                                        Coordinates;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid
	 */
	struct UWidget_MAMTree_Grid_C_GetPixelPosOnGrid_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted
	 */
	struct UWidget_MAMTree_Grid_C_IsTileRoadHighlighted_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8VQ3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD
	 */
	struct UWidget_MAMTree_Grid_C_GetRoadHighlightOffsets_OLD_Params
	{
	public:
		struct FIntVector2D                                        Coordinates;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FIntVector2D>                                Array;                                                   // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject
	 */
	struct UWidget_MAMTree_Grid_C_CreateNodeObject_Params
	{
	public:
		struct FMAMTree_NodeData_Struct                            NodeData;                                                // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes
	 */
	struct UWidget_MAMTree_Grid_C_ShowUnlockIconOnNodes_Params
	{
	public:
		TArray<class UWidget_MAMTree_Node_C*>                      NodeObjects;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid
	 */
	struct UWidget_MAMTree_Grid_C_ExecuteUbergraph_Widget_MAMTree_Grid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature
	 */
	struct UWidget_MAMTree_Grid_C_OnResearchSelectedSchematic__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature
	 */
	struct UWidget_MAMTree_Grid_C_OnSaveTree__DelegateSignature_Params
	{
	public:
		class UClass*                                              researchTree;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature
	 */
	struct UWidget_MAMTree_Grid_C_OnLoadClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
