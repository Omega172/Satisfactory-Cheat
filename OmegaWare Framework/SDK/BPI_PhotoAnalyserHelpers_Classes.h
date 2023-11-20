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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_PhotoAnalyserHelpers.BPI_PhotoAnalyserHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PhotoAnalyserHelpers_C : public UInterface
	{
	public:
		void GetClearedPhotoChallenges(TArray<class UClass*>* ClearedChallenges);
		void SetPhotoChallengeToCleared(class UClass* Challenge);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
