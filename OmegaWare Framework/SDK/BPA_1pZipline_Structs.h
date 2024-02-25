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
	 * ScriptStruct BPA_1pZipline.BPA_1pZipline_C.AnimBlueprintGeneratedMutableData
	 * Size -> 0x000B (FullSize[0x000C] - InheritedSize[0x0001])
	 */
	struct UBPA_1pZipline_C_FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
	{
	public:
		unsigned char                                              UnknownData_LZBC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __FloatProperty;                                         // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __FloatProperty_1;                                       // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct BPA_1pZipline.BPA_1pZipline_C.AnimBlueprintGeneratedConstantData
	 * Size -> 0x0107 (FullSize[0x0108] - InheritedSize[0x0001])
	 */
	struct UBPA_1pZipline_C_FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
	{
	public:
		unsigned char                                              UnknownData_NOVY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_28;                                       // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputScaleBiasClampConstants                       __StructProperty_29;                                     // 0x000C(0x002C) BlueprintVisible, NoDestructor
		struct FAnimNodeFunctionRef                                __StructProperty_30;                                     // 0x0038(0x0020) BlueprintVisible, NoDestructor
		float                                                      __FloatProperty_31;                                      // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __BoolProperty_32;                                       // 0x005C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TSQF[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __FloatProperty_33;                                      // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __BoolProperty_34;                                       // 0x0064(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimSyncMethod                                            __EnumProperty_35;                                       // 0x0065(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             __ByteProperty_36;                                       // 0x0066(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ER19[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_37;                                       // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnimSubsystem_PropertyAccess                       AnimBlueprintExtension_PropertyAccess;                   // 0x0070(0x0080)
		struct FAnimSubsystem_Base                                 AnimBlueprintExtension_Base;                             // 0x00F0(0x0018)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
