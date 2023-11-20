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
	 * ScriptStruct GeometryCache.NiagaraGeometryCacheReference
	 * Size -> 0x0038
	 */
	struct FNiagaraGeometryCacheReference
	{
	public:
		class UGeometryCache*                                      GeometryCache;                                           // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        GeometryCacheUserParamBinding;                           // 0x0008(0x0020) Edit, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCache.TrackRenderData
	 * Size -> 0x00C0
	 */
	struct FTrackRenderData
	{
	public:
		unsigned char                                              UnknownData_YK15[0xC0];                                  // 0x0000(0x00C0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
	 * Size -> 0x000C
	 */
	struct FGeometryCacheMeshBatchInfo
	{
	public:
		unsigned char                                              UnknownData_1U5H[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheVertexInfo
	 * Size -> 0x0009
	 */
	struct FGeometryCacheVertexInfo
	{
	public:
		unsigned char                                              UnknownData_2Z4O[0x9];                                   // 0x0000(0x0009) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCache.GeometryCacheMeshData
	 * Size -> 0x00C8
	 */
	struct FGeometryCacheMeshData
	{
	public:
		unsigned char                                              UnknownData_JCF3[0xC8];                                  // 0x0000(0x00C8) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
