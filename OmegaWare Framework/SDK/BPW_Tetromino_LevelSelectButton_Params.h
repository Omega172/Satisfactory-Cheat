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
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.SetupStars
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_SetupStars_Params
	{
	public:
		int32_t                                                    HighScore;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.GetHighscore
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_GetHighscore_Params
	{
	public:
		class FString                                              LevelID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Points;                                                  // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TISV[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.SetSyle
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_SetSyle_Params
	{
	public:
		bool                                                       mIsHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EON2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.SetLevelData
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_SetLevelData_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          mLevelData;                                              // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.PreConstruct
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.ExecuteUbergraph_BPW_Tetromino_LevelSelectButton
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_ExecuteUbergraph_BPW_Tetromino_LevelSelectButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KJZZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_LevelSelectButton.BPW_Tetromino_LevelSelectButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_LevelSelectButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          LevelData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
