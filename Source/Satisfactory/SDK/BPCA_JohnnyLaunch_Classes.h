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
	 * BlueprintGeneratedClass BPCA_JohnnyLaunch.BPCA_JohnnyLaunch_C
	 * Size -> 0x0019 (FullSize[0x0239] - InheritedSize[0x0220])
	 */
	class UBPCA_JohnnyLaunch_C : public UFGCreatureActionLeapAttack
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FireEmitter;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mFrontFlipsPerSec;                                       // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mHasExploded;                                            // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool SetupAction();
		void OnLeapStarted();
		void ActionTick(float DeltaTime);
		void CleanupAction(bool actionSuccess);
		void ProcessHit(class AFGCharacterBase* Character, const struct FHitResult& HitResult);
		void OnCreatureLanded(const struct FHitResult& HitResult);
		void ExecuteUbergraph_BPCA_JohnnyLaunch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
