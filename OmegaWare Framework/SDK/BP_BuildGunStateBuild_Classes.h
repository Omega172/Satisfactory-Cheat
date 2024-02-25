#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * BlueprintGeneratedClass BP_BuildGunStateBuild.BP_BuildGunStateBuild_C
	 * Size -> 0x0020 (FullSize[0x01C8] - InheritedSize[0x01A8])
	 */
	class UBP_BuildGunStateBuild_C : public UFGBuildGunStateBuild
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkAudioEvent*                                       mMultiStepConstructionSound;                             // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mCancelHologramSound;                                    // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UWidget_BuildModeSelectWheel_C*                      mBuildModeSelectWheel;                                   // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void PrimaryFire();
		void EndState();
		void BeginState();
		void OnResetHologram();
		void OnMultiStepPlacement(bool isFinalStep);
		void OpenBuildModeUI();
		void OnRecipeSampled(class UClass* recipe);
		void ShowBuildModeSelectUI();
		void CloseBuildModeSelectUI();
		void OnZoopUpdated(float currentZoop, float maxZoop, const struct FVector& zoopLocation);
		void SecondaryFire();
		void Scroll(int32_t Delta);
		void ExecuteUbergraph_BP_BuildGunStateBuild(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
