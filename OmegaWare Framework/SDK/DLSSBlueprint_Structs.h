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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DLSSBlueprint.UDLSSSupport
	 */
	enum class EUDLSSSupport : uint8_t
	{
		UDLSSSupportSupported                                    = 0,
		UDLSSSupportNotSupported                                 = 1,
		UDLSSSupportNotSupportedIncompatibleHardware             = 2,
		UDLSSSupportNotSupportedDriverOutOfDate                  = 3,
		UDLSSSupportNotSupportedOperatingSystemOutOfDate         = 4,
		UDLSSSupportNotSupportedByPlatformAtBuildTime            = 5,
		UDLSSSupportNotSupportedIncompatibleAPICaptureToolActive = 6,
		UDLSSSupportUDLSSSupport_MAX                             = 7
	};

	/**
	 * Enum DLSSBlueprint.UDLSSMode
	 */
	enum class EUDLSSMode : uint8_t
	{
		UDLSSModeOff              = 0,
		UDLSSModeAuto             = 1,
		UDLSSModeDLAA             = 2,
		UDLSSModeUltraQuality     = 3,
		UDLSSModeQuality          = 4,
		UDLSSModeBalanced         = 5,
		UDLSSModePerformance      = 6,
		UDLSSModeUltraPerformance = 7,
		UDLSSModeUDLSSMode_MAX    = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
