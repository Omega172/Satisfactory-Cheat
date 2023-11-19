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
	 * BlueprintGeneratedClass BP_DropPod.BP_DropPod_C
	 * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
	 */
	class ABP_DropPod_C : public AFGDropPod
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     Decal;                                                   // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGPowerConnectionComponent*                         PowerInput;                                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       mContainsServerRack;                                     // 0x0358(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mContainsHardDrive;                                      // 0x0359(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5GKJ[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mPowerConsumption;                                       // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FItemAmount                                         mRepairAmount;                                           // 0x0368(0x0010) Edit, BlueprintVisible, Net, NoDestructor
		TArray<class UClass*>                                      LootItems;                                               // 0x0378(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance

	public:
		bool RequiresPowerToOpen();
		class UFGPowerConnectionComponent* GetPowerConnection();
		void Repair(class AFGCharacterPlayer* byCharacter);
		void GetRepairAmount(struct FItemAmount* Amount);
		void GetPowerConsumption(double* Power);
		void NeedsPower(bool* NeedsPower);
		void NeedsRepair(bool* NeedsRepair);
		void RollLoot();
		void OnOpened();
		void StopIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void StartIsLookedAt(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void ReceiveBeginPlay();
		void OnUse(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		void OnRepair(class AFGCharacterPlayer* InteractingCharacter);
		void ExecuteUbergraph_BP_DropPod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
