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
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetIsDarkMode
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_SetIsDarkMode_Params
	{
	public:
		bool                                                       IsDarkMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHU1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateDependancyInformation
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_UpdateDependancyInformation_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCartButton
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_UpdateCartButton_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCostForUnlockStruct
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_UpdateCostForUnlockStruct_Params
	{
	public:
		struct FFUnlockDataStruct                                  UnlockData;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetCostForBuilding
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetCostForBuilding_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideProductDescription
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_ShowHideProductDescription_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateProductFromRelevantSchematic
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_UpdateProductFromRelevantSchematic_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetItemDescription
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetItemDescription_Params
	{
	public:
		class FText                                                ItemDescription;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateFavouriteButton
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_UpdateFavouriteButton_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FHPT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideRelevantSchematics
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_ShowHideRelevantSchematics_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetFirstSelected
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_SetFirstSelected_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.RandomizeHeaderText
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_RandomizeHeaderText_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetLargeImage
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_SetLargeImage_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnSmallPreviewImageClicked
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_OnSmallPreviewImageClicked_Params
	{
	public:
		class UBPW_ResourceSinkShop_PreviewButton_C*               Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetImageGallery
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetImageGallery_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetRelevantSchematics
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetRelevantSchematics_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicDescription
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetSchematicDescription_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicCost
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetSchematicCost_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicName
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_GetSchematicName_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.Construct
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.PreConstruct
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LFN6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnBackButtonClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_OnBackButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToFavouriteClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_OnAddToFavouriteClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToCartClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_ProductPage_C_OnAddToCartClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
