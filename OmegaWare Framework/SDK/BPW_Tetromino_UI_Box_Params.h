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
	 * Function BPW_Tetromino_UI_Box.BPW_Tetromino_UI_Box_C.SetIsPressed
	 */
	struct UBPW_Tetromino_UI_Box_C_SetIsPressed_Params
	{
	public:
		bool                                                       mIsPressed;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_UI_Box.BPW_Tetromino_UI_Box_C.SetMaterialMode
	 */
	struct UBPW_Tetromino_UI_Box_C_SetMaterialMode_Params
	{
	public:
		double                                                     mMaterialMode;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_UI_Box.BPW_Tetromino_UI_Box_C.SetColor
	 */
	struct UBPW_Tetromino_UI_Box_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mReliefColor;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_UI_Box.BPW_Tetromino_UI_Box_C.PreConstruct
	 */
	struct UBPW_Tetromino_UI_Box_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_UI_Box.BPW_Tetromino_UI_Box_C.ExecuteUbergraph_BPW_Tetromino_UI_Box
	 */
	struct UBPW_Tetromino_UI_Box_C_ExecuteUbergraph_BPW_Tetromino_UI_Box_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
