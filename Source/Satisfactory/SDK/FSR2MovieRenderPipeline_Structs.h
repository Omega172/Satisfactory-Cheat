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
	 * Enum FSR2MovieRenderPipeline.EFSR2MoviePipelineQuality
	 */
	enum class EFSR2MoviePipelineQuality : uint8_t
	{
		Unused           = 0,
		Quality          = 1,
		Balanced         = 2,
		Performance      = 3,
		UltraPerformance = 4,
		MAX              = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
