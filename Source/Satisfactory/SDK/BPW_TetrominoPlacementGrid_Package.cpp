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
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SetColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mReliefColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::SetColors(const struct FLinearColor& mColor, const struct FLinearColor& mReliefColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SetColors");
		
		UBPW_TetrominoPlacementGrid_C_SetColors_Params params {};
		params.mColor = mColor;
		params.mReliefColor = mReliefColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnStaticBlockedSpaces
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        Blockers                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_TetrominoPlacementGrid_C::SpawnStaticBlockedSpaces(TArray<struct FIntVector2D>* Blockers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnStaticBlockedSpaces");
		
		UBPW_TetrominoPlacementGrid_C_SpawnStaticBlockedSpaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blockers != nullptr)
			*Blockers = params.Blockers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnPointFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mAmountOfPoints                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mIsBonus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::SpawnPointFeedback(int32_t mAmountOfPoints, bool mIsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnPointFeedback");
		
		UBPW_TetrominoPlacementGrid_C_SpawnPointFeedback_Params params {};
		params.mAmountOfPoints = mAmountOfPoints;
		params.mIsBonus = mIsBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Get Tetromino Points
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Tetromino_C*                            Tetromino                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBPW_TetrominoPlacementGrid_C::GetTetrominoPoints(class UBPW_Tetromino_C* Tetromino, bool Bonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Get Tetromino Points");
		
		UBPW_TetrominoPlacementGrid_C_GetTetrominoPoints_Params params {};
		params.Tetromino = Tetromino;
		params.Bonus = Bonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearBonusTileData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::ClearBonusTileData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearBonusTileData");
		
		UBPW_TetrominoPlacementGrid_C_ClearBonusTileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveBonusTile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::RemoveBonusTile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveBonusTile");
		
		UBPW_TetrominoPlacementGrid_C_RemoveBonusTile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateBonusTile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::GenerateBonusTile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateBonusTile");
		
		UBPW_TetrominoPlacementGrid_C_GenerateBonusTile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetAvailableSpaces
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        AvaiblableSpaces                                           (Parm, OutParm)
	 */
	void UBPW_TetrominoPlacementGrid_C::GetAvailableSpaces(TArray<struct FIntVector2D>* AvaiblableSpaces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetAvailableSpaces");
		
		UBPW_TetrominoPlacementGrid_C_GetAvailableSpaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvaiblableSpaces != nullptr)
			*AvaiblableSpaces = params.AvaiblableSpaces;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnRandomBlockedSpaces
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumOfBlockers                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::SpawnRandomBlockedSpaces(int32_t NumOfBlockers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.SpawnRandomBlockedSpaces");
		
		UBPW_TetrominoPlacementGrid_C_SpawnRandomBlockedSpaces_Params params {};
		params.NumOfBlockers = NumOfBlockers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::ClearGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearGrid");
		
		UBPW_TetrominoPlacementGrid_C_ClearGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetFillAmount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double UBPW_TetrominoPlacementGrid_C::GetFillAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GetFillAmount");
		
		UBPW_TetrominoPlacementGrid_C_GetFillAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveItemFromRandomizer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Tetromino_C*                            mTetromino                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::RemoveItemFromRandomizer(class UBPW_Tetromino_C* mTetromino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveItemFromRandomizer");
		
		UBPW_TetrominoPlacementGrid_C_RemoveItemFromRandomizer_Params params {};
		params.mTetromino = mTetromino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnTetrominoDraged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Tetromino_C*                            Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnTetrominoDraged(class UBPW_Tetromino_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnTetrominoDraged");
		
		UBPW_TetrominoPlacementGrid_C_OnTetrominoDraged_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.IsSpaceFree
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        TileData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FIntVector2D                                Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_TetrominoPlacementGrid_C::IsSpaceFree(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.IsSpaceFree");
		
		UBPW_TetrominoPlacementGrid_C_IsSpaceFree_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TileData != nullptr)
			*TileData = params.TileData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveTetrominoFromOccupiedTiles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        TileData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FIntVector2D                                Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::RemoveTetrominoFromOccupiedTiles(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.RemoveTetrominoFromOccupiedTiles");
		
		UBPW_TetrominoPlacementGrid_C_RemoveTetrominoFromOccupiedTiles_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TileData != nullptr)
			*TileData = params.TileData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.AddTetrominoToOccupiedTiles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        TileData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FIntVector2D                                Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PositionedOnBounsTile                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::AddTetrominoToOccupiedTiles(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position, bool* PositionedOnBounsTile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.AddTetrominoToOccupiedTiles");
		
		UBPW_TetrominoPlacementGrid_C_AddTetrominoToOccupiedTiles_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TileData != nullptr)
			*TileData = params.TileData;
		if (PositionedOnBounsTile != nullptr)
			*PositionedOnBounsTile = params.PositionedOnBounsTile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearPreview
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::ClearPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ClearPreview");
		
		UBPW_TetrominoPlacementGrid_C_ClearPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.CreatePreviewTetromino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIntVector2D>                        mTileData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector2D                                   mTileSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_TetrominoSprite_C*                      mPreviewTetromino                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::CreatePreviewTetromino(TArray<struct FIntVector2D>* mTileData, const struct FVector2D& mTileSize, const struct FLinearColor& mColor, class UBPW_TetrominoSprite_C** mPreviewTetromino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.CreatePreviewTetromino");
		
		UBPW_TetrominoPlacementGrid_C_CreatePreviewTetromino_Params params {};
		params.mTileSize = mTileSize;
		params.mColor = mColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mTileData != nullptr)
			*mTileData = params.mTileData;
		if (mPreviewTetromino != nullptr)
			*mPreviewTetromino = params.mPreviewTetromino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragOver
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_TetrominoPlacementGrid_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragOver");
		
		UBPW_TetrominoPlacementGrid_C_OnDragOver_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PositionTetromino
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Tetromino                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntVector2D                                mPosition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::PositionTetromino(class UWidget* Tetromino, struct FIntVector2D* mPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PositionTetromino");
		
		UBPW_TetrominoPlacementGrid_C_PositionTetromino_Params params {};
		params.Tetromino = Tetromino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mPosition != nullptr)
			*mPosition = params.mPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FIntVector2D                                mGridSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   mTileSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::GenerateGrid(const struct FIntVector2D& mGridSize, const struct FVector2D& mTileSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.GenerateGrid");
		
		UBPW_TetrominoPlacementGrid_C_GenerateGrid_Params params {};
		params.mGridSize = mGridSize;
		params.mTileSize = mTileSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPW_TetrominoPlacementGrid_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDrop");
		
		UBPW_TetrominoPlacementGrid_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.PreConstruct");
		
		UBPW_TetrominoPlacementGrid_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragEnter");
		
		UBPW_TetrominoPlacementGrid_C_OnDragEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragLeave");
		
		UBPW_TetrominoPlacementGrid_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnDragCancelled");
		
		UBPW_TetrominoPlacementGrid_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_TetrominoPlacementGrid_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.Construct");
		
		UBPW_TetrominoPlacementGrid_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ExecuteUbergraph_BPW_TetrominoPlacementGrid
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::ExecuteUbergraph_BPW_TetrominoPlacementGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.ExecuteUbergraph_BPW_TetrominoPlacementGrid");
		
		UBPW_TetrominoPlacementGrid_C_ExecuteUbergraph_BPW_TetrominoPlacementGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnBlockPlaced__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointsAdded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FillAmountAdded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnBlockPlaced__DelegateSignature(int32_t PointsAdded, double FillAmountAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnBlockPlaced__DelegateSignature");
		
		UBPW_TetrominoPlacementGrid_C_OnBlockPlaced__DelegateSignature_Params params {};
		params.PointsAdded = PointsAdded;
		params.FillAmountAdded = FillAmountAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnFIllAmountChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             FillAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnFIllAmountChanged__DelegateSignature(double FillAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnFIllAmountChanged__DelegateSignature");
		
		UBPW_TetrominoPlacementGrid_C_OnFIllAmountChanged__DelegateSignature_Params params {};
		params.FillAmount = FillAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnPointsAdded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPlacementGrid_C::OnPointsAdded__DelegateSignature(int32_t Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C.OnPointsAdded__DelegateSignature");
		
		UBPW_TetrominoPlacementGrid_C_OnPointsAdded__DelegateSignature_Params params {};
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TetrominoPlacementGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TetrominoPlacementGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C");
		return ptr;
	}

}


