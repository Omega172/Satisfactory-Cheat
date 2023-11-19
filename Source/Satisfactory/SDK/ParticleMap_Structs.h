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
	 * UserDefinedStruct ParticleMap.ParticleMap
	 * Size -> 0x0040
	 */
	struct FParticleMap
	{
	public:
		unsigned char                                              ResourceNode_16_2100B5C34EE8DF7958D78A974512F3C3[0x30];  // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class UParticleSystem*                                     ParticleSystem1_9_F0CF81514E1E1C5007AC99B0C59C63CD;      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystem2_12_9CB1B6054B443457EF842EA10A375BF2;     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
