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
	 * BlueprintGeneratedClass Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C
	 * Size -> 0x005C (FullSize[0x0634] - InheritedSize[0x05D8])
	 */
	class ABuild_WorkBenchIntegrated_C : public AFGBuildable
	{
	public:
		unsigned char                                              UnknownData_QI37[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_BuildingSpotLight_C*                             BP_BuildingSpotLight1;                                   // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WorkBenchComponent_C*                            BP_WorkBenchComponent;                                   // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MainMesh;                                                // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mOccupiedText;                                           // 0x0608(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mHighlightEffectState;                                   // 0x0620(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U7WC[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mHighlightParticleSystem;                                // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mLocalHighlightEffectState;                              // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsEquipmentWorkshop();
		void OnRep_mHighlightEffectState();
		void GetBuildEffectTemplate();
		bool CanBeSampled();
		bool CanDismantle();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool IsUseable();
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		void UpdateBuildableVisibility(bool IsVisible, bool isTutorialComplete);
		void ShowHighlightEffect(int32_t ExpectedState);
		void DestroyHighlightEffect();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetHighlightState(int32_t NewHighlightState);
		void ExecuteUbergraph_Build_WorkBenchIntegrated(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
