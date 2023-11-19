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
	 * UserDefinedStruct MAMTree_RoadStartEnd.MAMTree_RoadStartEnd
	 * Size -> 0x0010
	 */
	struct FMAMTree_RoadStartEnd
	{
	public:
		struct FIntVector2D                                        StartCoordinates_2_83B7BFD546264BAE632A5787A046FEEA;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntVector2D                                        EndCoordinates_4_202B84034EC084E34F1935958692341D;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
