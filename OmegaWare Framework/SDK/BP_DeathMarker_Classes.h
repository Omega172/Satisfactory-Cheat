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
	 * BlueprintGeneratedClass BP_DeathMarker.BP_DeathMarker_C
	 * Size -> 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
	 */
	class ABP_DeathMarker_C : public AFGDeathMarker
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere;                                                  // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldSave();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		bool NeedTransform();
		struct FLinearColor GetDefaultRepresentationColor();
		void PostLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PostSaveGame(int32_t saveVersion, int32_t GameVersion);
		void PreLoadGame(int32_t saveVersion, int32_t GameVersion);
		void PreSaveGame(int32_t saveVersion, int32_t GameVersion);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_BP_DeathMarker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
