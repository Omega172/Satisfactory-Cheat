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
	 * BlueprintGeneratedClass BP_Crystal.BP_Crystal_C
	 * Size -> 0x004F (FullSize[0x0400] - InheritedSize[0x03B1])
	 */
	class ABP_Crystal_C : public ABP_Pickup_C
	{
	public:
		unsigned char                                              UnknownData_I952[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            mEmitter;                                                // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		unsigned char                                              mParticleSoftPtr[0x30];                                  // 0x03C8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkComponent*                                        m_ShimmerSFXLoop;                                        // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void StopShimmerSFXLoop();
		void PlayShimmerSFXLoop();
		void OnLoaded_D427478D4C1993258228AAAFE1D95A47(class UObject* Loaded);
		void GainedSignificance();
		void LostSignificance();
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_Crystal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
