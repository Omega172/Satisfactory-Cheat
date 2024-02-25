#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * ScriptStruct BPA_Tractor.BPA_Tractor_C.AnimBlueprintGeneratedConstantData
	 * Size -> 0x00CF (FullSize[0x00D0] - InheritedSize[0x0001])
	 */
	struct UBPA_Tractor_C_FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
	{
	public:
		unsigned char                                              UnknownData_Q9GA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_38;                                       // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                __NameProperty_39;                                       // 0x000C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3RB2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNodeFunctionRef                                __StructProperty_40;                                     // 0x0018(0x0020) BlueprintVisible, NoDestructor
		struct FAnimSubsystem_PropertyAccess                       AnimBlueprintExtension_PropertyAccess;                   // 0x0038(0x0080)
		struct FAnimSubsystem_Base                                 AnimBlueprintExtension_Base;                             // 0x00B8(0x0018)
	};

	/**
	 * ScriptStruct BPA_Tractor.BPA_Tractor_C.AnimBlueprintGeneratedMutableData
	 * Size -> 0x0000 (FullSize[0x0001] - InheritedSize[0x0001])
	 */
	struct UBPA_Tractor_C_FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
