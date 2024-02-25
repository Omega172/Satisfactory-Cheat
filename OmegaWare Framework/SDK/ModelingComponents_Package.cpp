/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * 		Name   -> PredefinedFunction UMeshTopologySelectionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshTopologySelectionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshTopologySelectionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoundarySelectionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoundarySelectionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BoundarySelectionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshCommitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshCommitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshCommitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPersistentDynamicMeshSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPersistentDynamicMeshSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PersistentDynamicMeshSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractiveToolActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractiveToolActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.InteractiveToolActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolActivityHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolActivityHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ToolActivityHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3922F0
	 * 		Name   -> Function ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshTopologySelectionMechanicProperties::SelectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll");
		
		UMeshTopologySelectionMechanicProperties_SelectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391FB0
	 * 		Name   -> Function ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UMeshTopologySelectionMechanicProperties::InvertSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection");
		
		UMeshTopologySelectionMechanicProperties_InvertSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshTopologySelectionMechanicProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshTopologySelectionMechanicProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshTopologySelectionMechanicProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometrySelectionEditCommandArguments.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometrySelectionEditCommandArguments::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.GeometrySelectionEditCommandArguments");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometrySelectionEditCommandResult.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometrySelectionEditCommandResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.GeometrySelectionEditCommandResult");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometrySelectionEditCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometrySelectionEditCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.GeometrySelectionEditCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoxelProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoxelProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.VoxelProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiSelectionMeshEditingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSelectionMeshEditingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MultiSelectionMeshEditingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnAcceptHandleSourcesPropertiesBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnAcceptHandleSourcesPropertiesBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnAcceptHandleSourcesProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnAcceptHandleSourcesProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OnAcceptHandleSourcesProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedHandleSourceProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedHandleSourceProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformInputsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformInputsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.TransformInputsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiSelectionMeshEditingTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSelectionMeshEditingTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MultiSelectionMeshEditingTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseCreateFromSelectedTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCreateFromSelectedTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseCreateFromSelectedTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMeshProcessingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMeshProcessingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMeshProcessingTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMeshProcessingTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseMeshProcessingTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseVoxelTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseVoxelTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseVoxelTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshSurfacePointMeshEditingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSurfacePointMeshEditingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleSelectionMeshEditingToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleSelectionMeshEditingToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SingleSelectionMeshEditingToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleSelectionMeshEditingTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleSelectionMeshEditingTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SingleSelectionMeshEditingTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleTargetWithSelectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleTargetWithSelectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SingleTargetWithSelectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleTargetWithSelectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleTargetWithSelectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SingleTargetWithSelectionTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicMeshReplacementChangeTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicMeshReplacementChangeTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshReplacementChangeTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392430
	 * 		Name   -> Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicMesh*                                NewMesh                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOctreeDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh");
		
		UOctreeDynamicMeshComponent_SetDynamicMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOctreeDynamicMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOctreeDynamicMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OctreeDynamicMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULineSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULineSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.LineSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshElementsVisualizerProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshElementsVisualizerProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshElementsVisualizerProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392BA0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      PointSetIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetPointSetVisibility(const class FString& PointSetIdentifier, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetPointSetVisibility");
		
		UPreviewGeometry_SetPointSetVisibility_Params params {};
		params.PointSetIdentifier = PointSetIdentifier;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392A30
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      PointSetIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          NewMaterial                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetPointSetMaterial(const class FString& PointSetIdentifier, class UMaterialInterface* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetPointSetMaterial");
		
		UPreviewGeometry_SetPointSetMaterial_Params params {};
		params.PointSetIdentifier = PointSetIdentifier;
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3928D0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetVisibility");
		
		UPreviewGeometry_SetLineSetVisibility_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392760
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          NewMaterial                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetLineSetMaterial");
		
		UPreviewGeometry_SetLineSetMaterial_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3923A0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::SetAllPointSetsMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial");
		
		UPreviewGeometry_SetAllPointSetsMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392310
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial");
		
		UPreviewGeometry_SetAllLineSetsMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3921F0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemovePointSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      PointSetIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::RemovePointSet(const class FString& PointSetIdentifier, bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemovePointSet");
		
		UPreviewGeometry_RemovePointSet_Params params {};
		params.PointSetIdentifier = PointSetIdentifier;
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3920F0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemoveLineSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPreviewGeometry::RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveLineSet");
		
		UPreviewGeometry_RemoveLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB392060
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::RemoveAllPointSets(bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveAllPointSets");
		
		UPreviewGeometry_RemoveAllPointSets_Params params {};
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391FD0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               bDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::RemoveAllLineSets(bool bDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.RemoveAllLineSets");
		
		UPreviewGeometry_RemoveAllLineSets_Params params {};
		params.bDestroy = bDestroy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391F90
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.GetActor
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	class APreviewGeometryActor* UPreviewGeometry::GetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.GetActor");
		
		UPreviewGeometry_GetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391E90
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.FindPointSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      PointSetIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPointSetComponent* UPreviewGeometry::FindPointSet(const class FString& PointSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.FindPointSet");
		
		UPreviewGeometry_FindPointSet_Params params {};
		params.PointSetIdentifier = PointSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391D90
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.FindLineSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULineSetComponent* UPreviewGeometry::FindLineSet(const class FString& LineSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.FindLineSet");
		
		UPreviewGeometry_FindLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391D40
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPreviewGeometry::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.Disconnect");
		
		UPreviewGeometry_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391BE0
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.CreateInWorld
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WithTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPreviewGeometry::CreateInWorld(class UWorld* World, const struct FTransform& WithTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.CreateInWorld");
		
		UPreviewGeometry_CreateInWorld_Params params {};
		params.World = World;
		params.WithTransform = WithTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391B30
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.AddPointSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      PointSetIdentifier                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPointSetComponent* UPreviewGeometry::AddPointSet(const class FString& PointSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.AddPointSet");
		
		UPreviewGeometry_AddPointSet_Params params {};
		params.PointSetIdentifier = PointSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB391A80
	 * 		Name   -> Function ModelingComponents.PreviewGeometry.AddLineSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      LineSetIdentifier                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULineSetComponent* UPreviewGeometry::AddLineSet(const class FString& LineSetIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PreviewGeometry.AddLineSet");
		
		UPreviewGeometry_AddLineSet_Params params {};
		params.LineSetIdentifier = LineSetIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshElementsVisualizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshElementsVisualizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshElementsVisualizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshWireframeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshWireframeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshWireframeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPointSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPointSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PointSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPreviewMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPreviewMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditPreviewMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditPreviewMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolyEditPreviewMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewGeometryActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewGeometryActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewGeometryActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTriangleSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTriangleSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.TriangleSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutPreviewProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutPreviewProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreviewProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutPreview.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutPreview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.UVLayoutPreview");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectSurfacePathMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectSurfacePathMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CollectSurfacePathMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstructionPlaneMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstructionPlaneMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ConstructionPlaneMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveControlPointsMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveControlPointsMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CurveControlPointsMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragAlignmentMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragAlignmentMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DragAlignmentMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragAlignmentInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragAlignmentInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DragAlignmentInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULatticeControlPointsMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULatticeControlPointsMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.LatticeControlPointsMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaneDistanceFromHitMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaneDistanceFromHitMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PlaneDistanceFromHitMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyLassoMarqueeMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyLassoMarqueeMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolyLassoMarqueeMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URectangleMarqueeMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URectangleMarqueeMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.RectangleMarqueeMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URectangleMarqueeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URectangleMarqueeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.RectangleMarqueeInteraction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceCurveDeformationMechanicPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceCurveDeformationMechanicPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceCurveDeformationMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceCurveDeformationMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpaceCurveDeformationMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatialCurveDistanceMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatialCurveDistanceMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpatialCurveDistanceMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshOpPreviewWithBackgroundCompute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshOpPreviewWithBackgroundCompute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelingComponentsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelingComponentsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ModelingComponentsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelingComponentsEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelingComponentsEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ModelingComponentsEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDA00
	 * 		Name   -> Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCreateTextureObjectParams                  CreateTexParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FCreateTextureObjectResult UModelingObjectsCreationAPI::CreateTextureObject(const struct FCreateTextureObjectParams& CreateTexParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject");
		
		UModelingObjectsCreationAPI_CreateTextureObject_Params params {};
		params.CreateTexParams = CreateTexParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FD890
	 * 		Name   -> Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCreateMeshObjectParams                     CreateMeshParams                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	struct FCreateMeshObjectResult UModelingObjectsCreationAPI::CreateMeshObject(const struct FCreateMeshObjectParams& CreateMeshParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject");
		
		UModelingObjectsCreationAPI_CreateMeshObject_Params params {};
		params.CreateMeshParams = CreateMeshParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelingObjectsCreationAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelingObjectsCreationAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ModelingObjectsCreationAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDCC0
	 * 		Name   -> Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool UCreateMeshObjectTypeProperties::ShouldShowPropertySet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet");
		
		UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDC40
	 * 		Name   -> Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UCreateMeshObjectTypeProperties::GetOutputTypeNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc");
		
		UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDAE0
	 * 		Name   -> Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	ECreateObjectTypeHint UCreateMeshObjectTypeProperties::GetCurrentCreateMeshType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType");
		
		UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateMeshObjectTypeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateMeshObjectTypeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CreateMeshObjectTypeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnAcceptHandleSourcesPropertiesSingle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnAcceptHandleSourcesPropertiesSingle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDB10
	 * 		Name   -> Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UPolygroupLayersProperties::GetGroupLayersFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc");
		
		UPolygroupLayersProperties_GetGroupLayersFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolygroupLayersProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolygroupLayersProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygroupLayersProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EB3FDB10
	 * 		Name   -> Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	 * 		Flags  -> (Final, Native, Public)
	 */
	TArray<class FString> UWeightMapSetProperties::GetWeightMapsFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc");
		
		UWeightMapSetProperties_GetWeightMapsFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeightMapSetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeightMapSetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.WeightMapSetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeometrySelectionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeometrySelectionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.GeometrySelectionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPersistentMeshSelection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPersistentMeshSelection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PersistentMeshSelection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPersistentMeshSelectionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPersistentMeshSelectionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PersistentMeshSelectionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolygonSelectionMechanicProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolygonSelectionMechanicProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanicProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolygonSelectionMechanic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolygonSelectionMechanic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModelingSceneSnappingManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModelingSceneSnappingManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ModelingSceneSnappingManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTransformer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTransformer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MultiTransformer");
		return ptr;
	}

}


