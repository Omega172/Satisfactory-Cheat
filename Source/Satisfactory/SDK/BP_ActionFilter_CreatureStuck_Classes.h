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
	 * BlueprintGeneratedClass BP_ActionFilter_CreatureStuck.BP_ActionFilter_CreatureStuck_C
	 * Size -> 0x0001 (FullSize[0x0031] - InheritedSize[0x0030])
	 */
	class UBP_ActionFilter_CreatureStuck_C : public UFGActionScorer
	{
	public:
		bool                                                       InvertResult;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetScore(float* out_score);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
