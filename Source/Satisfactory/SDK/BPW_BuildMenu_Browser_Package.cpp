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
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.MouseMoveChecker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::MouseMoveChecker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.MouseMoveChecker");
		
		UBPW_BuildMenu_Browser_C_MouseMoveChecker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchBarVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowSearchbar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetSearchBarVisibility(bool mShowSearchbar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchBarVisibility");
		
		UBPW_BuildMenu_Browser_C_SetSearchBarVisibility_Params params {};
		params.mShowSearchbar = mShowSearchbar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetBlueprintRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::SetBlueprintRecipe(class UFGBlueprintDescriptor* blueprintDescriptor, const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetBlueprintRecipe");
		
		UBPW_BuildMenu_Browser_C_SetBlueprintRecipe_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Category Container
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::RemoveandReleaseAllChildsfromCategoryContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Category Container");
		
		UBPW_BuildMenu_Browser_C_RemoveandReleaseAllChildsfromCategoryContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::ScrollToEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToEnd");
		
		UBPW_BuildMenu_Browser_C_ScrollToEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSubCategoryBottomOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mSubCategorySpacer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetSubCategoryBottomOffset(double mSubCategorySpacer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSubCategoryBottomOffset");
		
		UBPW_BuildMenu_Browser_C_SetSubCategoryBottomOffset_Params params {};
		params.mSubCategorySpacer = mSubCategorySpacer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToTop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::ScrollToTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ScrollToTop");
		
		UBPW_BuildMenu_Browser_C_ScrollToTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetScrollPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double UBPW_BuildMenu_Browser_C::GetScrollPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetScrollPosition");
		
		UBPW_BuildMenu_Browser_C_GetScrollPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Scroll To Position
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AnimateScroll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             padding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::ScrollToPosition(bool AnimateScroll, double padding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Scroll To Position");
		
		UBPW_BuildMenu_Browser_C_ScrollToPosition_Params params {};
		params.AnimateScroll = AnimateScroll;
		params.padding = padding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomisationRecipe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomisationRecipe                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetCustomisationRecipe(class UClass* CustomisationRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomisationRecipe");
		
		UBPW_BuildMenu_Browser_C_SetCustomisationRecipe_Params params {};
		params.CustomisationRecipe = CustomisationRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSearchText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::SetSearchHint(const class FText& mSearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchHint");
		
		UBPW_BuildMenu_Browser_C_SetSearchHint_Params params {};
		params.mSearchText = mSearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AnimateInfoBoxIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::AnimateInfoBoxIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AnimateInfoBoxIcon");
		
		UBPW_BuildMenu_Browser_C_AnimateInfoBoxIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               TakeFromCentralStorage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetInfoBoxCost(TArray<struct FItemAmount>* cost, bool TakeFromCentralStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxCost");
		
		UBPW_BuildMenu_Browser_C_SetInfoBoxCost_Params params {};
		params.TakeFromCentralStorage = TakeFromCentralStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomIconWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetCustomIconWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetCustomIconWidget");
		
		UBPW_BuildMenu_Browser_C_SetCustomIconWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetInfoBoxIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxIcon");
		
		UBPW_BuildMenu_Browser_C_SetInfoBoxIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::SetInfoBoxDescription(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxDescription");
		
		UBPW_BuildMenu_Browser_C_SetInfoBoxDescription_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::SetInfoBoxName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxName");
		
		UBPW_BuildMenu_Browser_C_SetInfoBoxName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetVisibleInfoboxElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Descripction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StatsAndCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetVisibleInfoboxElements(bool Name, bool Descripction, bool StatsAndCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetVisibleInfoboxElements");
		
		UBPW_BuildMenu_Browser_C_SetVisibleInfoboxElements_Params params {};
		params.Name = Name;
		params.Descripction = Descripction;
		params.StatsAndCost = StatsAndCost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearCategories
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::ClearCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearCategories");
		
		UBPW_BuildMenu_Browser_C_ClearCategories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetInfoBoxVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetInfoBoxVisibility");
		
		UBPW_BuildMenu_Browser_C_SetInfoBoxVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Set Build Recipe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              AvailableRecipes                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AFGBuildGun*                                 BuildGun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetBuildRecipe(class UClass* recipe, TArray<class UClass*>* AvailableRecipes, class AFGBuildGun* BuildGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Set Build Recipe");
		
		UBPW_BuildMenu_Browser_C_SetBuildRecipe_Params params {};
		params.recipe = recipe;
		params.BuildGun = BuildGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableRecipes != nullptr)
			*AvailableRecipes = params.AvailableRecipes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddCategory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::AddCategory(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddCategory");
		
		UBPW_BuildMenu_Browser_C_AddCategory_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetIsMouseBlockerActive
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::SetIsMouseBlockerActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetIsMouseBlockerActive");
		
		UBPW_BuildMenu_Browser_C_SetIsMouseBlockerActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.IsSearchHovered
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_BuildMenu_Browser_C::IsSearchHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.IsSearchHovered");
		
		UBPW_BuildMenu_Browser_C_IsSearchHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetSearchResultAt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UBPW_BuildMenu_Browser_C::GetSearchResultAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.GetSearchResultAt");
		
		UBPW_BuildMenu_Browser_C_GetSearchResultAt_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSearchResult
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::AddSearchResult(class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSearchResult");
		
		UBPW_BuildMenu_Browser_C_AddSearchResult_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.InitSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::InitSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.InitSearch");
		
		UBPW_BuildMenu_Browser_C_InitSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearAndHideSearchResults
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::ClearAndHideSearchResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearAndHideSearchResults");
		
		UBPW_BuildMenu_Browser_C_ClearAndHideSearchResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Subcategory Container
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::RemoveandReleaseAllChildsfromSubcategoryContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.Remove and Release All Childs from Subcategory Container");
		
		UBPW_BuildMenu_Browser_C_RemoveandReleaseAllChildsfromSubcategoryContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSubcategoryButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     SubcategoryWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	class UVerticalBoxSlot* UBPW_BuildMenu_Browser_C::AddSubcategoryButton(class UWidget* SubcategoryWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.AddSubcategoryButton");
		
		UBPW_BuildMenu_Browser_C_AddSubcategoryButton_Params params {};
		params.SubcategoryWidget = SubcategoryWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::SetSearchText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetSearchText");
		
		UBPW_BuildMenu_Browser_C_SetSearchText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearSearchText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::ClearSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ClearSearchText");
		
		UBPW_BuildMenu_Browser_C_ClearSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetUserFocusToSearch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::SetUserFocusToSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.SetUserFocusToSearch");
		
		UBPW_BuildMenu_Browser_C_SetUserFocusToSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.PreConstruct");
		
		UBPW_BuildMenu_Browser_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_0_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_1_OnTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 FocusEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_BuildMenu_Browser_C::BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_2_OnInputBoxFocusReceived__DelegateSignature_Params params {};
		params.FocusEvent = FocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.CheckSearchResultHover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_BuildMenu_Browser_C::CheckSearchResultHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.CheckSearchResultHover");
		
		UBPW_BuildMenu_Browser_C_CheckSearchResultHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_BndEvt__BPW_BuildMenu_Browser_Widget_Scrollbox_K2Node_ComponentBoundEvent_3_OnObjectDropped__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_GenericDropArea_C*                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature(class UBPW_GenericDropArea_C* Instigator, const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_BndEvt__BPW_BuildMenu_Browser_mCategoryDropArea_K2Node_ComponentBoundEvent_4_OnObjectDropped__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ExecuteUbergraph_BPW_BuildMenu_Browser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::ExecuteUbergraph_BPW_BuildMenu_Browser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.ExecuteUbergraph_BPW_BuildMenu_Browser");
		
		UBPW_BuildMenu_Browser_C_ExecuteUbergraph_BPW_BuildMenu_Browser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInCategoryContainer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::OnObjectDroppedInCategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInCategoryContainer__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnObjectDroppedInCategoryContainer__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInSubcategoryContainer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::OnObjectDroppedInSubcategoryContainer__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnObjectDroppedInSubcategoryContainer__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnObjectDroppedInSubcategoryContainer__DelegateSignature_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchComittedEnter__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FirstResultWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::OnSearchComittedEnter__DelegateSignature(class UWidget* FirstResultWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchComittedEnter__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnSearchComittedEnter__DelegateSignature_Params params {};
		params.FirstResultWidget = FirstResultWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     FirstResultWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature(class UWidget* FirstResultWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature_Params params {};
		params.FirstResultWidget = FirstResultWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchInputBoxFocusReceived__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 FocusEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_BuildMenu_Browser_C::OnSearchInputBoxFocusReceived__DelegateSignature(const struct FFocusEvent& FocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchInputBoxFocusReceived__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnSearchInputBoxFocusReceived__DelegateSignature_Params params {};
		params.FocusEvent = FocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextComitted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ETextCommit                                        ComittMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_BuildMenu_Browser_C::OnSearchTextComitted__DelegateSignature(const class FText& Text, ETextCommit ComittMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextComitted__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnSearchTextComitted__DelegateSignature_Params params {};
		params.Text = Text;
		params.ComittMethod = ComittMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_BuildMenu_Browser_C::OnSearchTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C.OnSearchTextChanged__DelegateSignature");
		
		UBPW_BuildMenu_Browser_C_OnSearchTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_BuildMenu_Browser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_BuildMenu_Browser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_BuildMenu_Browser.BPW_BuildMenu_Browser_C");
		return ptr;
	}

}


