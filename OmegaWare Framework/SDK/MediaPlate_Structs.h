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
	 * Enum MediaPlate.EMediaPlateEventState
	 */
	enum class EMediaPlateEventState : uint8_t
	{
		Play    = 0,
		Open    = 1,
		Close   = 2,
		Pause   = 3,
		Reverse = 4,
		Forward = 5,
		Rewind  = 6,
		MAX     = 7
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
