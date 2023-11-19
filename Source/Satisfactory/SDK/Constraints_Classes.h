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
	 * Class Constraints.ConstraintsActor
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class AConstraintsActor : public AActor
	{
	public:
		class UConstraintsManager*                                 ConstraintsManager;                                      // 0x02F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableConstraint
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UTickableConstraint : public UObject
	{
	public:
		struct FConstraintTickFunction                             ConstraintTick;                                          // 0x0028(0x0040) NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAJD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.ConstraintsManager
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UConstraintsManager : public UObject
	{
	public:
		class FMulticastSparseDelegate                             OnConstraintAdded_BP;                                    // 0x0028(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		class FMulticastSparseDelegate                             OnConstraintRemoved_BP;                                  // 0x0029(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGU8[0xE];                                   // 0x002A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTickableConstraint*>                         Constraints;                                             // 0x0038(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.ConstraintsScriptingLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint);
		bool STATIC_RemoveConstraint(class UWorld* InWorld, int32_t InIndex);
		class UConstraintsManager* STATIC_GetManager(class UWorld* InWorld);
		TArray<class UTickableConstraint*> STATIC_GetConstraintsArray(class UWorld* InWorld);
		class UTransformableHandle* STATIC_CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, const class FName& InAttachmentName);
		class UTransformableComponentHandle* STATIC_CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const class FName& InSocketName);
		class UTickableTransformConstraint* STATIC_CreateFromType(class UWorld* InWorld, ETransformConstraintType InType);
		bool STATIC_AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TransformableHandle
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UTransformableHandle : public UObject
	{
	public:
		struct FMovieSceneObjectBindingID                          ConstraintBindingID;                                     // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0O4R[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TransformableComponentHandle
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UTransformableComponentHandle : public UTransformableHandle
	{
	public:
		TWeakObjectPtr<class USceneComponent>                      Component;                                               // 0x0058(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableTransformConstraint
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class UTickableTransformConstraint : public UTickableConstraint
	{
	public:
		class UTransformableHandle*                                ParentTRSHandle;                                         // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformableHandle*                                ChildTRSHandle;                                          // 0x0078(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_084T[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDynamicOffset;                                          // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformConstraintType                                   Type;                                                    // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SNJ7[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableTranslationConstraint
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UTickableTranslationConstraint : public UTickableTransformConstraint
	{
	public:
		unsigned char                                              UnknownData_49WE[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetTranslation;                                       // 0x0098(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFilterOptionPerAxis                                AxisFilter;                                              // 0x00B0(0x0003) BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIEI[0x5];                                   // 0x00B3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableRotationConstraint
	 * Size -> 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
	 */
	class UTickableRotationConstraint : public UTickableTransformConstraint
	{
	public:
		unsigned char                                              UnknownData_T3VP[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OffsetRotation;                                          // 0x00A0(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFilterOptionPerAxis                                AxisFilter;                                              // 0x00C0(0x0003) BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q71T[0xD];                                   // 0x00C3(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableScaleConstraint
	 * Size -> 0x0028 (FullSize[0x00B8] - InheritedSize[0x0090])
	 */
	class UTickableScaleConstraint : public UTickableTransformConstraint
	{
	public:
		unsigned char                                              UnknownData_A0S6[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetScale;                                             // 0x0098(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFilterOptionPerAxis                                AxisFilter;                                              // 0x00B0(0x0003) BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIVY[0x5];                                   // 0x00B3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableParentConstraint
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UTickableParentConstraint : public UTickableTransformConstraint
	{
	public:
		unsigned char                                              UnknownData_R3ZD[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OffsetTransform;                                         // 0x00A0(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScaling;                                                // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransformFilter                                    TransformFilter;                                         // 0x0101(0x0009) BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NZU3[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Constraints.TickableLookAtConstraint
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UTickableLookAtConstraint : public UTickableTransformConstraint
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0090(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
