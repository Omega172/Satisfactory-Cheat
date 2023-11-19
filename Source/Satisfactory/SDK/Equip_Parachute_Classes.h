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
	 * BlueprintGeneratedClass Equip_Parachute.Equip_Parachute_C
	 * Size -> 0x0040 (FullSize[0x04E0] - InheritedSize[0x04A0])
	 */
	class AEquip_Parachute_C : public AFGParachute
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SK_Parachute_3P;                                         // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SK_Parachute_1P;                                         // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SceneRootComponent;                                      // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<EArmEquipment>                                      ArmEquipmentsToSkipAnim;                                 // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UActorComponent*>                             DeployedVFXComponents;                                   // 0x04D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void DetachParachute(bool IsThirdPerson);
		void OnParachuteHideDelayPassed();
		void OnDeployStop();
		void AttachParachute(bool IsThirdPerson);
		void SpawnThirdPersonVFX(class USceneComponent* ParachuteMesh);
		void SpawnFirstPersonVFX(class USceneComponent* ParachuteMesh);
		void OnDeployed();
		void OnParachuteCameraModeChanged(bool IsThirdPersonNow);
		void OnCameraModeChanged(ECameraMode newCameraMode);
		void ExecuteUbergraph_Equip_Parachute(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
