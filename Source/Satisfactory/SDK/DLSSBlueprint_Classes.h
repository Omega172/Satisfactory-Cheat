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
	 * Class DLSSBlueprint.DLSSLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDLSSLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDLSSSharpness(float Sharpness);
		void STATIC_SetDLSSMode(class UObject* WorldContextObject, EUDLSSMode DLSSMode);
		EUDLSSSupport STATIC_QueryDLSSSupport();
		bool STATIC_IsDLSSSupported();
		bool STATIC_IsDLSSModeSupported(EUDLSSMode DLSSMode);
		bool STATIC_IsDLSSEnabled();
		bool STATIC_IsDLAAEnabled();
		TArray<EUDLSSMode> STATIC_GetSupportedDLSSModes();
		float STATIC_GetDLSSSharpness();
		void STATIC_GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
		void STATIC_GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
		EUDLSSMode STATIC_GetDLSSMode();
		void STATIC_GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor);
		EUDLSSMode STATIC_GetDefaultDLSSMode();
		void STATIC_EnableDLSS(bool bEnabled);
		void STATIC_EnableDLAA(bool bEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
