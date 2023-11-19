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
	 * UserDefinedStruct MAMTree_NodeData_Struct.MAMTree_NodeData_Struct
	 * Size -> 0x0090
	 */
	struct FMAMTree_NodeData_Struct
	{
	public:
		class UClass*                                              Schematic_27_3663A42446FDB4387D0C81AFC23E225B;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FIntVector2D                                        Coordinates_23_5A3DE6C040C7026EDEA49E9CE8612292;         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FIntVector2D>                                Parents_20_7A099B96409362536B743BA1CC77C234;             // 0x0010(0x0010) Edit, BlueprintVisible
		TMap<struct FIntVector2D, struct FMAMTree_RoadPoints>      ChildrenAndRoads_34_758C9E0D4F09DAF4BBAD309358952A0A;    // 0x0020(0x0050) Edit, BlueprintVisible
		TArray<struct FIntVector2D>                                UnhiddenBy_38_909B07D7461225A33C48A68A7139FE63;          // 0x0070(0x0010) Edit, BlueprintVisible
		TArray<struct FIntVector2D>                                NodesToUnhide_33_A6E465554D49C98EE2A0ECB493BE5CBA;       // 0x0080(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
