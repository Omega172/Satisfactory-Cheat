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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Widget_MAMTree_Grid.Widget_MAMTree_Grid_C
	 * Size -> 0x01C1 (FullSize[0x0441] - InheritedSize[0x0280])
	 */
	class UWidget_MAMTree_Grid_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector2D                                           mTileSize;                                               // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> mNodeData;                                               // 0x0298(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FIntVector2D                                        mGridSize;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FIntVector2D                                        mSelectedNodeCoordinates;                                // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDirection                                                 mLastRoadDirection;                                      // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y0CO[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FIntVector2D, struct FMAMTree_RoadOccupiedTile> mRoadOccupiedTiles;                                      // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIntVector2D>                                mTempRoadOccupiedTiles;                                  // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FIntVector2D, class UWidget_MAMTree_Node_C*>   mNodeObjects;                                            // 0x0360(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FIntVector2D>                                mUnHiddenNodes;                                          // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              SelectedResearchTree;                                    // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FMAMTree_Vector2D_Array>                     mConvertedRoadData;                                      // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mAllResearchTrees;                                       // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnLoadClicked;                                           // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSaveTree;                                              // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCanvasPanel*                                        mParentGridCanvas;                                       // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        mParentNodeCavas;                                        // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UWidget_MAMTree_Road_C*                              mParentRoads;                                            // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnResearchSelectedSchematic;                             // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FMAMTree_Vector2D_Array>                     mConvertedHighlightRoadData;                             // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsEditor;                                               // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetNodeState(const struct FIntVector2D& Coordinates, TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NewNodeData, EMamTree_NodeStates* NodeState);
		bool IsSchematicResearched(class UClass* SchematicClass);
		void ResetSelectedNode();
		void OnResearchStarted();
		void OnParentNodeUnhovered(const struct FIntVector2D& Coordinates);
		void OnParentNodeHovered(const struct FIntVector2D& Coordinates);
		void TellNodesIfOtherNodeIsSelected(bool IsSelected);
		void SetupCavases(class UCanvasPanel* GridCanvas, class UCanvasPanel* NodeCanvas, class UWidget_MAMTree_Road_C* Roads);
		void EditorOnly_SetupTileFeedback(const struct FIntVector2D& Coordinates, const struct FIntVector2D& NodeToUnhide);
		void OnGenerateTree();
		void OnNodeClicked(bool NewCoordinates);
		void EditorOnly_OnActiveNodesUpdated(const class FText& Text);
		void OnDataCleared();
		void OnTreeLoaded();
		void IsSelectedNodeValid(bool* IsValid);
		void OnParentNodeClicked(const struct FIntVector2D& Coordinate);
		void UpdateRoads();
		void ClearData();
		void GetRoadPointsFromCoordinates(const struct FIntVector2D& StartCoordinates, const struct FIntVector2D& EndCoordinates, TArray<struct FVector2D>* ConvertedRoadPoints, EDirection* RoadDirection);
		EDirection GetRoadDirection(const struct FIntVector2D& StartCoordinates, const struct FIntVector2D& EndCoordinates);
		void DrawRoad(const struct FIntVector2D& Coordinates, TArray<struct FIntVector2D>* mTempRoadTiles, bool HighlightedRoad);
		void GenerateOccupiedTilesFromRoadPoints(const struct FMAMTree_RoadStartEnd& Road);
		void GenerateTree(TMap<struct FIntVector2D, struct FMAMTree_NodeData_Struct> NodeData);
		void LoadSelectedTree();
		void SelectResearchTree(class UClass* researchTree);
		void GetInvalidCoordinates(struct FIntVector2D* Coordinates);
		void RemoveRelevantRoadOccupiedTiles(const struct FMAMTree_RoadStartEnd& RoadStartEnd);
		void UpdateOccupiedRoadTiles_OLD(const struct FMAMTree_RoadStartEnd& Road);
		void AddOrUpdateNodeObject(const struct FIntVector2D& Coordinate, const struct FMAMTree_NodeData_Struct& NodeData);
		void PositionWidgetOnGrid(class UCanvasPanel* CanvasPanel, class UWidget* Widget, const struct FIntVector2D& Coordinates);
		void GetPixelPosOnGrid(const struct FIntVector2D& Coordinates, struct FVector2D* Position);
		void IsTileRoadHighlighted(const struct FIntVector2D& Coordinates, bool* Return);
		void GetRoadHighlightOffsets_OLD(const struct FIntVector2D& Coordinates, TArray<struct FIntVector2D>* Array);
		void CreateNodeObject(const struct FMAMTree_NodeData_Struct& NodeData);
		void ShowUnlockIconOnNodes(TArray<class UWidget_MAMTree_Node_C*> NodeObjects);
		void ExecuteUbergraph_Widget_MAMTree_Grid(int32_t EntryPoint);
		void OnResearchSelectedSchematic__DelegateSignature(class UClass* schematic);
		void OnSaveTree__DelegateSignature(class UClass* researchTree);
		void OnLoadClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
