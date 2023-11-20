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
	 * BlueprintGeneratedClass BP_Shroom_01.BP_Shroom_01_C
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class ABP_Shroom_01_C : public ABP_Edible_C
	{
	public:
		TArray<class UStaticMesh*>                                 mMeshAlternatives;                                       // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UAkAudioEvent* GetDestroyAudioEvent();
		class UParticleSystem* GetDestroyEffect();
		float GetForceThreshold();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
