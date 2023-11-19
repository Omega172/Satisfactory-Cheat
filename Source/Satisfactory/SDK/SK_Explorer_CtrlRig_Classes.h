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
	 * ControlRigBlueprintGeneratedClass SK_Explorer_CtrlRig.SK_Explorer_CtrlRig_C
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class USK_Explorer_CtrlRig_C : public UControlRig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Explorer_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x07C8 (FullSize[0x07F0] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___AimItem_3_Item__Const;                      // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A050[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_Primary__Const;                   // 0x0038(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_Secondary__Const;                 // 0x0080(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		float                                                      RigVMModel___AimItem_3_Weight__Const;                    // 0x00C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1ASD[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      RigVMModel___AimItem_3_DebugSettings__Const;             // 0x00D0(0x0070) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_10_Child__Const; // 0x0140(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___PositionConstraintLocalSpaceOffset_10_bMaintainOffset__Const; // 0x014C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFilterOptionPerAxis                                RigVMModel___PositionConstraintLocalSpaceOffset_10_Filter__Const; // 0x014D(0x0003) Edit, EditConst, NonTransactional, NoDestructor
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_10_Parents__Const; // 0x0150(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_Child__Const; // 0x0160(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RotationConstraintLocalSpaceOffset_bMaintainOffset__Const; // 0x016C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFilterOptionPerAxis                                RigVMModel___RotationConstraintLocalSpaceOffset_Filter__Const; // 0x016D(0x0003) Edit, EditConst, NonTransactional, NoDestructor
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_Parents__Const; // 0x0170(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_RotationConstraint_AdvancedSettings        RigVMModel___RotationConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0x0180(0x0002) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_TCEO[0x6];                                   // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_Primary__Const;                 // 0x0188(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_7_Child__Const; // 0x01D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_Child__Const; // 0x01DC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_Item__Const;                      // 0x01E8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BV4J[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_Primary__Const;                   // 0x01F8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_Item__Const;                      // 0x0240(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4HKI[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_Primary__Const;                   // 0x0250(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_Child__Const; // 0x0298(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6ONI[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x02A8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_3_1_Item__Const;                    // 0x02B8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1BZA[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_1_Primary__Const;                 // 0x02C8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_9_Child__Const; // 0x0310(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGMI[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_9_Parents__Const; // 0x0320(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_1_Child__Const; // 0x0330(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7IEK[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_Parents__Const; // 0x0340(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_Primary__Const;               // 0x0350(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_7_1_Child__Const; // 0x0398(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_3_Child__Const; // 0x03A4(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_Item__Const;                    // 0x03B0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UQWU[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_Primary__Const;                 // 0x03C0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_1_Item__Const;                    // 0x0408(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQV8[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_1_Primary__Const;                 // 0x0418(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Child__Const; // 0x0460(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S7PA[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Parents__Const; // 0x0470(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_Item__Const;                        // 0x0480(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PEHX[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Primary__Const;                     // 0x0490(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_Child__Const; // 0x04D8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YPDT[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_Parents__Const; // 0x04E8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_Child__Const; // 0x04F8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_Child__Const; // 0x0504(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_5_Parents__Const; // 0x0510(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_4_Item__Const;                      // 0x0520(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GCSX[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_4_Primary__Const;                   // 0x0530(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_5_1_Item__Const;                    // 0x0578(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVB9[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_1_Primary__Const;                 // 0x0588(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_6_Child__Const; // 0x05D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IIQ5[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_6_Parents__Const; // 0x05E0(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_Primary__Const;                   // 0x05F0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_6_Item__Const;                      // 0x0638(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FX2R[0x4];                                   // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_6_Primary__Const;                   // 0x0648(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_8_Child__Const; // 0x0690(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XCGO[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_8_Parents__Const; // 0x06A0(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_1_Child__Const; // 0x06B0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_1_Child__Const; // 0x06BC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_5_1_Parents__Const; // 0x06C8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_4_1_Item__Const;                    // 0x06D8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WFF9[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_4_1_Primary__Const;                 // 0x06E8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_5_1_1_Item__Const;                  // 0x0730(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4EIN[0x4];                                   // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_1_1_Primary__Const;               // 0x0740(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_6_1_Child__Const; // 0x0788(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0DXP[0x4];                                   // 0x0794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_6_1_Parents__Const; // 0x0798(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_2_Primary__Const;                 // 0x07A8(0x0048) Edit, EditConst, NonTransactional, NoDestructor

	public:
		static UClass* StaticClass();
	};
	*/

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Explorer_CtrlRig.RigVMMemory_Work
	 * Size -> 0x06C0 (FullSize[0x06E8] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_CachedItem;                       // 0x0028(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_PrimaryCachedSpace;               // 0x0038(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_SecondaryCachedSpace;             // 0x0048(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_bIsInitialized;                   // 0x0058(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_10_ChildCache; // 0x0068(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_10_ParentCaches; // 0x0078(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_ChildCache; // 0x0088(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_ParentCaches; // 0x0098(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_CachedItem;                     // 0x00A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_PrimaryCachedSpace;             // 0x00B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_SecondaryCachedSpace;           // 0x00C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_bIsInitialized;                 // 0x00D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_7_ChildCache; // 0x00E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_7_ParentCaches; // 0x00F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_4_ChildCache; // 0x0108(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_4_ParentCaches; // 0x0118(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_ChildCache; // 0x0128(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_ParentCaches; // 0x0138(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_CachedItem;                       // 0x0148(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_PrimaryCachedSpace;               // 0x0158(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_SecondaryCachedSpace;             // 0x0168(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_bIsInitialized;                   // 0x0178(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_CachedItem;                       // 0x0188(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_PrimaryCachedSpace;               // 0x0198(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_SecondaryCachedSpace;             // 0x01A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_bIsInitialized;                   // 0x01B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x01C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x01D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_CachedItem;                     // 0x01E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_PrimaryCachedSpace;             // 0x01F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_SecondaryCachedSpace;           // 0x0208(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_1_bIsInitialized;                 // 0x0218(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_9_ChildCache; // 0x0228(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_9_ParentCaches; // 0x0238(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_ChildCache; // 0x0248(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_ParentCaches; // 0x0258(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_CachedItem;                   // 0x0268(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_PrimaryCachedSpace;           // 0x0278(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_SecondaryCachedSpace;         // 0x0288(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_bIsInitialized;               // 0x0298(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_7_1_ChildCache; // 0x02A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_7_1_ParentCaches; // 0x02B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_4_1_ChildCache; // 0x02C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_4_1_ParentCaches; // 0x02D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_3_ChildCache; // 0x02E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_3_ParentCaches; // 0x02F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_CachedItem;                     // 0x0308(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_PrimaryCachedSpace;             // 0x0318(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_SecondaryCachedSpace;           // 0x0328(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_bIsInitialized;                 // 0x0338(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_CachedItem;                     // 0x0348(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_PrimaryCachedSpace;             // 0x0358(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_SecondaryCachedSpace;           // 0x0368(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_1_bIsInitialized;                 // 0x0378(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ChildCache; // 0x0388(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ParentCaches; // 0x0398(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_CachedItem;                         // 0x03A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_PrimaryCachedSpace;                 // 0x03B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_SecondaryCachedSpace;               // 0x03C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_bIsInitialized;                     // 0x03D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_ChildCache; // 0x03E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_ParentCaches; // 0x03F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_ChildCache; // 0x0408(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_ParentCaches; // 0x0418(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_ChildCache; // 0x0428(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_ParentCaches; // 0x0438(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_5_ChildCache; // 0x0448(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_5_ParentCaches; // 0x0458(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_CachedItem;                       // 0x0468(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_PrimaryCachedSpace;               // 0x0478(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_SecondaryCachedSpace;             // 0x0488(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_4_bIsInitialized;                   // 0x0498(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_CachedItem;                     // 0x04A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_PrimaryCachedSpace;             // 0x04B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_SecondaryCachedSpace;           // 0x04C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_1_bIsInitialized;                 // 0x04D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_6_ChildCache; // 0x04E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_6_ParentCaches; // 0x04F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_CachedItem;                       // 0x0508(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_PrimaryCachedSpace;               // 0x0518(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_SecondaryCachedSpace;             // 0x0528(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_bIsInitialized;                   // 0x0538(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_6_CachedItem;                       // 0x0548(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_6_PrimaryCachedSpace;               // 0x0558(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_6_SecondaryCachedSpace;             // 0x0568(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_6_bIsInitialized;                   // 0x0578(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_8_ChildCache; // 0x0588(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_8_ParentCaches; // 0x0598(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_1_ChildCache; // 0x05A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_1_ParentCaches; // 0x05B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_1_ChildCache; // 0x05C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_1_ParentCaches; // 0x05D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_5_1_ChildCache; // 0x05E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_5_1_ParentCaches; // 0x05F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_CachedItem;                     // 0x0608(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_PrimaryCachedSpace;             // 0x0618(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_SecondaryCachedSpace;           // 0x0628(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_4_1_bIsInitialized;                 // 0x0638(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_1_CachedItem;                   // 0x0648(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_1_PrimaryCachedSpace;           // 0x0658(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_1_1_SecondaryCachedSpace;         // 0x0668(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_1_1_bIsInitialized;               // 0x0678(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_6_1_ChildCache; // 0x0688(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_6_1_ParentCaches; // 0x0698(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_2_CachedItem;                     // 0x06A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_2_PrimaryCachedSpace;             // 0x06B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_2_SecondaryCachedSpace;           // 0x06C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_2_bIsInitialized;                 // 0x06D8(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};
	*/
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
