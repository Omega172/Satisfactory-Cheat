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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum InteractiveToolsFramework.EGizmoElementState
	 */
	enum class EGizmoElementState : uint8_t
	{
		None               = 0,
		Visible            = 1,
		Hittable           = 2,
		VisibleAndHittable = 3,
		MAX                = 4
	};

	/**
	 * Enum InteractiveToolsFramework.EGizmoElementInteractionState
	 */
	enum class EGizmoElementInteractionState : uint8_t
	{
		None        = 0,
		Hovering    = 1,
		Interacting = 2,
		MAX         = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EGizmoElementViewDependentType
	 */
	enum class EGizmoElementViewDependentType : uint8_t
	{
		None  = 0,
		Axis  = 1,
		Plane = 2,
		MAX   = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EGizmoElementViewAlignType
	 */
	enum class EGizmoElementViewAlignType : uint8_t
	{
		None        = 0,
		PointOnly   = 1,
		PointEye    = 2,
		PointScreen = 3,
		Axial       = 4,
		MAX         = 5
	};

	/**
	 * Enum InteractiveToolsFramework.EGizmoElementPartialType
	 */
	enum class EGizmoElementPartialType : uint8_t
	{
		None                 = 0,
		Partial              = 1,
		PartialViewDependent = 2,
		MAX                  = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EStandardToolContextMaterials
	 */
	enum class EStandardToolContextMaterials : uint8_t
	{
		VertexColorMaterial = 0,
		MAX                 = 1
	};

	/**
	 * Enum InteractiveToolsFramework.EToolContextCoordinateSystem
	 */
	enum class EToolContextCoordinateSystem : uint8_t
	{
		World = 0,
		Local = 1,
		MAX   = 2
	};

	/**
	 * Enum InteractiveToolsFramework.EToolContextTransformGizmoMode
	 */
	enum class EToolContextTransformGizmoMode : uint8_t
	{
		NoGizmo     = 0,
		Translation = 1,
		Rotation    = 2,
		Scale       = 3,
		Combined    = 4,
		MAX         = 5
	};

	/**
	 * Enum InteractiveToolsFramework.EToolMessageLevel
	 */
	enum class EToolMessageLevel : uint8_t
	{
		Internal         = 0,
		UserMessage      = 1,
		UserNotification = 2,
		UserWarning      = 3,
		UserError        = 4,
		MAX              = 5
	};

	/**
	 * Enum InteractiveToolsFramework.ESelectedObjectsModificationType
	 */
	enum class ESelectedObjectsModificationType : uint8_t
	{
		Replace = 0,
		Add     = 1,
		Remove  = 2,
		Clear   = 3,
		MAX     = 4
	};

	/**
	 * Enum InteractiveToolsFramework.EViewInteractionState
	 */
	enum class EViewInteractionState : uint8_t
	{
		None    = 0,
		Hovered = 1,
		Focused = 2,
		MAX     = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EGizmoElementArrowHeadType
	 */
	enum class EGizmoElementArrowHeadType : uint8_t
	{
		Cone = 0,
		Cube = 1,
		MAX  = 2
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureSide
	 */
	enum class EInputCaptureSide : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		Both  = 3,
		Any   = 4,
		MAX   = 5
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureRequestType
	 */
	enum class EInputCaptureRequestType : uint8_t
	{
		Begin  = 0,
		Ignore = 1,
		MAX    = 2
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureState
	 */
	enum class EInputCaptureState : uint8_t
	{
		Begin    = 0,
		Continue = 1,
		End      = 2,
		Ignore   = 3,
		MAX      = 4
	};

	/**
	 * Enum InteractiveToolsFramework.EInputDevices
	 */
	enum class EInputDevices : uint8_t
	{
		None             = 0,
		Keyboard         = 1,
		Mouse            = 2,
		Gamepad          = 3,
		OculusTouch      = 4,
		HTCViveWands     = 5,
		AnySpatialDevice = 6,
		TabletFingers    = 7,
		MAX              = 8
	};

	/**
	 * Enum InteractiveToolsFramework.ETransformGizmoSubElements
	 */
	enum class ETransformGizmoSubElements : uint8_t
	{
		None                        = 0,
		TranslateAxisX              = 1,
		TranslateAxisY              = 2,
		TranslateAxisZ              = 3,
		TranslateAllAxes            = 4,
		TranslatePlaneXY            = 5,
		TranslatePlaneXZ            = 6,
		TranslatePlaneYZ            = 7,
		TranslateAllPlanes          = 8,
		RotateAxisX                 = 9,
		RotateAxisY                 = 10,
		RotateAxisZ                 = 11,
		RotateAllAxes               = 12,
		ScaleAxisX                  = 13,
		ScaleAxisY                  = 14,
		ScaleAxisZ                  = 15,
		ScaleAllAxes                = 16,
		ScalePlaneYZ                = 17,
		ScalePlaneXZ                = 18,
		ScalePlaneXY                = 19,
		ScaleAllPlanes              = 20,
		ScaleUniform                = 21,
		StandardTranslateRotate     = 22,
		TranslateRotateUniformScale = 23,
		FullTranslateRotateScale    = 24,
		MAX                         = 25
	};

	/**
	 * Enum InteractiveToolsFramework.EToolShutdownType
	 */
	enum class EToolShutdownType : uint8_t
	{
		Completed = 0,
		Accept    = 1,
		Cancel    = 2,
		MAX       = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EToolSide
	 */
	enum class EToolSide : uint8_t
	{
		Left  = 0,
		Mouse = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EToolChangeTrackingMode
	 */
	enum class EToolChangeTrackingMode : uint8_t
	{
		NoChangeTracking = 0,
		UndoToExit       = 1,
		FullUndoRedo     = 2,
		MAX              = 3
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryType
	 */
	enum class ESceneSnapQueryType : uint8_t
	{
		Position = 0,
		Rotation = 1,
		MAX      = 2
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
	 */
	enum class ESceneSnapQueryTargetType : uint8_t
	{
		None       = 0,
		MeshVertex = 1,
		MeshEdge   = 2,
		Grid       = 3,
		All        = 4,
		MAX        = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
	 * Size -> 0x0020
	 */
	struct FGizmoVec2ParameterChange
	{
	public:
		struct FVector2D                                           InitialValue;                                            // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CurrentValue;                                            // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
	 * Size -> 0x0008
	 */
	struct FGizmoFloatParameterChange
	{
	public:
		float                                                      InitialValue;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoElementMaterialAttribute
	 * Size -> 0x000C
	 */
	struct FGizmoElementMaterialAttribute
	{
	public:
		TWeakObjectPtr<class UMaterialInterface>                   Value;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesChildState;                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJSA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoElementColorAttribute
	 * Size -> 0x0014
	 */
	struct FGizmoElementColorAttribute
	{
	public:
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasValue;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesChildState;                                    // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVGX[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
	 * Size -> 0x0060
	 */
	struct FGizmoElementMeshRenderStateAttributes
	{
	public:
		struct FGizmoElementMaterialAttribute                      Material;                                                // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementMaterialAttribute                      HoverMaterial;                                           // 0x000C(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementMaterialAttribute                      InteractMaterial;                                        // 0x0018(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementColorAttribute                         VertexColor;                                             // 0x0024(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementColorAttribute                         HoverVertexColor;                                        // 0x0038(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementColorAttribute                         InteractVertexColor;                                     // 0x004C(0x0014) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
	 * Size -> 0x003C
	 */
	struct FGizmoElementLineRenderStateAttributes
	{
	public:
		struct FGizmoElementColorAttribute                         LineColor;                                               // 0x0000(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementColorAttribute                         HoverLineColor;                                          // 0x0014(0x0014) NoDestructor, NativeAccessSpecifierPublic
		struct FGizmoElementColorAttribute                         InteractLineColor;                                       // 0x0028(0x0014) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.BrushStampData
	 * Size -> 0x0128
	 */
	struct FBrushStampData
	{
	public:
		unsigned char                                              UnknownData_SIX5[0x128];                                 // 0x0000(0x0128) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.BehaviorInfo
	 * Size -> 0x0020
	 */
	struct FBehaviorInfo
	{
	public:
		class UInputBehavior*                                      Behavior;                                                // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y06[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.ActiveGizmo
	 * Size -> 0x0030
	 */
	struct FActiveGizmo
	{
	public:
		class UInteractiveGizmo*                                   Gizmo;                                                   // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VBS[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.InputRayHit
	 * Size -> 0x0040
	 */
	struct FInputRayHit
	{
	public:
		bool                                                       bHit;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCGA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HitDepth;                                                // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x0010(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasHitNormal;                                           // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ8G[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HitIdentifier;                                           // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0YI[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UObject>                              HitObject;                                               // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.InputDeviceRay
	 * Size -> 0x0048
	 */
	struct FInputDeviceRay
	{
	public:
		struct FRay                                                WorldRay;                                                // 0x0000(0x0030) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHas2D;                                                  // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAS3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenPosition;                                          // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
