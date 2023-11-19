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
	 * BlueprintGeneratedClass BP_BerryBush.BP_BerryBush_C
	 * Size -> 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
	 */
	class ABP_BerryBush_C : public ABP_Edible_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FBerryAlternatives>                          mBerryVariation;                                         // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mLockVariation;                                          // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FW6E[0x3];                                   // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mBerryIndex;                                             // 0x03EC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       mUseSockets;                                             // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B0TB[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInstancedStaticMeshComponent*                       mInstanceMesh;                                           // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		class UAkAudioEvent* GetDestroyAudioEvent();
		class UParticleSystem* GetDestroyEffect();
		float GetForceThreshold();
		struct FInventoryStack GetActorChainsawReturn();
		class UStaticMeshComponent* GetMeshComponent();
		bool IsChainsawable();
		void OnRep_mBerryIndex();
		void SetupNumBerries();
		void SetupMesh();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void UpdateVisiblityState();
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ExecuteUbergraph_BP_BerryBush(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
