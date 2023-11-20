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
	 * BlueprintGeneratedClass BP_Explorer.BP_Explorer_C
	 * Size -> 0x004B (FullSize[0x093C] - InheritedSize[0x08F1])
	 */
	class ABP_Explorer_C : public ABP_WheeledVehicle_C
	{
	public:
		unsigned char                                              UnknownData_O9SF[0x7];                                   // 0x08F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Workbench;                                               // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 Headlight;                                               // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WorkBenchComponent_C*                            BP_WorkBenchComponent;                                   // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mExplorerHorn;                                           // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousGear;                                            // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnVehicleGearingBegin(int32_t NewGear);
		void PlayOpenStorageSFX();
		void PlayCloseStorageSFX();
		class UStaticMeshComponent* FindAttachedStaticMesh();
		void UserConstructionScript();
		void GainedSignificance();
		void LostSignificance();
		void OpenVehicleTrunk(class AFGCharacterPlayer* Player);
		void CloseVehicleTrunk(class AFGCharacterPlayer* Player);
		void OnHonkStatusChanged();
		void ReceiveOnDriverLeave();
		void ExecuteUbergraph_BP_Explorer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
