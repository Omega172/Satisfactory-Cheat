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
	 * UserDefinedStruct Struct_PSS_AmbientSFXOnIndex.Struct_PSS_AmbientSFXOnIndex
	 * Size -> 0x0028
	 */
	struct FStruct_PSS_AmbientSFXOnIndex
	{
	public:
		class FName                                                FoliageName_2_BFF8DFD2423811C43BF06DA56CE41ED1;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Category_39_EF3E585B4BE288D1ABC188A52CB12F62;            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SubCategory_40_C17222B14C956A1C1FA244A33F851B26;         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProbabilityofSpawning_17_26CD257E4815717DADD85383AE0DBAFF; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XZ5X[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       FoliageAkEvent_41_EF81BF46448BB9EA4583A5B4F123B956;      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
