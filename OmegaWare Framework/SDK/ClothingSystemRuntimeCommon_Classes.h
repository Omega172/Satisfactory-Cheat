﻿#pragma once

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
	 * Class ClothingSystemRuntimeCommon.ClothConfigCommon
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothConfigCommon : public UClothConfigBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothSharedConfigCommon : public UClothConfigCommon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClothingAssetCustomData : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeCommon.ClothingAssetCommon
	 * Size -> 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
	 */
	class UClothingAssetCommon : public UClothingAssetBase
	{
	public:
		class UPhysicsAsset*                                       PhysicsAsset;                                            // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UClothConfigBase*>                 ClothConfigs;                                            // 0x0050(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FClothLODDataCommon>                         LODData;                                                 // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            LodMap;                                                  // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        UsedBoneNames;                                           // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            UsedBoneIndices;                                         // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ReferenceBoneIndex;                                      // 0x00E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAEO[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClothingAssetCustomData*                            CustomData;                                              // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
	 * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
	 */
	class UClothLODDataCommon_Legacy : public UObject
	{
	public:
		class UClothPhysicalMeshDataBase_Legacy*                   PhysicalMeshData;                                        // 0x0028(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FClothPhysicalMeshData                              ClothPhysicalMeshData;                                   // 0x0030(0x00D8) NativeAccessSpecifierPublic
		struct FClothCollisionData                                 CollisionData;                                           // 0x0108(0x0040) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NURE[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
