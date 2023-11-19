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
	 * BlueprintGeneratedClass BP_ConsumeableEquipment.BP_ConsumeableEquipment_C
	 * Size -> 0x0015 (FullSize[0x0495] - InheritedSize[0x0480])
	 */
	class ABP_ConsumeableEquipment_C : public AFGConsumableEquipment
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0480(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              ConsumeableMesh;                                         // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mRandomAnim;                                             // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCanPress;                                               // 0x0494(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetShowInfoUntilFuelPercentIsFull(bool* ReturnVaule);
		void GetOverwriteTickRate(double* TickRate);
		bool GetShowLowFuelWarning();
		bool GetIsBoomBoxPlaying();
		void GetCurrentBoomBoxTape(class UClass** mTapeData);
		void GetObjectScannerTarget(class UClass** ScannableItemDescriptor);
		void GetHoverPackMode(EHoverPackMode* Mode);
		bool GetHoverPackHasPower();
		void GetHoverPackDistance(double* Value);
		void GetHUD_ESlotClass(class UClass** Class);
		void GetAmmoAmount(int32_t* AmmoCurrent, int32_t* AmmoMax);
		bool GetUpdateOnTick();
		void GetAmmoDescriptor(class UClass** AmmoClass);
		void GetFuelDescriptor(class UClass** Class);
		void GetFuelPercent(double* Value);
		bool GetIsBurningFuel();
		bool GetAlwaysShowContent();
		void PlayConsumeEffects(class UFGConsumableDescriptor* consumable);
		void ReceiveTick(float DeltaSeconds);
		void WasEquipped();
		void ExecuteUbergraph_BP_ConsumeableEquipment(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
