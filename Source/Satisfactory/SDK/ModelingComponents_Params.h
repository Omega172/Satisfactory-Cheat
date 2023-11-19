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
	 * Function ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll
	 */
	struct UMeshTopologySelectionMechanicProperties_SelectAll_Params
	{	};

	/**
	 * Function ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection
	 */
	struct UMeshTopologySelectionMechanicProperties_InvertSelection_Params
	{	};

	/**
	 * Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
	 */
	struct UOctreeDynamicMeshComponent_SetDynamicMesh_Params
	{
	public:
		class UDynamicMesh*                                        NewMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
	 */
	struct UPreviewGeometry_SetPointSetVisibility_Params
	{
	public:
		class FString                                              PointSetIdentifier;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
	 */
	struct UPreviewGeometry_SetPointSetMaterial_Params
	{
	public:
		class FString                                              PointSetIdentifier;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
	 */
	struct UPreviewGeometry_SetLineSetVisibility_Params
	{
	public:
		class FString                                              LineSetIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
	 */
	struct UPreviewGeometry_SetLineSetMaterial_Params
	{
	public:
		class FString                                              LineSetIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
	 */
	struct UPreviewGeometry_SetAllPointSetsMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	 */
	struct UPreviewGeometry_SetAllLineSetsMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.RemovePointSet
	 */
	struct UPreviewGeometry_RemovePointSet_Params
	{
	public:
		class FString                                              PointSetIdentifier;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroy;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.RemoveLineSet
	 */
	struct UPreviewGeometry_RemoveLineSet_Params
	{
	public:
		class FString                                              LineSetIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroy;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
	 */
	struct UPreviewGeometry_RemoveAllPointSets_Params
	{
	public:
		bool                                                       bDestroy;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
	 */
	struct UPreviewGeometry_RemoveAllLineSets_Params
	{
	public:
		bool                                                       bDestroy;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.GetActor
	 */
	struct UPreviewGeometry_GetActor_Params
	{
	public:
		class APreviewGeometryActor*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.FindPointSet
	 */
	struct UPreviewGeometry_FindPointSet_Params
	{
	public:
		class FString                                              PointSetIdentifier;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPointSetComponent*                                  ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.FindLineSet
	 */
	struct UPreviewGeometry_FindLineSet_Params
	{
	public:
		class FString                                              LineSetIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULineSetComponent*                                   ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.Disconnect
	 */
	struct UPreviewGeometry_Disconnect_Params
	{	};

	/**
	 * Function ModelingComponents.PreviewGeometry.CreateInWorld
	 */
	struct UPreviewGeometry_CreateInWorld_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BP9L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WithTransform;                                           // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.AddPointSet
	 */
	struct UPreviewGeometry_AddPointSet_Params
	{
	public:
		class FString                                              PointSetIdentifier;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPointSetComponent*                                  ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PreviewGeometry.AddLineSet
	 */
	struct UPreviewGeometry_AddLineSet_Params
	{
	public:
		class FString                                              LineSetIdentifier;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULineSetComponent*                                   ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
	 */
	struct UModelingObjectsCreationAPI_CreateTextureObject_Params
	{
	public:
		struct FCreateTextureObjectParams                          CreateTexParams;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCreateTextureObjectResult                          ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
	 */
	struct UModelingObjectsCreationAPI_CreateMeshObject_Params
	{
	public:
		struct FCreateMeshObjectParams                             CreateMeshParams;                                        // 0x0000(0x0600)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FCreateMeshObjectResult                             ReturnValue;                                             // 0x0600(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
	 */
	struct UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
	 */
	struct UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
	 */
	struct UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params
	{
	public:
		ECreateObjectTypeHint                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
	 */
	struct UPolygroupLayersProperties_GetGroupLayersFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	 */
	struct UWeightMapSetProperties_GetWeightMapsFunc_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
