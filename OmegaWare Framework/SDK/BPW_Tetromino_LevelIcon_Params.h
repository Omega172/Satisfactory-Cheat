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
	 * Function BPW_Tetromino_LevelIcon.BPW_Tetromino_LevelIcon_C.GenerateIcon
	 */
	struct UBPW_Tetromino_LevelIcon_C_GenerateIcon_Params
	{
	public:
		struct FStruct_TetrominoLevelData                          mLevelData;                                              // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		double                                                     mTileSize;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_LevelIcon.BPW_Tetromino_LevelIcon_C.PreConstruct
	 */
	struct UBPW_Tetromino_LevelIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_LevelIcon.BPW_Tetromino_LevelIcon_C.ExecuteUbergraph_BPW_Tetromino_LevelIcon
	 */
	struct UBPW_Tetromino_LevelIcon_C_ExecuteUbergraph_BPW_Tetromino_LevelIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
