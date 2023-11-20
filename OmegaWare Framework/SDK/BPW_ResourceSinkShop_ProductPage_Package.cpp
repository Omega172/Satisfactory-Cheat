/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetIsDarkMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDarkMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::SetIsDarkMode(bool IsDarkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetIsDarkMode");
		
		UBPW_ResourceSinkShop_ProductPage_C_SetIsDarkMode_Params params {};
		params.IsDarkMode = IsDarkMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateDependancyInformation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::UpdateDependancyInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateDependancyInformation");
		
		UBPW_ResourceSinkShop_ProductPage_C_UpdateDependancyInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCartButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::UpdateCartButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCartButton");
		
		UBPW_ResourceSinkShop_ProductPage_C_UpdateCartButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCostForUnlockStruct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFUnlockDataStruct                          UnlockData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::UpdateCostForUnlockStruct(const struct FFUnlockDataStruct& UnlockData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateCostForUnlockStruct");
		
		UBPW_ResourceSinkShop_ProductPage_C_UpdateCostForUnlockStruct_Params params {};
		params.UnlockData = UnlockData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetCostForBuilding
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetCostForBuilding(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetCostForBuilding");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetCostForBuilding_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideProductDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::ShowHideProductDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideProductDescription");
		
		UBPW_ResourceSinkShop_ProductPage_C_ShowHideProductDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateProductFromRelevantSchematic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::UpdateProductFromRelevantSchematic(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateProductFromRelevantSchematic");
		
		UBPW_ResourceSinkShop_ProductPage_C_UpdateProductFromRelevantSchematic_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetItemDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ItemDescription                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetItemDescription(const class FText& ItemDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetItemDescription");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetItemDescription_Params params {};
		params.ItemDescription = ItemDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateFavouriteButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::UpdateFavouriteButton(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.UpdateFavouriteButton");
		
		UBPW_ResourceSinkShop_ProductPage_C_UpdateFavouriteButton_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideRelevantSchematics
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::ShowHideRelevantSchematics(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ShowHideRelevantSchematics");
		
		UBPW_ResourceSinkShop_ProductPage_C_ShowHideRelevantSchematics_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetFirstSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::SetFirstSelected(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetFirstSelected");
		
		UBPW_ResourceSinkShop_ProductPage_C_SetFirstSelected_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.RandomizeHeaderText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::RandomizeHeaderText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.RandomizeHeaderText");
		
		UBPW_ResourceSinkShop_ProductPage_C_RandomizeHeaderText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetLargeImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::SetLargeImage(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.SetLargeImage");
		
		UBPW_ResourceSinkShop_ProductPage_C_SetLargeImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnSmallPreviewImageClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_ResourceSinkShop_PreviewButton_C*       Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::OnSmallPreviewImageClicked(class UBPW_ResourceSinkShop_PreviewButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnSmallPreviewImageClicked");
		
		UBPW_ResourceSinkShop_ProductPage_C_OnSmallPreviewImageClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetImageGallery
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetImageGallery(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetImageGallery");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetImageGallery_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetRelevantSchematics
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetRelevantSchematics(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetRelevantSchematics");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetRelevantSchematics_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetSchematicDescription(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicDescription");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetSchematicDescription_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetSchematicCost(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicCost");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetSchematicCost_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::GetSchematicName(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.GetSchematicName");
		
		UBPW_ResourceSinkShop_ProductPage_C_GetSchematicName_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.Construct");
		
		UBPW_ResourceSinkShop_ProductPage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_ProductPage_C_BndEvt__mAddToCartButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_ProductPage_C_BndEvt__mFavouriteButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.PreConstruct");
		
		UBPW_ResourceSinkShop_ProductPage_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage");
		
		UBPW_ResourceSinkShop_ProductPage_C_ExecuteUbergraph_BPW_ResourceSinkShop_ProductPage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnBackButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::OnBackButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnBackButtonClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_ProductPage_C_OnBackButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToFavouriteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::OnAddToFavouriteClicked__DelegateSignature(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToFavouriteClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_ProductPage_C_OnAddToFavouriteClicked__DelegateSignature_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToCartClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_ProductPage_C::OnAddToCartClicked__DelegateSignature(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C.OnAddToCartClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_ProductPage_C_OnAddToCartClicked__DelegateSignature_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSinkShop_ProductPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSinkShop_ProductPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSinkShop_ProductPage.BPW_ResourceSinkShop_ProductPage_C");
		return ptr;
	}

}


