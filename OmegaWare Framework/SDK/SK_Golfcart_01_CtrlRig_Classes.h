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
	 * ControlRigBlueprintGeneratedClass SK_Golfcart_01_CtrlRig.SK_Golfcart_01_CtrlRig_C
	 * Size -> 0x0000 (FullSize[0x03F8] - InheritedSize[0x03F8])
	 */
	class USK_Golfcart_01_CtrlRig_C : public UControlRig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Golfcart_01_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x0330 (FullSize[0x0358] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___ParentConstraint_Child__Const;              // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___ParentConstraint_bMaintainOffset__Const;    // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransformFilter                                    RigVMModel___ParentConstraint_Filter__Const;             // 0x0035(0x0009) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_5Q3T[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___ParentConstraint_Parents__Const;            // 0x0040(0x0010) Edit, EditConst, NonTransactional
		struct FRigUnit_ParentConstraint_AdvancedSettings          RigVMModel___ParentConstraint_AdvancedSettings__Const;   // 0x0050(0x0002) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_GDDL[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RigVMModel___ParentConstraint_Weight__Const;             // 0x0054(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___AimItem_Item__Const;                        // 0x0058(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VNC3[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Primary__Const;                     // 0x0068(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_Secondary__Const;                   // 0x00B0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_6KMJ[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      RigVMModel___AimItem_DebugSettings__Const;               // 0x0100(0x0070) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_Child__Const; // 0x0170(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FFilterOptionPerAxis                                RigVMModel___PositionConstraintLocalSpaceOffset_Filter__Const; // 0x017C(0x0003) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_108J[0x1];                                   // 0x017F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_Parents__Const; // 0x0180(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___ParentConstraint_1_Child__Const;            // 0x0190(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4MPH[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___ParentConstraint_1_Parents__Const;          // 0x01A0(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_1_Item__Const;                      // 0x01B0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_381R[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_Primary__Const;                   // 0x01C0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_Child__Const; // 0x0208(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8CMU[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x0218(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___ParentConstraint_1_1_Child__Const;          // 0x0228(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V5GZ[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___ParentConstraint_1_1_Parents__Const;        // 0x0238(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_1_1_Item__Const;                    // 0x0248(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CP6O[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_1_Primary__Const;                 // 0x0258(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_1_Child__Const; // 0x02A0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2AM4[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_Parents__Const; // 0x02B0(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___ParentConstraint_1_2_Child__Const;          // 0x02C0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C6DV[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___ParentConstraint_1_2_Parents__Const;        // 0x02D0(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___AimItem_1_2_Item__Const;                    // 0x02E0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_76JS[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimItem_Target                             RigVMModel___AimItem_1_2_Primary__Const;                 // 0x02F0(0x0048) Edit, EditConst, NonTransactional, NoDestructor
		struct FRigElementKey                                      RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Child__Const; // 0x0338(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFWD[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FConstraintParent>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_Parents__Const; // 0x0348(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};
	*/

	/**
	 * RigVMMemoryStorageGeneratorClass SK_Golfcart_01_CtrlRig.RigVMMemory_Work
	 * Size -> 0x0200 (FullSize[0x0228] - InheritedSize[0x0028])
	 */
	/*
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		TArray<struct FCachedRigElement>                           RigVMModel___ParentConstraint_ChildCache;                // 0x0028(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___ParentConstraint_ParentCaches;              // 0x0038(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_CachedItem;                         // 0x0048(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_PrimaryCachedSpace;                 // 0x0058(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_SecondaryCachedSpace;               // 0x0068(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_bIsInitialized;                     // 0x0078(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_ChildCache; // 0x0088(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_ParentCaches; // 0x0098(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___ParentConstraint_1_ChildCache;              // 0x00A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___ParentConstraint_1_ParentCaches;            // 0x00B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_CachedItem;                       // 0x00C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_PrimaryCachedSpace;               // 0x00D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_SecondaryCachedSpace;             // 0x00E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_bIsInitialized;                   // 0x00F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x0108(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x0118(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___ParentConstraint_1_1_ChildCache;            // 0x0128(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___ParentConstraint_1_1_ParentCaches;          // 0x0138(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_CachedItem;                     // 0x0148(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_PrimaryCachedSpace;             // 0x0158(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_1_SecondaryCachedSpace;           // 0x0168(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_1_bIsInitialized;                 // 0x0178(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ChildCache; // 0x0188(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_1_ParentCaches; // 0x0198(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___ParentConstraint_1_2_ChildCache;            // 0x01A8(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___ParentConstraint_1_2_ParentCaches;          // 0x01B8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_CachedItem;                     // 0x01C8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_PrimaryCachedSpace;             // 0x01D8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___AimItem_1_2_SecondaryCachedSpace;           // 0x01E8(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___AimItem_1_2_bIsInitialized;                 // 0x01F8(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ChildCache; // 0x0208(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<struct FCachedRigElement>>                   RigVMModel___PositionConstraintLocalSpaceOffset_1_2_ParentCaches; // 0x0218(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};
	*/
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
