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
	 * Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.GetClearedPhotoChallenges
	 */
	struct UBPI_PhotoAnalyserHelpers_C_GetClearedPhotoChallenges_Params
	{
	public:
		TArray<class UClass*>                                      ClearedChallenges;                                       // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C.SetPhotoChallengeToCleared
	 */
	struct UBPI_PhotoAnalyserHelpers_C_SetPhotoChallengeToCleared_Params
	{
	public:
		class UClass*                                              Challenge;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
