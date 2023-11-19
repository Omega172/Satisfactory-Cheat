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
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnDropped
	 */
	struct UBPW_Tetromino_C_OnDropped_Params
	{	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.DrawRelief
	 */
	struct UBPW_Tetromino_C_DrawRelief_Params
	{	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.SetIsBeingDragged
	 */
	struct UBPW_Tetromino_C_SetIsBeingDragged_Params
	{
	public:
		bool                                                       mIsBeingDragged;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.SetLineData
	 */
	struct UBPW_Tetromino_C_SetLineData_Params
	{	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnPaint
	 */
	struct UBPW_Tetromino_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.SetIsHovered
	 */
	struct UBPW_Tetromino_C_SetIsHovered_Params
	{
	public:
		bool                                                       mIsHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHJ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.SetIsInvalidSpace
	 */
	struct UBPW_Tetromino_C_SetIsInvalidSpace_Params
	{
	public:
		bool                                                       IsInvalidSpace;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FP6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.SetPosition
	 */
	struct UBPW_Tetromino_C_SetPosition_Params
	{
	public:
		struct FIntVector2D                                        mPosition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnMouseButtonDown
	 */
	struct UBPW_Tetromino_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.GenerateTetromino
	 */
	struct UBPW_Tetromino_C_GenerateTetromino_Params
	{
	public:
		struct FVector2D                                           mTileSize;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FIntVector2D>                                mTileData;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        mColor;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.PreConstruct
	 */
	struct UBPW_Tetromino_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnMouseEnter
	 */
	struct UBPW_Tetromino_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnMouseLeave
	 */
	struct UBPW_Tetromino_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.Construct
	 */
	struct UBPW_Tetromino_C_Construct_Params
	{	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.ExecuteUbergraph_BPW_Tetromino
	 */
	struct UBPW_Tetromino_C_ExecuteUbergraph_BPW_Tetromino_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino.BPW_Tetromino_C.OnDragStarted__DelegateSignature
	 */
	struct UBPW_Tetromino_C_OnDragStarted__DelegateSignature_Params
	{
	public:
		class UBPW_Tetromino_C*                                    Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
