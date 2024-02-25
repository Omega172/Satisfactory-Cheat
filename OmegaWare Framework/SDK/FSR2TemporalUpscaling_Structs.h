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
	 * Enum FSR2TemporalUpscaling.EFSR2QualityMode
	 */
	enum class EFSR2QualityMode : uint8_t
	{
		Unused           = 0,
		Quality          = 1,
		Balanced         = 2,
		Performance      = 3,
		UltraPerformance = 4,
		MAX              = 5
	};

	/**
	 * Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
	 */
	enum class EFSR2HistoryFormat : uint8_t
	{
		FloatRGBA      = 0,
		FloatR11G11B10 = 1,
		MAX            = 2
	};

	/**
	 * Enum FSR2TemporalUpscaling.EFSR2DeDitherMode
	 */
	enum class EFSR2DeDitherMode : uint8_t
	{
		Off      = 0,
		Full     = 1,
		HairOnly = 2,
		MAX      = 3
	};

	/**
	 * Enum FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
	 */
	enum class EFSR2LandscapeHISMMode : uint8_t
	{
		Off       = 0,
		AllStatic = 1,
		StaticWPO = 2,
		MAX       = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
