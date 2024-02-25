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
	 * ScriptStruct BPA_DroneStation.BPA_DroneStation_C.AnimBlueprintGeneratedMutableData
	 * Size -> 0x0001 (FullSize[0x0002] - InheritedSize[0x0001])
	 */
	struct UBPA_DroneStation_C_FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
	{
	public:
		bool                                                       __BoolProperty;                                          // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct BPA_DroneStation.BPA_DroneStation_C.AnimBlueprintGeneratedConstantData
	 * Size -> 0x0117 (FullSize[0x0118] - InheritedSize[0x0001])
	 */
	struct UBPA_DroneStation_C_FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
	{
	public:
		unsigned char                                              UnknownData_T0YP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_26;                                       // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __FloatProperty_27;                                      // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   __AnimSequenceBase_28;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBlendProfile*                                       __BlendProfile_29;                                       // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCurveFloat*                                         __CurveFloat_30;                                         // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EAlphaBlendOption                                          __EnumProperty_31;                                       // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBlendListTransitionType                                   __EnumProperty_32;                                       // 0x0029(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W01D[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              __ArrayProperty_33;                                      // 0x0030(0x0010) BlueprintVisible, EditFixedSize
		struct FAnimNodeFunctionRef                                __StructProperty_34;                                     // 0x0040(0x0020) BlueprintVisible, NoDestructor
		ESequenceEvalReinit                                        __ByteProperty_35;                                       // 0x0060(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __BoolProperty_36;                                       // 0x0061(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4C2[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __FloatProperty_37;                                      // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   __AnimSequenceBase_38;                                   // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       __BoolProperty_39;                                       // 0x0070(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimSyncMethod                                            __EnumProperty_40;                                       // 0x0071(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnimGroupRole                                             __ByteProperty_41;                                       // 0x0072(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BMTH[0x1];                                   // 0x0073(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                __NameProperty_42;                                       // 0x0074(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AKW6[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimSubsystem_PropertyAccess                       AnimBlueprintExtension_PropertyAccess;                   // 0x0080(0x0080)
		struct FAnimSubsystem_Base                                 AnimBlueprintExtension_Base;                             // 0x0100(0x0018)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
