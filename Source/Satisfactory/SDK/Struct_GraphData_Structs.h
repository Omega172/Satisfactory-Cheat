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
	 * UserDefinedStruct Struct_GraphData.Struct_GraphData
	 * Size -> 0x0048
	 */
	struct FStruct_GraphData
	{
	public:
		class FString                                              GraphID_6_2E454E2A446E3F2F3635768AF242444E;              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                GraphPreviewDataSuffix_8_F1860B604687FF74C0BECE9A3370C46A; // 0x0010(0x0018) Edit, BlueprintVisible
		struct FLinearColor                                        GraphColor_10_85ED7AF041C7162297AE628A35DB95B1;          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              GraphData_14_6A174D524D6ACA6490E2709194148582;           // 0x0038(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
