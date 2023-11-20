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
	 * UserDefinedStruct Struct_PhotoAnalyser_Data.Struct_PhotoAnalyser_Data
	 * Size -> 0x002A
	 */
	struct FStruct_PhotoAnalyser_Data
	{
	public:
		class UClass*                                              ActorClass_42_926D28734F9B8F9D0FAF0E837FE736FF;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Descriptor_43_FB9157984B673332BDBCD08CD1A83FE4;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		ECreatureState                                             CreatureState_12_BE4BEB6A4EA0A806F2892CBE93428774;       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5KTD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CreatureAction_29_6674A6354DFF103C456969978E6D9A18;      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ActionTarget_19_B75B3F1044FFD44CA1578DB7FC6B588F;        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCloseUpShot_31_34E641C247E3656A007EC9BB959BA615;       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimeOfDay                                                 TimeOfDay_34_9D54C60B44358A4A04C126BAEE45B577;           // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
