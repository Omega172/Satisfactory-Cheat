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
	 * Class AbstractInstance.AbstractInstanceExampleActor
	 * Size -> 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
	 */
	class AAbstractInstanceExampleActor : public AActor
	{
	public:
		class UAbstractInstanceDataObject*                         InstanceData;                                            // 0x02F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y1UV[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AbstractInstance.AbstractInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAbstractInstanceInterface : public UInterface
	{
	public:
		void PostLazySpawnInstances();
		struct FTransform GetLightweightInstanceActorTransform();
		TArray<struct FInstanceData> GetActorLightweightInstanceData();
		bool DoesContainLightweightInstances();
		static UClass* StaticClass();
	};

	/**
	 * Class AbstractInstance.AbstractInstanceManager
	 * Size -> 0x00E8 (FullSize[0x03E0] - InheritedSize[0x02F8])
	 */
	class AAbstractInstanceManager : public AActor
	{
	public:
		TMap<class FName, struct FInstanceComponentData>           InstanceMap;                                             // 0x02F8(0x0050) Edit, DisableEditOnTemplate, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D2KO[0x30];                                  // 0x0348(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastResolvedLazyTaskActor;                               // 0x0378(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DeferredMarkDirtySet[0x50];                              // 0x0380(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_V93B[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CachedPlayerCharacter;                                   // 0x03D8(0x0008) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool ResolveHit(const struct FHitResult& Result, struct FInstanceHandle* OutHandle);
		void RemoveInstance(struct FInstanceHandle* InHandle);
		class AActor* STATIC_GetOwnerByHandle(const struct FInstanceHandle& Handle);
		class AAbstractInstanceManager* STATIC_GetInstanceManager(class UObject* WorldContext);
		class UHierarchicalInstancedStaticMeshComponent* STATIC_GetHandleInfo(const struct FInstanceHandle& Handle, int32_t* OutInstanceID);
		void DrawDebug();
		static UClass* StaticClass();
	};

	/**
	 * Class AbstractInstance.AbstractInstanceDataObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAbstractInstanceDataObject : public UObject
	{
	public:
		TArray<struct FInstanceData>                               Instances;                                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
