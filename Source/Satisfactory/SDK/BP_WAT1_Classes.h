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
	 * BlueprintGeneratedClass BP_WAT1.BP_WAT1_C
	 * Size -> 0x0067 (FullSize[0x0418] - InheritedSize[0x03B1])
	 */
	class ABP_WAT1_C : public ABP_Pickup_C
	{
	public:
		unsigned char                                              UnknownData_226O[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        m_MercerSphereVO;                                        // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        m_WeirdAlienLoop;                                        // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        WasRecentlyRenderedTimer;                                // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mAmplitudeTimer;                                         // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            mEmitter;                                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		unsigned char                                              mParticleAsset[0x30];                                    // 0x03E8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SendAmplitudeDataToNiagara();
		void CheckIfRecentlyRendered();
		void KillAlienSFX();
		void PlayAlienSFX();
		void OnLoaded_B6148220483D04B067A000A9976DCD15(class UObject* Loaded);
		void GainedSignificance();
		void LostSignificance();
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_WAT1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
