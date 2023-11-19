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
	 * BlueprintGeneratedClass BP_GasPillar_03.BP_GasPillar_03_C
	 * Size -> 0x001C (FullSize[0x0400] - InheritedSize[0x03E4])
	 */
	class ABP_GasPillar_03_C : public ABP_GasPillar_C
	{
	public:
		unsigned char                                              UnknownData_RC6E[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            mGasPuff_VFX_01;                                         // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mDroppingGas_VFX_01;                                     // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void Stop_VFX();
		void Start_VFX();
		void GainedSignificance();
		void LostSignificance();
		void ReceiveDestroyed();
		void PlayDestructEffects();
		void ExecuteUbergraph_BP_GasPillar_03(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
