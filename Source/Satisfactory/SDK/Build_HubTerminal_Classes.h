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
	 * BlueprintGeneratedClass Build_HubTerminal.Build_HubTerminal_C
	 * Size -> 0x0024 (FullSize[0x0604] - InheritedSize[0x05E0])
	 */
	class ABuild_HubTerminal_C : public AFGBuildableHubTerminal
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MainMesh;                                                // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mHighlightEffectState;                                   // 0x05F0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYBJ[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            mHighlightParticleSystem;                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mLocalHighlightEffectState;                              // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_mHighlightEffectState();
		void GetBuildEffectTemplate();
		bool CanBeSampled();
		bool CanDismantle();
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ShowHighlightEffect(int32_t ExpectedState);
		void DestroyHighlightEffect();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ReceiveBeginPlay();
		void UpdateBuildableVisibility(bool IsVisible, bool isTutorialComplete);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetHighlightState(int32_t NewHighlightState);
		void ExecuteUbergraph_Build_HubTerminal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
