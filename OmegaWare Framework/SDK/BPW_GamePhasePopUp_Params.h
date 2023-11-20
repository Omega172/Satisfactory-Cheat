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
	 * Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Set Stinger Content
	 */
	struct UBPW_GamePhasePopUp_C_SetStingerContent_Params
	{
	public:
		EGamePhase                                                 mGamePhase;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.Construct
	 */
	struct UBPW_GamePhasePopUp_C_Construct_Params
	{	};

	/**
	 * Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.OnGamePhaseCompleted
	 */
	struct UBPW_GamePhasePopUp_C_OnGamePhaseCompleted_Params
	{
	public:
		EGamePhase                                                 gamePhase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_GamePhasePopUp.BPW_GamePhasePopUp_C.ExecuteUbergraph_BPW_GamePhasePopUp
	 */
	struct UBPW_GamePhasePopUp_C_ExecuteUbergraph_BPW_GamePhasePopUp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
