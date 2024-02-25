#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
	 * Size -> 0x0050
	 */
	struct FLevelSequenceObjectReferenceMap
	{
	public:
		unsigned char                                              UnknownData_4OK3[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReference
	 * Size -> 0x0040
	 */
	struct FLevelSequenceBindingReference
	{
	public:
		class FString                                              PackageName;                                             // 0x0000(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     ExternalObjectPath;                                      // 0x0010(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ObjectPath;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
	 * Size -> 0x0010
	 */
	struct FLevelSequenceBindingReferenceArray
	{
	public:
		TArray<struct FLevelSequenceBindingReference>              References;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceBindingReferences
	 * Size -> 0x00F0
	 */
	struct FLevelSequenceBindingReferences
	{
	public:
		TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                   // 0x0000(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              AnimSequenceInstances[0x50];                             // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PostProcessInstances[0x50];                              // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceObject
	 * Size -> 0x0038
	 */
	struct FLevelSequenceObject
	{
	public:
		TLazyObjectPtr<class UObject>                              ObjectOrOwner;                                           // 0x0000(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ICM2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ComponentName;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UObject>                              CachedComponent;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceCameraSettings
	 * Size -> 0x0002
	 */
	struct FLevelSequenceCameraSettings
	{
	public:
		bool                                                       bOverrideAspectRatioAxisConstraint;                      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAspectRatioAxisConstraint                                 AspectRatioAxisConstraint;                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
	 * Size -> 0x0038
	 */
	struct FLevelSequenceAnimSequenceLinkItem
	{
	public:
		struct FGuid                                               SkelTrackGuid;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     PathToAnimSequence;                                      // 0x0010(0x0020) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportTransforms;                                       // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportMorphTargets;                                     // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportAttributeCurves;                                  // 0x0032(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportMaterialCurves;                                   // 0x0033(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimInterpolationType                                     Interpolation;                                           // 0x0034(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       CurveInterpolation;                                      // 0x0035(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecordInWorldSpace;                                     // 0x0036(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateAllSkeletalMeshComponents;                      // 0x0037(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
	 * Size -> 0x00D0
	 */
	struct FLevelSequencePlayerSnapshot
	{
	public:
		class FString                                              RootName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 RootTime;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 SourceTime;                                              // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentShotName;                                         // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 CurrentShotLocalTime;                                    // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQualifiedFrameTime                                 CurrentShotSourceTime;                                   // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceTimecode;                                          // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CameraComponent[0x30];                                   // 0x0070(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class ULevelSequence*                                      ActiveShot;                                              // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               ShotID;                                                  // 0x00A8(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGJ1[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MasterName;                                              // 0x00B0(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FQualifiedFrameTime                                 MasterTime;                                              // 0x00C0(0x0010) Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
	 * Size -> 0x0020
	 */
	struct FLevelSequenceLegacyObjectReference
	{
	public:
		unsigned char                                              UnknownData_YJJ8[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.BoundActorProxy
	 * Size -> 0x0001
	 */
	struct FBoundActorProxy
	{
	public:
		unsigned char                                              UnknownData_4K79[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
	 * Size -> 0x0001
	 */
	struct FLevelSequenceSnapshotSettings
	{
	public:
		unsigned char                                              UnknownData_7UWD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
