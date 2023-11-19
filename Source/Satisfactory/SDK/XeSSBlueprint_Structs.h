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
	 * Enum XeSSBlueprint.EXeSSQualityMode
	 */
	enum class EXeSSQualityMode : uint8_t
	{
		Off          = 0,
		Performance  = 1,
		Balanced     = 2,
		Quality      = 3,
		UltraQuality = 4,
		MAX          = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
