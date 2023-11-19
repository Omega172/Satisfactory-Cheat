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
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.SetMaterialMode
	 */
	struct UBPW_TetrominoSprite_C_SetMaterialMode_Params
	{
	public:
		double                                                     Mode;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.SetLineData
	 */
	struct UBPW_TetrominoSprite_C_SetLineData_Params
	{	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.OnPaint
	 */
	struct UBPW_TetrominoSprite_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.SetIsInvalidSpace
	 */
	struct UBPW_TetrominoSprite_C_SetIsInvalidSpace_Params
	{
	public:
		bool                                                       IsInvalidSpace;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OFUU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.GenerateTetromino
	 */
	struct UBPW_TetrominoSprite_C_GenerateTetromino_Params
	{
	public:
		struct FVector2D                                           mTileSize;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FIntVector2D>                                mTileData;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        mColor;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.Construct
	 */
	struct UBPW_TetrominoSprite_C_Construct_Params
	{	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.ExecuteUbergraph_BPW_TetrominoSprite
	 */
	struct UBPW_TetrominoSprite_C_ExecuteUbergraph_BPW_TetrominoSprite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoSprite.BPW_TetrominoSprite_C.OnDragStarted__DelegateSignature
	 */
	struct UBPW_TetrominoSprite_C_OnDragStarted__DelegateSignature_Params
	{
	public:
		class UBPW_Tetromino_C*                                    Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
