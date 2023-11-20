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
	 * BlueprintGeneratedClass BP_WheeledVehicle.BP_WheeledVehicle_C
	 * Size -> 0x0091 (FullSize[0x08F1] - InheritedSize[0x0860])
	 */
	class ABP_WheeledVehicle_C : public AFGWheeledVehicle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       WorkbenchInteractBounds;                                 // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AFGCharacterPlayer*                                  mTrunkUser;                                              // 0x0878(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsInventoryOpen;                                        // 0x0880(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NGRQ[0x7];                                   // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpringArmComponent*                                 mSpringArmComponent_1;                                   // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mHUDClass;                                               // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_RecordMenu_C*                                mRecordMenu;                                             // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mTireSoundLoop;                                          // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mInteractWidget;                                         // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mPlayIsBurningOut;                                       // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        StopIsBurningOut;                                        // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FText                                                mLookAtText;                                             // 0x08C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UAkComponent*                                        mPlayTopDrift;                                           // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        StopTopDrift;                                            // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mEngineSoundLoop;                                        // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mOpenRecordMenuDispatchBound;                            // 0x08F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckMeshRotationOnImpact(class UPrimitiveComponent* HitComponent, bool* IsUpsideDown);
		void ImpactForceForSFX(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, double* HitForce);
		void OnVehicleGearingBegin(int32_t NewGear);
		void OnRep_mTrunkUser();
		struct FLinearColor GetDefaultRepresentationColor();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void OpenVehicleUI(class AFGCharacterPlayer* inCharacter);
		void PonderOpeningTrunk(class AFGCharacterPlayer* inCharacter);
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		void ReceiveUnpossessed(class AController* OldController);
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ReceivePossessed(class AController* NewController);
		void Client_PlayFoliageDestroyedEffect(class UParticleSystem* destroyEffect, class UAkAudioEvent* destroyAudioEvent, const struct FVector& Location);
		void OpenVehicleTrunk(class AFGCharacterPlayer* Player);
		void CloseVehicleTrunk(class AFGCharacterPlayer* Player);
		void OnOpenRecorderMenu();
		void BndEvt__BP_WheeledVehicle_mMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ResetCrashSound();
		void OpenRecordMenu();
		void CloseRecordMenu();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_WheeledVehicle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
