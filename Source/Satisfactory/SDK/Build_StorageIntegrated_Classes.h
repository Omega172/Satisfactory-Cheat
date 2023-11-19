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
	 * BlueprintGeneratedClass Build_StorageIntegrated.Build_StorageIntegrated_C
	 * Size -> 0x0020 (FullSize[0x0780] - InheritedSize[0x0760])
	 */
	class ABuild_StorageIntegrated_C : public AFGBuildableStorage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0760(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MainMesh;                                                // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mHighlightParticleSystem;                                // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mHighlightEffectState;                                   // 0x0778(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mLocalHighlightEffectState;                              // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_mHighlightEffectState();
		void GetBuildEffectTemplate();
		bool CanBeSampled();
		bool CanDismantle();
		void ShowHighlightEffect(int32_t ExpectedState);
		void DestroyHighlightEffect();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ReceiveBeginPlay();
		void UpdateBuildableVisibility(bool IsVisible, bool isTutorialComplete);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetHighlightState(int32_t NewHighlightState);
		void ExecuteUbergraph_Build_StorageIntegrated(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
