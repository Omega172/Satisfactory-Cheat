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
	 * BlueprintGeneratedClass Equip_Zipline.Equip_Zipline_C
	 * Size -> 0x0041 (FullSize[0x0501] - InheritedSize[0x04C0])
	 */
	class AEquip_Zipline_C : public AFGEquipmentZipline
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mZipline_VFX_01;                                         // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mZipline_VFX_02;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mZipline_VFX_03;                                         // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_Zipline_SFXActive;                                     // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mZipline_SFXTravelling;                                  // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mShouldPlayDeactivateSound;                              // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOwningCharacter(class AFGCharacterPlayer** Character);
		void StartSFXTraveling();
		void SFXZiplineSpeedRTPC();
		void Kill_SFXLoops();
		void Func_StopVFX();
		void Func_StartVFX();
		void StartZiplineEffect(bool bAttachVFX);
		void StopZiplineEffect();
		void StopVFXs();
		void WasUnEquipped();
		void WasEquipped();
		void Do_Burst_FX();
		void Server_PrimaryFire();
		void Server_PrimaryRelease();
		void OnWantToGrabChanged(bool newWantToGrab);
		void OnZiplineSprintStatusChanged(bool sprint);
		void ExecuteUbergraph_Equip_Zipline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
