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
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame
	 */
	struct UBPW_TetrominoPackagingGame_C_SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame_Params
	{
	public:
		class UBPW_Tetromino_PostGameStats_C*                      TetrominoPostGameStat;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToGameStem
	 */
	struct UBPW_TetrominoPackagingGame_C_ChangeToGameStem_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToMenuStem
	 */
	struct UBPW_TetrominoPackagingGame_C_ChangeToMenuStem_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StartMusic
	 */
	struct UBPW_TetrominoPackagingGame_C_StartMusic_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StopMusic
	 */
	struct UBPW_TetrominoPackagingGame_C_StopMusic_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdatePostGameStats
	 */
	struct UBPW_TetrominoPackagingGame_C_UpdatePostGameStats_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdateStats
	 */
	struct UBPW_TetrominoPackagingGame_C_UpdateStats_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7UE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     mFillAmount;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5XPA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UnPauseGame
	 */
	struct UBPW_TetrominoPackagingGame_C_UnPauseGame_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnBlockDropped
	 */
	struct UBPW_TetrominoPackagingGame_C_OnBlockDropped_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CZAF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     FillAmount;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SendPackage
	 */
	struct UBPW_TetrominoPackagingGame_C_SendPackage_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.CreateBox
	 */
	struct UBPW_TetrominoPackagingGame_C_CreateBox_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ShowStatsSequenceEvent
	 */
	struct UBPW_TetrominoPackagingGame_C_ShowStatsSequenceEvent_Params
	{
	public:
		class UBPW_Tetromino_PostGameStats_C*                      TetrominoPostGameStat;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Construct
	 */
	struct UBPW_TetrominoPackagingGame_C_Construct_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          LevelData;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Destruct
	 */
	struct UBPW_TetrominoPackagingGame_C_Destruct_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ExecuteUbergraph_BPW_TetrominoPackagingGame
	 */
	struct UBPW_TetrominoPackagingGame_C_ExecuteUbergraph_BPW_TetrominoPackagingGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y7PB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnRestartGame__DelegateSignature
	 */
	struct UBPW_TetrominoPackagingGame_C_OnRestartGame__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
