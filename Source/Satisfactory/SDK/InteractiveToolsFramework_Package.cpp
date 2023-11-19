﻿/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetBackedTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetBackedTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AssetBackedTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6DC0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bWorldIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");
		
		UGizmoBaseComponent_UpdateWorldLocalState_Params params {};
		params.bWorldIn = bWorldIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6BD0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bHoveringIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");
		
		UGizmoBaseComponent_UpdateHoverState_Params params {};
		params.bHoveringIn = bHoveringIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveCommandArguments.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveCommandArguments::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveCommandArguments");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveCommandResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveCommandResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveCommandResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolContextTransactionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolContextTransactionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInternalToolFrameworkActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInternalToolFrameworkActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolFrameworkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolFrameworkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolCameraFocusAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolCameraFocusAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolNestedAcceptCancelAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolNestedAcceptCancelAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolExclusiveToolAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolExclusiveToolAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MaterialProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshDescriptionCommitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescriptionCommitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshDescriptionCommitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshDescriptionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescriptionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshDescriptionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLocalVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLocalVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoPlaneTranslationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoPlaneTranslationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisRotationParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisRotationParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoUniformScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoUniformScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoPlaneScaleParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoPlaneScaleParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhysicsDataSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhysicsDataSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PhysicsDataSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimitiveComponentBackedTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitiveComponentBackedTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PrimitiveComponentBackedTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeletalMeshBackedTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeletalMeshBackedTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SkeletalMeshBackedTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticMeshBackedTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticMeshBackedTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.StaticMeshBackedTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnyButtonInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyButtonInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalClickDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalClickDragInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyAsModifierInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyAsModifierInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouseHoverBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseHoverBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalMouseHoverBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalMouseHoverBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalMouseHoverBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMouseWheelInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMouseWheelInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseWheelInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiClickSequenceInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiClickSequenceInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalSingleClickInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalSingleClickInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalSingleClickInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickOrDragInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickOrDragInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickOrDragInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleKeyCaptureBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleKeyCaptureBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleKeyCaptureBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidgetBaseBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidgetBaseBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.WidgetBaseBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisAngleGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisAngleGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisAngleGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisAngleGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisPositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisPositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAxisPositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAxisPositionGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoConstantAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoConstantAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoConstantFrameAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoConstantFrameAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoWorldAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoWorldAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushStampIndicatorBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushStampIndicatorBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushStampIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushStampIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACombinedTransformGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACombinedTransformGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.CombinedTransformGizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombinedTransformGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombinedTransformGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.CombinedTransformGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombinedTransformGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombinedTransformGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.CombinedTransformGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoArrowComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoArrowComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoCircleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoCircleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementLineBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementLineBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementLineBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementCircleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementCircleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementCircleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementArc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementArc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementArc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementArrow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementArrow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementArrow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementCircle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementCircle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementCircle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementCone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementCone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementCone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementCylinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementCylinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementCylinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementHitMultiTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementHitMultiTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementHitMultiTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementRectangle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementRectangle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementRectangle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoElementTorus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoElementTorus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoElementTorus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6890
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");
		
		UGizmoTransformSource_SetTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA66A0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
	 * 		Flags  -> (Native, Public, HasDefaults, Const)
	 */
	struct FTransform UGizmoTransformSource::GetTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");
		
		UGizmoTransformSource_GetTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6730
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	 * 		Flags  -> (Native, Public, Const)
	 */
	bool UGizmoAxisSource::HasTangentVectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");
		
		UGizmoAxisSource_HasTangentVectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA65B0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
	 * Parameters:
	 * 		struct FVector                                     TangentXOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TangentYOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");
		
		UGizmoAxisSource_GetTangentVectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TangentXOut != nullptr)
			*TangentXOut = params.TangentXOut;
		if (TangentYOut != nullptr)
			*TangentYOut = params.TangentYOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6500
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	 * 		Flags  -> (Native, Public, HasDefaults, Const)
	 */
	struct FVector UGizmoAxisSource::GetOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");
		
		UGizmoAxisSource_GetOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA64C0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
	 * 		Flags  -> (Native, Public, HasDefaults, Const)
	 */
	struct FVector UGizmoAxisSource::GetDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");
		
		UGizmoAxisSource_GetDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6D30
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bInteracting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickTarget::UpdateInteractingState(bool bInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState");
		
		UGizmoClickTarget_UpdateInteractingState_Params params {};
		params.bInteracting = bInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6B40
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bHovering                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickTarget::UpdateHoverState(bool bHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");
		
		UGizmoClickTarget_UpdateHoverState_Params params {};
		params.bHovering = bHovering;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoClickTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoClickTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6C60
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bInteracting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InPartIdentifier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickMultiTarget::UpdateInteractingState(bool bInteracting, uint32_t InPartIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState");
		
		UGizmoClickMultiTarget_UpdateInteractingState_Params params {};
		params.bInteracting = bInteracting;
		params.InPartIdentifier = InPartIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6A70
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bHovering                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InPartIdentifier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickMultiTarget::UpdateHoverState(bool bHovering, uint32_t InPartIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState");
		
		UGizmoClickMultiTarget_UpdateHoverState_Params params {};
		params.bHovering = bHovering;
		params.InPartIdentifier = InPartIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA69A0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bHittable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InPartIdentifier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoClickMultiTarget::UpdateHittableState(bool bHittable, uint32_t InPartIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState");
		
		UGizmoClickMultiTarget_UpdateHittableState_Params params {};
		params.bHittable = bHittable;
		params.InPartIdentifier = InPartIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoClickMultiTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoClickMultiTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickMultiTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoRenderTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoRenderTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRenderTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6A70
	 * 		Name   -> Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint32_t                                           InPartIdentifier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoRenderMultiTarget::UpdateVisibilityState(bool bVisible, uint32_t InPartIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState");
		
		UGizmoRenderMultiTarget_UpdateVisibilityState_Params params {};
		params.bVisible = bVisible;
		params.InPartIdentifier = InPartIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoRenderMultiTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoRenderMultiTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRenderMultiTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6460
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoStateTarget::EndUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");
		
		UGizmoStateTarget_EndUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6480
	 * 		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoStateTarget::BeginUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");
		
		UGizmoStateTarget_BeginUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6760
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoFloatParameterSource::SetParameter(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");
		
		UGizmoFloatParameterSource_SetParameter_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6540
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	 * 		Flags  -> (Native, Public, Const)
	 */
	float UGizmoFloatParameterSource::GetParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");
		
		UGizmoFloatParameterSource_GetParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA64A0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoFloatParameterSource::EndModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");
		
		UGizmoFloatParameterSource_EndModify_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6460
	 * 		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoFloatParameterSource::BeginModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");
		
		UGizmoFloatParameterSource_BeginModify_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA67F0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector2D                                   NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");
		
		UGizmoVec2ParameterSource_SetParameter_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6570
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	 * 		Flags  -> (Native, Public, HasDefaults, Const)
	 */
	struct FVector2D UGizmoVec2ParameterSource::GetParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");
		
		UGizmoVec2ParameterSource_GetParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA64A0
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoVec2ParameterSource::EndModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");
		
		UGizmoVec2ParameterSource_EndModify_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x479DA6460
	 * 		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	 * 		Flags  -> (Native, Public)
	 */
	void UGizmoVec2ParameterSource::BeginModify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");
		
		UGizmoVec2ParameterSource_BeginModify_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoVec2ParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoVec2ParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLineHandleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLineHandleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoRectangleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoRectangleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoViewContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoViewContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoViewContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLambdaHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLambdaHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentHitTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentHitTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIntervalGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIntervalGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntervalGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntervalGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIntervalGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIntervalGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoAxisIntervalParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoAxisIntervalParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLocalFloatParameterSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLocalFloatParameterSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlanePositionGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlanePositionGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlanePositionGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlanePositionGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepositionableTransformGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepositionableTransformGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepositionableTransformGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepositionableTransformGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.RepositionableTransformGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScalableSphereGizmoBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScalableSphereGizmoBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ScalableSphereGizmoBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScalableSphereGizmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScalableSphereGizmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ScalableSphereGizmo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScalableSphereGizmoInputBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScalableSphereGizmoInputBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoNilStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoNilStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoLambdaStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoLambdaStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoObjectModifyStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoObjectModifyStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoTransformChangeStateTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformChangeStateTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombinedTransformGizmoContextObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombinedTransformGizmoContextObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.CombinedTransformGizmoContextObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoBaseTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoBaseTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoComponentWorldTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoComponentWorldTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoScaledTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoScaledTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoTransformProxyTransformSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoTransformProxyTransformSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGizmoScaledAndUnscaledTransformSources.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGizmoScaledAndUnscaledTransformSources::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrushBaseProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrushBaseProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSurfacePointTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSurfacePointTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseBrushTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseBrushTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClickDragTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClickDragTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolWithToolTargetsBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolWithToolTargetsBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSurfacePointToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSurfacePointToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleClickTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleClickTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextObjectStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextObjectStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ContextObjectStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBehaviorSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehaviorSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputBehaviorSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputBehaviorSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalInputBehaviorSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalInputBehaviorSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalInputBehaviorSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputRouter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputRouter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveGizmoManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveGizmoManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolsContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolsContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USceneSnappingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneSnappingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SceneSnappingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectionSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSelectionSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTargetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTargetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolTargetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimitiveComponentToolTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitiveComponentToolTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PrimitiveComponentToolTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTargetFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTargetFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolTargetFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimitiveComponentToolTargetFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimitiveComponentToolTargetFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory");
		return ptr;
	}

}


