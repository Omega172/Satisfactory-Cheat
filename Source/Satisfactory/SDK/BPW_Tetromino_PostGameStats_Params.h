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
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.GetHighsScore
	 */
	struct UBPW_Tetromino_PostGameStats_C_GetHighsScore_Params
	{
	public:
		class FString                                              LevelID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PlayerName;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Points;                                                  // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.InitStars
	 */
	struct UBPW_Tetromino_PostGameStats_C_InitStars_Params
	{	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.SetStats
	 */
	struct UBPW_Tetromino_PostGameStats_C_SetStats_Params
	{
	public:
		int32_t                                                    PlacedBlocks;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PackagesSent;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MostFilledPackage;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HighestPackagePoints;                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalPoints;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStruct_TetrominoLevelData                          mLevelData;                                              // 0x0018(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.Construct
	 */
	struct UBPW_Tetromino_PostGameStats_C_Construct_Params
	{	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ShowStats
	 */
	struct UBPW_Tetromino_PostGameStats_C_ShowStats_Params
	{	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_PostGameStats_C_BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ExecuteUbergraph_BPW_Tetromino_PostGameStats
	 */
	struct UBPW_Tetromino_PostGameStats_C_ExecuteUbergraph_BPW_Tetromino_PostGameStats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BWMK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnNewHighScore__DelegateSignature
	 */
	struct UBPW_Tetromino_PostGameStats_C_OnNewHighScore__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnBackToMenuClicked__DelegateSignature
	 */
	struct UBPW_Tetromino_PostGameStats_C_OnBackToMenuClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
