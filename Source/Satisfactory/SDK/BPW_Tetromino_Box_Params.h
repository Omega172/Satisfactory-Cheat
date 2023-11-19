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
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.SequenceEvent__ENTRYPOINTBPW_Tetromino_Box
	 */
	struct UBPW_Tetromino_Box_C_SequenceEvent__ENTRYPOINTBPW_Tetromino_Box_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.CloseBox
	 */
	struct UBPW_Tetromino_Box_C_CloseBox_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.ClearGrid
	 */
	struct UBPW_Tetromino_Box_C_ClearGrid_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.SetDescRandomizer
	 */
	struct UBPW_Tetromino_Box_C_SetDescRandomizer_Params
	{
	public:
		class UBPW_Tetromino_DescriptorRandomizer_C*               mDescRandomizer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnLidClosed
	 */
	struct UBPW_Tetromino_Box_C_OnLidClosed_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.PreConstruct
	 */
	struct UBPW_Tetromino_Box_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.Construct
	 */
	struct UBPW_Tetromino_Box_C_Construct_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.BndEvt__mPlacementGrid_K2Node_ComponentBoundEvent_2_OnBlockPlaced__DelegateSignature
	 */
	struct UBPW_Tetromino_Box_C_BndEvt__mPlacementGrid_K2Node_ComponentBoundEvent_2_OnBlockPlaced__DelegateSignature_Params
	{
	public:
		int32_t                                                    PointsAdded;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HWB3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     FillAmountAdded;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnBoxClosedCompleted
	 */
	struct UBPW_Tetromino_Box_C_OnBoxClosedCompleted_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnAnimMoveOutCompleted
	 */
	struct UBPW_Tetromino_Box_C_OnAnimMoveOutCompleted_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.ExecuteUbergraph_BPW_Tetromino_Box
	 */
	struct UBPW_Tetromino_Box_C_ExecuteUbergraph_BPW_Tetromino_Box_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X0CQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnBoxClosed__DelegateSignature
	 */
	struct UBPW_Tetromino_Box_C_OnBoxClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnFIllAmountChanged__DelegateSignature
	 */
	struct UBPW_Tetromino_Box_C_OnFIllAmountChanged__DelegateSignature_Params
	{
	public:
		double                                                     FillAmount;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_Box.BPW_Tetromino_Box_C.OnBlockDropped__DelegateSignature
	 */
	struct UBPW_Tetromino_Box_C_OnBlockDropped__DelegateSignature_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3VON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     FillAmount;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
