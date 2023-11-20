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
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupBlueprintIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetupBlueprintIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupBlueprintIcon");
		
		UWidget_BuildMenu_InfoBox_C_SetupBlueprintIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBlueprintRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlueprintRecord                            BlueprintRecord                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetBlueprintRecipe(class UFGBlueprintDescriptor* blueprintDescriptor, const struct FBlueprintRecord& BlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBlueprintRecipe");
		
		UWidget_BuildMenu_InfoBox_C_SetBlueprintRecipe_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		params.BlueprintRecord = BlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupCustomiserIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetupCustomiserIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupCustomiserIcon");
		
		UWidget_BuildMenu_InfoBox_C_SetupCustomiserIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomisationRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CustomisationRecipe                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetCustomisationRecipe(class UClass* CustomisationRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomisationRecipe");
		
		UWidget_BuildMenu_InfoBox_C_SetCustomisationRecipe_Params params {};
		params.CustomisationRecipe = CustomisationRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::AnimateIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateIcon");
		
		UWidget_BuildMenu_InfoBox_C_AnimateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCostSlots
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemAmount>                         cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               TakeFromCentralStorage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetCostSlots(TArray<struct FItemAmount>* cost, bool TakeFromCentralStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCostSlots");
		
		UWidget_BuildMenu_InfoBox_C_SetCostSlots_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomIconWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetCustomIconWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomIconWidget");
		
		UWidget_BuildMenu_InfoBox_C_SetCustomIconWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetVisibleElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Descripction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StatsAndCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetVisibleElements(bool Name, bool Descripction, bool StatsAndCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetVisibleElements");
		
		UWidget_BuildMenu_InfoBox_C_SetVisibleElements_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetName");
		
		UWidget_BuildMenu_InfoBox_C_SetName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetIcon");
		
		UWidget_BuildMenu_InfoBox_C_SetIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetDescription
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetDescription(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetDescription");
		
		UWidget_BuildMenu_InfoBox_C_SetDescription_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBuildRecipe
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              AvailableRecipes                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AFGBuildGun*                                 BuildGun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetBuildRecipe(class UClass* recipe, TArray<class UClass*>* AvailableRecipes, class AFGBuildGun* BuildGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBuildRecipe");
		
		UWidget_BuildMenu_InfoBox_C_SetBuildRecipe_Params params {};
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
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetByProductIconVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetByProductIconVisibility(bool IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetByProductIconVisibility");
		
		UWidget_BuildMenu_InfoBox_C_SetByProductIconVisibility_Params params {};
		params.IsValid = IsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetStatsVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::SetStatsVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetStatsVisibility");
		
		UWidget_BuildMenu_InfoBox_C_SetStatsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateCostSlots
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::AnimateCostSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateCostSlots");
		
		UWidget_BuildMenu_InfoBox_C_AnimateCostSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.PreConstruct");
		
		UWidget_BuildMenu_InfoBox_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_BuildMenu_InfoBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.Construct");
		
		UWidget_BuildMenu_InfoBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.ExecuteUbergraph_Widget_BuildMenu_InfoBox
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_BuildMenu_InfoBox_C::ExecuteUbergraph_Widget_BuildMenu_InfoBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.ExecuteUbergraph_Widget_BuildMenu_InfoBox");
		
		UWidget_BuildMenu_InfoBox_C_ExecuteUbergraph_Widget_BuildMenu_InfoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_BuildMenu_InfoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_BuildMenu_InfoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C");
		return ptr;
	}

}


