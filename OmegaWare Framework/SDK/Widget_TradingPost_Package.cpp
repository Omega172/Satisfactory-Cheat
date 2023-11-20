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
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectSchematicText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::UpdateSelectSchematicText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectSchematicText");
		
		UWidget_TradingPost_C_UpdateSelectSchematicText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.UpdateAnimationPayOffGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::UpdateAnimationPayOffGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.UpdateAnimationPayOffGrid");
		
		UWidget_TradingPost_C_UpdateAnimationPayOffGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectMilestoneFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::UpdateSelectMilestoneFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.UpdateSelectMilestoneFeedback");
		
		UWidget_TradingPost_C_UpdateSelectMilestoneFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetActivateButtonVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::SetActivateButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetActivateButtonVisibility");
		
		UWidget_TradingPost_C_SetActivateButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetSelectedSchematic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSelectedSchematic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::SetSelectedSchematic(class UClass* mSelectedSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetSelectedSchematic");
		
		UWidget_TradingPost_C_SetSelectedSchematic_Params params {};
		params.mSelectedSchematic = mSelectedSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.DropInventorySlotStack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasStackMoved                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.DropInventorySlotStack");
		
		UWidget_TradingPost_C_DropInventorySlotStack_Params params {};
		params.InventorySlot = InventorySlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasStackMoved != nullptr)
			*WasStackMoved = params.WasStackMoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.GetLowestNonFullyResearchedTier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FoundTier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::GetLowestNonFullyResearchedTier(int32_t* tier, bool* FoundTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.GetLowestNonFullyResearchedTier");
		
		UWidget_TradingPost_C_GetLowestNonFullyResearchedTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tier != nullptr)
			*tier = params.tier;
		if (FoundTier != nullptr)
			*FoundTier = params.FoundTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.CheckIfTierIsFullyResearched
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsResearched                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::CheckIfTierIsFullyResearched(int32_t tier, bool* IsResearched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.CheckIfTierIsFullyResearched");
		
		UWidget_TradingPost_C_CheckIfTierIsFullyResearched_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsResearched != nullptr)
			*IsResearched = params.IsResearched;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetTierAndDefaultSchematic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::SetTierAndDefaultSchematic(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetTierAndDefaultSchematic");
		
		UWidget_TradingPost_C_SetTierAndDefaultSchematic_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.UpdateSchematicHintVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::UpdateSchematicHintVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.UpdateSchematicHintVisibility");
		
		UWidget_TradingPost_C_UpdateSchematicHintVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.GenerateTierList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::GenerateTierList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.GenerateTierList");
		
		UWidget_TradingPost_C_GenerateTierList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetRewardInformation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        inDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateBrush                                 inIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_TradingPost_C::SetRewardInformation(const class FText& InTitle, const class FText& inDesc, const struct FSlateBrush& inIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetRewardInformation");
		
		UWidget_TradingPost_C_SetRewardInformation_Params params {};
		params.InTitle = InTitle;
		params.inDesc = inDesc;
		params.inIcon = inIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetActiveTab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::SetActiveTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetActiveTab");
		
		UWidget_TradingPost_C_SetActiveTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.GetShipInventoryVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::GetShipInventoryVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.GetShipInventoryVisibility");
		
		UWidget_TradingPost_C_GetShipInventoryVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.ActivateSelectedSchematic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::ActivateSelectedSchematic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.ActivateSelectedSchematic");
		
		UWidget_TradingPost_C_ActivateSelectedSchematic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.SetDefaultDescriptionText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematicClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::SetDefaultDescriptionText(class UClass* mSchematicClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.SetDefaultDescriptionText");
		
		UWidget_TradingPost_C_SetDefaultDescriptionText_Params params {};
		params.mSchematicClass = mSchematicClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.UpdateRewardInfoFromProduct
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_SchematicRewardItem_C*               RewardWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::UpdateRewardInfoFromProduct(class UWidget_SchematicRewardItem_C* RewardWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.UpdateRewardInfoFromProduct");
		
		UWidget_TradingPost_C_UpdateRewardInfoFromProduct_Params params {};
		params.RewardWidget = RewardWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.OnSchematicClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::OnSchematicClicked(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.OnSchematicClicked");
		
		UWidget_TradingPost_C_OnSchematicClicked_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.Cleanup");
		
		UWidget_TradingPost_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.CloseTradepost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::CloseTradepost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.CloseTradepost");
		
		UWidget_TradingPost_C_CloseTradepost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.Destruct");
		
		UWidget_TradingPost_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.Init");
		
		UWidget_TradingPost_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.OnActiveSchematicChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::OnActiveSchematicChanged(class UClass* schematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.OnActiveSchematicChanged");
		
		UWidget_TradingPost_C_OnActiveSchematicChanged_Params params {};
		params.schematic = schematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.Construct");
		
		UWidget_TradingPost_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.purchasedSchematic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      purchasedSchematic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::purchasedSchematic(class UClass* purchasedSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.purchasedSchematic");
		
		UWidget_TradingPost_C_purchasedSchematic_Params params {};
		params.purchasedSchematic = purchasedSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.mShakeWindow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::mShakeWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.mShakeWindow");
		
		UWidget_TradingPost_C_mShakeWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TradingPost_C::BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UWidget_TradingPost_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.CreateSmoke
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::CreateSmoke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.CreateSmoke");
		
		UWidget_TradingPost_C_CreateSmoke_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature");
		
		UWidget_TradingPost_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.PreConstruct");
		
		UWidget_TradingPost_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.Update Visual Feedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_TradingPost_C::UpdateVisualFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.Update Visual Feedback");
		
		UWidget_TradingPost_C_UpdateVisualFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_TradingPost_C::BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature");
		
		UWidget_TradingPost_C_BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_TradingPost.Widget_TradingPost_C.ExecuteUbergraph_Widget_TradingPost
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_TradingPost_C::ExecuteUbergraph_Widget_TradingPost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_TradingPost.Widget_TradingPost_C.ExecuteUbergraph_Widget_TradingPost");
		
		UWidget_TradingPost_C_ExecuteUbergraph_Widget_TradingPost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_TradingPost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_TradingPost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TradingPost.Widget_TradingPost_C");
		return ptr;
	}

}


