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
	 * BlueprintGeneratedClass BP_PhotoChallenge_Library.BP_PhotoChallenge_Library_C
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UBP_PhotoChallenge_Library_C : public UObject
	{
	public:
		TArray<class UClass*>                                      mChallenges;                                             // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      mAdditionalPhotographableClasses;                        // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
