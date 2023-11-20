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
	 * BlueprintGeneratedClass FGWaterAudio.FGWaterAudio_C
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UFGWaterAudio_C : public UFGWaterAudio
	{
	public:
		class FString                                              mString;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class APawn*                                               mCurrentPawn;                                            // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnCameraExitedWater(class AFGWaterVolume* waterVolume, const struct FVector& exitLocation, class AFGPlayerController* PC);
		void OnCameraEnteredWater(class AFGWaterVolume* waterVolume, const struct FVector& enterLocation, class AFGPlayerController* PC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
