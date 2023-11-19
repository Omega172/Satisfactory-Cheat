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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	 */
	struct UGizmoBaseComponent_UpdateWorldLocalState_Params
	{
	public:
		bool                                                       bWorldIn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	 */
	struct UGizmoBaseComponent_UpdateHoverState_Params
	{
	public:
		bool                                                       bHoveringIn;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	 */
	struct UGizmoTransformSource_SetTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	 */
	struct UGizmoTransformSource_GetTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	 */
	struct UGizmoAxisSource_HasTangentVectors_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	 */
	struct UGizmoAxisSource_GetTangentVectors_Params
	{
	public:
		struct FVector                                             TangentXOut;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TangentYOut;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	 */
	struct UGizmoAxisSource_GetOrigin_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	 */
	struct UGizmoAxisSource_GetDirection_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
	 */
	struct UGizmoClickTarget_UpdateInteractingState_Params
	{
	public:
		bool                                                       bInteracting;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	 */
	struct UGizmoClickTarget_UpdateHoverState_Params
	{
	public:
		bool                                                       bHovering;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
	 */
	struct UGizmoClickMultiTarget_UpdateInteractingState_Params
	{
	public:
		bool                                                       bInteracting;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6WSR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   InPartIdentifier;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
	 */
	struct UGizmoClickMultiTarget_UpdateHoverState_Params
	{
	public:
		bool                                                       bHovering;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z4OF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   InPartIdentifier;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
	 */
	struct UGizmoClickMultiTarget_UpdateHittableState_Params
	{
	public:
		bool                                                       bHittable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OFRR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   InPartIdentifier;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
	 */
	struct UGizmoRenderMultiTarget_UpdateVisibilityState_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AT0Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		uint32_t                                                   InPartIdentifier;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	 */
	struct UGizmoStateTarget_EndUpdate_Params
	{	};

	/**
	 * Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	 */
	struct UGizmoStateTarget_BeginUpdate_Params
	{	};

	/**
	 * Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	 */
	struct UGizmoFloatParameterSource_SetParameter_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	 */
	struct UGizmoFloatParameterSource_GetParameter_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	 */
	struct UGizmoFloatParameterSource_EndModify_Params
	{	};

	/**
	 * Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	 */
	struct UGizmoFloatParameterSource_BeginModify_Params
	{	};

	/**
	 * Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	 */
	struct UGizmoVec2ParameterSource_SetParameter_Params
	{
	public:
		struct FVector2D                                           NewValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	 */
	struct UGizmoVec2ParameterSource_GetParameter_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	 */
	struct UGizmoVec2ParameterSource_EndModify_Params
	{	};

	/**
	 * Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	 */
	struct UGizmoVec2ParameterSource_BeginModify_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
