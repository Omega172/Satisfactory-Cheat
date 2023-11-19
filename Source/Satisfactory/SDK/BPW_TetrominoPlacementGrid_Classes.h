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
	 * WidgetBlueprintGeneratedClass BPW_TetrominoPlacementGrid.BPW_TetrominoPlacementGrid_C
	 * Size -> 0x0128 (FullSize[0x03A8] - InheritedSize[0x0280])
	 */
	class UBPW_TetrominoPlacementGrid_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_Shake;                                              // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              mBorder;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mBorder_2;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mBorder_3;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mCanvas;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mGridCanvas;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mRelief;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mShadow;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mTetraminoCanvas_Bottom;                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mTetraminoCanvas_Shadow;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mTetraminoCanvas_Top;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FIntVector2D                                        mGridSize;                                               // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           mTileSize;                                               // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_TetrominoSprite_C*                              mPreviewTetromino;                                       // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<struct FIntVector2D>                                mOccupiedTiles;                                          // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FIntVector2D                                        mPreviewPosition;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           mDragOffset;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPW_Tetromino_DescriptorRandomizer_C*               mDescRandomizer;                                         // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPointsAdded;                                           // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFIllAmountChanged;                                     // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FIntVector2D>                                mBlockedSpaces;                                          // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBPW_TetrominoBonusTile_C*                           mBonusTile;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FIntVector2D                                        mBonusTilePosition;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBlockPlaced;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        mColor;                                                  // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        mReliefColor;                                            // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBPW_TetrominoBonusPointer_C*                        mBonusPointer;                                           // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void SetColors(const struct FLinearColor& mColor, const struct FLinearColor& mReliefColor);
		void SpawnStaticBlockedSpaces(TArray<struct FIntVector2D>* Blockers);
		void SpawnPointFeedback(int32_t mAmountOfPoints, bool mIsBonus);
		int32_t GetTetrominoPoints(class UBPW_Tetromino_C* Tetromino, bool Bonus);
		void ClearBonusTileData();
		void RemoveBonusTile();
		void GenerateBonusTile();
		void GetAvailableSpaces(TArray<struct FIntVector2D>* AvaiblableSpaces);
		void SpawnRandomBlockedSpaces(int32_t NumOfBlockers);
		void ClearGrid();
		double GetFillAmount();
		void RemoveItemFromRandomizer(class UBPW_Tetromino_C* mTetromino);
		void OnTetrominoDraged(class UBPW_Tetromino_C* Instigator);
		bool IsSpaceFree(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position);
		void RemoveTetrominoFromOccupiedTiles(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position);
		void AddTetrominoToOccupiedTiles(TArray<struct FIntVector2D>* TileData, const struct FIntVector2D& Position, bool* PositionedOnBounsTile);
		void ClearPreview();
		void CreatePreviewTetromino(TArray<struct FIntVector2D>* mTileData, const struct FVector2D& mTileSize, const struct FLinearColor& mColor, class UBPW_TetrominoSprite_C** mPreviewTetromino);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void PositionTetromino(class UWidget* Tetromino, struct FIntVector2D* mPosition);
		void GenerateGrid(const struct FIntVector2D& mGridSize, const struct FVector2D& mTileSize);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void PreConstruct(bool IsDesignTime);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void Construct();
		void ExecuteUbergraph_BPW_TetrominoPlacementGrid(int32_t EntryPoint);
		void OnBlockPlaced__DelegateSignature(int32_t PointsAdded, double FillAmountAdded);
		void OnFIllAmountChanged__DelegateSignature(double FillAmount);
		void OnPointsAdded__DelegateSignature(int32_t Points);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
