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
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetDetails
	 */
	struct UBPW_Tetromino_GameStatEntry_C_SetDetails_Params
	{
	public:
		class FText                                                mDetails;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PlaySpawnAnim
	 */
	struct UBPW_Tetromino_GameStatEntry_C_PlaySpawnAnim_Params
	{	};

	/**
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetColor
	 */
	struct UBPW_Tetromino_GameStatEntry_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mNameColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mDetailsColor;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetupStat
	 */
	struct UBPW_Tetromino_GameStatEntry_C_SetupStat_Params
	{
	public:
		class FText                                                StatName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                StatDetails;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PreConstruct
	 */
	struct UBPW_Tetromino_GameStatEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.ExecuteUbergraph_BPW_Tetromino_GameStatEntry
	 */
	struct UBPW_Tetromino_GameStatEntry_C_ExecuteUbergraph_BPW_Tetromino_GameStatEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
