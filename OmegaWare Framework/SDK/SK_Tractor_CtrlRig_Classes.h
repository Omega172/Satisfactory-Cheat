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
	 * ControlRigBlueprintGeneratedClass SK_Tractor_CtrlRig.SK_Tractor_CtrlRig_C
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class USK_Tractor_CtrlRig_C : public UControlRig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Tractor_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x0900 (FullSize[0x0928] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_Child__Const; // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RotationConstraintLocalSpaceOffset_bMaintainOffset__Const; // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFilterOptionPerAxis                                RigVMModel___RotationConstraintLocalSpaceOffset_Filter__Const; // 0x0035(0x0003) Edit, EditConst, NonTransactional, NoDestructor
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_Parents__Const; // 0x0038(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_RotationConstraint_AdvancedSettings        RigVMModel___RotationConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0x0048(0x0002) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_GXFV[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RigVMModel___RotationConstraintLocalSpaceOffset_Weight__Const; // 0x004C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_Item__Const;                        // 0x0050(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YLX8[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Primary__Const;                     // 0x0060(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Secondary__Const;                   // 0x00A8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimBone_DebugSettings                      RigVMModel___AimItem_DebugSettings__Const;               // 0x00F0(0x0070) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_2_1_Child__Const; // 0x0160(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CCJ0[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_2_1_Parents__Const; // 0x0170(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_Child__Const; // 0x0180(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_Item__Const;                      // 0x018C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_Primary__Const;                   // 0x0198(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_Item__Const;                      // 0x01E0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3AE2[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_Primary__Const;                   // 0x01F0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_Child__Const; // 0x0238(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_143Z[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_Parents__Const; // 0x0248(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_Primary__Const;                   // 0x0258(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_3_3_Item__Const;                    // 0x02A0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4AOU[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_3_Primary__Const;                 // 0x02B0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_2_Child__Const; // 0x02F8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X5FS[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_Parents__Const; // 0x0308(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_4_Item__Const;                      // 0x0318(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K6E9[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_4_Primary__Const;                   // 0x0328(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_2_Child__Const; // 0x0370(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5R82[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_2_Parents__Const; // 0x0380(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_3_Child__Const; // 0x0390(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_Item__Const;                    // 0x039C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_Primary__Const;                 // 0x03A8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_1_Item__Const;                    // 0x03F0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SSB6[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_1_Primary__Const;                 // 0x0400(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_1_Child__Const; // 0x0448(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F1CQ[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_1_Parents__Const; // 0x0458(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_1_Primary__Const;                 // 0x0468(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_3_3_1_Item__Const;                  // 0x04B0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J5LV[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_3_1_Primary__Const;               // 0x04C0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_1_Child__Const; // 0x0508(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FTS7[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_Parents__Const; // 0x0518(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_5_Item__Const;                      // 0x0528(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FVC2[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_Primary__Const;                   // 0x0538(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_Child__Const; // 0x0580(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q7QQ[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_Parents__Const; // 0x0590(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_Child__Const; // 0x05A0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_Item__Const;                    // 0x05AC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_Primary__Const;                 // 0x05B8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_2_Item__Const;                    // 0x0600(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JMEH[0x4];                                   // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_2_Primary__Const;                 // 0x0610(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_2_Child__Const; // 0x0658(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AC9Q[0x4];                                   // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_2_Parents__Const; // 0x0668(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_2_Primary__Const;                 // 0x0678(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_3_3_2_Item__Const;                  // 0x06C0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_067T[0x4];                                   // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_3_2_Primary__Const;               // 0x06D0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___RotationConstraintLocalSpaceOffset_2_1_Child__Const; // 0x0718(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N4WF[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_1_Parents__Const; // 0x0728(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_4_1_Item__Const;                    // 0x0738(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FIQK[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_4_1_Primary__Const;                 // 0x0748(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_5_1_Child__Const; // 0x0790(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FY9M[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_1_Parents__Const; // 0x07A0(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_3_1_Child__Const; // 0x07B0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_1_Item__Const;                  // 0x07BC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_Primary__Const;               // 0x07C8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_1_1_Item__Const;                  // 0x0810(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZTDB[0x4];                                   // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_1_1_Primary__Const;               // 0x0820(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_1_1_Child__Const; // 0x0868(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KC2O[0x4];                                   // 0x0874(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_1_1_Parents__Const; // 0x0878(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_1_1_Primary__Const;               // 0x0888(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_3_3_1_1_Item__Const;                // 0x08D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEL5[0x4];                                   // 0x08DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_3_1_1_Primary__Const;             // 0x08E0(0x0048) Edit, EditConst, NonTransactional, NoDestructor

	public:
		static UClass* StaticClass();
	};
	*/

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Tractor_CtrlRig.RigVMMemory_Work
	 * Size -> 0x0780 (FullSize[0x07A8] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_ChildCache; // 0x0028(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_ParentCaches; // 0x0038(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_CachedItem;                         // 0x0048(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_PrimaryCachedSpace;                 // 0x0058(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_SecondaryCachedSpace;               // 0x0068(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_bIsInitialized;                     // 0x0078(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_2_1_ChildCache; // 0x0088(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_2_1_ParentCaches; // 0x0098(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_ChildCache; // 0x00A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_ParentCaches; // 0x00B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x00C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x00D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_CachedItem;                       // 0x00E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_PrimaryCachedSpace;               // 0x00F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_SecondaryCachedSpace;             // 0x0108(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_bIsInitialized;                   // 0x0118(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_CachedItem;                       // 0x0128(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_PrimaryCachedSpace;               // 0x0138(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_SecondaryCachedSpace;             // 0x0148(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_bIsInitialized;                   // 0x0158(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_ChildCache; // 0x0168(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_ParentCaches; // 0x0178(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_CachedItem;                       // 0x0188(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_PrimaryCachedSpace;               // 0x0198(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_SecondaryCachedSpace;             // 0x01A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_bIsInitialized;                   // 0x01B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_CachedItem;                     // 0x01C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_PrimaryCachedSpace;             // 0x01D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_SecondaryCachedSpace;           // 0x01E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_3_bIsInitialized;                 // 0x01F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_ChildCache; // 0x0208(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_2_ParentCaches; // 0x0218(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_CachedItem;                       // 0x0228(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_PrimaryCachedSpace;               // 0x0238(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_SecondaryCachedSpace;             // 0x0248(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_4_bIsInitialized;                   // 0x0258(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_2_ChildCache; // 0x0268(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_2_ParentCaches; // 0x0278(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_3_ChildCache; // 0x0288(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_3_ParentCaches; // 0x0298(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ChildCache; // 0x02A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ParentCaches; // 0x02B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_CachedItem;                     // 0x02C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_PrimaryCachedSpace;             // 0x02D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_SecondaryCachedSpace;           // 0x02E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_bIsInitialized;                 // 0x02F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_CachedItem;                     // 0x0308(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_PrimaryCachedSpace;             // 0x0318(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_SecondaryCachedSpace;           // 0x0328(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_1_bIsInitialized;                 // 0x0338(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_1_ChildCache; // 0x0348(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_1_ParentCaches; // 0x0358(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_CachedItem;                     // 0x0368(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_PrimaryCachedSpace;             // 0x0378(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_SecondaryCachedSpace;           // 0x0388(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_1_bIsInitialized;                 // 0x0398(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_CachedItem;                   // 0x03A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_PrimaryCachedSpace;           // 0x03B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_SecondaryCachedSpace;         // 0x03C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_3_1_bIsInitialized;               // 0x03D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_ChildCache; // 0x03E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_ParentCaches; // 0x03F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_CachedItem;                       // 0x0408(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_PrimaryCachedSpace;               // 0x0418(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_SecondaryCachedSpace;             // 0x0428(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_bIsInitialized;                   // 0x0438(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_ChildCache; // 0x0448(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_ParentCaches; // 0x0458(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_ChildCache; // 0x0468(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_ParentCaches; // 0x0478(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ChildCache; // 0x0488(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ParentCaches; // 0x0498(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_CachedItem;                     // 0x04A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_PrimaryCachedSpace;             // 0x04B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_SecondaryCachedSpace;           // 0x04C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_bIsInitialized;                 // 0x04D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_CachedItem;                     // 0x04E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_PrimaryCachedSpace;             // 0x04F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_SecondaryCachedSpace;           // 0x0508(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_2_bIsInitialized;                 // 0x0518(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_2_ChildCache; // 0x0528(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_2_ParentCaches; // 0x0538(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_CachedItem;                     // 0x0548(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_PrimaryCachedSpace;             // 0x0558(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_SecondaryCachedSpace;           // 0x0568(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_2_bIsInitialized;                 // 0x0578(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_2_CachedItem;                   // 0x0588(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_2_PrimaryCachedSpace;           // 0x0598(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_2_SecondaryCachedSpace;         // 0x05A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_3_2_bIsInitialized;               // 0x05B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_1_ChildCache; // 0x05C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_2_1_ParentCaches; // 0x05D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_CachedItem;                     // 0x05E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_PrimaryCachedSpace;             // 0x05F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_1_SecondaryCachedSpace;           // 0x0608(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_4_1_bIsInitialized;                 // 0x0618(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_5_1_ChildCache; // 0x0628(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_5_1_ParentCaches; // 0x0638(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_3_1_ChildCache; // 0x0648(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_3_1_ParentCaches; // 0x0658(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_ChildCache; // 0x0668(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_ParentCaches; // 0x0678(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_CachedItem;                   // 0x0688(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_PrimaryCachedSpace;           // 0x0698(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_SecondaryCachedSpace;         // 0x06A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_bIsInitialized;               // 0x06B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_1_CachedItem;                   // 0x06C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_1_PrimaryCachedSpace;           // 0x06D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_1_SecondaryCachedSpace;         // 0x06E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_1_1_bIsInitialized;               // 0x06F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_1_1_ChildCache; // 0x0708(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_1_1_ParentCaches; // 0x0718(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_CachedItem;                   // 0x0728(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_PrimaryCachedSpace;           // 0x0738(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_SecondaryCachedSpace;         // 0x0748(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_1_1_bIsInitialized;               // 0x0758(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_1_CachedItem;                 // 0x0768(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_1_PrimaryCachedSpace;         // 0x0778(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_3_1_1_SecondaryCachedSpace;       // 0x0788(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_3_1_1_bIsInitialized;             // 0x0798(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};
	*/
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
