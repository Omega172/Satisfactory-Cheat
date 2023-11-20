﻿#pragma once

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
	 * Enum Rejoin.ERejoinStatus
	 */
	enum class ERejoinStatus : uint8_t
	{
		NoMatchToRejoin            = 0,
		RejoinAvailable            = 1,
		UpdatingStatus             = 2,
		NeedsRecheck               = 3,
		NoMatchToRejoin_MatchEnded = 4,
		MAX                        = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif