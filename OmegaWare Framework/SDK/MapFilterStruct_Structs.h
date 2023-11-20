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
	 * UserDefinedStruct MapFilterStruct.MapFilterStruct
	 * Size -> 0x0028
	 */
	struct FMapFilterStruct
	{
	public:
		ERepresentationType                                        RepresentationType_3_5D457985464D101149CAEF83656C9370;   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UCS4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFGActorRepresentation*>                      ActorRepresentation_6_2C64EC784A601AFE845DA2834D3A2212;  // 0x0008(0x0010) Edit, BlueprintVisible
		TArray<class UWidget_MapObject_C*>                         MapObject_10_E7619CDE4C223F0B26B78DA3C3602333;           // 0x0018(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
