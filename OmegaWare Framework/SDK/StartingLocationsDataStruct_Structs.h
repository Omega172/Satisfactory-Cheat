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
	 * UserDefinedStruct StartingLocationsDataStruct.StartingLocationsDataStruct
	 * Size -> 0x0088
	 */
	struct FStartingLocationsDataStruct
	{
	public:
		class FText                                                Name_15_B24B9E3F4D2123245CD4C3AC88089645;                // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                Description_16_FC7E65A7491E131F357F18A1353545CB;         // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                Difficulty_20_AAA700CA4831D7D06DE1A8AED45C0E43;          // 0x0030(0x0018) Edit, BlueprintVisible
		unsigned char                                              Image_21_BEFE2AB0455E5D921A998EB9F17BDDC1[0x30];         // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              StartLocString_11_9994B8C8428E92F9965D6BA3CB30CE96;      // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
