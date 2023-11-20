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
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SetColors
	 */
	struct UBPW_TetrominoPlacementGrid_C_SetColors_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mReliefColor;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnStaticBlockedSpaces
	 */
	struct UBPW_TetrominoPlacementGrid_C_SpawnStaticBlockedSpaces_Params
	{
	public:
		TArray<struct FIntVector2D>                                Blockers;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnPointFeedback
	 */
	struct UBPW_TetrominoPlacementGrid_C_SpawnPointFeedback_Params
	{
	public:
		int32_t                                                    mAmountOfPoints;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mIsBonus;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V1IS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Get Tetromino Points
	 */
	struct UBPW_TetrominoPlacementGrid_C_GetTetrominoPoints_Params
	{
	public:
		class UBPW_Tetromino_C*                                    Tetromino;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Bonus;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BXK1[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearBonusTileData
	 */
	struct UBPW_TetrominoPlacementGrid_C_ClearBonusTileData_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveBonusTile
	 */
	struct UBPW_TetrominoPlacementGrid_C_RemoveBonusTile_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateBonusTile
	 */
	struct UBPW_TetrominoPlacementGrid_C_GenerateBonusTile_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetAvailableSpaces
	 */
	struct UBPW_TetrominoPlacementGrid_C_GetAvailableSpaces_Params
	{
	public:
		TArray<struct FIntVector2D>                                AvaiblableSpaces;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnRandomBlockedSpaces
	 */
	struct UBPW_TetrominoPlacementGrid_C_SpawnRandomBlockedSpaces_Params
	{
	public:
		int32_t                                                    NumOfBlockers;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearGrid
	 */
	struct UBPW_TetrominoPlacementGrid_C_ClearGrid_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetFillAmount
	 */
	struct UBPW_TetrominoPlacementGrid_C_GetFillAmount_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveItemFromRandomizer
	 */
	struct UBPW_TetrominoPlacementGrid_C_RemoveItemFromRandomizer_Params
	{
	public:
		class UBPW_Tetromino_C*                                    mTetromino;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnTetrominoDraged
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnTetrominoDraged_Params
	{
	public:
		class UBPW_Tetromino_C*                                    Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.IsSpaceFree
	 */
	struct UBPW_TetrominoPlacementGrid_C_IsSpaceFree_Params
	{
	public:
		TArray<struct FIntVector2D>                                TileData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FIntVector2D                                        Position;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6D22[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveTetrominoFromOccupiedTiles
	 */
	struct UBPW_TetrominoPlacementGrid_C_RemoveTetrominoFromOccupiedTiles_Params
	{
	public:
		TArray<struct FIntVector2D>                                TileData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FIntVector2D                                        Position;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.AddTetrominoToOccupiedTiles
	 */
	struct UBPW_TetrominoPlacementGrid_C_AddTetrominoToOccupiedTiles_Params
	{
	public:
		TArray<struct FIntVector2D>                                TileData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FIntVector2D                                        Position;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PositionedOnBounsTile;                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ITG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearPreview
	 */
	struct UBPW_TetrominoPlacementGrid_C_ClearPreview_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.CreatePreviewTetromino
	 */
	struct UBPW_TetrominoPlacementGrid_C_CreatePreviewTetromino_Params
	{
	public:
		TArray<struct FIntVector2D>                                mTileData;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector2D                                           mTileSize;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mColor;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBPW_TetrominoSprite_C*                              mPreviewTetromino;                                       // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragOver
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MF3E[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PositionTetromino
	 */
	struct UBPW_TetrominoPlacementGrid_C_PositionTetromino_Params
	{
	public:
		class UWidget*                                             Tetromino;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FIntVector2D                                        mPosition;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateGrid
	 */
	struct UBPW_TetrominoPlacementGrid_C_GenerateGrid_Params
	{
	public:
		struct FIntVector2D                                        mGridSize;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           mTileSize;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDrop
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TEOW[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PreConstruct
	 */
	struct UBPW_TetrominoPlacementGrid_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragEnter
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragLeave
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragCancelled
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Construct
	 */
	struct UBPW_TetrominoPlacementGrid_C_Construct_Params
	{	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ExecuteUbergraph_BPW_TetrominoPlacementGrid
	 */
	struct UBPW_TetrominoPlacementGrid_C_ExecuteUbergraph_BPW_TetrominoPlacementGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnBlockPlaced__DelegateSignature
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnBlockPlaced__DelegateSignature_Params
	{
	public:
		int32_t                                                    PointsAdded;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1RFV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     FillAmountAdded;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnFIllAmountChanged__DelegateSignature
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnFIllAmountChanged__DelegateSignature_Params
	{
	public:
		double                                                     FillAmount;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnPointsAdded__DelegateSignature
	 */
	struct UBPW_TetrominoPlacementGrid_C_OnPointsAdded__DelegateSignature_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
