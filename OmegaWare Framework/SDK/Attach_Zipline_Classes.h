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
	 * BlueprintGeneratedClass Attach_Zipline.Attach_Zipline_C
	 * Size -> 0x0041 (FullSize[0x0379] - InheritedSize[0x0338])
	 */
	class AAttach_Zipline_C : public AFGEquipmentAttachment
	{
	public:
		unsigned char                                              UnknownData_4CD2[0x8];                                   // 0x0338(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0340(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        mZipline_SFX_Activated;                                  // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mThirdPerson_VFX_01;                                     // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mThirdPerson_VFX_02;                                     // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            m_ThirdPerson_VFX_Burst;                                 // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAttached;                                             // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOwningCharacter(class AFGCharacterPlayer** Character);
		void ThirdPerson_Stop_VFX();
		void ThirdPerson_Start_VFX();
		void KillActiveSFX();
		void StartZiplineEffect(bool bAttachVFX);
		void StopZiplineEffect();
		void OnAttach();
		void OnDetach();
		void TryStartZiplineAttaching();
		void TryStartZiplineDeAttaching();
		void StartClientZiplineAttaching();
		void StartClientZiplineDeAttaching();
		void Do_Burst_FX();
		void OnZiplineSprintStatusChanged(bool sprint);
		void ExecuteUbergraph_Attach_Zipline(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
