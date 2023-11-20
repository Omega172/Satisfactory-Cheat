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
	 * Class InteractiveToolsFramework.AssetBackedTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAssetBackedTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseComponent
	 * Size -> 0x0030 (FullSize[0x0598] - InheritedSize[0x0568])
	 */
	class UGizmoBaseComponent : public UPrimitiveComponent
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0568(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSizeMultiplier;                                     // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelHitDistanceThreshold;                               // 0x057C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39BW[0x8];                                   // 0x0580(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoViewContext*                                   GizmoViewContext;                                        // 0x0588(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OXTL[0x8];                                   // 0x0590(0x0008) Fix size for supers

	public:
		void UpdateWorldLocalState(bool bWorldIn);
		void UpdateHoverState(bool bHoveringIn);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveCommandArguments
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInteractiveCommandArguments : public UObject
	{
	public:
		unsigned char                                              UnknownData_0W8N[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveCommandResult
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveCommandResult : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveCommand
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveCommand : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmoBuilder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolContextTransactionProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolContextTransactionProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InternalToolFrameworkActor
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class AInternalToolFrameworkActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_7FL9[0x8];                                   // 0x02F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolFrameworkComponent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolFrameworkComponent : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolCameraFocusAPI : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolNestedAcceptCancelAPI : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolExclusiveToolAPI : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MaterialProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMaterialProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshDescriptionCommitter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshDescriptionCommitter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshDescriptionProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshDescriptionProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseVec2ParameterSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZVWQ[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
	 * Size -> 0x0030 (FullSize[0x0078] - InheritedSize[0x0048])
	 */
	class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x0058(0x0020) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseFloatParameterSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_4AZV[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
	 * Size -> 0x0148 (FullSize[0x0190] - InheritedSize[0x0048])
	 */
	class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              UnknownData_DCGO[0x88];                                  // 0x0048(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x00D0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00E0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      Parameter;                                               // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x00F4(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Z3I[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurTranslationAxis;                                      // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationOrigin;                                    // 0x0118(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x0130(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
	 * Size -> 0x01D8 (FullSize[0x0220] - InheritedSize[0x0048])
	 */
	class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              UnknownData_H9KS[0xC8];                                  // 0x0048(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0110(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0120(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		struct FVector2D                                           Parameter;                                               // 0x0130(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x0140(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationOrigin;                                    // 0x0160(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationNormal;                                    // 0x0178(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationAxisX;                                     // 0x0190(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationAxisY;                                     // 0x01A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x01C0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
	 * Size -> 0x0148 (FullSize[0x0190] - InheritedSize[0x0048])
	 */
	class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              UnknownData_0YLZ[0x88];                                  // 0x0048(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x00D0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00E0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      Angle;                                                   // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x00F4(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65WI[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurRotationAxis;                                         // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurRotationOrigin;                                       // 0x0118(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x0130(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
	 * Size -> 0x0118 (FullSize[0x0160] - InheritedSize[0x0048])
	 */
	class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSPC[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Parameter;                                               // 0x0070(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x0080(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x00A0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleNormal;                                          // 0x00B8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisX;                                           // 0x00D0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisY;                                           // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x0100(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
	 * Size -> 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
	 */
	class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampToZero;                                            // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWW3[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Parameter;                                               // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x0074(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6S6[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CurScaleAxis;                                            // 0x0080(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x0098(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x00B0(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
	 * Size -> 0x0168 (FullSize[0x01B0] - InheritedSize[0x0048])
	 */
	class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              UnknownData_CRL0[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEqualScaling;                                        // 0x00B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampToZero;                                            // 0x00B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8SAX[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Parameter;                                               // 0x00B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x00C8(0x0020) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x00E8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleNormal;                                          // 0x0100(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisX;                                           // 0x0118(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisY;                                           // 0x0130(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IECP[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0150(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PhysicsDataSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhysicsDataSource : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimitiveComponentBackedTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SkeletalMeshBackedTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkeletalMeshBackedTarget : public UAssetBackedTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.StaticMeshBackedTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStaticMeshBackedTarget : public UAssetBackedTarget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputBehavior
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputBehavior : public UObject
	{
	public:
		unsigned char                                              UnknownData_D3CS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AnyButtonInputBehavior
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAnyButtonInputBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_B31E[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragInputBehavior
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UClickDragInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_KXKB[0xA0];                                  // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUpdateModifiersDuringDrag;                              // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QC4F[0x1F];                                  // 0x0121(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.LocalClickDragInputBehavior
	 * Size -> 0x0140 (FullSize[0x0280] - InheritedSize[0x0140])
	 */
	class ULocalClickDragInputBehavior : public UClickDragInputBehavior
	{
	public:
		unsigned char                                              UnknownData_7X9Z[0x140];                                 // 0x0140(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.KeyAsModifierInputBehavior
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UKeyAsModifierInputBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_5DGC[0x68];                                  // 0x0030(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MouseHoverBehavior
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UMouseHoverBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_PMJI[0x68];                                  // 0x0030(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.LocalMouseHoverBehavior
	 * Size -> 0x0148 (FullSize[0x01E0] - InheritedSize[0x0098])
	 */
	class ULocalMouseHoverBehavior : public UMouseHoverBehavior
	{
	public:
		unsigned char                                              UnknownData_BX2L[0x148];                                 // 0x0098(0x0148) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MouseWheelInputBehavior
	 * Size -> 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
	 */
	class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_3NK9[0xB0];                                  // 0x0080(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
	 * Size -> 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
	 */
	class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_NZ7L[0xB0];                                  // 0x0080(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickInputBehavior
	 * Size -> 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
	 */
	class USingleClickInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_1XY7[0x40];                                  // 0x0080(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HitTestOnRelease;                                        // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z027[0x6F];                                  // 0x00C1(0x006F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.LocalSingleClickInputBehavior
	 * Size -> 0x00D0 (FullSize[0x0200] - InheritedSize[0x0130])
	 */
	class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
	{
	public:
		unsigned char                                              UnknownData_JSNG[0xD0];                                  // 0x0130(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
	 * Size -> 0x0100 (FullSize[0x0180] - InheritedSize[0x0080])
	 */
	class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_TIRC[0xA0];                                  // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBeginDragIfClickTargetNotHit;                           // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL9Z[0x3];                                   // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClickDistanceThreshold;                                  // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MJR[0x58];                                  // 0x0128(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleKeyCaptureBehavior
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class USingleKeyCaptureBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_33X0[0xE0];                                  // 0x0030(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.WidgetBaseBehavior
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBaseBehavior : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisAngleGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmo : public UObject
	{
	public:
		unsigned char                                              UnknownData_EZIP[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   InputBehaviors;                                          // 0x0030(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisAngleGizmo
	 * Size -> 0x0198 (FullSize[0x01D0] - InheritedSize[0x0038])
	 */
	class UAxisAngleGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_JHFC[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              AngleSource[0x10];                                       // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              HitTarget[0x10];                                         // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UClickDragInputBehavior*                             MouseBehavior;                                           // 0x0088(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB68[0x80];                                  // 0x0090(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInInteraction;                                          // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2O7[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotationOrigin;                                          // 0x0118(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationAxis;                                            // 0x0130(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationPlaneX;                                          // 0x0148(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationPlaneY;                                          // 0x0160(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x0178(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x0190(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionStartAngle;                                   // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionCurAngle;                                     // 0x01AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOX1[0x20];                                  // 0x01B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisPositionGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisPositionGizmo
	 * Size -> 0x0188 (FullSize[0x01C0] - InheritedSize[0x0038])
	 */
	class UAxisPositionGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_OAYK[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              ParameterSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UGizmoViewContext*                                   GizmoViewContext;                                        // 0x0068(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HitTarget[0x10];                                         // 0x0070(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0080(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UClickDragInputBehavior*                             MouseBehavior;                                           // 0x0090(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSignedAxis;                                       // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P1TF[0x88];                                  // 0x0099(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInInteraction;                                          // 0x0121(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DP49[0x6];                                   // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InteractionOrigin;                                       // 0x0128(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxis;                                         // 0x0140(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x0170(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionStartParameter;                               // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionCurParameter;                                 // 0x018C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParameterSign;                                           // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MLE[0x2C];                                  // 0x0194(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoConstantAxisSource
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGizmoConstantAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_PAHI[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGizmoConstantFrameAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_UNIR[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TangentX;                                                // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TangentY;                                                // 0x0078(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoWorldAxisSource
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGizmoWorldAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_XRVQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AxisIndex;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6UP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentAxisSource
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGizmoComponentAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_EC0O[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Component;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AxisIndex;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalAxes;                                              // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWJR[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushStampIndicatorBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushStampIndicator
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UBrushStampIndicator : public UInteractiveGizmo
	{
	public:
		bool                                                       bVisible;                                                // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZBV[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrushRadius;                                             // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushFalloff;                                            // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDRH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BrushPosition;                                           // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BrushNormal;                                             // 0x0060(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawIndicatorLines;                                     // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawRadiusCircle;                                       // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6V2U[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SampleStepCount;                                         // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LineColor;                                               // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDepthTested;                                            // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawSecondaryLines;                                     // 0x0095(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THF0[0x2];                                   // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondaryLineThickness;                                  // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryLineColor;                                      // 0x009C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF9P[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 AttachedComponent;                                       // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHUL[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoActor
	 * Size -> 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
	 */
	class AGizmoActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.CombinedTransformGizmoActor
	 * Size -> 0x0090 (FullSize[0x0390] - InheritedSize[0x0300])
	 */
	class ACombinedTransformGizmoActor : public AGizmoActor
	{
	public:
		class UPrimitiveComponent*                                 TranslateX;                                              // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateY;                                              // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateZ;                                              // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateYZ;                                             // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateXZ;                                             // 0x0320(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateXY;                                             // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateX;                                                 // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateY;                                                 // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateZ;                                                 // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotationSphere;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 UniformScale;                                            // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleX;                                              // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleY;                                              // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleZ;                                              // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleYZ;                                            // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleXZ;                                            // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleXY;                                            // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O54G[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		unsigned char                                              UnknownData_839X[0xC8];                                  // 0x0028(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.CombinedTransformGizmo
	 * Size -> 0x0368 (FullSize[0x03A0] - InheritedSize[0x0038])
	 */
	class UCombinedTransformGizmo : public UInteractiveGizmo
	{
	public:
		class UTransformProxy*                                     ActiveTarget;                                            // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPJL[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bGridSizeIsExplicit;                                     // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A508[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExplicitGridSize;                                        // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotationGridSizeIsExplicit;                             // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42AF[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ExplicitRotationGridSize;                                // 0x0068(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldRotGrid;                                     // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContextCoordinateSystem;                             // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9VB[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EToolContextCoordinateSystem                               CurrentCoordinateSystem;                                 // 0x0084(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHJ9[0x3];                                   // 0x0085(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bUseContextGizmoMode;                                    // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EToolContextTransformGizmoMode                             ActiveGizmoMode;                                         // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNJI[0x126];                                 // 0x008A(0x0126) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         ActiveComponents;                                        // 0x01B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UInteractiveGizmo*>                           ActiveGizmos;                                            // 0x01C0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YZL2[0x50];                                  // 0x01D0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoConstantFrameAxisSource*                       CameraAxisSource;                                        // 0x0220(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisXSource;                                             // 0x0228(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisYSource;                                             // 0x0230(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisZSource;                                             // 0x0238(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisXSource;                                         // 0x0240(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisYSource;                                         // 0x0248(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisZSource;                                         // 0x0250(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x0258(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JAEX[0x140];                                 // 0x0260(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoArrowComponent
	 * Size -> 0x0028 (FullSize[0x05C0] - InheritedSize[0x0598])
	 */
	class UGizmoArrowComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Direction;                                               // 0x0598(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gap;                                                     // 0x05B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x05B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x05B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HH7L[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBoxComponent
	 * Size -> 0x0058 (FullSize[0x05F0] - InheritedSize[0x0598])
	 */
	class UGizmoBoxComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0598(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Rotation;                                                // 0x05B0(0x0020) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Dimensions;                                              // 0x05D0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x05E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveHiddenLines;                                      // 0x05EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAxisFlip;                                         // 0x05ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T4SV[0x2];                                   // 0x05EE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoCircleComponent
	 * Size -> 0x0028 (FullSize[0x05C0] - InheritedSize[0x0598])
	 */
	class UGizmoCircleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0598(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x05B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x05B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSides;                                                // 0x05B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bViewAligned;                                            // 0x05BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawFullCircle;                                         // 0x05BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAllowFrontFacingHits;                               // 0x05BE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTD3[0x1];                                   // 0x05BF(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementBase
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UGizmoElementBase : public UObject
	{
	public:
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabledForPerspectiveProjection;                        // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabledForOrthographicProjection;                       // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabledForDefaultState;                                 // 0x002B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabledForHoveringState;                                // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnabledForInteractingState;                             // 0x002D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WARR[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   PartIdentifier;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGizmoElementMeshRenderStateAttributes              MeshRenderAttributes;                                    // 0x0034(0x0060) NoDestructor, Protected, NativeAccessSpecifierProtected
		EGizmoElementState                                         ElementState;                                            // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LJJF[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EGizmoElementInteractionState                              ElementInteractionState;                                 // 0x0098(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GZSE[0x3];                                   // 0x0099(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EGizmoElementViewDependentType                             ViewDependentType;                                       // 0x009C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_47OY[0x3];                                   // 0x009D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             ViewDependentAxis;                                       // 0x00A0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewDependentAngleTol;                                   // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewDependentAxialMaxCosAngleTol;                        // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewDependentPlanarMinCosAngleTol;                       // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGizmoElementViewAlignType                                 ViewAlignType;                                           // 0x00C4(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IF09[0x3];                                   // 0x00C5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             ViewAlignAxis;                                           // 0x00C8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ViewAlignNormal;                                         // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewAlignAxialAngleTol;                                  // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewAlignAxialMaxCosAngleTol;                            // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PixelHitDistanceThreshold;                               // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HEZA[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementLineBase
	 * Size -> 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
	 */
	class UGizmoElementLineBase : public UGizmoElementBase
	{
	public:
		struct FGizmoElementLineRenderStateAttributes              LineRenderAttributes;                                    // 0x0108(0x003C) NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      LineThickness;                                           // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScreenSpaceLine;                                        // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G05N[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoverLineThicknessMultiplier;                            // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InteractLineThicknessMultiplier;                         // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QOUR[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementCircleBase
	 * Size -> 0x0070 (FullSize[0x01C8] - InheritedSize[0x0158])
	 */
	class UGizmoElementCircleBase : public UGizmoElementLineBase
	{
	public:
		struct FVector                                             Center;                                                  // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Axis0;                                                   // 0x0170(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Axis1;                                                   // 0x0188(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     Radius;                                                  // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSegments;                                             // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGizmoElementPartialType                                   PartialType;                                             // 0x01AC(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H5CK[0x3];                                   // 0x01AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		double                                                     PartialStartAngle;                                       // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     PartialEndAngle;                                         // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     PartialViewDependentMaxCosTol;                           // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementArc
	 * Size -> 0x0008 (FullSize[0x01D0] - InheritedSize[0x01C8])
	 */
	class UGizmoElementArc : public UGizmoElementCircleBase
	{
	public:
		double                                                     InnerRadius;                                             // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementArrow
	 * Size -> 0x0080 (FullSize[0x0188] - InheritedSize[0x0108])
	 */
	class UGizmoElementArrow : public UGizmoElementBase
	{
	public:
		unsigned char                                              UnknownData_WMC5[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoElementCylinder*                               CylinderElement;                                         // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoElementCone*                                   ConeElement;                                             // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoElementBox*                                    BoxElement;                                              // 0x0120(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Base;                                                    // 0x0128(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Direction;                                               // 0x0140(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             SideDirection;                                           // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BodyLength;                                              // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BodyRadius;                                              // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeadLength;                                              // 0x0178(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeadRadius;                                              // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSides;                                                // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGizmoElementArrowHeadType                                 HeadType;                                                // 0x0184(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NI41[0x3];                                   // 0x0185(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementBox
	 * Size -> 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
	 */
	class UGizmoElementBox : public UGizmoElementBase
	{
	public:
		struct FVector                                             Center;                                                  // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Dimensions;                                              // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             UpDirection;                                             // 0x0138(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             SideDirection;                                           // 0x0150(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementCircle
	 * Size -> 0x0008 (FullSize[0x01D0] - InheritedSize[0x01C8])
	 */
	class UGizmoElementCircle : public UGizmoElementCircleBase
	{
	public:
		bool                                                       bDrawMesh;                                               // 0x01C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawLine;                                               // 0x01C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitMesh;                                                // 0x01CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitLine;                                                // 0x01CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8WSB[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementCone
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UGizmoElementCone : public UGizmoElementBase
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Direction;                                               // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSides;                                                // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NIVC[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementCylinder
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	class UGizmoElementCylinder : public UGizmoElementBase
	{
	public:
		struct FVector                                             Base;                                                    // 0x0108(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             Direction;                                               // 0x0120(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x0138(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x013C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumSides;                                                // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QDR0[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementGroup
	 * Size -> 0x0018 (FullSize[0x0170] - InheritedSize[0x0158])
	 */
	class UGizmoElementGroup : public UGizmoElementLineBase
	{
	public:
		bool                                                       bConstantScale;                                          // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitOwner;                                               // 0x0159(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9LI9[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGizmoElementBase*>                           Elements;                                                // 0x0160(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementHitTarget
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGizmoElementHitTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_SVYJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoElementBase*                                   GizmoElement;                                            // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoViewContext*                                   GizmoViewContext;                                        // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     GizmoTransformProxy;                                     // 0x0040(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0K0[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementHitMultiTarget
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UGizmoElementHitMultiTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_WVRY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoElementBase*                                   GizmoElement;                                            // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoViewContext*                                   GizmoViewContext;                                        // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     GizmoTransformProxy;                                     // 0x0040(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2QT[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementRectangle
	 * Size -> 0x0058 (FullSize[0x01B0] - InheritedSize[0x0158])
	 */
	class UGizmoElementRectangle : public UGizmoElementLineBase
	{
	public:
		struct FVector                                             Center;                                                  // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Width;                                                   // 0x0170(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x0174(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             UpDirection;                                             // 0x0178(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             SideDirection;                                           // 0x0190(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawMesh;                                               // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawLine;                                               // 0x01A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitMesh;                                                // 0x01AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHitLine;                                                // 0x01AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XBIA[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoElementTorus
	 * Size -> 0x0010 (FullSize[0x01D8] - InheritedSize[0x01C8])
	 */
	class UGizmoElementTorus : public UGizmoElementCircleBase
	{
	public:
		double                                                     InnerRadius;                                             // 0x01C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumInnerSlices;                                          // 0x01D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEndCaps;                                                // 0x01D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ITO8[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoTransformSource : public UInterface
	{
	public:
		void SetTransform(const struct FTransform& NewTransform);
		struct FTransform GetTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoAxisSource : public UInterface
	{
	public:
		bool HasTangentVectors();
		void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
		struct FVector GetOrigin();
		struct FVector GetDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoClickTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoClickTarget : public UInterface
	{
	public:
		void UpdateInteractingState(bool bInteracting);
		void UpdateHoverState(bool bHovering);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoClickMultiTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoClickMultiTarget : public UInterface
	{
	public:
		void UpdateInteractingState(bool bInteracting, uint32_t InPartIdentifier);
		void UpdateHoverState(bool bHovering, uint32_t InPartIdentifier);
		void UpdateHittableState(bool bHittable, uint32_t InPartIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoRenderTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoRenderTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoRenderMultiTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoRenderMultiTarget : public UInterface
	{
	public:
		void UpdateVisibilityState(bool bVisible, uint32_t InPartIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoStateTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoStateTarget : public UInterface
	{
	public:
		void EndUpdate();
		void BeginUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoFloatParameterSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoFloatParameterSource : public UInterface
	{
	public:
		void SetParameter(float NewValue);
		float GetParameter();
		void EndModify();
		void BeginModify();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoVec2ParameterSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoVec2ParameterSource : public UInterface
	{
	public:
		void SetParameter(const struct FVector2D& NewValue);
		struct FVector2D GetParameter();
		void EndModify();
		void BeginModify();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLineHandleComponent
	 * Size -> 0x0048 (FullSize[0x05E0] - InheritedSize[0x0598])
	 */
	class UGizmoLineHandleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0598(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandleSize;                                              // 0x05B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x05B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x05B8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x05D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImageScale;                                             // 0x05D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7DM[0xB];                                   // 0x05D5(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoRectangleComponent
	 * Size -> 0x0058 (FullSize[0x05F0] - InheritedSize[0x0598])
	 */
	class UGizmoRectangleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             DirectionX;                                              // 0x0598(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DirectionY;                                              // 0x05B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrientYAccordingToCamera;                               // 0x05C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHU0[0x3];                                   // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OffsetX;                                                 // 0x05CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetY;                                                 // 0x05D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthX;                                                 // 0x05D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthY;                                                 // 0x05D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x05DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SegmentFlags;                                            // 0x05E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7AK[0xF];                                   // 0x05E1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoViewContext
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UGizmoViewContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_SLLQ[0x1B8];                                 // 0x0028(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLambdaHitTarget
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UGizmoLambdaHitTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_F3RN[0xC8];                                  // 0x0028(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentHitTarget
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UGizmoComponentHitTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_E8TA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 Component;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDJO[0xC8];                                  // 0x0038(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmoActor
	 * Size -> 0x0020 (FullSize[0x0320] - InheritedSize[0x0300])
	 */
	class AIntervalGizmoActor : public AGizmoActor
	{
	public:
		class UGizmoLineHandleComponent*                           UpIntervalComponent;                                     // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoLineHandleComponent*                           DownIntervalComponent;                                   // 0x0308(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoLineHandleComponent*                           ForwardIntervalComponent;                                // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMWD[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmoBuilder
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		unsigned char                                              UnknownData_G4BR[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmo
	 * Size -> 0x01C8 (FullSize[0x0200] - InheritedSize[0x0038])
	 */
	class UIntervalGizmo : public UInteractiveGizmo
	{
	public:
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QF4T[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     TransformProxy;                                          // 0x0098(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         ActiveComponents;                                        // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UInteractiveGizmo*>                           ActiveGizmos;                                            // 0x00B0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KKXH[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoComponentAxisSource*                           AxisYSource;                                             // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisZSource;                                             // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AVQB[0x118];                                 // 0x00E8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              FloatParameterSource[0x10];                              // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      MinParameter;                                            // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxParameter;                                            // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		float                                                      Value;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x004C(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZM5[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PlanePositionGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PlanePositionGizmo
	 * Size -> 0x0238 (FullSize[0x0270] - InheritedSize[0x0038])
	 */
	class UPlanePositionGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_0GAT[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              ParameterSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              HitTarget[0x10];                                         // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UClickDragInputBehavior*                             MouseBehavior;                                           // 0x0088(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSignedAxis;                                       // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipX;                                                  // 0x0091(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipY;                                                  // 0x0092(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYN7[0x8D];                                  // 0x0093(0x008D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInInteraction;                                          // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBTO[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InteractionOrigin;                                       // 0x0128(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionNormal;                                       // 0x0140(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxisX;                                        // 0x0158(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxisY;                                        // 0x0170(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x0188(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x01A0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionStartParameter;                               // 0x01B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionCurParameter;                                 // 0x01C8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ParameterSigns;                                          // 0x01D8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVM5[0x88];                                  // 0x01E8(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.RepositionableTransformGizmo
	 * Size -> 0x00A0 (FullSize[0x0440] - InheritedSize[0x03A0])
	 */
	class URepositionableTransformGizmo : public UCombinedTransformGizmo
	{
	public:
		unsigned char                                              UnknownData_TPM5[0x90];                                  // 0x03A0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoTransformChangeStateTarget*                    RepositionStateTarget;                                   // 0x0430(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NBCY[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ScalableSphereGizmo
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UScalableSphereGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_A5D9[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitErrorThreshold;                                       // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTC6[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TransactionDescription;                                  // 0x0088(0x0018) NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsHovering;                                             // 0x00A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDragging;                                             // 0x00A5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QMMT[0x2];                                   // 0x00A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     ActiveTarget;                                            // 0x00A8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             ActiveAxis;                                              // 0x00B0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             DragStartWorldPosition;                                  // 0x00C8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             DragCurrentPositionProjected;                            // 0x00E0(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InteractionStartParameter;                               // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IXB0[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_QKHO[0x50];                                  // 0x0080(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoNilStateTarget
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGizmoNilStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_3MEZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLambdaStateTarget
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGizmoLambdaStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_4WFN[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGizmoObjectModifyStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_F1SW[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TransactionManager[0x10];                                // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UGizmoTransformChangeStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_6RVL[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TransactionManager[0x10];                                // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_DUYO[0xE0];                                  // 0x0060(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UCombinedTransformGizmoContextObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_9ZB4[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.TransformProxy
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UTransformProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_3QG7[0xA8];                                  // 0x0028(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRotatePerObject;                                        // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetPivotMode;                                           // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04TL[0x1E];                                  // 0x00D2(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SharedTransform;                                         // 0x00F0(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          InitialSharedTransform;                                  // 0x0150(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseTransformSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseTransformSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_XM8Y[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyComponentOnTransform;                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4IC[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoScaledTransformSource
	 * Size -> 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
	 */
	class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
	{
	public:
		unsigned char                                              ChildTransformSource[0x10];                              // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_MUD7[0x88];                                  // 0x0058(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
	{
	public:
		class UTransformProxy*                                     Proxy;                                                   // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM3S[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
	{
	public:
		unsigned char                                              ScaledTransformSource[0x10];                             // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnscaledTransformSource[0x10];                           // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolPropertySet
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInteractiveToolPropertySet : public UObject
	{
	public:
		unsigned char                                              UnknownData_DR30[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UInteractiveToolPropertySet*>    CachedPropertiesMap;                                     // 0x0038(0x0050) Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected, CPF_SkipSerialization
		bool                                                       bIsPropertySetEnabled;                                   // 0x0088(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		unsigned char                                              UnknownData_3W1V[0x1F];                                  // 0x0089(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushBaseProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UBrushBaseProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      BrushSize;                                               // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecifyRadius;                                          // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLEH[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrushRadius;                                             // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushStrength;                                           // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushFalloffAmount;                                      // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStrength;                                           // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFalloff;                                            // 0x00BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9NV[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveTool
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UInteractiveTool : public UObject
	{
	public:
		unsigned char                                              UnknownData_YT7S[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   InputBehaviors;                                          // 0x0060(0x0008) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<class UObject*>                                     ToolPropertyObjects;                                     // 0x0068(0x0010) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, UObjectWrapper, NativeAccessSpecifierProtected, CPF_SkipSerialization
		unsigned char                                              UnknownData_6WU0[0x20];                                  // 0x0078(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleSelectionTool
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class USingleSelectionTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_0UXZ[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UToolTarget*                                         Target;                                                  // 0x00A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSurfacePointTool
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UMeshSurfacePointTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_7W69[0x50];                                  // 0x00A8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UWorld>                               TargetWorld;                                             // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BaseBrushTool
	 * Size -> 0x0180 (FullSize[0x0280] - InheritedSize[0x0100])
	 */
	class UBaseBrushTool : public UMeshSurfacePointTool
	{
	public:
		class UBrushBaseProperties*                                BrushProperties;                                         // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInBrushStroke;                                          // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1TW[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorldToLocalScale;                                       // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBrushStampData                                     LastBrushStamp;                                          // 0x0110(0x0128) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XUU[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PropertyClass[0x30];                                     // 0x0248(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class UBrushStampIndicator*                                BrushStampIndicator;                                     // 0x0278(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolBuilder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClickDragToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragTool
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UClickDragTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_YFNS[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		unsigned char                                              UnknownData_RNZK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USingleClickToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickTool
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class USingleClickTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_KQHG[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ContextObjectStore
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UContextObjectStore : public UObject
	{
	public:
		TArray<class UObject*>                                     ContextObjects;                                          // 0x0028(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputBehaviorSet
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputBehaviorSet : public UObject
	{
	public:
		TArray<struct FBehaviorInfo>                               Behaviors;                                               // 0x0028(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputBehaviorSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputBehaviorSource : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.LocalInputBehaviorSource
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class ULocalInputBehaviorSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_0EYK[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputRouter
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UInputRouter : public UObject
	{
	public:
		bool                                                       bAutoInvalidateOnHover;                                  // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoInvalidateOnCapture;                                // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXPN[0xE];                                   // 0x002A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   ActiveInputBehaviors;                                    // 0x0038(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZHKW[0x150];                                 // 0x0040(0x0150) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractionMechanic
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInteractionMechanic : public UObject
	{
	public:
		unsigned char                                              UnknownData_JDKL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmoManager
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmoManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_3MX0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGizmo>                                ActiveGizmos;                                            // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W5UC[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UInteractiveGizmoBuilder*>       GizmoBuilders;                                           // 0x0058(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIXJ[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolManager
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class UInteractiveToolManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_2YQE[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveTool*                                    ActiveLeftTool;                                          // 0x0058(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveTool*                                    ActiveRightTool;                                         // 0x0060(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFEY[0x80];                                  // 0x0068(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UInteractiveToolBuilder*>        ToolBuilders;                                            // 0x00E8(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T29T[0x60];                                  // 0x0138(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolsContext
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class UInteractiveToolsContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_TM88[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputRouter*                                        InputRouter;                                             // 0x0058(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UToolTargetManager*                                  TargetManager;                                           // 0x0060(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveToolManager*                             ToolManager;                                             // 0x0068(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0070(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UContextObjectStore*                                 ContextObjectStore;                                      // 0x0078(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N7W[0x280];                                 // 0x0080(0x0280) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ToolManagerClass[0x30];                                  // 0x0300(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MultiSelectionTool
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UMultiSelectionTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_WWJH[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UToolTarget*>                                 Targets;                                                 // 0x00A0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SceneSnappingManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USceneSnappingManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SelectionSet
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USelectionSet : public UObject
	{
	public:
		unsigned char                                              UnknownData_0OKU[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSelectionSet
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UMeshSelectionSet : public USelectionSet
	{
	public:
		TArray<int32_t>                                            Vertices;                                                // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Edges;                                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Faces;                                                   // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Groups;                                                  // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolTargetManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UToolTargetManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_6H4R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UToolTargetFactory*>                          Factories;                                               // 0x0030(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolTarget : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PrimitiveComponentToolTarget
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPrimitiveComponentToolTarget : public UToolTarget
	{
	public:
		unsigned char                                              UnknownData_WZD0[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolTargetFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolTargetFactory : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
