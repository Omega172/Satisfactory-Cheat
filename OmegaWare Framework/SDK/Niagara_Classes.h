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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Niagara.NDIRenderTargetVolumeSimCacheData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNDIRenderTargetVolumeSimCacheData : public UObject
	{
	public:
		class FName                                                CompressionType;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNDIRenderTargetVolumeSimCacheFrame>         Frames;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraConvertInPlaceUtilityBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraConvertInPlaceUtilityBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelReader
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannelReader : public UObject
	{
	public:
		unsigned char                                              UnknownData_BHX3[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraDataChannelHandler*                          Owner;                                                   // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		struct FVector4 ReadVector4(const class FName& VarName, int32_t Index);
		struct FVector2D ReadVector2D(const class FName& VarName, int32_t Index);
		struct FVector ReadVector(const class FName& VarName, int32_t Index);
		struct FQuat ReadQuat(const class FName& VarName, int32_t Index);
		struct FLinearColor ReadLinearColor(const class FName& VarName, int32_t Index);
		int32_t ReadInt(const class FName& VarName, int32_t Index);
		double ReadFloat(const class FName& VarName, int32_t Index);
		bool ReadBool(const class FName& VarName, int32_t Index);
		int32_t Num();
		bool InitAccess(class UActorComponent* OwningComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelWriter
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannelWriter : public UObject
	{
	public:
		unsigned char                                              UnknownData_QWI9[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraDataChannelHandler*                          Owner;                                                   // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WriteVector4(const class FName& VarName, int32_t Index, const struct FVector4& InData);
		void WriteVector2D(const class FName& VarName, int32_t Index, const struct FVector2D& InData);
		void WriteVector(const class FName& VarName, int32_t Index, const struct FVector& InData);
		void WriteSpawnInfo(const class FName& VarName, int32_t Index, const struct FNiagaraSpawnInfo& InData);
		void WriteQuat(const class FName& VarName, int32_t Index, const struct FQuat& InData);
		void WriteLinearColor(const class FName& VarName, int32_t Index, const struct FLinearColor& InData);
		void WriteInt(const class FName& VarName, int32_t Index, int32_t InData);
		void WriteFloat(const class FName& VarName, int32_t Index, double InData);
		void WriteBool(const class FName& VarName, int32_t Index, bool InData);
		int32_t Num();
		bool InitWrite(class UActorComponent* OwningComponent, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelDefinitions
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannelDefinitions : public UObject
	{
	public:
		TArray<class UNiagaraDataChannel*>                         DataChannels;                                            // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelHandler
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannelHandler : public UObject
	{
	public:
		class UNiagaraDataChannel*                                 DataChannel;                                             // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SGI0[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraDataChannelWriter*                           Writer;                                                  // 0x0058(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraDataChannelReader*                           Reader;                                                  // 0x0060(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UNiagaraDataChannelWriter* GetDataChannelWriter();
		class UNiagaraDataChannelReader* GetDataChannelReader();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannel
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannel : public UObject
	{
	public:
		class FName                                                ChannelName;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bKeepPreviousFrameData;                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YYRF[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetCompiledData                         CompiledData;                                            // 0x0048(0x0048) NativeAccessSpecifierPrivate
		struct FNiagaraDataSetCompiledData                         CompiledDataGPU;                                         // 0x0090(0x0048) NativeAccessSpecifierPrivate
		struct FNiagaraDataChannelGameDataLayout                   GameDataLayout;                                          // 0x00D8(0x0060) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannel_Global
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UNiagaraDataChannel_Global : public UNiagaraDataChannel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelHandler_Global
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
	{
	public:
		unsigned char                                              UnknownData_LWT2[0x38];                                  // 0x0068(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterface
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
	{
	public:
		unsigned char                                              UnknownData_823N[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDataChannelRead
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraDataChannelReference                        Channel;                                                 // 0x0038(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bReadCurrentFrame;                                       // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B647[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNDIDataChannelCompiledData                         CompiledData;                                            // 0x0048(0x0068) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDataChannelSpawn
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UNiagaraDataInterfaceDataChannelSpawn : public UNiagaraDataInterfaceDataChannelRead
	{
	public:
		struct FNiagaraDataInterfaceEmitterBinding                 EmitterBinding;                                          // 0x00B0(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideSpawnGroupToDataChannelIndex;                   // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO4M[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDataChannelWrite
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
	{
	public:
		ENiagaraDataChannelAllocationMode                          AllocationMode;                                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8CU[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   AllocationCount;                                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPublishToGame;                                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPublishToCPU;                                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPublishToGPU;                                           // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSB9[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataChannelReference                        Channel;                                                 // 0x0044(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLDT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNDIDataChannelWriteCompiledData                    CompiledData;                                            // 0x0050(0x00B0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMessageDataBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraMessageDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterDefinitionsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraParameterDefinitionsBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRenderableMeshInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraRenderableMeshInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScriptSourceBase
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNiagaraScriptSourceBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_C4O3[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSettings
	 * Size -> 0x00E8 (FullSize[0x0120] - InheritedSize[0x0038])
	 */
	class UNiagaraSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bSystemsSupportLargeWorldCoordinates;                    // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnforceStrictStackTypes;                                // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExperimentalVMEnabled;                                  // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKIV[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DefaultEffectType;                                       // 0x0040(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PositionPinTypeColor;                                    // 0x0060(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                        QualityLevels;                                           // 0x0070(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TMap<class FString, class FText>                           ComponentRendererWarningsPerClass;                       // 0x0080(0x0050) Edit, Config, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 DefaultRenderTargetFormat;                               // 0x00D0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    DefaultGridFormat;                                       // 0x00D1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA8C[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraDefaultRendererMotionVectorSetting                 DefaultRendererMotionVectorSetting;                      // 0x00D4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0BX[0x3];                                   // 0x00D5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraDefaultRendererPixelCoverageMode                   DefaultPixelCoverageMode;                                // 0x00D8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDefaultSortPrecision                               DefaultSortPrecision;                                    // 0x00D9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDefaultGpuTranslucentLatency                       DefaultGpuTranslucentLatency;                            // 0x00DA(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UT38[0x1];                                   // 0x00DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultLightInverseExposureBlend;                        // 0x00DC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkelMesh_GpuMaxInfluences                              NDISkelMesh_GpuMaxInfluences;                            // 0x00E0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkelMesh_GpuUniformSamplingFormat                      NDISkelMesh_GpuUniformSamplingFormat;                    // 0x00E1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkelMesh_AdjacencyTriangleIndexFormat                  NDISkelMesh_AdjacencyTriangleIndexFormat;                // 0x00E2(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NDIStaticMesh_AllowDistanceFields;                       // 0x00E3(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q95Z[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ENDICollisionQuery_AsyncGpuTraceProvider>           NDICollisionQuery_AsyncGpuTraceProviderOrder;            // 0x00E8(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              SimCacheAuxiliaryFileBasePath;                           // 0x00F8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    SimCacheMaxCPUMemoryVolumetrics;                         // 0x0108(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraPlatformSetRedirect>                 PlatformSetRedirects;                                    // 0x0110(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimCacheCustomStorageInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSimCacheCustomStorageInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraValidationRuleSet
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraValidationRuleSet : public UObject
	{
	public:
		TArray<class UNiagaraValidationRule*>                      ValidationRules;                                         // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceActorComponent
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
	{
	public:
		bool                                                       bRequireCurrentFrameData;                                // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDIActorComponentSourceMode                               SourceMode;                                              // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0N6X[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocalPlayerIndex;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TLazyObjectPtr<class AActor>                               SourceActor;                                             // 0x0040(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJSK[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        ActorOrComponentParameter;                               // 0x0060(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
	{
	public:
		int32_t                                                    MaxTracesPerParticle;                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRetraces;                                             // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDICollisionQuery_AsyncGpuTraceProvider                   TraceProvider;                                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFSG[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDebugDraw
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
	{
	public:
		uint32_t                                                   OverrideMaxLineInstances;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM0L[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceDynamicMesh
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_FGD4[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDynamicMeshSection>                  Sections;                                                // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDynamicMeshMaterial>                 Materials;                                               // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumVertices;                                             // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTexCoords;                                            // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasColors;                                              // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasTangentBasis;                                        // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearTrianglesPerFrame;                                 // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5MC[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                DefaultBounds;                                           // 0x0070(0x0038) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceEmitterProperties
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraDataInterfaceEmitterBinding                 EmitterBinding;                                          // 0x0038(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCZE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGBuffer
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfacePhysicsAsset
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
	{
	public:
		class UPhysicsAsset*                                       DefaultSource;                                           // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SoftSourceActor[0x30];                                   // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FNiagaraUserParameterBinding                        MeshUserParameter;                                       // 0x0070(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAM1[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPhysicsAssetDICollectorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSimCacheReader
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraUserParameterBinding                        SimCacheBinding;                                         // 0x0038(0x0020) Edit, NativeAccessSpecifierPublic
		class UNiagaraSimCache*                                    SimCache;                                                // 0x0058(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EmitterBinding;                                          // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSimpleCounter
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
	{
	public:
		ENiagaraGpuSyncMode                                        GpuSyncMode;                                             // 0x0038(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB3K[0x3];                                   // 0x0039(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    InitialValue;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceStaticMesh
	 * Size -> 0x0098 (FullSize[0x00D0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
	{
	public:
		ENDIStaticMesh_SourceMode                                  SourceMode;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QHG[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DefaultMesh;                                             // 0x0040(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SoftSourceActor[0x30];                                   // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UStaticMeshComponent*                                SourceComponent;                                         // 0x0078(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNDIStaticMeshSectionFilter                         SectionFilter;                                           // 0x0080(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bUsePhysicsBodyVelocity;                                 // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSamplingFromStreamingLODs;                         // 0x0091(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_266X[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODIndex;                                                // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        LODIndexUserParameter;                                   // 0x0098(0x0020) Edit, NativeAccessSpecifierPublic
		TArray<class FName>                                        FilteredSockets;                                         // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78W8[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraUserParameterBinding                        UObjectParameterBinding;                                 // 0x0038(0x0020) Edit, NativeAccessSpecifierPublic
		TArray<struct FNiagaraUObjectPropertyReaderRemap>          PropertyRemap;                                           // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SourceActor[0x30];                                       // 0x0068(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              SourceActorComponentClass;                               // 0x0098(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQSW[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, const class FName& UserParameterName, const class FName& GraphName, const class FName& RemapName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVirtualTexture
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
	{
	public:
		class URuntimeVirtualTexture*                              Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        TextureUserParameter;                                    // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemSpawnSection
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
	{
	public:
		ENiagaraSystemSpawnSectionStartBehavior                    SectionStartBehavior;                                    // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6Y9U[0x3];                                   // 0x00F1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SectionEvaluateBehavior;                                 // 0x00F4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WWME[0x3];                                   // 0x00F5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SectionEndBehavior;                                      // 0x00F8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0YOG[0x3];                                   // 0x00F9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowScalability;                                       // 0x00FD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2E7F[0x2];                                   // 0x00FE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraTrack
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0098(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
	{
	public:
		unsigned char                                              UnknownData_O84B[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraParameterTrack
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x00A8(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraBoolParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_DG5U[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraColorParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_EUNV[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraFloatParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_NVT1[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraIntegerParameterTrack
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_S2TD[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraVectorParameterTrack
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_OLZM[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChannelsUsed;                                            // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JWPC[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraActor
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class ANiagaraActor : public AActor
	{
	public:
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x02F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDestroyOnSystemFinish : 1;                              // 0x0300(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AWL0[0xF];                                   // 0x0301(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
		void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerOutput
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraBakerOutput : public UObject
	{
	public:
		class FString                                              OutputName;                                              // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerOutputSimCache
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
	{
	public:
		class FString                                              SimCacheAssetPathFormat;                                 // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraSimCacheCreateParameters                    CreateParameters;                                        // 0x0048(0x0058) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerOutputTexture2D
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
	{
	public:
		struct FNiagaraBakerTextureSource                          SourceBinding;                                           // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bGenerateAtlas : 1;                                      // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateFrames : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportFrames : 1;                                       // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetTextureAddressX : 1;                                 // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetTextureAddressY : 1;                                 // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AO9[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           FrameSize;                                               // 0x0054(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           AtlasTextureSize;                                        // 0x005C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NJF[0x8];                                   // 0x0064(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETextureAddress                                            TextureAddressX;                                         // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            TextureAddressY;                                         // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8K1[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AtlasAssetPathFormat;                                    // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FramesAssetPathFormat;                                   // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FramesExportPathFormat;                                  // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerOutputVolumeTexture
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
	{
	public:
		struct FNiagaraBakerTextureSource                          SourceBinding;                                           // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bGenerateAtlas : 1;                                      // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateFrames : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExportFrames : 1;                                       // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT4K[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AtlasAssetPathFormat;                                    // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FramesAssetPathFormat;                                   // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FramesExportPathFormat;                                  // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBakerSettings
	 * Size -> 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
	 */
	class UNiagaraBakerSettings : public UObject
	{
	public:
		float                                                      StartSeconds;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSeconds;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FramesPerSecond;                                         // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreviewLooping : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WW3[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           FramesPerDimension;                                      // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNiagaraBakerOutput*>                         Outputs;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FNiagaraBakerCameraSettings>                 CameraSettings;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    CurrentCameraIndex;                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BakeQualityLevel;                                        // 0x0064(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderComponentOnly : 1;                                // 0x006C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISLS[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraBakerTextureSettings>                OutputTextures;                                          // 0x0070(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		ENiagaraBakerViewMode                                      CameraViewportMode;                                      // 0x0080(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W44[0x3];                                   // 0x0081(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_L73Z[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CameraViewportLocation[0x7];                             // 0x0088(0x00A8) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraViewportRotation[0x7];                             // 0x0130(0x00A8) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraOrbitDistance;                                     // 0x01D8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraFOV;                                               // 0x01DC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraOrthoWidth;                                        // 0x01E0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraAspectRatio : 1;                               // 0x01E4(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSER[0x3];                                   // 0x01E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraAspectRatio;                                       // 0x01E8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXRQ[0x4];                                   // 0x01EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponent
	 * Size -> 0x02A0 (FullSize[0x0808] - InheritedSize[0x0568])
	 */
	class UNiagaraComponent : public UFXSystemComponent
	{
	public:
		class UNiagaraSystem*                                      Asset;                                                   // 0x0568(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraTickBehavior                                       TickBehavior;                                            // 0x0570(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I9XZ[0x3];                                   // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeedOffset;                                        // 0x0574(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraUserRedirectionParameterStore               OverrideParameters;                                      // 0x0578(0x00D8) NativeAccessSpecifierPrivate
		bool                                                       bForceSolo : 1;                                          // 0x0650(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableGpuComputeDebug : 1;                              // 0x0650(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOverrideWarmupSettings : 1;                             // 0x0650(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9HLI[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WarmupTickCount;                                         // 0x0654(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WarmupTickDelta;                                         // 0x0658(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZJ8[0x34];                                  // 0x065C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoDestroy : 1;                                        // 0x0690(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRenderingEnabled : 1;                                   // 0x0690(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoManageAttachment : 1;                               // 0x0690(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAttachWeldSimulatedBodies : 1;                      // 0x0690(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QEB[0x3];                                   // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTimeBeforeForceUpdateTransform;                       // 0x0694(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BOV[0x8];                                   // 0x0698(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSystemFinished;                                        // 0x06A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      AutoAttachParent;                                        // 0x06B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AutoAttachSocketName;                                    // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachLocationRule;                                  // 0x06C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachRotationRule;                                  // 0x06C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachScaleRule;                                     // 0x06C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYEI[0x9];                                   // 0x06C3(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UnknownData_YMCK : 4;                                    // 0x06CC(0x0001) BIT_FIELD (PADDING)
		bool                                                       bAllowScalability : 1;                                   // 0x06CC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QCPQ[0x12B];                                 // 0x06CD(0x012B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSimCache*                                    SimCache;                                                // 0x07F8(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraCullProxyComponent*                          CullProxy;                                               // 0x0800(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetVariableVec4(const class FName& InVariableName, const struct FVector4& InValue);
		void SetVariableVec3(const class FName& InVariableName, const struct FVector& InValue);
		void SetVariableVec2(const class FName& InVariableName, const struct FVector2D& InValue);
		void SetVariableTextureRenderTarget(const class FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget);
		void SetVariableTexture(const class FName& InVariableName, class UTexture* Texture);
		void SetVariableStaticMesh(const class FName& InVariableName, class UStaticMesh* InValue);
		void SetVariableQuat(const class FName& InVariableName, const struct FQuat& InValue);
		void SetVariablePosition(const class FName& InVariableName, const struct FVector& InValue);
		void SetVariableObject(const class FName& InVariableName, class UObject* Object);
		void SetVariableMatrix(const class FName& InVariableName, const struct FMatrix& InValue);
		void SetVariableMaterial(const class FName& InVariableName, class UMaterialInterface* Object);
		void SetVariableLinearColor(const class FName& InVariableName, const struct FLinearColor& InValue);
		void SetVariableInt(const class FName& InVariableName, int32_t InValue);
		void SetVariableFloat(const class FName& InVariableName, float InValue);
		void SetVariableBool(const class FName& InVariableName, bool InValue);
		void SetVariableActor(const class FName& InVariableName, class AActor* Actor);
		void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
		void SetSystemFixedBounds(const struct FBox& LocalBounds);
		void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);
		void SetSeekDelta(float InSeekDelta);
		void SetRenderingEnabled(bool bInRenderingEnabled);
		void SetRandomSeedOffset(int32_t NewRandomSeedOffset);
		void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
		void SetPaused(bool bInPaused);
		void SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue);
		void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
		void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue);
		void SetNiagaraVariablePosition(const class FString& InVariableName, const struct FVector& InValue);
		void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
		void SetNiagaraVariableMatrix(const class FString& InVariableName, const struct FMatrix& InValue);
		void SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetNiagaraVariableInt(const class FString& InVariableName, int32_t InValue);
		void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
		void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
		void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
		void SetMaxSimTime(float InMaxTime);
		void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
		void SetGpuComputeDebug(bool bEnableDebug);
		void SetForceSolo(bool bInForceSolo);
		void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
		void SetEmitterFixedBounds(const class FName& EmitterName, const struct FBox& LocalBounds);
		void SetDesiredAge(float InDesiredAge);
		void SetCustomTimeDilation(float Dilation);
		void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
		void SetAutoDestroy(bool bInAutoDestroy);
		void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
		void SetAllowScalability(bool bAllow);
		void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
		void SeekToDesiredAge(float InDesiredAge);
		void ResetSystem();
		void ReinitializeSystem();
		bool IsPaused();
		void InitForPerformanceBaseline();
		ENiagaraTickBehavior GetTickBehavior();
		struct FBox GetSystemFixedBounds();
		class UNiagaraSimCache* GetSimCache();
		float GetSeekDelta();
		int32_t GetRandomSeedOffset();
		bool GetPreviewLODDistanceEnabled();
		float GetPreviewLODDistance();
		TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
		float GetMaxSimTime();
		bool GetLockDesiredAgeDeltaTimeToSeekDelta();
		bool GetForceSolo();
		bool GetForceLocalPlayerEffect();
		struct FBox GetEmitterFixedBounds(const class FName& EmitterName);
		float GetDesiredAge();
		class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
		float GetCustomTimeDilation();
		class UNiagaraSystem* GetAsset();
		bool GetAllowScalability();
		ENiagaraAgeUpdateMode GetAgeUpdateMode();
		void ClearSystemFixedBounds();
		void ClearSimCache(bool bResetSystem);
		void ClearEmitterFixedBounds(const class FName& EmitterName);
		void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
		void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentPool
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UNiagaraComponentPool : public UObject
	{
	public:
		TMap<class UNiagaraSystem*, struct FNCPool>                WorldParticleSystemPools;                                // 0x0028(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N4J2[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRendererProperties
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UNiagaraRendererProperties : public UNiagaraMergeable
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0028(0x0030) Edit, NativeAccessSpecifierPublic
		int32_t                                                    SortOrderHint;                                           // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererMotionVectorSetting                        MotionVectorSetting;                                     // 0x005C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEQU[0x3];                                   // 0x005D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FNiagaraVariableAttributeBinding                    RendererEnabledBinding;                                  // 0x0060(0x0058) Edit, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInCullProxies;                                     // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HM7[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               OuterEmitterVersion;                                     // 0x00BC(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMotionBlurEnabled;                                      // 0x00CC(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_25XR[0x13];                                  // 0x00CD(0x0013) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentRendererProperties
	 * Size -> 0x0150 (FullSize[0x0230] - InheritedSize[0x00E0])
	 */
	class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UClass*                                              ComponentType;                                           // 0x00E0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ComponentCountLimit;                                     // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HAL[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x00F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0148(0x0058) Edit, NativeAccessSpecifierPublic
		bool                                                       bAssignComponentsOnParticleID;                           // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateComponentFirstParticleFrame;                      // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyActivateNewlyAquiredComponents;                     // 0x01A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUFW[0x1];                                   // 0x01A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RendererVisibility;                                      // 0x01A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     TemplateComponent;                                       // 0x01A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraComponentPropertyBinding>            PropertyBindings;                                        // 0x01B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5LE[0x70];                                  // 0x01C0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraCullProxyComponent
	 * Size -> 0x0018 (FullSize[0x0820] - InheritedSize[0x0808])
	 */
	class UNiagaraCullProxyComponent : public UNiagaraComponent
	{
	public:
		TArray<struct FNiagaraCulledComponentInfo>                 Instances;                                               // 0x0808(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OAY[0x8];                                   // 0x0818(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataChannelLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNiagaraDataChannelHandler* STATIC_GetNiagaraDataChannel(class UObject* WorldContextObject, const class FName& Channel);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterface2DArrayTexture
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        TextureUserParameter;                                    // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRWBase
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArray
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
	{
	public:
		unsigned char                                              UnknownData_84PP[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraGpuSyncMode                                        GpuSyncMode;                                             // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8HT[0x3];                                   // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    MaxElements;                                             // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<float>                                              FloatData;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat2
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector2f>                                   InternalFloatData;                                       // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat3
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector3f>                                   InternalFloatData;                                       // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayPosition
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FNiagaraPosition>                            PositionData;                                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat4
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector4f>                                   InternalFloatData;                                       // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayColor
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FLinearColor>                                ColorData;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayQuat
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FQuat4f>                                     InternalQuatData;                                        // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector4& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector4> ArrayData);
		void STATIC_SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector2D& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector2D> ArrayData);
		void STATIC_SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector> ArrayData);
		void STATIC_SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, int32_t Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<int32_t> ArrayData);
		void STATIC_SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FQuat& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FQuat> ArrayData);
		void STATIC_SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FVector& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector> ArrayData);
		void STATIC_SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, int32_t Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<int32_t> ArrayData);
		void STATIC_SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, float Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<float> ArrayData);
		void STATIC_SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, const struct FLinearColor& Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FLinearColor> ArrayData);
		void STATIC_SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index, bool Value, bool bSizeToFit);
		void STATIC_SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<bool> ArrayData);
		struct FVector STATIC_GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		struct FVector4 STATIC_GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FVector4> STATIC_GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FVector2D STATIC_GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FVector2D> STATIC_GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FVector> STATIC_GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		int32_t STATIC_GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<int32_t> STATIC_GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FQuat STATIC_GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FQuat> STATIC_GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FVector STATIC_GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FVector> STATIC_GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		int32_t STATIC_GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<int32_t> STATIC_GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		float STATIC_GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<float> STATIC_GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		struct FLinearColor STATIC_GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<struct FLinearColor> STATIC_GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		bool STATIC_GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, int32_t Index);
		TArray<bool> STATIC_GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayInt32
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<int32_t>                                            IntData;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayUInt8
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<unsigned char>                                      InternalIntData;                                         // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayBool
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<bool>                                               BoolData;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayNiagaraID
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FNiagaraID>                                  IntData;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSubmix
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioOscilloscope
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Resolution;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScopeInMilliseconds;                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
	 * Size -> 0x03E0 (FullSize[0x0408] - InheritedSize[0x0028])
	 */
	class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
	{
	public:
		bool                                                       bOverrideConcurrency;                                    // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KXG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundConcurrency*                                   Concurrency;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAttenuationSettings;                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55US[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundAttenuationSettings                           AttenuationSettings;                                     // 0x0040(0x03C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioPlayer
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   Attenuation;                                             // 0x0040(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   Concurrency;                                             // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ParameterNames;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        ConfigurationUserParameter;                              // 0x0060(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       bLimitPlaysPerTick;                                      // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJVE[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlaysPerTick;                                         // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenComponentIsDestroyed;                           // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowLoopingOneShotSounds;                              // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B8D[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSpectrum
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFrequency;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumFrequency;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseFloorDb;                                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCamera
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
	{
	public:
		int32_t                                                    PlayerControllerIndex;                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FO9[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCollisionQuery
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_GUXA[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurveBase
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
	{
	public:
		TArray<float>                                              ShaderLUT;                                               // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      LUTMinTime;                                              // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTMaxTime;                                              // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTInvTimeRange;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTNumSamplesMinusOne;                                   // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BJKU[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseLUT : 1;                                             // 0x005C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExposeCurve : 1;                                        // 0x005C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GIF[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ExposedName;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ExposedTexture;                                          // 0x0068(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceColorCurve
	 * Size -> 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          RedCurve;                                                // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          GreenCurve;                                              // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          BlueCurve;                                               // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          AlphaCurve;                                              // 0x01F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCubeTexture
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        TextureUserParameter;                                    // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurlNoise
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
	{
	public:
		uint32_t                                                   Seed;                                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSB3[0xC];                                   // 0x003C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurve
	 * Size -> 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          Curve;                                                   // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParticleCallbackHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraParticleCallbackHandler : public UInterface
	{
	public:
		void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceExport
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraUserParameterBinding                        CallbackHandlerParameter;                                // 0x0038(0x0020) Edit, NativeAccessSpecifierPublic
		ENDIExport_GPUAllocationMode                               GPUAllocationMode;                                       // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI8A[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GPUAllocationFixedSize;                                  // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GPUAllocationPerParticleSize;                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGCO[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2D
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		bool                                                       ClearBeforeNonIterationStage;                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M109[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumCellsX;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsY;                                               // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAttributes;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetGridFromMaxAxis;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q5E[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           WorldBBoxSize;                                           // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollection
	 * Size -> 0x00C8 (FullSize[0x0128] - InheritedSize[0x0060])
	 */
	class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
	{
	public:
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0060(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    OverrideBufferFormat;                                    // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x0081(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEAB[0x56];                                  // 0x0082(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x00D8(0x0050) Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);
		bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t* TilesX, int32_t* TilesY);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
	{
	public:
		class FString                                              EmitterName;                                             // 0x0128(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIName;                                                  // 0x0138(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3D
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
	{
	public:
		bool                                                       ClearBeforeNonIterationStage;                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J5Q1[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          NumCells;                                                // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESetResolutionMethod                                       SetResolutionMethod;                                     // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9M9[0x3];                                   // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_VZK0[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldBBoxSize;                                           // 0x0058(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3DCollection
	 * Size -> 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
	{
	public:
		int32_t                                                    NumAttributes;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V9A[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0078(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    OverrideBufferFormat;                                    // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x0099(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48T1[0x56];                                  // 0x009A(0x0056) MISSED OFFSET (PADDING)

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);
		bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t* TilesX, int32_t* TilesY, int32_t* TileZ);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
	{
	public:
		class FString                                              EmitterName;                                             // 0x00F0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIName;                                                  // 0x0100(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2D*>              ManagedRenderTargets;                                    // 0x0060(0x0050) Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceLandscape
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              SourceLandscape;                                         // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDILandscape_SourceMode                                   SourceMode;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZGT[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           PhysicalMaterials;                                       // 0x0048(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceMeshRendererInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
	{
	public:
		class UNiagaraMeshRendererProperties*                      MeshRenderer;                                            // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0KT9[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceNeighborGrid3D
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
	{
	public:
		uint32_t                                                   MaxNeighborsPerCell;                                     // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72CH[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceOcclusion
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceParticleRead
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
	{
	public:
		class FString                                              EmitterName;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfacePlatformSet
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0038(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
	{
	public:
		int32_t                                                    NumAttributes;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResetValue;                                              // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYM3[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2D
	 * Size -> 0x00D0 (FullSize[0x0108] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMipMapGeneration                                   MipMapGeneration;                                        // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMipMapGenerationType                               MipMapGenerationType;                                    // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             OverrideRenderTargetFilter;                              // 0x0043(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInheritUserParameterSettings : 1;                       // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x0044(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHZP[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COE8[0x50];                                  // 0x0068(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint64_t, class UTextureRenderTarget2D*>              ManagedRenderTargets;                                    // 0x00B8(0x0050) Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             OverrideRenderTargetFilter;                              // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInheritUserParameterSettings : 1;                       // 0x0046(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x0046(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQH8[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x0068(0x0050) Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTargetCube
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
	{
	public:
		int32_t                                                    Size;                                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             OverrideRenderTargetFilter;                              // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInheritUserParameterSettings : 1;                       // 0x003E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x003E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHTC[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTargetCube*>            ManagedRenderTargets;                                    // 0x0060(0x0050) Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTargetVolume
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
	{
	public:
		unsigned char                                              UnknownData_OQOV[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          Size;                                                    // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureFilter                                             OverrideRenderTargetFilter;                              // 0x004D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInheritUserParameterSettings : 1;                       // 0x004E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFormat : 1;                                     // 0x004E(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4RM[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0050(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTargetVolume*>          ManagedRenderTargets;                                    // 0x0070(0x0050) Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
	{
	public:
		TArray<class FName>                                        ActorTags;                                               // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ComponentTags;                                           // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SourceActors[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       OnlyUseMoveable;                                         // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseComplexCollisions;                                    // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalSearchAllowed;                                     // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalSearchForced;                                      // 0x006B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalSearchFallback_Unscripted;                         // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH3U[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumPrimitives;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JI4I[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetSourceActors(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<class AActor*> SourceActors);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSkeletalMesh
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
	{
	public:
		ENDISkeletalMesh_SourceMode                                SourceMode;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VH50[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SoftSourceActor[0x30];                                   // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class FName>                                        ComponentTags;                                           // 0x0070(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              SourceComponent;                                         // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNiagaraUserParameterBinding                        MeshUserParameter;                                       // 0x0088(0x0020) Edit, NativeAccessSpecifierPublic
		ENDISkeletalMesh_SkinningMode                              SkinningMode;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5G7P[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SamplingRegions;                                         // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WholeMeshLOD;                                            // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EY6[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilteredBones;                                           // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        FilteredSockets;                                         // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ExcludeBoneName;                                         // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExcludeBone : 1;                                        // 0x00F0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKBJ[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UVSetIndex;                                              // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ELH[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSpline
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              Source;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        SplineUserParameter;                                     // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       bUseLUT;                                                 // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQF9[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumLUTSteps;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KE3[0x50];                                  // 0x0068(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
	{
	public:
		class UNiagaraSpriteRendererProperties*                    SpriteRenderer;                                          // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceTexture
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        TextureUserParameter;                                    // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector2DCurve
	 * Size -> 0x0100 (FullSize[0x0170] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector4Curve
	 * Size -> 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          WCurve;                                                  // 0x01F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorCurve
	 * Size -> 0x0180 (FullSize[0x01F0] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorField
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileX;                                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileY;                                                  // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileZ;                                                  // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZAE[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVolumeCache
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
	{
	public:
		class UVolumeCache*                                        VolumeCache;                                             // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9VQ[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVolumeTexture
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        TextureUserParameter;                                    // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDebugHUDSettings
	 * Size -> 0x0258 (FullSize[0x0280] - InheritedSize[0x0028])
	 */
	class UNiagaraDebugHUDSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_TR8S[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDebugHUDSettingsData                        Data;                                                    // 0x0048(0x0238) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDecalRendererProperties
	 * Size -> 0x0368 (FullSize[0x0448] - InheritedSize[0x00E0])
	 */
	class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x00E0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraParameterBinding                            MaterialParameterBinding;                                // 0x00E8(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC88[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RendererVisibility;                                      // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalScreenSizeFade;                                     // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0100(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalOrientationBinding;                                 // 0x0158(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalSizeBinding;                                        // 0x01B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalFadeBinding;                                        // 0x0208(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalSortOrderBinding;                                   // 0x0260(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalColorBinding;                                       // 0x02B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DecalVisibleBinding;                                     // 0x0310(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0368(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraRendererMaterialParameters                  MaterialParameters;                                      // 0x03C0(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0C8F[0x38];                                  // 0x0410(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEditorDataBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraEditorDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEditorParametersAdapterBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraEditorParametersAdapterBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerDistance
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerAge
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEffectType
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UNiagaraEffectType : public UObject
	{
	public:
		bool                                                       bAllowCullingForLocalPlayers;                            // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOIG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraScalabilityUpdateFrequency                         UpdateFrequency;                                         // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M8F[0x3];                                   // 0x002D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraCullReaction                                       CullReaction;                                            // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PIMH[0x3];                                   // 0x0031(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_TEUB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSignificanceHandler*                         SignificanceHandler;                                     // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraSystemScalabilitySettings>           DetailLevelScalabilitySettings;                          // 0x0040(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		struct FNiagaraSystemScalabilitySettingsArray              SystemScalabilitySettings;                               // 0x0050(0x0010) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilitySettingsArray             EmitterScalabilitySettings;                              // 0x0060(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92CM[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraBaselineController*                          PerformanceBaselineController;                           // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraPerfBaselineStats                           PerfBaselineStats;                                       // 0x0080(0x0010) Config, NoDestructor, NativeAccessSpecifierPrivate
		struct FGuid                                               PerfBaselineVersion;                                     // 0x0090(0x0010) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEmitter
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UNiagaraEmitter : public UObject
	{
	public:
		unsigned char                                              UnknownData_KZCY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExposedVersion;                                          // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bVersioningEnabled;                                      // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XMZ1[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVersionedNiagaraEmitterData>                VersionData;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2BPU[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueEmitterName;                                       // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraRendererProperties*>                  RendererProperties;                                      // 0x0070(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraEventScriptProperties>               EventHandlerScriptProps;                                 // 0x0080(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSimulationStageBase*>                 SimulationStages;                                        // 0x0090(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate
		class UNiagaraScript*                                      GPUComputeScript;                                        // 0x00A0(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        SharedEventGeneratorIds;                                 // 0x00A8(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraEventReceiverEmitterAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
	{
	public:
		uint32_t                                                   NumParticles;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3OL[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNiagaraComponent* STATIC_SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams);
		class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		class UNiagaraComponent* STATIC_SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams);
		class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		void STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
		void STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
		void STATIC_SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
		void STATIC_SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> SamplingRegions);
		void STATIC_SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> FilteredSockets);
		void STATIC_SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> FilteredBones);
		void STATIC_SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32_t CollisionGroup);
		void STATIC_SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32_t CollisionGroup);
		void STATIC_ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32_t CollisionGroup);
		void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
		void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
		void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
		class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
		int32_t STATIC_AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraLensEffectBase
	 * Size -> 0x0080 (FullSize[0x0390] - InheritedSize[0x0310])
	 */
	class ANiagaraLensEffectBase : public ANiagaraActor
	{
	public:
		struct FTransform                                          DesiredRelativeTransform;                                // 0x0310(0x0060) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseAuthoredFOV;                                         // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowMultipleInstances : 1;                             // 0x0374(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetWhenRetriggered : 1;                               // 0x0374(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S47Q[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      EmittersToTreatAsSame;                                   // 0x0378(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class APlayerCameraManager*                                OwningCameraManager;                                     // 0x0388(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraLightRendererProperties
	 * Size -> 0x02C0 (FullSize[0x03A0] - InheritedSize[0x00E0])
	 */
	class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
	{
	public:
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN0Y[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseInverseSquaredFalloff : 1;                           // 0x00E4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectsTranslucency : 1;                                // 0x00E4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaScalesBrightness : 1;                              // 0x00E4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideInverseExposureBlend : 1;                       // 0x00E4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1AA[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusScale;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultExponent;                                         // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           ColorAdd;                                                // 0x00F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InverseExposureBlend;                                    // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RendererVisibility;                                      // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUMP[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    LightRenderingEnabledBinding;                            // 0x0108(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    LightExponentBinding;                                    // 0x0160(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x01B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0210(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RadiusBinding;                                           // 0x0268(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VolumetricScatteringBinding;                             // 0x02C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0318(0x0058) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I40U[0x30];                                  // 0x0370(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMeshRendererProperties
	 * Size -> 0x08B8 (FullSize[0x0998] - InheritedSize[0x00E0])
	 */
	class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
	{
	public:
		TArray<struct FNiagaraMeshRendererMeshProperties>          Meshes;                                                  // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFW1[0x2];                                   // 0x00F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideMaterials : 1;                                  // 0x00F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHeterogeneousVolumes : 1;                            // 0x00F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSortOnlyWhenTranslucent : 1;                            // 0x00F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXSA[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraRendererSortPrecision                              SortPrecision;                                           // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererGpuTranslucentLatency                      GpuTranslucentLatency;                                   // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YRV[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSubImageBlend : 1;                                      // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFrustumCulling : 1;                               // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCameraDistanceCulling : 1;                        // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMeshFlipbook : 1;                                 // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZL3[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraMeshMaterialOverride>                OverrideMaterials;                                       // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMeshMICOverride>                     MICOverrideMaterials;                                    // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           SubImageSize;                                            // 0x0120(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshFacingMode                                     FacingMode;                                              // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IZ6[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLockedAxisEnable : 1;                                   // 0x0134(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBAY[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LockedAxis;                                              // 0x0138(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshLockedAxisSpace                                LockedAxisSpace;                                         // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LKC[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MeshBoundsScale;                                         // 0x0158(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinCameraDistance;                                       // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZEM[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0180(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x01D8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0230(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MeshOrientationBinding;                                  // 0x0288(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ScaleBinding;                                            // 0x02E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x0338(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x0390(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x03E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0440(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x0498(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x04F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x0548(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x05A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x05F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0650(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MeshIndexBinding;                                        // 0x06A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraRendererMaterialParameters                  MaterialParameters;                                      // 0x0700(0x0050) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPositionBinding;                                     // 0x0750(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevScaleBinding;                                        // 0x07A8(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevMeshOrientationBinding;                              // 0x0800(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevCameraOffsetBinding;                                 // 0x0858(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevVelocityBinding;                                     // 0x08B0(0x0058) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLOW[0x68];                                  // 0x0908(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         ParticleMesh;                                            // 0x0970(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PivotOffset;                                             // 0x0978(0x0018) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraMeshPivotOffsetSpace                               PivotOffsetSpace;                                        // 0x0990(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NTMC[0x7];                                   // 0x0991(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollectionInstance
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UNiagaraParameterCollectionInstance : public UObject
	{
	public:
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            OverridenParameters;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterStore                              ParameterStorage;                                        // 0x0040(0x0088) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P8TE[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
		void SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue);
		void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue);
		void SetIntParameter(const class FString& InVariableName, int32_t InValue);
		void SetFloatParameter(const class FString& InVariableName, float InValue);
		void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetBoolParameter(const class FString& InVariableName, bool InValue);
		struct FVector GetVectorParameter(const class FString& InVariableName);
		struct FVector4 GetVector4Parameter(const class FString& InVariableName);
		struct FVector2D GetVector2DParameter(const class FString& InVariableName);
		struct FQuat GetQuatParameter(const class FString& InVariableName);
		int32_t GetIntParameter(const class FString& InVariableName);
		float GetFloatParameter(const class FString& InVariableName);
		struct FLinearColor GetColorParameter(const class FString& InVariableName);
		bool GetBoolParameter(const class FString& InVariableName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollection
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UNiagaraParameterCollection : public UObject
	{
	public:
		class FName                                                Namespace;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialParameterCollection*                        SourceMaterialCollection;                                // 0x0040(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraParameterCollectionInstance*                 DefaultInstance;                                         // 0x0048(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               CompileId;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBaselineController
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UNiagaraBaselineController : public UObject
	{
	public:
		float                                                      TestDuration;                                            // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJKS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANiagaraPerfBaselineActor*                           Owner;                                                   // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              System[0x30];                                            // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		bool OnTickTest();
		void OnOwnerTick(float DeltaTime);
		void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
		void OnBeginTest();
		class UNiagaraSystem* GetSystem();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraBaselineController_Basic
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
	{
	public:
		int32_t                                                    NumInstances;                                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2STU[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNiagaraComponent*>                           SpawnedComponents;                                       // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPerfBaselineActor
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class ANiagaraPerfBaselineActor : public AActor
	{
	public:
		class UNiagaraBaselineController*                          Controller;                                              // 0x02F8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                Label;                                                   // 0x0300(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYGR[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPrecompileContainer
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraPrecompileContainer : public UObject
	{
	public:
		TArray<class UNiagaraScript*>                              Scripts;                                                 // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      System;                                                  // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewBase
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class ANiagaraPreviewBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_POMW[0x8];                                   // 0x02F8(0x0008) Fix Super Size

	public:
		void SetSystem(class UNiagaraSystem* InSystem);
		void SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraPreviewAxis : public UObject
	{
	public:
		int32_t Num();
		void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
	{
	public:
		class FName                                                Param;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_36HH[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamInt32
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		int32_t                                                    Min;                                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Max;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamFloat
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		float                                                      Min;                                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Max;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           Max;                                                     // 0x0048(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector                                             Min;                                                     // 0x0038(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Max;                                                     // 0x0050(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector4
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		unsigned char                                              UnknownData_YFC2[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Min;                                                     // 0x0040(0x0020) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector4                                            Max;                                                     // 0x0060(0x0020) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FLinearColor                                        Min;                                                     // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        Max;                                                     // 0x0048(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewGrid
	 * Size -> 0x0058 (FullSize[0x0350] - InheritedSize[0x02F8])
	 */
	class ANiagaraPreviewGrid : public AActor
	{
	public:
		class UNiagaraSystem*                                      System;                                                  // 0x02F8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraPreviewGridResetMode                               ResetMode;                                               // 0x0300(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_680Z[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraPreviewAxis*                                 PreviewAxisX;                                            // 0x0308(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraPreviewAxis*                                 PreviewAxisY;                                            // 0x0310(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PreviewClass;                                            // 0x0318(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingX;                                                // 0x0320(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingY;                                                // 0x0324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumX;                                                    // 0x0328(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumY;                                                    // 0x032C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UChildActorComponent*>                        PreviewComponents;                                       // 0x0330(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YYX9[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetPaused(bool bPaused);
		void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
		void DeactivatePreviews();
		void ActivatePreviews(bool bReset);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRibbonRendererProperties
	 * Size -> 0x09C0 (FullSize[0x0AA0] - InheritedSize[0x00E0])
	 */
	class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x00E0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraRibbonFacingMode                                   FacingMode;                                              // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIPV[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraRibbonUVSettings                            UV0Settings;                                             // 0x0110(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraRibbonUVSettings                            UV1Settings;                                             // 0x0148(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumRibbons;                                           // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGPUInit;                                             // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRibbonDrawDirection                                DrawDirection;                                           // 0x0185(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRibbonShapeMode                                    Shape;                                                   // 0x0186(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAccurateGeometry;                                 // 0x0187(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WidthSegmentationCount;                                  // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiPlaneCount;                                         // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TubeSubdivisions;                                        // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHZE[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraRibbonShapeCustomVertex>             CustomVertices;                                          // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ENiagaraRibbonTessellationMode                             TessellationMode;                                        // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CK6[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveTension;                                            // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TessellationFactor;                                      // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseConstantFactor;                                      // 0x01B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV2R[0x3];                                   // 0x01B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationAngle;                                       // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScreenSpaceTessellation;                                // 0x01BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXBE[0x3];                                   // 0x01BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x01C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0218(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0270(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x02C8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonTwistBinding;                                      // 0x0320(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonWidthBinding;                                      // 0x0378(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonFacingBinding;                                     // 0x03D0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonIdBinding;                                         // 0x0428(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonLinkOrderBinding;                                  // 0x0480(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x04D8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x0530(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0588(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x05E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x0638(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonUVDistance;                                        // 0x0690(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U0OverrideBinding;                                       // 0x06E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V0RangeOverrideBinding;                                  // 0x0740(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U1OverrideBinding;                                       // 0x0798(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V1RangeOverrideBinding;                                  // 0x07F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraRendererMaterialParameters                  MaterialParameters;                                      // 0x0848(0x0050) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPositionBinding;                                     // 0x0898(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevRibbonWidthBinding;                                  // 0x08F0(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevRibbonFacingBinding;                                 // 0x0948(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevRibbonTwistBinding;                                  // 0x09A0(0x0058) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNSX[0xA8];                                  // 0x09F8(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScratchPadContainer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraScratchPadContainer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScript
	 * Size -> 0x0380 (FullSize[0x03A8] - InheritedSize[0x0028])
	 */
	class UNiagaraScript : public UNiagaraScriptBase
	{
	public:
		unsigned char                                              UnknownData_A9QU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraScriptUsage                                        Usage;                                                   // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYJC[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               UsageId;                                                 // 0x0034(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N2QH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraParameterStore                              RapidIterationParameters;                                // 0x0048(0x0088) NativeAccessSpecifierPublic
		struct FNiagaraScriptExecutionParameterStore               ScriptExecutionParamStore;                               // 0x00D0(0x00A8) NativeAccessSpecifierPrivate
		TArray<struct FNiagaraBoundParameter>                      ScriptExecutionBoundParameters;                          // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FNiagaraVMExecutableDataId                          CachedScriptVMId;                                        // 0x0188(0x0058) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PU6O[0x10];                                  // 0x01E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVMExecutableData                            CachedScriptVM;                                          // 0x01F0(0x0190) NativeAccessSpecifierPrivate
		TArray<class UNiagaraParameterCollection*>                 CachedParameterCollectionReferences;                     // 0x0380(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraScriptDataInterfaceInfo>             CachedDefaultDataInterfaces;                             // 0x0390(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3GL[0x8];                                   // 0x03A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void RaiseOnGPUCompilationComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimCache
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class UNiagaraSimCache : public UObject
	{
	public:
		struct FGuid                                               CacheGuid;                                               // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SoftNiagaraSystem[0x30];                                 // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      StartSeconds;                                            // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DurationSeconds;                                         // 0x006C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraSimCacheCreateParameters                    CreateParameters;                                        // 0x0070(0x0058) NativeAccessSpecifierPrivate
		bool                                                       bNeedsReadComponentMappingRecache;                       // 0x00C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MB55[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraSimCacheLayout                              CacheLayout;                                             // 0x00D0(0x00C8) NativeAccessSpecifierPrivate
		TArray<struct FNiagaraSimCacheFrame>                       CacheFrames;                                             // 0x0198(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FNiagaraVariableBase, class UObject*>          DataInterfaceStorage;                                    // 0x01A8(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ONXX[0x8];                                   // 0x01F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReadVectorAttribute(TArray<struct FVector>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadVector4Attribute(TArray<struct FVector4>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadVector2Attribute(TArray<struct FVector2D>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadQuatAttributeWithRebase(TArray<struct FQuat>* OutValues, const struct FQuat& Quat, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadQuatAttribute(TArray<struct FQuat>* OutValues, const class FName& AttributeName, const class FName& EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex);
		void ReadPositionAttributeWithRebase(TArray<struct FVector>* OutValues, const struct FTransform& Transform, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadPositionAttribute(TArray<struct FVector>* OutValues, const class FName& AttributeName, const class FName& EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex);
		void ReadIntAttribute(TArray<int32_t>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadFloatAttribute(TArray<float>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		void ReadColorAttribute(TArray<struct FLinearColor>* OutValues, const class FName& AttributeName, const class FName& EmitterName, int32_t FrameIndex);
		bool IsEmpty();
		bool IsCacheValid();
		float GetStartSeconds();
		int32_t GetNumFrames();
		int32_t GetNumEmitters();
		TArray<class FName> GetEmitterNames();
		class FName GetEmitterName(int32_t EmitterIndex);
		ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.AsyncNiagaraCaptureSimCache
	 * Size -> 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
	 */
	class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
	{
	public:
		class UNiagaraSimCache*                                    CaptureSimCache;                                         // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraComponent*                                   CaptureComponent;                                        // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             CaptureComplete;                                         // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4CE[0xB8];                                  // 0x0050(0x00B8) MISSED OFFSET (PADDING)

	public:
		void OnCaptureComplete__DelegateSignature(bool bSuccess);
		class UAsyncNiagaraCaptureSimCache* STATIC_CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
		class UAsyncNiagaraCaptureSimCache* STATIC_CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimCacheFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNiagaraSimCache* STATIC_CreateNiagaraSimCache(class UObject* WorldContextObject);
		bool STATIC_CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraSimulationStageBase : public UNiagaraMergeable
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SimulationStageName;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled : 1;                                            // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE3K[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageGeneric
	 * Size -> 0x0268 (FullSize[0x02A8] - InheritedSize[0x0040])
	 */
	class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
	{
	public:
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x0040(0x0058) Edit, NativeAccessSpecifierPublic
		ENiagaraIterationSource                                    IterationSource;                                         // 0x0098(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ8E[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NumIterationsBinding;                                    // 0x00A0(0x0058) Edit, NativeAccessSpecifierPublic
		ENiagaraSimStageExecuteBehavior                            ExecuteBehavior;                                         // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW2Y[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDisablePartialParticleUpdate : 1;                       // 0x00FC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIF0[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableDataInterfaceBinding                DataInterface;                                           // 0x0100(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       bParticleIterationStateEnabled : 1;                      // 0x0120(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIZC[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    ParticleIterationStateBinding;                           // 0x0128(0x0058) Edit, NativeAccessSpecifierPublic
		struct FIntPoint                                           ParticleIterationStateRange;                             // 0x0180(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGpuDispatchForceLinear : 1;                             // 0x0188(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideGpuDispatchNumThreads : 1;                      // 0x0188(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6AK[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          OverrideGpuDispatchNumThreads;                           // 0x018C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuDispatchType                                    DirectDispatchType;                                      // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraDirectDispatchElementType                          DirectDispatchElementType;                               // 0x0199(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GS3A[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    ElementCountXBinding;                                    // 0x01A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ElementCountYBinding;                                    // 0x01F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ElementCountZBinding;                                    // 0x0250(0x0058) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSpriteRendererProperties
	 * Size -> 0x0A98 (FullSize[0x0B78] - InheritedSize[0x00E0])
	 */
	class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x00E0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFH7[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x00F0(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraSpriteAlignment                                    Alignment;                                               // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSpriteFacingMode                                   FacingMode;                                              // 0x0111(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2WG[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotInUVSpace;                                          // 0x0118(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MacroUVRadius;                                           // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BFM[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SubImageSize;                                            // 0x0130(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubImageBlend : 1;                                      // 0x0140(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveHMDRollInVR : 1;                                  // 0x0140(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSortOnlyWhenTranslucent : 1;                            // 0x0140(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZNI[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraRendererSortPrecision                              SortPrecision;                                           // 0x0144(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererGpuTranslucentLatency                      GpuTranslucentLatency;                                   // 0x0145(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererPixelCoverageMode                          PixelCoverageMode;                                       // 0x0146(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36RB[0x1];                                   // 0x0147(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PixelCoverageBlend;                                      // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFacingCameraBlendDistance;                            // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFacingCameraBlendDistance;                            // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCameraDistanceCulling : 1;                        // 0x0154(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CZG[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDN5[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0168(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x01C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0218(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteRotationBinding;                                   // 0x0270(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteSizeBinding;                                       // 0x02C8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteFacingBinding;                                     // 0x0320(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteAlignmentBinding;                                  // 0x0378(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x03D0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x0428(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0480(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x04D8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x0530(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x0588(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    UVScaleBinding;                                          // 0x05E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PivotOffsetBinding;                                      // 0x0638(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0690(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x06E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x0740(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x0798(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraRendererMaterialParameters                  MaterialParameters;                                      // 0x07F0(0x0050) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPositionBinding;                                     // 0x0840(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevVelocityBinding;                                     // 0x0898(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteRotationBinding;                               // 0x08F0(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteSizeBinding;                                   // 0x0948(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteFacingBinding;                                 // 0x09A0(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevSpriteAlignmentBinding;                              // 0x09F8(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevCameraOffsetBinding;                                 // 0x0A50(0x0058) Transient, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PrevPivotOffsetBinding;                                  // 0x0AA8(0x0058) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ8J[0x78];                                  // 0x0B00(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSystem
	 * Size -> 0x04C8 (FullSize[0x0538] - InheritedSize[0x0070])
	 */
	class UNiagaraSystem : public UFXSystemAsset
	{
	public:
		bool                                                       bSupportLargeWorldCoordinates : 1;                       // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCastShadow : 1;                                 // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideReceivesDecals : 1;                             // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideRenderCustomDepth : 1;                          // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCustomDepthStencilValue : 1;                    // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideCustomDepthStencilWriteMask : 1;                // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTranslucencySortPriority : 1;                   // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideTranslucencySortDistanceOffset : 1;             // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow : 1;                                         // 0x0071(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceivesDecals : 1;                                     // 0x0071(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth : 1;                                  // 0x0071(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableExperimentalVM : 1;                              // 0x0071(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERendererStencilMask                                       CustomDepthStencilWriteMask;                             // 0x0072(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJX7[0x1];                                   // 0x0073(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslucencySortPriority;                                // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslucencySortDistanceOffset;                          // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDumpDebugSystemInfo;                                    // 0x0080(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDumpDebugEmitterInfo;                                   // 0x0081(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IPA[0x1];                                   // 0x0082(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRequireCurrentFrameData;                                // 0x0083(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixedBounds : 1;                                        // 0x0084(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC6T[0x3];                                   // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0088(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideScalabilitySettings;                            // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M9X2[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideAllowCullingForLocalPlayers : 1;                // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowCullingForLocalPlayersOverride : 1;                // 0x0094(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2P3[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraSystemScalabilityOverride>           ScalabilityOverrides;                                    // 0x0098(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		struct FNiagaraSystemScalabilityOverrides                  SystemScalabilityOverrides;                              // 0x00A8(0x0010) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FNiagaraEmitterHandle>                       EmitterHandles;                                          // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UNiagaraParameterCollectionInstance*>         ParameterCollectionOverrides;                            // 0x00C8(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemSpawnScript;                                       // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemUpdateScript;                                      // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZOSQ[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraSystemCompiledData                          SystemCompiledData;                                      // 0x00F8(0x0240) Protected, NativeAccessSpecifierProtected
		struct FNiagaraUserRedirectionParameterStore               ExposedParameters;                                       // 0x0338(0x00D8) Protected, NativeAccessSpecifierProtected
		struct FBox                                                FixedBounds;                                             // 0x0410(0x0038) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoDeactivate;                                         // 0x0448(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDeterminism;                                            // 0x0449(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8IY0[0x2];                                   // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x044C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarmupTime;                                              // 0x0450(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WarmupTickCount;                                         // 0x0454(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarmupTickDelta;                                         // 0x0458(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFixedTickDelta;                                         // 0x045C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DN7E[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedTickDeltaTime;                                      // 0x0460(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasSystemScriptDIsWithPerInstanceData;                  // 0x0464(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsGPUContextInitForDataInterfaces;                   // 0x0465(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DEJ1[0x2];                                   // 0x0466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        UserDINamesReadInSystemScripts;                          // 0x0468(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UNiagaraDataChannelDefinitions*>              ReferencedDataChannelDefinitions;                        // 0x0478(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YZ5E[0xB0];                                  // 0x0488(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraValidationRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraValidationRule : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.VolumeCache
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UVolumeCache : public UObject
	{
	public:
		class FString                                              FilePath;                                                // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVolumeCacheType                                           CacheType;                                               // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCCA[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          Resolution;                                              // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRangeStart;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRangeEnd;                                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55DN[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
