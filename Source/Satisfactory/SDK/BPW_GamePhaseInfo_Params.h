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
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.IsTradingPostBuilt
	 */
	struct UBPW_GamePhaseInfo_C_IsTradingPostBuilt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG7D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.AddPhaseCostWidget
	 */
	struct UBPW_GamePhaseInfo_C_AddPhaseCostWidget_Params
	{	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.SetCurrentPhaseText
	 */
	struct UBPW_GamePhaseInfo_C_SetCurrentPhaseText_Params
	{	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Construct
	 */
	struct UBPW_GamePhaseInfo_C_Construct_Params
	{	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.On Game Phase Changed
	 */
	struct UBPW_GamePhaseInfo_C_OnGamePhaseChanged_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.Event Check For Space Elevator
	 */
	struct UBPW_GamePhaseInfo_C_EventCheckForSpaceElevator_Params
	{	};

	/**
	 * Function BPW_GamePhaseInfo.BPW_GamePhaseInfo_C.ExecuteUbergraph_BPW_GamePhaseInfo
	 */
	struct UBPW_GamePhaseInfo_C_ExecuteUbergraph_BPW_GamePhaseInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N6Y5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
