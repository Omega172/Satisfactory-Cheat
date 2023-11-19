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
	 * Class GeometryScriptingCore.GeometryScriptDebug
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGeometryScriptDebug : public UObject
	{
	public:
		TArray<struct FGeometryScriptDebugMessage>                 Messages;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
		void STATIC_SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
		void STATIC_ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FTransform& ProjectionFrame, const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetVectorListItem(struct FGeometryScriptVectorList* VectorList, int32_t Index, const struct FVector& NewValue, bool* bIsValidIndex);
		void STATIC_SetUVListItem(struct FGeometryScriptUVList* UVList, int32_t Index, const struct FVector2D& NewUV, bool* bIsValidIndex);
		void STATIC_SetScalarListItem(struct FGeometryScriptScalarList* ScalarList, int32_t Index, double NewValue, bool* bIsValidIndex);
		void STATIC_SetIndexListItem(struct FGeometryScriptIndexList* IndexList, int32_t Index, int32_t NewValue, bool* bIsValidIndex);
		void STATIC_SetColorListItem(struct FGeometryScriptColorList* ColorList, int32_t Index, const struct FLinearColor& NewColor, bool* bIsValidIndex);
		int32_t STATIC_GetVectorListLength(const struct FGeometryScriptVectorList& VectorList);
		int32_t STATIC_GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList);
		struct FVector STATIC_GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32_t Index, bool* bIsValidIndex);
		int32_t STATIC_GetUVListLength(const struct FGeometryScriptUVList& UVList);
		int32_t STATIC_GetUVListLastIndex(const struct FGeometryScriptUVList& UVList);
		struct FVector2D STATIC_GetUVListItem(const struct FGeometryScriptUVList& UVList, int32_t Index, bool* bIsValidIndex);
		int32_t STATIC_GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList);
		int32_t STATIC_GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList);
		struct FIntVector STATIC_GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, int32_t Triangle, bool* bIsValidTriangle);
		int32_t STATIC_GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList);
		int32_t STATIC_GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList);
		double STATIC_GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32_t Index, bool* bIsValidIndex);
		int32_t STATIC_GetIndexListLength(const struct FGeometryScriptIndexList& IndexList);
		int32_t STATIC_GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList);
		int32_t STATIC_GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32_t Index, bool* bIsValidIndex);
		int32_t STATIC_GetColorListLength(const struct FGeometryScriptColorList& ColorList);
		int32_t STATIC_GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList);
		struct FLinearColor STATIC_GetColorListItem(const struct FGeometryScriptColorList& ColorList, int32_t Index, bool* bIsValidIndex);
		void STATIC_ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptVectorList* VectorList, int32_t XChannelIndex, int32_t YChannelIndex, int32_t ZChannelIndex);
		void STATIC_ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptScalarList* ScalarList, int32_t ChannelIndex);
		void STATIC_DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, struct FGeometryScriptVectorList* DuplicateList);
		void STATIC_DuplicateUVList(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptUVList* DuplicateList);
		void STATIC_DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptScalarList* DuplicateList);
		void STATIC_DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, struct FGeometryScriptIndexList* DuplicateList);
		void STATIC_DuplicateColorList(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptColorList* DuplicateList);
		void STATIC_ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, TArray<struct FVector>* VectorArray);
		void STATIC_ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, TArray<struct FVector2D>* UVArray);
		void STATIC_ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, TArray<struct FIntVector>* TriangleArray);
		void STATIC_ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray);
		void STATIC_ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, TArray<int32_t>* IndexArray);
		void STATIC_ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, TArray<struct FLinearColor>* ColorArray);
		void STATIC_ConvertArrayToVectorList(TArray<struct FVector> VectorArray, struct FGeometryScriptVectorList* VectorList);
		void STATIC_ConvertArrayToUVList(TArray<struct FVector2D> UVArray, struct FGeometryScriptUVList* UVList);
		void STATIC_ConvertArrayToTriangleList(TArray<struct FIntVector> TriangleArray, struct FGeometryScriptTriangleList* TriangleList);
		void STATIC_ConvertArrayToScalarList(TArray<double> VectorArray, struct FGeometryScriptScalarList* ScalarList);
		void STATIC_ConvertArrayToIndexList(TArray<int32_t> IndexArray, struct FGeometryScriptIndexList* IndexList, EGeometryScriptIndexType IndexType);
		void STATIC_ConvertArrayToColorList(TArray<struct FLinearColor> ColorArray, struct FGeometryScriptColorList* ColorList);
		void STATIC_ClearVectorList(struct FGeometryScriptVectorList* VectorList, const struct FVector& ClearValue);
		void STATIC_ClearUVList(struct FGeometryScriptUVList* UVList, const struct FVector2D& ClearUV);
		void STATIC_ClearScalarList(struct FGeometryScriptScalarList* ScalarList, double ClearValue);
		void STATIC_ClearIndexList(struct FGeometryScriptIndexList* IndexList, int32_t ClearValue);
		void STATIC_ClearColorList(struct FGeometryScriptColorList* ColorList, const struct FLinearColor& ClearColor);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& RequestedLOD, TArray<class UMaterialInterface*>* MaterialList, TArray<int32_t>* MaterialIndex, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeVertexColor();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32_t SourceUVLayer);
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeTangentNormal();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypePosition();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeObjectNormal();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeMultiTexture(TArray<class UTexture2D*> MaterialIDSourceTextures, int32_t SourceUVLayer);
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeMaterialID();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeFaceNormal();
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeCurvature(EGeometryScriptBakeCurvatureTypeMode CurvatureType, EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, EGeometryScriptBakeCurvatureClampMode Clamping);
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeBentNormal(int32_t OcclusionRays, float MaxDistance, float SpreadAngle);
		struct FGeometryScriptBakeTypeOptions STATIC_MakeBakeTypeAmbientOcclusion(int32_t OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle);
		class UDynamicMesh* STATIC_BakeVertex(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const struct FGeometryScriptBakeOutputType& BakeTypes, const struct FGeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug);
		struct FGeometryScriptRenderCaptureTextures STATIC_BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct FTransform& TargetLocalToWorld, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, TArray<class AActor*> SourceActors, const struct FGeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug);
		TArray<class UTexture2D*> STATIC_BakeTexture(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, TArray<struct FGeometryScriptBakeTypeOptions> BakeTypes, const struct FGeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, const struct FVector& NewPosition, bool* bIsValidVertex, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexList, int32_t* NumDeleted, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32_t VertexID, bool* bWasVertexDeleted, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32_t* NumDeleted, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bWasTriangleDeleted, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32_t* NumDeleted, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<struct FTransform> AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, int32_t RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, struct FGeometryScriptIndexList* NewTriangleIndicesList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, struct FGeometryScriptIndexList* NewIndicesList, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32_t* NewVertexIndex, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32_t* NewTriangleIndex, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, struct FGeometryScriptIndexList* NewIndicesList, int32_t NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<struct FGeometryScriptBoneWeight> BoneWeights, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<struct FGeometryScriptBoneWeight> BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32_t VertexID, TArray<struct FGeometryScriptBoneWeight>* BoneWeights, bool* bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, int32_t* MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32_t VertexID, struct FGeometryScriptBoneWeight* BoneWeight, bool* bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
		class UDynamicMesh* STATIC_ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct FGeometryScriptSmoothBoneWeightsOptions& Options, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct FTransform& MirrorFrame, const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* ToolMesh, const struct FTransform& ToolTransform, EGeometryScriptBooleanOperation Operation, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& Options, double* MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptIsSameMeshOptions& Options, bool* bIsSameMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* OtherMesh, const struct FTransform& OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32_t>* ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32_t>* ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct FTransform& WarpOrientation, EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32_t UVLayer, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, int32_t MaterialID, bool* bIsValidTriangle, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, int32_t MaterialID, bool* bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32_t MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32_t FromMaterialID, int32_t ToMaterialID, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, struct FGeometryScriptIndexList* TriangleIDList, class UGeometryScriptDebug* Debug);
		int32_t STATIC_GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle);
		int32_t STATIC_GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool* bHasMaterialIDs);
		class UDynamicMesh* STATIC_GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, struct FGeometryScriptIndexList* MaterialIDList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* MaterialIDList, bool* bHasMaterialIDs);
		class UDynamicMesh* STATIC_EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32_t MaterialID, int32_t* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CompactMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UMaterialInterface*> SourceMaterialList, TArray<class UMaterialInterface*>* CompactedMaterialList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32_t ClearValue, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32_t VertexID, bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool* bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FGeometryScriptTriangle& Normals, bool* bIsValidTriangle, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RecomputeNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* TangentXList, struct FGeometryScriptVectorList* TangentYList, bool* bIsValidTangentSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues);
		class UDynamicMesh* STATIC_GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues);
		class UDynamicMesh* STATIC_GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool* bHasTangents, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputeTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32_t* SetPolygroupIDOut, int32_t SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32_t NumLayers, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut);
		int32_t STATIC_GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t TriangleID, bool* bIsValidTriangle);
		class UDynamicMesh* STATIC_GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut);
		class UDynamicMesh* STATIC_GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut);
		class UDynamicMesh* STATIC_EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t PolygroupID, int32_t* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t UVLayer, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32_t MaxSearchRounds, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32_t MinGroupSize, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32_t ClearValue, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendTorus(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32_t MajorSteps, int32_t MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolylineVertices, TArray<struct FTransform> SweepPath, TArray<float> PolylineTexParamU, TArray<float> SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, TArray<struct FTransform> SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32_t Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t StepsPhi, int32_t StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSphereBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, TArray<struct FVector> SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, float Height, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRoundRectangle_Compatibility_5_1(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32_t StepsWidth, int32_t StepsHeight, int32_t StepsRound, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32_t Steps, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D> PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32_t Steps, bool bCapped, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendRectangle_Compatibility_5_1(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32_t StepsWidth, int32_t StepsHeight, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float StepDepth, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendDisc(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32_t AngleSteps, int32_t SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendCylinder(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32_t NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendCone(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float BaseRadius, float TopRadius, float Height, int32_t RadialSteps, int32_t HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendCapsule(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float LineLength, int32_t HemisphereSteps, int32_t CircleSteps, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AppendBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32_t StepsX, int32_t StepsY, int32_t StepsZ, EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsValidVertexID(class UDynamicMesh* TargetMesh, int32_t VertexID);
		bool STATIC_IsValidTriangleID(class UDynamicMesh* TargetMesh, int32_t TriangleID);
		struct FVector STATIC_GetVertexPosition(class UDynamicMesh* TargetMesh, int32_t VertexID, bool* bIsValidVertex);
		int32_t STATIC_GetVertexCount(class UDynamicMesh* TargetMesh);
		struct FBox2D STATIC_GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, bool* bIsValidUVSet, bool* bUVSetIsEmpty);
		class UDynamicMesh* STATIC_GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32_t TriangleID, struct FLinearColor* Color1, struct FLinearColor* Color2, struct FLinearColor* Color3, bool* bTriHasValidVertexColors);
		void STATIC_GetTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, struct FVector2D* UV1, struct FVector2D* UV2, struct FVector2D* UV3, bool* bHaveValidUVs);
		void STATIC_GetTrianglePositions(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle, struct FVector* Vertex1, struct FVector* Vertex2, struct FVector* Vertex3);
		class UDynamicMesh* STATIC_GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bTriHasValidElements, struct FGeometryScriptTriangle* Normals, struct FGeometryScriptTriangle* Tangents, struct FGeometryScriptTriangle* BiTangents);
		class UDynamicMesh* STATIC_GetTriangleNormals(class UDynamicMesh* TargetMesh, int32_t TriangleID, struct FVector* Normal1, struct FVector* Normal2, struct FVector* Normal3, bool* bTriHasValidNormals);
		struct FIntVector STATIC_GetTriangleIndices(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle);
		struct FVector STATIC_GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle);
		int32_t STATIC_GetNumVertexIDs(class UDynamicMesh* TargetMesh);
		int32_t STATIC_GetNumUVSets(class UDynamicMesh* TargetMesh);
		int32_t STATIC_GetNumTriangleIDs(class UDynamicMesh* TargetMesh);
		int32_t STATIC_GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool* bAmbiguousTopologyFound);
		int32_t STATIC_GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);
		int32_t STATIC_GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);
		int32_t STATIC_GetNumConnectedComponents(class UDynamicMesh* TargetMesh);
		void STATIC_GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume);
		class FString STATIC_GetMeshInfoString(class UDynamicMesh* TargetMesh);
		bool STATIC_GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);
		struct FBox STATIC_GetMeshBoundingBox(class UDynamicMesh* TargetMesh);
		bool STATIC_GetIsDenseMesh(class UDynamicMesh* TargetMesh);
		bool STATIC_GetIsClosedMesh(class UDynamicMesh* TargetMesh);
		class UDynamicMesh* STATIC_GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, const struct FLinearColor& DefaultColor, bool* bTriHasValidVertexColors, struct FLinearColor* InterpolatedColor);
		class UDynamicMesh* STATIC_GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidUVs, struct FVector2D* InterpolatedUV);
		class UDynamicMesh* STATIC_GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bIsValidTriangle, struct FVector* InterpolatedPosition);
		class UDynamicMesh* STATIC_GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidElements, struct FVector* InterpolatedNormal, struct FVector* InterpolatedTangent, struct FVector* InterpolatedBiTangent);
		class UDynamicMesh* STATIC_GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32_t TriangleID, const struct FVector& BarycentricCoords, bool* bTriHasValidNormals, struct FVector* InterpolatedNormal);
		bool STATIC_GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);
		bool STATIC_GetHasVertexColors(class UDynamicMesh* TargetMesh);
		bool STATIC_GetHasTriangleNormals(class UDynamicMesh* TargetMesh);
		bool STATIC_GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);
		bool STATIC_GetHasPolygroups(class UDynamicMesh* TargetMesh);
		bool STATIC_GetHasMaterialIDs(class UDynamicMesh* TargetMesh);
		class UDynamicMesh* STATIC_GetAllVertexPositions(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* PositionList, bool bSkipGaps, bool* bHasVertexIDGaps);
		class UDynamicMesh* STATIC_GetAllVertexIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps);
		class UDynamicMesh* STATIC_GetAllTriangleIndices(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangleList* TriangleList, bool bSkipGaps, bool* bHasTriangleIDGaps);
		class UDynamicMesh* STATIC_GetAllTriangleIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* TriangleIDList, bool* bHasTriangleIDGaps);
		class UDynamicMesh* STATIC_ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32_t TriangleID, bool* bIsValidTriangle, const struct FVector& Point, struct FVector* Vertex1, struct FVector* Vertex2, struct FVector* Vertex3, struct FVector* BarycentricCoords);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32_t* NumFilledHoles, int32_t* NumFailedHoleFills, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, TArray<struct FTransform>* Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputePointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, TArray<struct FTransform>* Samples, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, TArray<struct FTransform>* Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints);
		class UDynamicMesh* STATIC_SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints);
		class UDynamicMesh* STATIC_SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, struct FGeometryScriptMeshSelection* Selection, const struct FTransform& SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32_t MinNumTrianglePoints);
		class UDynamicMesh* STATIC_SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FBox& Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints);
		class UDynamicMesh* STATIC_SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32_t MinNumTrianglePoints);
		class UDynamicMesh* STATIC_InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, bool bOnlyToConnected);
		void STATIC_GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType* SelectionType, int32_t* NumSelected);
		class UDynamicMesh* STATIC_ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, EGeometryScriptTopologyConnectionType ConnectionType);
		class UDynamicMesh* STATIC_ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, int32_t Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
		void STATIC_DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable);
		class UDynamicMesh* STATIC_CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, EGeometryScriptMeshSelectionType SelectionType);
		class UDynamicMesh* STATIC_ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptIndexList* IndexList, EGeometryScriptIndexType* ResultListType, EGeometryScriptIndexType ConvertToType);
		class UDynamicMesh* STATIC_ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<int32_t>* IndexArray, EGeometryScriptMeshSelectionType* SelectionType);
		class UDynamicMesh* STATIC_ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, struct FGeometryScriptMeshSelection* ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
		class UDynamicMesh* STATIC_ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
		class UDynamicMesh* STATIC_ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
		class UDynamicMesh* STATIC_ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32_t> IndexArray, EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
		void STATIC_CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, struct FGeometryScriptMeshSelection* ResultSelection, EGeometryScriptCombineSelectionMode CombineMode);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FBox* SelectionBounds, bool* bIsEmpty, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<struct FGeometryScriptIndexList>* IndexLoops, TArray<struct FGeometryScriptPolyPath>* PathLoops, int32_t* NumLoops, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32_t VertexCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32_t TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
		class UDynamicMesh* STATIC_RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_IsPointInsideMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, bool* bIsInside, EGeometryScriptContainmentOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_IsBVHValidForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& TestBVH, bool* bIsValid, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptRayHitResult* HitResult, EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptTrianglePoint* NearestResult, EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_BuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* OutputBVH, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32_t TessellationLevel, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, int32_t TessellationLevel, ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32_t TessellationLevel, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct FVector& PivotLocation, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& Transform, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_TransformMesh(class UDynamicMesh* TargetMesh, const struct FTransform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, const struct FVector& ScaleOrigin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, const struct FVector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RotateMesh(class UDynamicMesh* TargetMesh, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetNumUVSets(class UDynamicMesh* TargetMesh, int32_t NumUVSets, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FTransform& BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32_t MinIslandTriCount, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, int32_t TriangleID, const struct FGeometryScriptUVTriangle& UVs, bool* bIsValidTriangle, bool bDeferChangeNotifications);
		class UDynamicMesh* STATIC_ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FVector2D& Scale, const struct FVector2D& ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RotateMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, float RotationAngle, const struct FVector2D& RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RepackMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct FBox* MeshBounds, struct FBox2D* UVBounds, bool* bIsValidUVSet, bool* bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, struct FGeometryScriptUVList* UVList, bool* bIsValidUVSet, bool* bHasVertexIDGaps, bool* bHasSplitUVs, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyUVSet(class UDynamicMesh* TargetMesh, int32_t FromUVSet, int32_t ToUVSet, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32_t UVSetIndex, class UDynamicMesh** CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, bool* bIsValidUVSet, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32_t ToUVSetIndex, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool* bFoundTopologyErrors, bool* bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32_t UVSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, struct FGeometryScriptColorList* ColorList, bool* bIsValidColorSet, bool* bHasVertexIDGaps, bool bBlendSplitVertexValues);
		class UDynamicMesh* STATIC_ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
	{
	public:
		class UDynamicMesh* STATIC_ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SampleSplineToTransforms(class USplineComponent* Spline, TArray<struct FTransform>* Frames, TArray<double>* FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, const struct FTransform& RelativeTransform, bool bIncludeScale);
		struct FVector STATIC_GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32_t Index, bool* bIsValidIndex);
		struct FVector STATIC_GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32_t Index, bool* bIsValidIndex);
		int32_t STATIC_GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath);
		int32_t STATIC_GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath);
		double STATIC_GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath);
		int32_t STATIC_GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, const struct FVector& Point);
		struct FGeometryScriptPolyPath STATIC_FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, EGeometryScriptAxis DropAxis);
		struct FGeometryScriptPolyPath STATIC_CreateCirclePath3D(const struct FTransform& Transform, float Radius, int32_t NumPoints);
		struct FGeometryScriptPolyPath STATIC_CreateCirclePath2D(const struct FVector2D& Center, float Radius, int32_t NumPoints);
		struct FGeometryScriptPolyPath STATIC_CreateArcPath3D(const struct FTransform& Transform, float Radius, int32_t NumPoints, float StartAngle, float EndAngle);
		struct FGeometryScriptPolyPath STATIC_CreateArcPath2D(const struct FVector2D& Center, float Radius, int32_t NumPoints, float StartAngle, float EndAngle);
		void STATIC_ConvertSplineToPolyPath(class USplineComponent* Spline, struct FGeometryScriptPolyPath* PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions);
		void STATIC_ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector2D>* VertexArray);
		void STATIC_ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector>* VertexArray);
		void STATIC_ConvertArrayToPolyPath(TArray<struct FVector> VertexArray, struct FGeometryScriptPolyPath* PolyPath);
		void STATIC_ConvertArrayOfVector2DToPolyPath(TArray<struct FVector2D> VertexArray, struct FGeometryScriptPolyPath* PolyPath);
		TArray<struct FVector2D> STATIC_Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath);
		TArray<struct FVector> STATIC_Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath);
		struct FGeometryScriptPolyPath STATIC_Conv_ArrayToGeometryScriptPolyPath(TArray<struct FVector> PathVertices);
		struct FGeometryScriptPolyPath STATIC_Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct FVector2D> PathVertices);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*> MaterialList, class UGeometryScriptDebug* Debug);
		class UDynamicMeshPool* STATIC_CreateDynamicMeshPool();
		class UDynamicMesh* STATIC_CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, struct FTransform* LocalToWorld, EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
		class UDynamicMesh* STATIC_CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, struct FTransform* LocalToWorld, EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32_t SphereResolution, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FTransform STATIC_MakeTransformFromZAxis(const struct FVector& Location, const struct FVector& ZAxis);
		struct FTransform STATIC_MakeTransformFromAxes(const struct FVector& Location, const struct FVector& ZAxis, const struct FVector& TangentAxis, bool bTangentIsX);
		struct FVector STATIC_GetTransformAxisVector(const struct FTransform& Transform, EGeometryScriptAxis Axis);
		struct FRay STATIC_GetTransformAxisRay(const struct FTransform& Transform, EGeometryScriptAxis Axis);
		struct FPlane STATIC_GetTransformAxisPlane(const struct FTransform& Transform, EGeometryScriptAxis Axis);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FRay STATIC_MakeRayFromPoints(const struct FVector& A, const struct FVector& B);
		struct FRay STATIC_MakeRayFromPointDirection(const struct FVector& Origin, const struct FVector& Direction, bool bDirectionIsNormalized);
		struct FRay STATIC_GetTransformedRay(const struct FRay& Ray, const struct FTransform& Transform, bool bInvert);
		void STATIC_GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, struct FVector* StartPoint, struct FVector* EndPoint);
		bool STATIC_GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double* Distance1, double* Distance2);
		double STATIC_GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, double* RayParameter, struct FVector* RayPoint, struct FVector* SegPoint);
		double STATIC_GetRayPointDistance(const struct FRay& Ray, const struct FVector& Point);
		struct FVector STATIC_GetRayPoint(const struct FRay& Ray, double Distance);
		bool STATIC_GetRayPlaneIntersection(const struct FRay& Ray, const struct FPlane& Plane, double* HitDistance);
		double STATIC_GetRayParameter(const struct FRay& Ray, const struct FVector& Point);
		double STATIC_GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, double* RayParameter, struct FVector* RayPoint, double* LineParameter, struct FVector* LinePoint);
		struct FVector STATIC_GetRayClosestPoint(const struct FRay& Ray, const struct FVector& Point);
		bool STATIC_GetRayBoxIntersection(const struct FRay& Ray, const struct FBox& Box, double* HitDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TestPointInsideBox(const struct FBox& Box, const struct FVector& Point, bool bConsiderOnBoxAsInside);
		bool STATIC_TestBoxSphereIntersection(const struct FBox& Box, const struct FVector& SphereCenter, double SphereRadius);
		bool STATIC_TestBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2);
		struct FBox STATIC_MakeBoxFromCenterSize(const struct FVector& Center, const struct FVector& Dimensions);
		struct FBox STATIC_MakeBoxFromCenterExtents(const struct FVector& Center, const struct FVector& Extents);
		struct FBox STATIC_GetTransformedBox(const struct FBox& Box, const struct FTransform& Transform);
		struct FBox STATIC_GetExpandedBox(const struct FBox& Box, const struct FVector& ExpandBy);
		void STATIC_GetBoxVolumeArea(const struct FBox& Box, double* Volume, double* SurfaceArea);
		double STATIC_GetBoxPointDistance(const struct FBox& Box, const struct FVector& Point);
		struct FVector STATIC_GetBoxFaceCenter(const struct FBox& Box, int32_t FaceIndex, struct FVector* FaceNormal);
		struct FVector STATIC_GetBoxCorner(const struct FBox& Box, int32_t CornerIndex);
		void STATIC_GetBoxCenterSize(const struct FBox& Box, struct FVector* Center, struct FVector* Dimensions);
		double STATIC_GetBoxBoxDistance(const struct FBox& Box1, const struct FBox& Box2);
		struct FVector STATIC_FindClosestPointOnBox(const struct FBox& Box, const struct FVector& Point, bool* bIsInside);
		struct FBox STATIC_FindBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool* bIsIntersecting);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, struct FGeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug);
		void STATIC_SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTexture2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, struct FGeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
	{
	public:
		struct FGeometryScriptScalarList STATIC_VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ);
		void STATIC_VectorNormalizeInPlace(struct FGeometryScriptVectorList* VectorList, const struct FVector& SetOnFailure);
		struct FGeometryScriptScalarList STATIC_VectorLength(const struct FGeometryScriptVectorList& VectorList);
		struct FGeometryScriptScalarList STATIC_VectorDot(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB);
		struct FGeometryScriptVectorList STATIC_VectorCross(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB);
		void STATIC_VectorBlendInPlace(const struct FGeometryScriptVectorList& VectorListA, struct FGeometryScriptVectorList* VectorListB, double ConstantA, double ConstantB);
		struct FGeometryScriptVectorList STATIC_VectorBlend(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
		void STATIC_ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptVectorList* VectorList, double ScalarMultiplier);
		struct FGeometryScriptVectorList STATIC_ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
		void STATIC_ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double ConstantMultiplier);
		struct FGeometryScriptScalarList STATIC_ScalarMultiply(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
		void STATIC_ScalarInvertInPlace(struct FGeometryScriptScalarList* ScalarList, double Numerator, double SetOnFailure, double Epsilon);
		struct FGeometryScriptScalarList STATIC_ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
		void STATIC_ScalarBlendInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double ConstantA, double ConstantB);
		struct FGeometryScriptScalarList STATIC_ScalarBlend(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
		void STATIC_ConstantVectorMultiplyInPlace(double Constant, struct FGeometryScriptVectorList* VectorList);
		struct FGeometryScriptVectorList STATIC_ConstantVectorMultiply(double Constant, const struct FGeometryScriptVectorList& VectorList);
		void STATIC_ConstantScalarMultiplyInPlace(double Constant, struct FGeometryScriptScalarList* ScalarList);
		struct FGeometryScriptScalarList STATIC_ConstantScalarMultiply(double Constant, const struct FGeometryScriptScalarList& ScalarList);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
