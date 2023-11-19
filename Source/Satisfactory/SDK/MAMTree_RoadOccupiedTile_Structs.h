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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct MAMTree_RoadOccupiedTile.MAMTree_RoadOccupiedTile
	 * Size -> 0x0010
	 */
	struct FMAMTree_RoadOccupiedTile
	{
	public:
		TArray<struct FMAMTree_RoadStartEnd>                       Roads_16_A42C107B4337EA6F58623680B876D371;               // 0x0000(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
