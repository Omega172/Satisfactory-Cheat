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
	 * 		Name   -> PredefinedFunction UPolyEditActivityContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditActivityContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditActivityContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPrimitiveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralShapeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralShapeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralBoxToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralBoxToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralBoxToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralRectangleToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralRectangleToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralRectangleToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralDiscToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralDiscToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralDiscToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralTorusToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralTorusToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralTorusToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralCylinderToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralCylinderToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralCylinderToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralConeToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralConeToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralConeToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralArrowToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralArrowToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralArrowToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralSphereToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralSphereToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralSphereToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralStairsToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralStairsToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralStairsToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddBoxPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddBoxPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddBoxPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddCylinderPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddCylinderPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddCylinderPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddConePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddConePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddConePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddRectanglePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddRectanglePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddRectanglePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddDiscPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddDiscPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddDiscPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddTorusPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddTorusPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddTorusPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddArrowPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddArrowPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddArrowPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddSpherePrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddSpherePrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddSpherePrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddStairsPrimitiveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddStairsPrimitiveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddStairsPrimitiveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCombineMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombineMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeleteGeometrySelectionCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeleteGeometrySelectionCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeleteGeometrySelectionCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDisconnectGeometrySelectionCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDisconnectGeometrySelectionCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisconnectGeometrySelectionCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand_Invert.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand_Invert::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand_Invert");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand_ExpandToConnected.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand_InvertConnected.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand_InvertConnected::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand_Expand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand_Expand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand_Expand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyGeometrySelectionCommand_Contract.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyGeometrySelectionCommand_Contract::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ModifyGeometrySelectionCommand_Contract");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetriangulateGeometrySelectionCommand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetriangulateGeometrySelectionCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RetriangulateGeometrySelectionCommand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrimMeshesToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrimMeshesToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TrimMeshesToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCSGMeshesToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCSGMeshesToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CSGMeshesToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCutMeshWithMeshToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutMeshWithMeshToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CutMeshWithMeshToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCutMeshWithMeshTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutMeshWithMeshTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CutMeshWithMeshTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCutMeshWithMeshToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCutMeshWithMeshToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CutMeshWithMeshToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawAndRevolveToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolveOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolveOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RevolveOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawAndRevolveTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawAndRevolveTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawAndRevolveTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolStandardProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolStandardProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonToolSnapProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonToolSnapProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPolygonTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPolygonTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditCommonProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCommonProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCommonProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsActionModeToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsActionModeToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsSelectionModeToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsSelectionModeToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActionPropertySet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActionPropertySet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBE20
	 * 		Name   -> Function MeshModelingTools.PolyEditTopologyProperties.RegenerateExtraCorners
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UPolyEditTopologyProperties::RegenerateExtraCorners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.PolyEditTopologyProperties.RegenerateExtraCorners");
		
		UPolyEditTopologyProperties_RegenerateExtraCorners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditTopologyProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditTopologyProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditTopologyProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBEE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::SimplifyByGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.SimplifyByGroups");
		
		UEditMeshPolygonsToolActions_SimplifyByGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBE80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Retriangulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate");
		
		UEditMeshPolygonsToolActions_Retriangulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBDC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals");
		
		UEditMeshPolygonsToolActions_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBD60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.PushPull
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::PushPull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.PushPull");
		
		UEditMeshPolygonsToolActions_PushPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBC40
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Outset");
		
		UEditMeshPolygonsToolActions_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBBE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Offset");
		
		UEditMeshPolygonsToolActions_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBB80
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Merge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Merge");
		
		UEditMeshPolygonsToolActions_Merge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBB20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.InSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::InSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.InSet");
		
		UEditMeshPolygonsToolActions_InSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBAC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::InsertEdgeLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdgeLoop");
		
		UEditMeshPolygonsToolActions_InsertEdgeLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBA60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::InsertEdge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.InsertEdge");
		
		UEditMeshPolygonsToolActions_InsertEdge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB940
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Flip");
		
		UEditMeshPolygonsToolActions_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB880
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude");
		
		UEditMeshPolygonsToolActions_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB820
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Duplicate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Duplicate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Duplicate");
		
		UEditMeshPolygonsToolActions_Duplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB7C0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect");
		
		UEditMeshPolygonsToolActions_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB760
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Delete");
		
		UEditMeshPolygonsToolActions_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB700
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Decompose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose");
		
		UEditMeshPolygonsToolActions_Decompose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB6A0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces");
		
		UEditMeshPolygonsToolActions_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB520
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions.Bevel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions::Bevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions.Bevel");
		
		UEditMeshPolygonsToolActions_Bevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBDC0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals");
		
		UEditMeshPolygonsToolActions_Triangles_RecalcNormals_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBD60
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::PushPull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.PushPull");
		
		UEditMeshPolygonsToolActions_Triangles_PushPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBD00
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Poke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke");
		
		UEditMeshPolygonsToolActions_Triangles_Poke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBC40
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Outset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset");
		
		UEditMeshPolygonsToolActions_Triangles_Outset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBBE0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Offset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset");
		
		UEditMeshPolygonsToolActions_Triangles_Offset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBB20
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.InSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::InSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.InSet");
		
		UEditMeshPolygonsToolActions_Triangles_InSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB940
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip");
		
		UEditMeshPolygonsToolActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB880
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Extrude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude");
		
		UEditMeshPolygonsToolActions_Triangles_Extrude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB820
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Duplicate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Duplicate");
		
		UEditMeshPolygonsToolActions_Triangles_Duplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB7C0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Disconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect");
		
		UEditMeshPolygonsToolActions_Triangles_Disconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB760
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::Delete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete");
		
		UEditMeshPolygonsToolActions_Triangles_Delete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB6A0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolActions_Triangles::CutFaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces");
		
		UEditMeshPolygonsToolActions_Triangles_CutFaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBCA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolUVActions::PlanarProjection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection");
		
		UEditMeshPolygonsToolUVActions_PlanarProjection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolUVActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolUVActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BC000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBFA0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Straighten()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten");
		
		UEditMeshPolygonsToolEdgeActions_Straighten_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB8E0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB5E0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bridge
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Bridge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bridge");
		
		UEditMeshPolygonsToolEdgeActions_Bridge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB580
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions::Bevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Bevel");
		
		UEditMeshPolygonsToolEdgeActions_Bevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolEdgeActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BC000
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Weld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBF40
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Split_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB9A0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB8E0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_FillHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB640
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse");
		
		UEditMeshPolygonsToolEdgeActions_Triangles_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolEdgeActions_Triangles.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB4C0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolCancelAction.Done
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolCancelAction::Done()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolCancelAction.Done");
		
		UEditMeshPolygonsToolCancelAction_Done_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolCancelAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolCancelAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolCancelAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB4C0
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Cancel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolAcceptCancelAction::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Cancel");
		
		UEditMeshPolygonsToolAcceptCancelAction_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB460
	 * 		Name   -> Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Apply
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEditMeshPolygonsToolAcceptCancelAction::Apply()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction.Apply");
		
		UEditMeshPolygonsToolAcceptCancelAction_Apply_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsToolAcceptCancelAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsToolAcceptCancelAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditMeshPolygonsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditMeshPolygonsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNewMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNewMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBA00
	 * 		Name   -> Function MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UExistingMeshMaterialProperties::GetUVChannelNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.ExistingMeshMaterialProperties.GetUVChannelNamesFunc");
		
		UExistingMeshMaterialProperties_GetUVChannelNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExistingMeshMaterialProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExistingMeshMaterialProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshEditingViewProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshEditingViewProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BBA30
	 * 		Name   -> Function MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TArray<class FString> UMeshUVChannelProperties::GetUVChannelNamesFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshUVChannelProperties.GetUVChannelNamesFunc");
		
		UMeshUVChannelProperties_GetUVChannelNamesFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshUVChannelProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshUVChannelProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshUVChannelProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecomputeUVsToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecomputeUVsToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RecomputeUVsToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecomputeUVsTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecomputeUVsTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RecomputeUVsTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditBevelEdgeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditBevelEdgeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditBevelEdgeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditBevelEdgeActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditBevelEdgeActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditBevelEdgeActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditCutProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCutProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditCutFacesActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditCutFacesActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutFacesActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditExtrudeProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditExtrudeProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditOffsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditOffsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditOffsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditPushPullProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditPushPullProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditPushPullProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditExtrudeActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditExtrudeActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupEdgeInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupEdgeInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.GroupEdgeInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditInsertEdgeActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsertEdgeActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsertEdgeActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdgeLoopInsertionProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdgeLoopInsertionProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EdgeLoopInsertionProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditInsertEdgeLoopActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsertEdgeLoopActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsertEdgeLoopActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditInsetOutsetProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsetOutsetProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsetOutsetProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditInsetOutsetActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditInsetOutsetActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditInsetOutsetActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditSetUVProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditSetUVProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPolyEditPlanarProjectionUVActivity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPolyEditPlanarProjectionUVActivity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditPlanarProjectionUVActivity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVLayoutToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLayoutTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLayoutTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVLayoutTool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionToolBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB880
	 * 		Name   -> Function MeshModelingTools.UVProjectionToolEditActions.Reset
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUVProjectionToolEditActions::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.UVProjectionToolEditActions.Reset");
		
		UUVProjectionToolEditActions_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB4C0
	 * 		Name   -> Function MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUVProjectionToolEditActions::AutoFitAlign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.UVProjectionToolEditActions.AutoFitAlign");
		
		UUVProjectionToolEditActions_AutoFitAlign_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E66BB460
	 * 		Name   -> Function MeshModelingTools.UVProjectionToolEditActions.AutoFit
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UUVProjectionToolEditActions::AutoFit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MeshModelingTools.UVProjectionToolEditActions.AutoFit");
		
		UUVProjectionToolEditActions_AutoFit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionToolEditActions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolEditActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolEditActions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionToolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionToolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionOperatorFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionOperatorFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVProjectionTool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVProjectionTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}

}


