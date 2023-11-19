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
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.ClearPoints
	 */
	struct UBPW_Tetromino_GameStats_C_ClearPoints_Params
	{	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.LerpPoints
	 */
	struct UBPW_Tetromino_GameStats_C_LerpPoints_Params
	{	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.AddPoints
	 */
	struct UBPW_Tetromino_GameStats_C_AddPoints_Params
	{
	public:
		int32_t                                                    AmountOfPoints;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2V6U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.LerpTime
	 */
	struct UBPW_Tetromino_GameStats_C_LerpTime_Params
	{	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.StartTimer
	 */
	struct UBPW_Tetromino_GameStats_C_StartTimer_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.UpdateTime
	 */
	struct UBPW_Tetromino_GameStats_C_UpdateTime_Params
	{
	public:
		double                                                     mCurrentTime;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.Destruct
	 */
	struct UBPW_Tetromino_GameStats_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.ExecuteUbergraph_BPW_Tetromino_GameStats
	 */
	struct UBPW_Tetromino_GameStats_C_ExecuteUbergraph_BPW_Tetromino_GameStats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Tetromino_GameStats.BPW_Tetromino_GameStats_C.OnTimesUp__DelegateSignature
	 */
	struct UBPW_Tetromino_GameStats_C_OnTimesUp__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
