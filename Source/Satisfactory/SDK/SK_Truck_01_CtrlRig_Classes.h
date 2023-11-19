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
	 * ControlRigBlueprintGeneratedClass SK_Truck_01_CtrlRig.SK_Truck_01_CtrlRig_C
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class USK_Truck_01_CtrlRig_C : public UControlRig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Truck_01_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x0C58 (FullSize[0x0C80] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___AimItem_Item__Const;                        // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HJ5N[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Primary__Const;                     // 0x0038(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Secondary__Const;                   // 0x0080(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		float                                                      RigVMModel___AimItem_Weight__Const;                      // 0x00C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZUI4[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      RigVMModel___AimItem_DebugSettings__Const;               // 0x00D0(0x0070) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_Child__Const; // 0x0140(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___PositionConstraintLocalSpaceOffset_1_bMaintainOffset__Const; // 0x014C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFilterOptionPerAxis                                RigVMModel___PositionConstraintLocalSpaceOffset_1_Filter__Const; // 0x014D(0x0003) Edit, EditConst, NonTransactional, NoDestructor
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x0150(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_Parents__Const; // 0x0160(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_RotationConstraint_AdvancedSettings        RigVMModel___RotationConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0x0170(0x0002) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_D3LB[0x2];                                   // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_2_Child__Const; // 0x0174(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_Child__Const; // 0x0180(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_Item__Const;                      // 0x018C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_Primary__Const;                   // 0x0198(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_Item__Const;                    // 0x01E0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XERM[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_Primary__Const;                 // 0x01F0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_Child__Const; // 0x0238(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UG4W[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_Parents__Const; // 0x0248(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_Primary__Const;               // 0x0258(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_Primary__Const;                   // 0x02A0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_Secondary__Const;                 // 0x02E8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_Item__Const;                      // 0x0330(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V2N4[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_Primary__Const;                   // 0x0340(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Child__Const; // 0x0388(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WB98[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Parents__Const; // 0x0398(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_Parents__Const; // 0x03A8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_Child__Const; // 0x03B8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_Child__Const; // 0x03C4(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_Item__Const;                    // 0x03D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRWR[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_Primary__Const;                 // 0x03E0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_2_Item__Const;                  // 0x0428(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UVKL[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_2_Primary__Const;               // 0x0438(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_Child__Const; // 0x0480(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JWG8[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_Parents__Const; // 0x0490(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_1_Primary__Const;             // 0x04A0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_1_Primary__Const;                 // 0x04E8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_4_Item__Const;                      // 0x0530(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KFMA[0x4];                                   // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_4_Primary__Const;                   // 0x0540(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_Child__Const; // 0x0588(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S4IS[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_Parents__Const; // 0x0598(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_2_Parents__Const; // 0x05A8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_Child__Const; // 0x05B8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_3_Item__Const;                    // 0x05C4(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_3_Primary__Const;                 // 0x05D0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_3_Item__Const;                  // 0x0618(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NIZO[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_3_Primary__Const;               // 0x0628(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_2_Child__Const; // 0x0670(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5RKY[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_2_Parents__Const; // 0x0680(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_2_Primary__Const;             // 0x0690(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_1_Item__Const;                    // 0x06D8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZAMW[0x4];                                   // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_1_Primary__Const;                 // 0x06E8(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_1_Child__Const; // 0x0730(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_58MN[0x4];                                   // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_1_Parents__Const; // 0x0740(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_2_1_Parents__Const; // 0x0750(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_1_Child__Const; // 0x0760(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_1_Item__Const;                  // 0x076C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_1_Primary__Const;               // 0x0778(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_2_1_Item__Const;                // 0x07C0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HYLY[0x4];                                   // 0x07CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_2_1_Primary__Const;             // 0x07D0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_1_Child__Const; // 0x0818(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0BII[0x4];                                   // 0x0824(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_1_Parents__Const; // 0x0828(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_1_1_Primary__Const;           // 0x0838(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_5_Item__Const;                      // 0x0880(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EWP3[0x4];                                   // 0x088C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_5_Primary__Const;                   // 0x0890(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_3_Child__Const; // 0x08D8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y8UB[0x4];                                   // 0x08E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_3_Parents__Const; // 0x08E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_Parents__Const; // 0x08F8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_2_1_Child__Const; // 0x0908(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_3_Child__Const; // 0x0914(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_4_Item__Const;                    // 0x0920(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JDU0[0x4];                                   // 0x092C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_4_Primary__Const;                 // 0x0930(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_4_Item__Const;                  // 0x0978(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QKBI[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_4_Primary__Const;               // 0x0988(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_3_Child__Const; // 0x09D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GG9Y[0x4];                                   // 0x09DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_3_Parents__Const; // 0x09E0(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_3_Primary__Const;             // 0x09F0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_2_Primary__Const;                 // 0x0A38(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_2_2_Item__Const;                    // 0x0A80(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0J4B[0x4];                                   // 0x0A8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_2_2_Primary__Const;                 // 0x0A90(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_2_Child__Const; // 0x0AD8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G9FV[0x4];                                   // 0x0AE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_2_Parents__Const; // 0x0AE8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FConstraintParent>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_1_Parents__Const; // 0x0AF8(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_1_Child__Const; // 0x0B08(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_2_1_Child__Const; // 0x0B14(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_2_Item__Const;                  // 0x0B20(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2E44[0x4];                                   // 0x0B2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_2_Primary__Const;               // 0x0B30(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_2_2_Item__Const;                // 0x0B78(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKTW[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_2_2_Primary__Const;             // 0x0B88(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_2_Child__Const; // 0x0BD0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PVLJ[0x4];                                   // 0x0BDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_2_Parents__Const; // 0x0BE0(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_1_1_2_Primary__Const;           // 0x0BF0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_3_1_1_Primary__Const;               // 0x0C38(0x0048) Edit, EditConst, NonTransactional, NoDestructor

	public:
		static UClass* StaticClass();
	};
	*/

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Truck_01_CtrlRig.RigVMMemory_Work
	 * Size -> 0x0A80 (FullSize[0x0AA8] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_CachedItem;                         // 0x0028(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_PrimaryCachedSpace;                 // 0x0038(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_SecondaryCachedSpace;               // 0x0048(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_bIsInitialized;                     // 0x0058(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x0068(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x0078(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_ChildCache; // 0x0088(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_ParentCaches; // 0x0098(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_2_ChildCache; // 0x00A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_2_ParentCaches; // 0x00B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_ChildCache; // 0x00C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_ParentCaches; // 0x00D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_CachedItem;                       // 0x00E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_PrimaryCachedSpace;               // 0x00F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_SecondaryCachedSpace;             // 0x0108(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_bIsInitialized;                   // 0x0118(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_CachedItem;                     // 0x0128(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_PrimaryCachedSpace;             // 0x0138(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_SecondaryCachedSpace;           // 0x0148(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_bIsInitialized;                 // 0x0158(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ChildCache; // 0x0168(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ParentCaches; // 0x0178(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_CachedItem;                   // 0x0188(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_PrimaryCachedSpace;           // 0x0198(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_SecondaryCachedSpace;         // 0x01A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_bIsInitialized;               // 0x01B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_CachedItem;                       // 0x01C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_PrimaryCachedSpace;               // 0x01D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_SecondaryCachedSpace;             // 0x01E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_bIsInitialized;                   // 0x01F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_CachedItem;                       // 0x0208(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_PrimaryCachedSpace;               // 0x0218(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_SecondaryCachedSpace;             // 0x0228(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_bIsInitialized;                   // 0x0238(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ChildCache; // 0x0248(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ParentCaches; // 0x0258(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_ChildCache; // 0x0268(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_ParentCaches; // 0x0278(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_ChildCache; // 0x0288(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_ParentCaches; // 0x0298(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_ChildCache; // 0x02A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_ParentCaches; // 0x02B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_CachedItem;                     // 0x02C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_PrimaryCachedSpace;             // 0x02D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_SecondaryCachedSpace;           // 0x02E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_bIsInitialized;                 // 0x02F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_CachedItem;                   // 0x0308(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_PrimaryCachedSpace;           // 0x0318(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_SecondaryCachedSpace;         // 0x0328(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_2_bIsInitialized;               // 0x0338(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_ChildCache; // 0x0348(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_ParentCaches; // 0x0358(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_CachedItem;                 // 0x0368(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_PrimaryCachedSpace;         // 0x0378(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_SecondaryCachedSpace;       // 0x0388(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_1_bIsInitialized;             // 0x0398(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_CachedItem;                     // 0x03A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_PrimaryCachedSpace;             // 0x03B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_SecondaryCachedSpace;           // 0x03C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_1_bIsInitialized;                 // 0x03D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_CachedItem;                       // 0x03E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_PrimaryCachedSpace;               // 0x03F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_4_SecondaryCachedSpace;             // 0x0408(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_4_bIsInitialized;                   // 0x0418(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_ChildCache; // 0x0428(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_ParentCaches; // 0x0438(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_2_ChildCache; // 0x0448(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_2_ParentCaches; // 0x0458(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_ChildCache; // 0x0468(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_ParentCaches; // 0x0478(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_3_CachedItem;                     // 0x0488(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_3_PrimaryCachedSpace;             // 0x0498(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_3_SecondaryCachedSpace;           // 0x04A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_3_bIsInitialized;                 // 0x04B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_3_CachedItem;                   // 0x04C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_3_PrimaryCachedSpace;           // 0x04D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_3_SecondaryCachedSpace;         // 0x04E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_3_bIsInitialized;               // 0x04F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_2_ChildCache; // 0x0508(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_2_ParentCaches; // 0x0518(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_2_CachedItem;                 // 0x0528(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_2_PrimaryCachedSpace;         // 0x0538(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_2_SecondaryCachedSpace;       // 0x0548(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_2_bIsInitialized;             // 0x0558(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_CachedItem;                     // 0x0568(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_PrimaryCachedSpace;             // 0x0578(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_1_SecondaryCachedSpace;           // 0x0588(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_1_bIsInitialized;                 // 0x0598(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_1_ChildCache; // 0x05A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_1_1_ParentCaches; // 0x05B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_2_1_ChildCache; // 0x05C8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_2_1_ParentCaches; // 0x05D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_1_ChildCache; // 0x05E8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_1_ParentCaches; // 0x05F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_1_CachedItem;                   // 0x0608(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_1_PrimaryCachedSpace;           // 0x0618(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_1_SecondaryCachedSpace;         // 0x0628(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_1_bIsInitialized;               // 0x0638(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_1_CachedItem;                 // 0x0648(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_1_PrimaryCachedSpace;         // 0x0658(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_1_SecondaryCachedSpace;       // 0x0668(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_2_1_bIsInitialized;             // 0x0678(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_1_ChildCache; // 0x0688(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_1_ParentCaches; // 0x0698(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_1_CachedItem;               // 0x06A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_1_PrimaryCachedSpace;       // 0x06B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_1_SecondaryCachedSpace;     // 0x06C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_1_1_bIsInitialized;           // 0x06D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_CachedItem;                       // 0x06E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_PrimaryCachedSpace;               // 0x06F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_5_SecondaryCachedSpace;             // 0x0708(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_5_bIsInitialized;                   // 0x0718(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_3_ChildCache; // 0x0728(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_3_ParentCaches; // 0x0738(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_2_ChildCache; // 0x0748(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_2_ParentCaches; // 0x0758(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_2_1_ChildCache; // 0x0768(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_2_1_ParentCaches; // 0x0778(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_3_ChildCache; // 0x0788(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_3_ParentCaches; // 0x0798(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_4_CachedItem;                     // 0x07A8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_4_PrimaryCachedSpace;             // 0x07B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_4_SecondaryCachedSpace;           // 0x07C8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_4_bIsInitialized;                 // 0x07D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_4_CachedItem;                   // 0x07E8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_4_PrimaryCachedSpace;           // 0x07F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_4_SecondaryCachedSpace;         // 0x0808(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_4_bIsInitialized;               // 0x0818(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_3_ChildCache; // 0x0828(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_3_ParentCaches; // 0x0838(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_3_CachedItem;                 // 0x0848(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_3_PrimaryCachedSpace;         // 0x0858(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_3_SecondaryCachedSpace;       // 0x0868(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_3_bIsInitialized;             // 0x0878(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_CachedItem;                     // 0x0888(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_PrimaryCachedSpace;             // 0x0898(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_2_SecondaryCachedSpace;           // 0x08A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_2_bIsInitialized;                 // 0x08B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_CachedItem;                     // 0x08C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_PrimaryCachedSpace;             // 0x08D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_2_2_SecondaryCachedSpace;           // 0x08E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_2_2_bIsInitialized;                 // 0x08F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_2_ChildCache; // 0x0908(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_2_ParentCaches; // 0x0918(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RotationConstraintLocalSpaceOffset_1_1_ChildCache; // 0x0928(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___RotationConstraintLocalSpaceOffset_1_1_ParentCaches; // 0x0938(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_1_ChildCache; // 0x0948(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_4_1_1_1_ParentCaches; // 0x0958(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_2_1_ChildCache; // 0x0968(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_2_1_ParentCaches; // 0x0978(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_2_CachedItem;                   // 0x0988(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_2_PrimaryCachedSpace;           // 0x0998(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_2_SecondaryCachedSpace;         // 0x09A8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_2_bIsInitialized;               // 0x09B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_2_CachedItem;                 // 0x09C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_2_PrimaryCachedSpace;         // 0x09D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_2_2_SecondaryCachedSpace;       // 0x09E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_2_2_bIsInitialized;             // 0x09F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_2_ChildCache; // 0x0A08(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_1_2_ParentCaches; // 0x0A18(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_2_CachedItem;               // 0x0A28(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_2_PrimaryCachedSpace;       // 0x0A38(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_1_1_2_SecondaryCachedSpace;     // 0x0A48(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_1_1_2_bIsInitialized;           // 0x0A58(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_CachedItem;                   // 0x0A68(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_PrimaryCachedSpace;           // 0x0A78(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_3_1_1_SecondaryCachedSpace;         // 0x0A88(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_3_1_1_bIsInitialized;               // 0x0A98(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};
	*/
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
