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
	 * BlueprintGeneratedClass Equip_GolfCartDispenser.Equip_GolfCartDispenser_C
	 * Size -> 0x0048 (FullSize[0x04E8] - InheritedSize[0x04A0])
	 */
	class AEquip_GolfCartDispenser_C : public AFGGolfCartDispenser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_GolfcartEquipment_01;                                 // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxSpawnDistance;                                       // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mSpawningClearance;                                      // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                mBuildDisqualifierText;                                  // 0x04C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       canDisplayDisqualifier;                                  // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YESB[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       mBuildDisqualifierSound;                                 // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool IsObjectNotChildOfVehicleClass(class UObject* Object);
		void GetSecondaryTraceLocations(bool IsFirstTraceBlocking, const struct FVector& FirstTraceHitLocation, const struct FVector& FirstTraceEndTrace, class AFGCharacterPlayer* Instigator, struct FVector* SecondTraceStart, struct FVector* SecondTraceEnd, struct FVector* BoxTraceHalfSize, struct FRotator* BoxTraceOrientation);
		void GetInitialTraceLocations(struct FVector* TraceStart, struct FVector* TraceEnd, class AFGCharacterPlayer** Instigator);
		void WasUnEquipped();
		void SpawnGolfCart();
		void WasEquipped();
		void PlaySpawnEffects(class ABP_Golfcart_C* golfCart);
		void DisplayBuildDisqualifier();
		void ResetBuildDisqualifierDisplay();
		void ExecuteUbergraph_Equip_GolfCartDispenser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
