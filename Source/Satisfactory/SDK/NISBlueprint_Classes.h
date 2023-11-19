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
	 * Class NISBlueprint.NISLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNISLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetNISSharpness(float Sharpness);
		void STATIC_SetNISMode(EUNISMode NISMode);
		void STATIC_SetNISCustomScreenPercentage(float CustomScreenPercentage);
		bool STATIC_IsNISSupported();
		bool STATIC_IsNISModeSupported(EUNISMode NISMode);
		TArray<EUNISMode> STATIC_GetSupportedNISModes();
		void STATIC_GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
		float STATIC_GetNISRecommendedScreenPercentage(EUNISMode NISMode);
		EUNISMode STATIC_GetDefaultNISMode();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
