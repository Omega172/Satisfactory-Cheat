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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct KeyBindData.KeyBindData
	 * Size -> 0x003A
	 */
	struct FKeyBindData
	{
	public:
		class FName                                                ActionName_4_C7B4F53E48A16B3F01376F97B2DA4885;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DisplayName_5_0A86F675465E0C811D17A287BB986630;          // 0x0008(0x0018) Edit, BlueprintVisible
		class FText                                                Tooltip_14_27BEA64B42DB07EC65D687B21162D1B2;             // 0x0020(0x0018) Edit, BlueprintVisible
		bool                                                       AxisMapping_7_F80A67E0493A9BB92D5041A364C12ACF;          // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PositiveAxisScale_10_3C123C154A1C495D35EE54B5CEA682C6;   // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
