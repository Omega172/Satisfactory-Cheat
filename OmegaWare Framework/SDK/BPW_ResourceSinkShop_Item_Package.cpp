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
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SetIsDarkMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsDarkMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::SetIsDarkMode(bool mIsDarkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SetIsDarkMode");
		
		UBPW_ResourceSinkShop_Item_C_SetIsDarkMode_Params params {};
		params.mIsDarkMode = mIsDarkMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateSchematicStateFeedback
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                iconColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::UpdateSchematicStateFeedback(ESlateVisibility Visibility, const class FText& Text, class UObject* Icon, const struct FLinearColor& iconColor, const struct FLinearColor& TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateSchematicStateFeedback");
		
		UBPW_ResourceSinkShop_Item_C_UpdateSchematicStateFeedback_Params params {};
		params.Visibility = Visibility;
		params.Text = Text;
		params.Icon = Icon;
		params.iconColor = iconColor;
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateOnFavouriteAddedFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::UpdateOnFavouriteAddedFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateOnFavouriteAddedFeedback");
		
		UBPW_ResourceSinkShop_Item_C_UpdateOnFavouriteAddedFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateFavoriteButtonState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::UpdateFavoriteButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateFavoriteButtonState");
		
		UBPW_ResourceSinkShop_Item_C_UpdateFavoriteButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetFavoriteState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsFavorite                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::GetFavoriteState(bool* IsFavorite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetFavoriteState");
		
		UBPW_ResourceSinkShop_Item_C_GetFavoriteState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFavorite != nullptr)
			*IsFavorite = params.IsFavorite;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnFavoriteClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnFavoriteClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnFavoriteClicked");
		
		UBPW_ResourceSinkShop_Item_C_OnFavoriteClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnCartClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnCartClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnCartClicked");
		
		UBPW_ResourceSinkShop_Item_C_OnCartClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetButtonState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_ResourceSinkShop_Item_State                      State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::GetButtonState(E_ResourceSinkShop_Item_State* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetButtonState");
		
		UBPW_ResourceSinkShop_Item_C_GetButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OpenTooltipMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UBPW_ResourceSinkShop_Item_C::OpenTooltipMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OpenTooltipMenu");
		
		UBPW_ResourceSinkShop_Item_C_OpenTooltipMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateButtonState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::UpdateButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateButtonState");
		
		UBPW_ResourceSinkShop_Item_C_UpdateButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemCost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::GetItemCost(int32_t cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemCost");
		
		UBPW_ResourceSinkShop_Item_C_GetItemCost_Params params {};
		params.cost = cost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::GetItemIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemIcon");
		
		UBPW_ResourceSinkShop_Item_C_GetItemIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::GetItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemName");
		
		UBPW_ResourceSinkShop_Item_C_GetItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.Construct");
		
		UBPW_ResourceSinkShop_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::SimulateOnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnHovered");
		
		UBPW_ResourceSinkShop_Item_C_SimulateOnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::SimulateOnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnUnhovered");
		
		UBPW_ResourceSinkShop_Item_C_SimulateOnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Item_C::BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.PreConstruct");
		
		UBPW_ResourceSinkShop_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.ExecuteUbergraph_BPW_ResourceSinkShop_Item
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::ExecuteUbergraph_BPW_ResourceSinkShop_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.ExecuteUbergraph_BPW_ResourceSinkShop_Item");
		
		UBPW_ResourceSinkShop_Item_C_ExecuteUbergraph_BPW_ResourceSinkShop_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToFavouriteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FGSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnAddToFavouriteClicked__DelegateSignature(class UClass* FGSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToFavouriteClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_OnAddToFavouriteClicked__DelegateSignature_Params params {};
		params.FGSchematic = FGSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToCartClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematic                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnAddToCartClicked__DelegateSignature(class UClass* mSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToCartClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_OnAddToCartClicked__DelegateSignature_Params params {};
		params.mSchematic = mSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FGSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_ResourceSinkShop_Item_C*                Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnShopItemHovered__DelegateSignature(class UClass* FGSchematic, class UBPW_ResourceSinkShop_Item_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemHovered__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_OnShopItemHovered__DelegateSignature_Params params {};
		params.FGSchematic = FGSchematic;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      FGSchematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Item_C::OnShopItemClicked__DelegateSignature(class UClass* FGSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemClicked__DelegateSignature");
		
		UBPW_ResourceSinkShop_Item_C_OnShopItemClicked__DelegateSignature_Params params {};
		params.FGSchematic = FGSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSinkShop_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSinkShop_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C");
		return ptr;
	}

}


