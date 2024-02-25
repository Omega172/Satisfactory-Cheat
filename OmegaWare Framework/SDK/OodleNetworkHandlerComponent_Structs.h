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
	 * Enum OodleNetworkHandlerComponent.EOodleNetworkEnableMode
	 */
	enum class EOodleNetworkEnableMode : uint8_t
	{
		AlwaysEnabled                = 0,
		WhenCompressedPacketReceived = 1,
		MAX                          = 2
	};

	/**
	 * Enum OodleNetworkHandlerComponent.EOodleNetResult
	 */
	enum class EOodleNetResult : uint8_t
	{
		Unknown                    = 0,
		Success                    = 1,
		OodleDecodeFailed          = 2,
		OodleSerializePayloadFail  = 3,
		OodleBadDecompressedLength = 4,
		OodleNoDictionary          = 5,
		MAX                        = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
