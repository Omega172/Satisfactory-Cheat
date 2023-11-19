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
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopCraftingButtonSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::StopCraftingButtonSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StopCraftingButtonSFX");
		
		UWidget_ManualManufacturing_C_StopCraftingButtonSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayCraftingButtonSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::PlayCraftingButtonSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayCraftingButtonSFX");
		
		UWidget_ManualManufacturing_C_PlayCraftingButtonSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetIsWorkshop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UWidget_ManualManufacturing_C::GetIsWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetIsWorkshop");
		
		UWidget_ManualManufacturing_C_GetIsWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetIsWorkshop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsWorkshop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::SetIsWorkshop(bool mIsWorkshop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetIsWorkshop");
		
		UWidget_ManualManufacturing_C_SetIsWorkshop_Params params {};
		params.mIsWorkshop = mIsWorkshop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_ManualManufacturing_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyUp");
		
		UWidget_ManualManufacturing_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWidget_ManualManufacturing_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnKeyDown");
		
		UWidget_ManualManufacturing_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateRelevantClasses
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateRelevantClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateRelevantClasses");
		
		UWidget_ManualManufacturing_C_UpdateRelevantClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UWidget_ManualManufacturing_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnMouseButtonDown");
		
		UWidget_ManualManufacturing_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateAffordableCategories
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateAffordableCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateAffordableCategories");
		
		UWidget_ManualManufacturing_C_UpdateAffordableCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCategoryWidgetFromRecipe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget_CraftBench_Category_C* UWidget_ManualManufacturing_C::GetCategoryWidgetFromRecipe(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCategoryWidgetFromRecipe");
		
		UWidget_ManualManufacturing_C_GetCategoryWidgetFromRecipe_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.AddUniqueRecipe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemCategoryRecipeStruct>           CategorizedRecipes                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::AddUniqueRecipe(TArray<struct FItemCategoryRecipeStruct>* CategorizedRecipes, class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.AddUniqueRecipe");
		
		UWidget_ManualManufacturing_C_AddUniqueRecipe_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategorizedRecipes != nullptr)
			*CategorizedRecipes = params.CategorizedRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ClearAndHideSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::ClearAndHideSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ClearAndHideSearchResults");
		
		UWidget_ManualManufacturing_C_ClearAndHideSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnSearchCreateResults
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_ManualManufacturing_C::OnSearchCreateResults(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnSearchCreateResults");
		
		UWidget_ManualManufacturing_C_OnSearchCreateResults_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowOnlyAffordableRecipes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnlyShowAffordable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::ShowOnlyAffordableRecipes(bool OnlyShowAffordable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowOnlyAffordableRecipes");
		
		UWidget_ManualManufacturing_C_ShowOnlyAffordableRecipes_Params params {};
		params.OnlyShowAffordable = OnlyShowAffordable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateCategoryHeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPanelWidget*                                InScrollbox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               mIsCollapsed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_CraftBench_Category_C*               CategoryWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::CreateCategoryHeader(class UPanelWidget* InScrollbox, const class FText& Name, bool mIsCollapsed, class UWidget_CraftBench_Category_C** CategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateCategoryHeader");
		
		UWidget_ManualManufacturing_C_CreateCategoryHeader_Params params {};
		params.InScrollbox = InScrollbox;
		params.Name = Name;
		params.mIsCollapsed = mIsCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryWidget != nullptr)
			*CategoryWidget = params.CategoryWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateLeds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateLeds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateLeds");
		
		UWidget_ManualManufacturing_C_UpdateLeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateWarningWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateWarningWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateWarningWidget");
		
		UWidget_ManualManufacturing_C_UpdateWarningWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCalculatedCurve
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::GetCalculatedCurve(double* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCalculatedCurve");
		
		UWidget_ManualManufacturing_C_GetCalculatedCurve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowCurrentOutput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_ManualManufacturing_C::ShowCurrentOutput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowCurrentOutput");
		
		UWidget_ManualManufacturing_C_ShowCurrentOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProductionStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateProductionStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProductionStats");
		
		UWidget_ManualManufacturing_C_UpdateProductionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProgressBar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::UpdateProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.UpdateProgressBar");
		
		UWidget_ManualManufacturing_C_UpdateProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetCraftButtonFeedback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::SetCraftButtonFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetCraftButtonFeedback");
		
		UWidget_ManualManufacturing_C_SetCraftButtonFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CloseVehicle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::CloseVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CloseVehicle");
		
		UWidget_ManualManufacturing_C_CloseVehicle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetInfoboxVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_ManualManufacturing_C::GetInfoboxVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetInfoboxVisibility");
		
		UWidget_ManualManufacturing_C_GetInfoboxVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftingFeedbackVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UWidget_ManualManufacturing_C::GetCraftingFeedbackVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetCraftingFeedbackVisibility");
		
		UWidget_ManualManufacturing_C_GetCraftingFeedbackVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetWorkingAtWorkbenchOnServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPlayerController*                         FGPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::SetWorkingAtWorkbenchOnServer(class AFGPlayerController* FGPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetWorkingAtWorkbenchOnServer");
		
		UWidget_ManualManufacturing_C_SetWorkingAtWorkbenchOnServer_Params params {};
		params.FGPlayerController = FGPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::OnCraftCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftCompleted");
		
		UWidget_ManualManufacturing_C_OnCraftCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateInfoBox
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mRecipe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::CreateInfoBox(class UClass* mRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.CreateInfoBox");
		
		UWidget_ManualManufacturing_C_CreateInfoBox_Params params {};
		params.mRecipe = mRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Cleanup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Cleanup");
		
		UWidget_ManualManufacturing_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetAvailableRecipes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UClass*>                              AvailableRecipes                                           (Parm, OutParm)
	 */
	void UWidget_ManualManufacturing_C::GetAvailableRecipes(TArray<class UClass*>* AvailableRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.GetAvailableRecipes");
		
		UWidget_ManualManufacturing_C_GetAvailableRecipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableRecipes != nullptr)
			*AvailableRecipes = params.AvailableRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetSelectedRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mRecipe                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::SetSelectedRecipe(class UClass* mRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetSelectedRecipe");
		
		UWidget_ManualManufacturing_C_SetSelectedRecipe_Params params {};
		params.mRecipe = mRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitRecipeList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::InitRecipeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitRecipeList");
		
		UWidget_ManualManufacturing_C_InitRecipeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3");
		
		UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_3_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2");
		
		UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_2_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1");
		
		UWidget_ManualManufacturing_C_InpActEvt_IA_Craft_K2Node_EnhancedInputActionEvent_1_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		params.SourceAction = SourceAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Destruct");
		
		UWidget_ManualManufacturing_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Construct");
		
		UWidget_ManualManufacturing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetupProductionMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::SetupProductionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.SetupProductionMode");
		
		UWidget_ManualManufacturing_C_SetupProductionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnNewRecipeSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mNewRecipe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::OnNewRecipeSet(class UClass* mNewRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnNewRecipeSet");
		
		UWidget_ManualManufacturing_C_OnNewRecipeSet_Params params {};
		params.mNewRecipe = mNewRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Init");
		
		UWidget_ManualManufacturing_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             dt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::StartProducing(double dt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.StartProducing");
		
		UWidget_ManualManufacturing_C_StartProducing_Params params {};
		params.dt = dt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EndProducing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::EndProducing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.EndProducing");
		
		UWidget_ManualManufacturing_C_EndProducing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Tick");
		
		UWidget_ManualManufacturing_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftingProgressbarAnimationLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::OnCraftingProgressbarAnimationLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCraftingProgressbarAnimationLoop");
		
		UWidget_ManualManufacturing_C_OnCraftingProgressbarAnimationLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.IncreaseGlow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::IncreaseGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.IncreaseGlow");
		
		UWidget_ManualManufacturing_C_IncreaseGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.DecreseGlow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::DecreseGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.DecreseGlow");
		
		UWidget_ManualManufacturing_C_DecreseGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Shake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::Shake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.Shake");
		
		UWidget_ManualManufacturing_C_Shake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.WarningMessageCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::WarningMessageCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.WarningMessageCheck");
		
		UWidget_ManualManufacturing_C_WarningMessageCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ProductionStartupDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ProduceSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::ProductionStartupDelay(float ProduceSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ProductionStartupDelay");
		
		UWidget_ManualManufacturing_C_ProductionStartupDelay_Params params {};
		params.ProduceSpeed = ProduceSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayLEDSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::PlayLEDSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.PlayLEDSound");
		
		UWidget_ManualManufacturing_C_PlayLEDSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowAddedToInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::ShowAddedToInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ShowAddedToInventory");
		
		UWidget_ManualManufacturing_C_ShowAddedToInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.HideAddedToInventoryEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::HideAddedToInventoryEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.HideAddedToInventoryEvent");
		
		UWidget_ManualManufacturing_C_HideAddedToInventoryEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWidget_ManualManufacturing_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature");
		
		UWidget_ManualManufacturing_C_BndEvt__mOnlyShowAffordableCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_ManualManufacturing_C::BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature");
		
		UWidget_ManualManufacturing_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_4_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitOnlyShowAffordable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_ManualManufacturing_C::InitOnlyShowAffordable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.InitOnlyShowAffordable");
		
		UWidget_ManualManufacturing_C_InitOnlyShowAffordable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCategoryClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_CraftBench_Category_C*               Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::OnCategoryClicked(class UWidget_CraftBench_Category_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnCategoryClicked");
		
		UWidget_ManualManufacturing_C_OnCategoryClicked_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ExecuteUbergraph_Widget_ManualManufacturing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_ManualManufacturing_C::ExecuteUbergraph_Widget_ManualManufacturing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.ExecuteUbergraph_Widget_ManualManufacturing");
		
		UWidget_ManualManufacturing_C_ExecuteUbergraph_Widget_ManualManufacturing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnRelevantClassesUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              relevantClasses                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_ManualManufacturing_C::OnRelevantClassesUpdated__DelegateSignature(TArray<class UClass*>* relevantClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_ManualManufacturing.Widget_ManualManufacturing_C.OnRelevantClassesUpdated__DelegateSignature");
		
		UWidget_ManualManufacturing_C_OnRelevantClassesUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (relevantClasses != nullptr)
			*relevantClasses = params.relevantClasses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_ManualManufacturing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_ManualManufacturing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ManualManufacturing.Widget_ManualManufacturing_C");
		return ptr;
	}

}


