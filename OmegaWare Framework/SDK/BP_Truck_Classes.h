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
	 * BlueprintGeneratedClass BP_Truck.BP_Truck_C
	 * Size -> 0x005F (FullSize[0x0950] - InheritedSize[0x08F1])
	 */
	class ABP_Truck_C : public ABP_WheeledVehicle_C
	{
	public:
		unsigned char                                              UnknownData_GKLM[0x7];                                   // 0x08F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Workbench;                                               // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 Headlight_l;                                             // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 Headlight_r;                                             // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WorkBenchComponent_C*                            BP_WorkBenchComponent;                                   // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       mFlashlightOn;                                           // 0x0938(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LVLN[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       mPlayOnGearChangeSFX;                                    // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mTruckHorn;                                              // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void OnVehicleGearingBegin(int32_t NewGear);
		class UStaticMeshComponent* FindAttachedStaticMesh();
		void PlayCloseStorageSFX();
		void PlayOpenStorageSFX();
		void CheckCurrentActiveMontage();
		void SeekIntoCurrentState();
		void OnRep_mFlashlightOn();
		void UserConstructionScript();
		void OnNotifyEnd_0C5D05504ED095AA6118B99B99D9EDC2(const class FName& NotifyName);
		void OnNotifyBegin_0C5D05504ED095AA6118B99B99D9EDC2(const class FName& NotifyName);
		void OnInterrupted_0C5D05504ED095AA6118B99B99D9EDC2(const class FName& NotifyName);
		void OnBlendOut_0C5D05504ED095AA6118B99B99D9EDC2(const class FName& NotifyName);
		void OnCompleted_0C5D05504ED095AA6118B99B99D9EDC2(const class FName& NotifyName);
		void OnNotifyEnd_55FDF12A4940D1ECC665FC8A0684A3E4(const class FName& NotifyName);
		void OnNotifyBegin_55FDF12A4940D1ECC665FC8A0684A3E4(const class FName& NotifyName);
		void OnInterrupted_55FDF12A4940D1ECC665FC8A0684A3E4(const class FName& NotifyName);
		void OnBlendOut_55FDF12A4940D1ECC665FC8A0684A3E4(const class FName& NotifyName);
		void OnCompleted_55FDF12A4940D1ECC665FC8A0684A3E4(const class FName& NotifyName);
		void OnBeginLoadVehicle();
		void OnBeginUnloadVehicle();
		void LostSignificance();
		void GainedSignificance();
		void ReceiveBeginPlay();
		void OpenVehicleTrunk(class AFGCharacterPlayer* Player);
		void CloseVehicleTrunk(class AFGCharacterPlayer* Player);
		void OnHonkStatusChanged();
		void ReceiveOnDriverLeave();
		void ExecuteUbergraph_BP_Truck(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
