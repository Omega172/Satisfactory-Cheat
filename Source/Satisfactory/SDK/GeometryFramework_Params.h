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
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	 */
	struct UBaseDynamicMeshComponent_SetViewModeOverridesEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	 */
	struct UBaseDynamicMeshComponent_SetShadowsEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_SetSecondaryRenderMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	 */
	struct UBaseDynamicMeshComponent_SetSecondaryBuffersVisibility_Params
	{
	public:
		bool                                                       bSetVisible;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_SetOverrideRenderMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	 */
	struct UBaseDynamicMeshComponent_SetEnableWireframeRenderPass_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	 */
	struct UBaseDynamicMeshComponent_SetEnableRaytracing_Params
	{
	public:
		bool                                                       bSetEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	 */
	struct UBaseDynamicMeshComponent_SetEnableFlatShading_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	 */
	struct UBaseDynamicMeshComponent_SetConstantOverrideColor_Params
	{
	public:
		struct FColor                                              NewColor;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	 */
	struct UBaseDynamicMeshComponent_SetColorOverrideMode_Params
	{
	public:
		EDynamicMeshComponentColorOverrideMode                     NewMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_HasOverrideRenderMaterial_Params
	{
	public:
		int32_t                                                    K;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	 */
	struct UBaseDynamicMeshComponent_GetViewModeOverridesEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	 */
	struct UBaseDynamicMeshComponent_GetShadowsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_GetSecondaryRenderMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	 */
	struct UBaseDynamicMeshComponent_GetSecondaryBuffersVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_GetOverrideRenderMaterial_Params
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZUTY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	 */
	struct UBaseDynamicMeshComponent_GetFlatShadingEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	 */
	struct UBaseDynamicMeshComponent_GetEnableWireframeRenderPass_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	 */
	struct UBaseDynamicMeshComponent_GetEnableRaytracing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	 */
	struct UBaseDynamicMeshComponent_GetDynamicMesh_Params
	{
	public:
		class UDynamicMesh*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	 */
	struct UBaseDynamicMeshComponent_GetConstantOverrideColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	 */
	struct UBaseDynamicMeshComponent_GetColorOverrideMode_Params
	{
	public:
		EDynamicMeshComponentColorOverrideMode                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_ClearSecondaryRenderMaterial_Params
	{	};

	/**
	 * Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	 */
	struct UBaseDynamicMeshComponent_ClearOverrideRenderMaterial_Params
	{	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	 */
	struct UDynamicMeshComponent_ValidateMaterialSlots_Params
	{
	public:
		bool                                                       bCreateIfMissing;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteExtraSlots;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.UpdateCollision
	 */
	struct UDynamicMeshComponent_UpdateCollision_Params
	{
	public:
		bool                                                       bOnlyIfPending;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.SetTangentsType
	 */
	struct UDynamicMeshComponent_SetTangentsType_Params
	{
	public:
		EDynamicMeshComponentTangentsMode                          NewTangentsType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	 */
	struct UDynamicMeshComponent_SetDynamicMesh_Params
	{
	public:
		class UDynamicMesh*                                        NewMesh;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	 */
	struct UDynamicMeshComponent_SetDeferredCollisionUpdatesEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediateUpdate;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	 */
	struct UDynamicMeshComponent_SetComplexAsSimpleCollisionEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediateUpdate;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.GetTangentsType
	 */
	struct UDynamicMeshComponent_GetTangentsType_Params
	{
	public:
		EDynamicMeshComponentTangentsMode                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	 */
	struct UDynamicMeshComponent_EnableComplexAsSimpleCollision_Params
	{	};

	/**
	 * Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	 */
	struct UDynamicMeshComponent_ConfigureMaterialSet_Params
	{
	public:
		TArray<class UMaterialInterface*>                          NewMaterialSet;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	 */
	struct ADynamicMeshActor_ReleaseComputeMesh_Params
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	 */
	struct ADynamicMeshActor_ReleaseAllComputeMeshes_Params
	{	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	 */
	struct ADynamicMeshActor_GetDynamicMeshComponent_Params
	{
	public:
		class UDynamicMeshComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	 */
	struct ADynamicMeshActor_GetComputeMeshPool_Params
	{
	public:
		class UDynamicMeshPool*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	 */
	struct ADynamicMeshActor_FreeAllComputeMeshes_Params
	{	};

	/**
	 * Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	 */
	struct ADynamicMeshActor_AllocateComputeMesh_Params
	{
	public:
		class UDynamicMesh*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMesh.ResetToCube
	 */
	struct UDynamicMesh_ResetToCube_Params
	{
	public:
		class UDynamicMesh*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMesh.Reset
	 */
	struct UDynamicMesh_Reset_Params
	{
	public:
		class UDynamicMesh*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMesh.IsEmpty
	 */
	struct UDynamicMesh_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMesh.GetTriangleCount
	 */
	struct UDynamicMesh_GetTriangleCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshPool.ReturnMesh
	 */
	struct UDynamicMeshPool_ReturnMesh_Params
	{
	public:
		class UDynamicMesh*                                        Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	 */
	struct UDynamicMeshPool_ReturnAllMeshes_Params
	{	};

	/**
	 * Function GeometryFramework.DynamicMeshPool.RequestMesh
	 */
	struct UDynamicMeshPool_RequestMesh_Params
	{
	public:
		class UDynamicMesh*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GeometryFramework.DynamicMeshPool.FreeAllMeshes
	 */
	struct UDynamicMeshPool_FreeAllMeshes_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
