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
	 * UserDefinedStruct Struct_TetrominoLevelData.Struct_TetrominoLevelData
	 * Size -> 0x006C
	 */
	struct FStruct_TetrominoLevelData
	{
	public:
		class FText                                                Name_11_535AA8A345228FFE24C57AB49FED7778;                // 0x0000(0x0018) Edit, BlueprintVisible
		class FString                                              ID_29_89C42DBD4D64E34ABFF323B04DF6D2A5;                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FLinearColor                                        BoardColor_14_6F21E76C4856E0F7DB7FC8BF220F50BF;          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        BoardReliefColor_16_C7C1DBA545029B6487B471B903171AD7;    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntVector2D                                        GridSize_3_6600199F4242B6D4307AA69ABFE4948D;             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FIntVector2D>                                StaticBlockerTiles_7_2C3E9DAE4FB4EC208E3224997DAF5466;   // 0x0050(0x0010) Edit, BlueprintVisible
		int32_t                                                    Rank1_Points_23_064128BC406E1C154F352CAD9AB73603;        // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Rank2_Points_25_EC570A2F4AC5C825E7D9F89CB6FD1657;        // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Rank3_Points_26_033BF9894AE3A0671CB017A5E3F019A5;        // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
