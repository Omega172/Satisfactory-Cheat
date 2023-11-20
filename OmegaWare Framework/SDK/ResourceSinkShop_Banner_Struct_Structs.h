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
	 * UserDefinedStruct ResourceSinkShop_Banner_Struct.ResourceSinkShop_Banner_Struct
	 * Size -> 0x0110
	 */
	struct FResourceSinkShop_Banner_Struct
	{
	public:
		class FText                                                Text_7_9ECC94234929451FA80AFDAC404AD507;                 // 0x0000(0x0018) Edit, BlueprintVisible
		unsigned char                                              UnknownData_S35D[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ImageBrush_5_012E7B504A7AB4B9D1F758A855CF7C5F;           // 0x0020(0x00D0) Edit, BlueprintVisible
		struct FVector2D                                           TextEndPosition_12_284EB20F4CB57ECB983D038E3F457990;     // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ImageEndPosition_10_3EA4EF5B4A94A13E17A775B8C65CE230;    // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
