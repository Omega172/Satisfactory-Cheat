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
	 * UserDefinedStruct OutputCostSlotData_Struct.OutputCostSlotData_Struct
	 * Size -> 0x0028
	 */
	struct FOutputCostSlotData_Struct
	{
	public:
		class FText                                                Title_3_16865392480E04744923368E818FDF9E;                // 0x0000(0x0018) Edit, BlueprintVisible
		class UFGInventoryComponent*                               InventoryComponent_6_670B318B4DE9249E98B040BFD46013A9;   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InventorySlotIndex_10_ECF91A0C4E759F6F2FC3768CE0512AB9;  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RequiredAmount_14_830FF83949DA2C4550D4DFADE26300D5;      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
