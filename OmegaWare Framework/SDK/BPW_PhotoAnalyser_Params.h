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
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.GetClearedPhotoChallenges
	 */
	struct UBPW_PhotoAnalyser_C_GetClearedPhotoChallenges_Params
	{
	public:
		TArray<class UClass*>                                      ClearedChallenges;                                       // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IsActorPhotographable
	 */
	struct UBPW_PhotoAnalyser_C_IsActorPhotographable_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.FindActors
	 */
	struct UBPW_PhotoAnalyser_C_FindActors_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.CheckChallenges
	 */
	struct UBPW_PhotoAnalyser_C_CheckChallenges_Params
	{
	public:
		TArray<class UClass*>                                      NewClearedChallenges;                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.AnalysePhoto
	 */
	struct UBPW_PhotoAnalyser_C_AnalysePhoto_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.Construct
	 */
	struct UBPW_PhotoAnalyser_C_Construct_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.SetPhotoChallengeToCleared
	 */
	struct UBPW_PhotoAnalyser_C_SetPhotoChallengeToCleared_Params
	{
	public:
		class UClass*                                              Challenge;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.IndicateFoundActors
	 */
	struct UBPW_PhotoAnalyser_C_IndicateFoundActors_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.EventShowNotifications
	 */
	struct UBPW_PhotoAnalyser_C_EventShowNotifications_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.OnAnalasysAnimComplete
	 */
	struct UBPW_PhotoAnalyser_C_OnAnalasysAnimComplete_Params
	{	};

	/**
	 * Function BPW_PhotoAnalyser.BPW_PhotoAnalyser_C.ExecuteUbergraph_BPW_PhotoAnalyser
	 */
	struct UBPW_PhotoAnalyser_C_ExecuteUbergraph_BPW_PhotoAnalyser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8HKB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
