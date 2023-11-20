/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_MAMTree_Grid_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnPreviewMouseButtonDown");
		
		UWidget_MAMTree_Grid_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NewNodeData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		EMamTree_NodeStates                                NodeState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::GetNodeState(const struct FIntVector2D& Coordinates, TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NewNodeData, EMamTree_NodeStates* NodeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetNodeState");
		
		UWidget_MAMTree_Grid_C_GetNodeState_Params params {};
		params.Coordinates = Coordinates;
		params.NewNodeData = NewNodeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NodeState != nullptr)
			*NodeState = params.NodeState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_MAMTree_Grid_C::IsSchematicResearched(class UClass* SchematicClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSchematicResearched");
		
		UWidget_MAMTree_Grid_C_IsSchematicResearched_Params params {};
		params.SchematicClass = SchematicClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::ResetSelectedNode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ResetSelectedNode");
		
		UWidget_MAMTree_Grid_C_ResetSelectedNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::OnResearchStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchStarted");
		
		UWidget_MAMTree_Grid_C_OnResearchStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnParentNodeUnhovered(const struct FIntVector2D& Coordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeUnhovered");
		
		UWidget_MAMTree_Grid_C_OnParentNodeUnhovered_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnParentNodeHovered(const struct FIntVector2D& Coordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeHovered");
		
		UWidget_MAMTree_Grid_C_OnParentNodeHovered_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::TellNodesIfOtherNodeIsSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.TellNodesIfOtherNodeIsSelected");
		
		UWidget_MAMTree_Grid_C_TellNodesIfOtherNodeIsSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvasPanel*                                GridCanvas                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                NodeCanvas                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MAMTree_Road_C*                      Roads                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::SetupCavases(class UCanvasPanel* GridCanvas, class UCanvasPanel* NodeCanvas, class UWidget_MAMTree_Road_C* Roads)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SetupCavases");
		
		UWidget_MAMTree_Grid_C_SetupCavases_Params params {};
		params.GridCanvas = GridCanvas;
		params.NodeCanvas = NodeCanvas;
		params.Roads = Roads;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntVector2D                                NodeToUnhide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::EditorOnly_SetupTileFeedback(const struct FIntVector2D& Coordinates, const struct FIntVector2D& NodeToUnhide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_SetupTileFeedback");
		
		UWidget_MAMTree_Grid_C_EditorOnly_SetupTileFeedback_Params params {};
		params.Coordinates = Coordinates;
		params.NodeToUnhide = NodeToUnhide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::OnGenerateTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnGenerateTree");
		
		UWidget_MAMTree_Grid_C_OnGenerateTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewCoordinates                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnNodeClicked(bool NewCoordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnNodeClicked");
		
		UWidget_MAMTree_Grid_C_OnNodeClicked_Params params {};
		params.NewCoordinates = NewCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_MAMTree_Grid_C::EditorOnly_OnActiveNodesUpdated(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.EditorOnly_OnActiveNodesUpdated");
		
		UWidget_MAMTree_Grid_C_EditorOnly_OnActiveNodesUpdated_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::OnDataCleared()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnDataCleared");
		
		UWidget_MAMTree_Grid_C_OnDataCleared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::OnTreeLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnTreeLoaded");
		
		UWidget_MAMTree_Grid_C_OnTreeLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::IsSelectedNodeValid(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsSelectedNodeValid");
		
		UWidget_MAMTree_Grid_C_IsSelectedNodeValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnParentNodeClicked(const struct FIntVector2D& Coordinate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnParentNodeClicked");
		
		UWidget_MAMTree_Grid_C_OnParentNodeClicked_Params params {};
		params.Coordinate = Coordinate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::UpdateRoads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateRoads");
		
		UWidget_MAMTree_Grid_C_UpdateRoads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::ClearData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ClearData");
		
		UWidget_MAMTree_Grid_C_ClearData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                StartCoordinates                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntVector2D                                EndCoordinates                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector2D>                           ConvertedRoadPoints                                        (Parm, OutParm)
	 * 		EDirection                                         RoadDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::GetRoadPointsFromCoordinates(const struct FIntVector2D& StartCoordinates, const struct FIntVector2D& EndCoordinates, TArray<struct FVector2D>* ConvertedRoadPoints, EDirection* RoadDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadPointsFromCoordinates");
		
		UWidget_MAMTree_Grid_C_GetRoadPointsFromCoordinates_Params params {};
		params.StartCoordinates = StartCoordinates;
		params.EndCoordinates = EndCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedRoadPoints != nullptr)
			*ConvertedRoadPoints = params.ConvertedRoadPoints;
		if (RoadDirection != nullptr)
			*RoadDirection = params.RoadDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                StartCoordinates                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntVector2D                                EndCoordinates                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EDirection UWidget_MAMTree_Grid_C::GetRoadDirection(const struct FIntVector2D& StartCoordinates, const struct FIntVector2D& EndCoordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadDirection");
		
		UWidget_MAMTree_Grid_C_GetRoadDirection_Params params {};
		params.StartCoordinates = StartCoordinates;
		params.EndCoordinates = EndCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIntVector2D>                        mTempRoadTiles                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               HighlightedRoad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::DrawRoad(const struct FIntVector2D& Coordinates, TArray<struct FIntVector2D>* mTempRoadTiles, bool HighlightedRoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.DrawRoad");
		
		UWidget_MAMTree_Grid_C_DrawRoad_Params params {};
		params.Coordinates = Coordinates;
		params.HighlightedRoad = HighlightedRoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTempRoadTiles != nullptr)
			*mTempRoadTiles = params.mTempRoadTiles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMAMTree_RoadStartEnd                       Road                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::GenerateOccupiedTilesFromRoadPoints(const struct FMAMTree_RoadStartEnd& Road)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateOccupiedTilesFromRoadPoints");
		
		UWidget_MAMTree_Grid_C_GenerateOccupiedTilesFromRoadPoints_Params params {};
		params.Road = Road;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NodeData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWidget_MAMTree_Grid_C::GenerateTree(TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NodeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GenerateTree");
		
		UWidget_MAMTree_Grid_C_GenerateTree_Params params {};
		params.NodeData = NodeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::LoadSelectedTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.LoadSelectedTree");
		
		UWidget_MAMTree_Grid_C_LoadSelectedTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      researchTree                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::SelectResearchTree(class UClass* researchTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.SelectResearchTree");
		
		UWidget_MAMTree_Grid_C_SelectResearchTree_Params params {};
		params.researchTree = researchTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::GetInvalidCoordinates(struct FIntVector2D* Coordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetInvalidCoordinates");
		
		UWidget_MAMTree_Grid_C_GetInvalidCoordinates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Coordinates != nullptr)
			*Coordinates = params.Coordinates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMAMTree_RoadStartEnd                       RoadStartEnd                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::RemoveRelevantRoadOccupiedTiles(const struct FMAMTree_RoadStartEnd& RoadStartEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.RemoveRelevantRoadOccupiedTiles");
		
		UWidget_MAMTree_Grid_C_RemoveRelevantRoadOccupiedTiles_Params params {};
		params.RoadStartEnd = RoadStartEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMAMTree_RoadStartEnd                       Road                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::UpdateOccupiedRoadTiles_OLD(const struct FMAMTree_RoadStartEnd& Road)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.UpdateOccupiedRoadTiles_OLD");
		
		UWidget_MAMTree_Grid_C_UpdateOccupiedRoadTiles_OLD_Params params {};
		params.Road = Road;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinate                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMAMTree_NodeData_Struct                    NodeData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::AddOrUpdateNodeObject(const struct FIntVector2D& Coordinate, const struct FMAMTree_NodeData_Struct& NodeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.AddOrUpdateNodeObject");
		
		UWidget_MAMTree_Grid_C_AddOrUpdateNodeObject_Params params {};
		params.Coordinate = Coordinate;
		params.NodeData = NodeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvasPanel*                                CanvasPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::PositionWidgetOnGrid(class UCanvasPanel* CanvasPanel, class UWidget* Widget, const struct FIntVector2D& Coordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.PositionWidgetOnGrid");
		
		UWidget_MAMTree_Grid_C_PositionWidgetOnGrid_Params params {};
		params.CanvasPanel = CanvasPanel;
		params.Widget = Widget;
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::GetPixelPosOnGrid(const struct FIntVector2D& Coordinates, struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetPixelPosOnGrid");
		
		UWidget_MAMTree_Grid_C_GetPixelPosOnGrid_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::IsTileRoadHighlighted(const struct FIntVector2D& Coordinates, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.IsTileRoadHighlighted");
		
		UWidget_MAMTree_Grid_C_IsTileRoadHighlighted_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FIntVector2D                                Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FIntVector2D>                        Array                                                      (Parm, OutParm)
	 */
	void UWidget_MAMTree_Grid_C::GetRoadHighlightOffsets_OLD(const struct FIntVector2D& Coordinates, TArray<struct FIntVector2D>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.GetRoadHighlightOffsets_OLD");
		
		UWidget_MAMTree_Grid_C_GetRoadHighlightOffsets_OLD_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMAMTree_NodeData_Struct                    NodeData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::CreateNodeObject(const struct FMAMTree_NodeData_Struct& NodeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.CreateNodeObject");
		
		UWidget_MAMTree_Grid_C_CreateNodeObject_Params params {};
		params.NodeData = NodeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UWidget_MAMTree_Node_C*>              NodeObjects                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UWidget_MAMTree_Grid_C::ShowUnlockIconOnNodes(TArray<class UWidget_MAMTree_Node_C*> NodeObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ShowUnlockIconOnNodes");
		
		UWidget_MAMTree_Grid_C_ShowUnlockIconOnNodes_Params params {};
		params.NodeObjects = NodeObjects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::ExecuteUbergraph_Widget_MAMTree_Grid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.ExecuteUbergraph_Widget_MAMTree_Grid");
		
		UWidget_MAMTree_Grid_C_ExecuteUbergraph_Widget_MAMTree_Grid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnResearchSelectedSchematic__DelegateSignature(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnResearchSelectedSchematic__DelegateSignature");
		
		UWidget_MAMTree_Grid_C_OnResearchSelectedSchematic__DelegateSignature_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      researchTree                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MAMTree_Grid_C::OnSaveTree__DelegateSignature(class UClass* researchTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnSaveTree__DelegateSignature");
		
		UWidget_MAMTree_Grid_C_OnSaveTree__DelegateSignature_Params params {};
		params.researchTree = researchTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MAMTree_Grid_C::OnLoadClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MAMTree_Grid.Widget_MAMTree_Grid_C.OnLoadClicked__DelegateSignature");
		
		UWidget_MAMTree_Grid_C_OnLoadClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MAMTree_Grid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MAMTree_Grid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MAMTree_Grid.Widget_MAMTree_Grid_C");
		return ptr;
	}

}


