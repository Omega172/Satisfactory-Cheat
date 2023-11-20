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
	 * BlueprintGeneratedClass BP_FrackingCore.BP_FrackingCore_C
	 * Size -> 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
	 */
	class ABP_FrackingCore_C : public AFGResourceNodeFrackingCore
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   mIdleEffect;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class FString>                         mResourceNameConverter;                                  // 0x03E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UAkComponent*                                        mCoreNodeSFX;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void KillSFX();
		void SpawnSFX();
		void KillVFX();
		void SpawnVFX();
		void ReceiveBeginPlay();
		void OnIsOccupiedChanged(bool newIsOccupied);
		void GainedSignificance();
		void LostSignificance();
		void ExecuteUbergraph_BP_FrackingCore(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
