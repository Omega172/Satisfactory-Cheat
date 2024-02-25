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
	 * BlueprintGeneratedClass Char_SpaceRabbit.Char_SpaceRabbit_C
	 * Size -> 0x0098 (FullSize[0x0B18] - InheritedSize[0x0A80])
	 */
	class AChar_SpaceRabbit_C : public ABP_Creature_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGInventoryComponent*                               mInventory;                                              // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                mPetText;                                                // 0x0A90(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AActor*                                              mFriendActor;                                            // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash
		class FText                                                mFriendText;                                             // 0x0AB0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    mLootTableIndex;                                         // 0x0AC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TSFT[0x4];                                   // 0x0ACC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mLootSettings;                                           // 0x0AD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mLootTimerHandle;                                        // 0x0AD8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash
		double                                                     mLootMinTime;                                            // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mLootMaxTime;                                            // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mTamed;                                                  // 0x0AF0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U92N[0x7];                                   // 0x0AF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mDisplayName;                                            // 0x0AF8(0x0018) Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame
		double                                                     AlertStressAccumulator;                                  // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetDisplayName(class FText* DisplayName);
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool IsUseable();
		void UpdateUseState(class AFGCharacterPlayer* byCharacter, const struct FVector& atLocation, class UPrimitiveComponent* componentHit, struct FUseState* out_useState);
		bool IsTamed();
		void TryToOpenUI(class APawn* Character);
		void PlayPetAnimation(class AFGCharacterPlayer* byCharacter);
		void SetupEvents();
		void SetupLootTimer();
		void RollLoot();
		void SetTamed(bool IsTamed);
		void OnUseStop(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void RegisterInteractingPlayer(class AFGCharacterPlayer* Player);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UnregisterInteractingPlayer(class AFGCharacterPlayer* Player);
		void NotifyOnTakeDamage(class AActor* DamagedActor, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveDied();
		void ReceiveBeginPlay();
		void PlayConsumeItemEffect(class UClass* itemDescriptor, int32_t Amount);
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void UpdateDisplayName(const class FText& NewName);
		void ExecuteUbergraph_Char_SpaceRabbit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
