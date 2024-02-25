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
	 * Class XeSSBlueprint.XeSSBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetXeSSQualityMode(EXeSSQualityMode QualityMode);
		bool STATIC_IsXeSSSupported();
		bool STATIC_GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float* ScreenPercentage);
		EXeSSQualityMode STATIC_GetXeSSQualityMode();
		TArray<EXeSSQualityMode> STATIC_GetSupportedXeSSQualityModes();
		EXeSSQualityMode STATIC_GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
