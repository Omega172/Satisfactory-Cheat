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
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BuildBlueprintMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::BuildBlueprintMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BuildBlueprintMenu");
		
		UBPW_Build_QuickSwitch_C_BuildBlueprintMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.UpdateHintText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::UpdateHintText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.UpdateHintText");
		
		UBPW_Build_QuickSwitch_C_UpdateHintText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetBlueprints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UFGBlueprintDescriptor*>              Blueprints                                                 (Parm, OutParm)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::GetBlueprints(TArray<class UFGBlueprintDescriptor*>* Blueprints, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetBlueprints");
		
		UBPW_Build_QuickSwitch_C_GetBlueprints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blueprints != nullptr)
			*Blueprints = params.Blueprints;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupBlueprints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::SetupBlueprints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupBlueprints");
		
		UBPW_Build_QuickSwitch_C_SetupBlueprints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetCustomizerDescriptorText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::GetCustomizerDescriptorText(class UClass* mItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetCustomizerDescriptorText");
		
		UBPW_Build_QuickSwitch_C_GetCustomizerDescriptorText_Params params {};
		params.mItemDescriptor = mItemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapCategorySFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MatchedRecipesIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::PlayTapCategorySFX(int32_t MatchedRecipesIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapCategorySFX");
		
		UBPW_Build_QuickSwitch_C_PlayTapCategorySFX_Params params {};
		params.MatchedRecipesIndex = MatchedRecipesIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapBuildmodeSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::PlayTapBuildmodeSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapBuildmodeSFX");
		
		UBPW_Build_QuickSwitch_C_PlayTapBuildmodeSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayFastSwitchMaterialSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::PlayFastSwitchMaterialSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayFastSwitchMaterialSFX");
		
		UBPW_Build_QuickSwitch_C_PlayFastSwitchMaterialSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetCurrentMaterialRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCurrentMaterialRecipe                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::SetCurrentMaterialRecipe(class UClass* mCurrentMaterialRecipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetCurrentMaterialRecipe");
		
		UBPW_Build_QuickSwitch_C_SetCurrentMaterialRecipe_Params params {};
		params.mCurrentMaterialRecipe = mCurrentMaterialRecipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupMaterialDescriptors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::SetupMaterialDescriptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupMaterialDescriptors");
		
		UBPW_Build_QuickSwitch_C_SetupMaterialDescriptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnMenuScrolled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScrollRight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::OnMenuScrolled(bool ScrollRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnMenuScrolled");
		
		UBPW_Build_QuickSwitch_C_OnMenuScrolled_Params params {};
		params.ScrollRight = ScrollRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnRadialMenuClosed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_Build_QuickSwitch_C::OnRadialMenuClosed(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnRadialMenuClosed");
		
		UBPW_Build_QuickSwitch_C_OnRadialMenuClosed_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenBuildModes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::OpenBuildModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenBuildModes");
		
		UBPW_Build_QuickSwitch_C_OpenBuildModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.CloseQuickSwitch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EQuickSwitch_Modes                                 mQuickSwitchMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::CloseQuickSwitch(EQuickSwitch_Modes mQuickSwitchMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.CloseQuickSwitch");
		
		UBPW_Build_QuickSwitch_C_CloseQuickSwitch_Params params {};
		params.mQuickSwitchMode = mQuickSwitchMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupRecipes
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::SetupRecipes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupRecipes");
		
		UBPW_Build_QuickSwitch_C_SetupRecipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetItemRecipes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              Recipes                                                    (Parm, OutParm)
	 * 		TArray<int32_t>                                    Dividers                                                   (Parm, OutParm)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::GetItemRecipes(TArray<class UClass*>* Recipes, TArray<int32_t>* Dividers, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetItemRecipes");
		
		UBPW_Build_QuickSwitch_C_GetItemRecipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Recipes != nullptr)
			*Recipes = params.Recipes;
		if (Dividers != nullptr)
			*Dividers = params.Dividers;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2");
		
		UBPW_Build_QuickSwitch_C_InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2_Params params {};
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
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInputAction*                                SourceAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1");
		
		UBPW_Build_QuickSwitch_C_InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1_Params params {};
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
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ActiveName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Build_QuickSwitch_C::BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature(const class FText& ActiveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_Build_QuickSwitch_C_BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		params.ActiveName = ActiveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mItemDescriptor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::Open(class UClass* mItemDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Open");
		
		UBPW_Build_QuickSwitch_C_Open_Params params {};
		params.mItemDescriptor = mItemDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ShowRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::ShowRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ShowRadialMenu");
		
		UBPW_Build_QuickSwitch_C_ShowRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Build_QuickSwitch_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Destruct");
		
		UBPW_Build_QuickSwitch_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenWithBlueprints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      blueprintDescriptor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::OpenWithBlueprints(class UFGBlueprintDescriptor* blueprintDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenWithBlueprints");
		
		UBPW_Build_QuickSwitch_C_OpenWithBlueprints_Params params {};
		params.blueprintDescriptor = blueprintDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ExecuteUbergraph_BPW_Build_QuickSwitch
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::ExecuteUbergraph_BPW_Build_QuickSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ExecuteUbergraph_BPW_Build_QuickSwitch");
		
		UBPW_Build_QuickSwitch_C_ExecuteUbergraph_BPW_Build_QuickSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBlueprintClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGBlueprintDescriptor*                      Blueprint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::OnBlueprintClosed__DelegateSignature(class UFGBlueprintDescriptor* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBlueprintClosed__DelegateSignature");
		
		UBPW_Build_QuickSwitch_C_OnBlueprintClosed__DelegateSignature_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildModeClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      buildMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::OnBuildModeClosed__DelegateSignature(class UClass* buildMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildModeClosed__DelegateSignature");
		
		UBPW_Build_QuickSwitch_C_OnBuildModeClosed__DelegateSignature_Params params {};
		params.buildMode = buildMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildingClose__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Build_QuickSwitch_C::OnBuildingClose__DelegateSignature(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildingClose__DelegateSignature");
		
		UBPW_Build_QuickSwitch_C_OnBuildingClose__DelegateSignature_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Build_QuickSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Build_QuickSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C");
		return ptr;
	}

}


