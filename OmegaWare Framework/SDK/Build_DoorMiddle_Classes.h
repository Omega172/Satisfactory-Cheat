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
	 * BlueprintGeneratedClass Build_DoorMiddle.Build_DoorMiddle_C
	 * Size -> 0x00E3 (FullSize[0x06F3] - InheritedSize[0x0610])
	 */
	class ABuild_DoorMiddle_C : public AFGBuildableWall
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0610(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       mTriggerBox;                                             // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		unsigned char                                              mOverlappedPawns[0x50];                                  // 0x0628(0x0050) UNKNOWN PROPERTY: SetProperty
		EDoorState_EDoorState                                      mDoorState;                                              // 0x0678(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSignifigant;                                          // 0x0679(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9IRU[0x6];                                   // 0x067A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              mSignifigantOwners[0x50];                                // 0x0680(0x0050) UNKNOWN PROPERTY: SetProperty
		double                                                     mDoorMovementSpeed;                                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mTimeUpdateInterval;                                     // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mMovementHandle;                                         // 0x06E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     mDoorOpenPercentage;                                     // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsClosing;                                              // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDoorMode                                                  mDoorMode;                                               // 0x06F1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EDoorMode                                                  NewVar_1;                                                // 0x06F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_mDoorMode();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void PlayVFX();
		bool IsUseable();
		void OnRep_mDoorState();
		void UpdateSignificanceTickRate(float NewTickRate, bool bTickEnabled);
		void ReceiveBeginPlay();
		void GainedSignificance();
		void LostSignificance();
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnClosed();
		void OnOpened();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void AddCollisionBox(class APlayerController* Forplayer);
		void RemoveCollisionBox(class APlayerController* PlayerId);
		void OnBeginMovement();
		void OnMovementUpdate();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ExecuteUbergraph_Build_DoorMiddle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
