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
	 * Class MetasoundEngine.MetasoundGeneratorHandle
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UMetasoundGeneratorHandle : public UObject
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AUQP[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMetaSoundSource*                                    CachedMetasoundSource;                                   // 0x0038(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HF73[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (PADDING)

	public:
		class UMetasoundGeneratorHandle* STATIC_CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);
		bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundSettings
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UMetaSoundSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bAutoUpdateEnabled;                                      // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYB8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMetasoundFrontendClassName>                 AutoUpdateDenylist;                                      // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings>    AutoUpdateAssetDenylist;                                 // 0x0050(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoUpdateLogWarningOnDroppedConnection;                // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2ET[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDirectoryPath>                              DirectoriesToRegister;                                   // 0x0068(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		int32_t                                                    DenyListCacheChangeID;                                   // 0x0078(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OSW[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetasoundEditorGraphBase
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UMetasoundEditorGraphBase : public UEdGraph
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundPatch
	 * Size -> 0x0330 (FullSize[0x0358] - InheritedSize[0x0028])
	 */
	class UMetaSoundPatch : public UObject
	{
	public:
		unsigned char                                              UnknownData_QWUI[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendDocument                          RootMetaSoundDocument;                                   // 0x0090(0x01C8) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ReferencedAssetClassKeys[0x50];                          // 0x0258(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferencedAssetClassObjects[0x50];                       // 0x02A8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferenceAssetClassCache[0x50];                          // 0x02F8(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FGuid                                               AssetClassID;                                            // 0x0348(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundAssetSubsystem
	 * Size -> 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
	 */
	class UMetaSoundAssetSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_PMV4[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMetaSoundAsyncAssetDependencies>            LoadingDependencies;                                     // 0x0038(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VIZQ[0x198];                                 // 0x0048(0x0198) MISSED OFFSET (PADDING)

	public:
		void UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);
		void RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories);
		static UClass* StaticClass();
	};

	/**
	 * Class MetasoundEngine.MetaSoundSource
	 * Size -> 0x03A0 (FullSize[0x0840] - InheritedSize[0x04A0])
	 */
	class UMetaSoundSource : public USoundWaveProcedural
	{
	public:
		unsigned char                                              UnknownData_BBXQ[0x68];                                  // 0x04A0(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMetasoundFrontendDocument                          RootMetaSoundDocument;                                   // 0x0508(0x01C8) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              ReferencedAssetClassKeys[0x50];                          // 0x06D0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferencedAssetClassObjects[0x50];                       // 0x0720(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ReferenceAssetClassCache[0x50];                          // 0x0770(0x0050) UNKNOWN PROPERTY: SetProperty
		EMetasoundSourceAudioFormat                                OutputFormat;                                            // 0x07C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F62S[0x3];                                   // 0x07C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               AssetClassID;                                            // 0x07C4(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWCY[0x6C];                                  // 0x07D4(0x006C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
