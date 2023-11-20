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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NISBlueprint.UNISSupport
	 */
	enum class EUNISSupport : uint8_t
	{
		UNISSupportSupported       = 0,
		UNISSupportNotSupported    = 1,
		UNISSupportUNISSupport_MAX = 2
	};

	/**
	 * Enum NISBlueprint.UNISMode
	 */
	enum class EUNISMode : uint8_t
	{
		UNISModeOff          = 0,
		UNISModeUltraQuality = 1,
		UNISModeQuality      = 2,
		UNISModeBalanced     = 3,
		UNISModePerformance  = 4,
		UNISModeCustom       = 5,
		UNISModeUNISMode_MAX = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
