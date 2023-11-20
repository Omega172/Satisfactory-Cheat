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
	 * UserDefinedStruct Struct_TetrominoData.Struct_TetrominoData
	 * Size -> 0x0024
	 */
	struct FStruct_TetrominoData
	{
	public:
		TArray<struct FIntVector2D>                                TileData_4_0D990A2E45D5E3669A889EBDF1A21894;             // 0x0000(0x0010) Edit, BlueprintVisible
		struct FLinearColor                                        Color_9_A7A6643C4EB25979CD8B169C3D8E78B8;                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Points_12_950EB09B4481A0DC01F8BBB685BA9866;              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
