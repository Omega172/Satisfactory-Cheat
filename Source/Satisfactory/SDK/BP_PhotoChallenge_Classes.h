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
	 * BlueprintGeneratedClass BP_PhotoChallenge.BP_PhotoChallenge_C
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UBP_PhotoChallenge_C : public UObject
	{
	public:
		class FText                                                mName;                                                   // 0x0028(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mDescription;                                            // 0x0040(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FStruct_PhotoAnalyser_Data, int32_t>           mChallengeData;                                          // 0x0058(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
