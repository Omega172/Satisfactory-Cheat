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
	 * BlueprintGeneratedClass BP_VehicleTargetPoint.BP_VehicleTargetPoint_C
	 * Size -> 0x0038 (FullSize[0x0458] - InheritedSize[0x0420])
	 */
	class ABP_VehicleTargetPoint_C : public AFGTargetPoint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ArrowMesh;                                               // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mUseText;                                                // 0x0438(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        UpdateNextFrame;                                         // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SelectMode(EMeshWaypointSelection* Result);
		bool ShowClaimDebugVisual();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		void UpdateVisuals();
		bool ShouldSave();
		bool NeedTransform();
		void GatherDependencies(TArray<class UObject*>* out_dependentObjects);
		void ReceiveBeginPlay();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void IsLoopTargetChanged();
		void TargetSpeedChanged();
		void HostStationChanged();
		void IsDockingTargetChanged();
		void IsTemporaryChanged();
		void IsClaimedChanged();
		void UpdateVisualNextFrame(class UStaticMesh* NewMesh, class UMaterialInstance* Material);
		void Update();
		void ExecuteUbergraph_BP_VehicleTargetPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
