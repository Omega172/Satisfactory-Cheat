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
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.PlayCantAffordAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSink_CartList_Container_C::PlayCantAffordAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.PlayCantAffordAnim");
		
		UBPW_ResourceSink_CartList_Container_C_PlayCantAffordAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::ChangeItemAmount(class UClass* schematic, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ChangeItemAmount");
		
		UBPW_ResourceSink_CartList_Container_C_ChangeItemAmount_Params params {};
		params.schematic = schematic;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mTotalCostText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ResourceSink_CartList_Container_C::SetTotalCostText(const class FText& mTotalCostText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetTotalCostText");
		
		UBPW_ResourceSink_CartList_Container_C_SetTotalCostText_Params params {};
		params.mTotalCostText = mTotalCostText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ResourceSink_CartList_Container_C::SetBuyButtonVisibility(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.SetBuyButtonVisibility");
		
		UBPW_ResourceSink_CartList_Container_C_SetBuyButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mCartItemStruct != nullptr)
			*mCartItemStruct = params.mCartItemStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FResourceSinkShop_CartItem_Struct>   mCartItemStruct                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ResourceSink_CartList_Container_C::UpdateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.UpdateCartList");
		
		UBPW_ResourceSink_CartList_Container_C_UpdateCartList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mCartItemStruct != nullptr)
			*mCartItemStruct = params.mCartItemStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ResourceSink_CartList_Container_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.Construct");
		
		UBPW_ResourceSink_CartList_Container_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematic                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature_Params params {};
		params.mSchematic = mSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ResourceSink_CartList_Container_C::BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature(class UClass* schematic, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature_Params params {};
		params.schematic = schematic;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematic                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature(class UClass* mSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature_Params params {};
		params.mSchematic = mSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::ExecuteUbergraph_BPW_ResourceSink_CartList_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.ExecuteUbergraph_BPW_ResourceSink_CartList_Container");
		
		UBPW_ResourceSink_CartList_Container_C_ExecuteUbergraph_BPW_ResourceSink_CartList_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnFavouriteChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematic                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::OnFavouriteChanged__DelegateSignature(class UClass* mSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnFavouriteChanged__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_OnFavouriteChanged__DelegateSignature_Params params {};
		params.mSchematic = mSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      schematic                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::OnItemAmountChangedInCart__DelegateSignature(class UClass* schematic, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemAmountChangedInCart__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_OnItemAmountChangedInCart__DelegateSignature_Params params {};
		params.schematic = schematic;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSink_CartList_Container_C::OnBuyAllButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnBuyAllButtonClicked__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_OnBuyAllButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematic                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSink_CartList_Container_C::OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C.OnItemRemovedFromCart__DelegateSignature");
		
		UBPW_ResourceSink_CartList_Container_C_OnItemRemovedFromCart__DelegateSignature_Params params {};
		params.mSchematic = mSchematic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSink_CartList_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSink_CartList_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C");
		return ptr;
	}

}


