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
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnGlossinessSettingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewGlossiness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnGlossinessSettingChanged(double NewGlossiness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnGlossinessSettingChanged");
		
		UBPW_SignInteractWidget_C_OnGlossinessSettingChanged_Params params {};
		params.NewGlossiness = NewGlossiness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEmissionSettingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mNewEmission                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnEmissionSettingChanged(double mNewEmission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEmissionSettingChanged");
		
		UBPW_SignInteractWidget_C_OnEmissionSettingChanged_Params params {};
		params.mNewEmission = mNewEmission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfTextSettingHasFocus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_SignInteractWidget_C::CheckIfTextSettingHasFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfTextSettingHasFocus");
		
		UBPW_SignInteractWidget_C_CheckIfTextSettingHasFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Set Sign Data
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrefabSignData                             mSignData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignInteractWidget_C::SetSignData(const struct FPrefabSignData& mSignData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Set Sign Data");
		
		UBPW_SignInteractWidget_C_SetSignData_Params params {};
		params.mSignData = mSignData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfUsesBackgroundImage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPW_SignInteractWidget_C::CheckIfUsesBackgroundImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfUsesBackgroundImage");
		
		UBPW_SignInteractWidget_C_CheckIfUsesBackgroundImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GenerateSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::GenerateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GenerateSettings");
		
		UBPW_SignInteractWidget_C_GenerateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupMaterialSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetupMaterialSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupMaterialSettings");
		
		UBPW_SignInteractWidget_C_SetupMaterialSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.HidePopupBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::HidePopupBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.HidePopupBackground");
		
		UBPW_SignInteractWidget_C_HidePopupBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetPopupBackgroundVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::SetPopupBackgroundVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetPopupBackgroundVisibility");
		
		UBPW_SignInteractWidget_C_SetPopupBackgroundVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorSettingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                ForegroundColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BackgroundColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                AuxilliaryColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnColorSettingChanged(const struct FLinearColor& ForegroundColor, const struct FLinearColor& BackgroundColor, const struct FLinearColor& AuxilliaryColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorSettingChanged");
		
		UBPW_SignInteractWidget_C_OnColorSettingChanged_Params params {};
		params.ForegroundColor = ForegroundColor;
		params.BackgroundColor = BackgroundColor;
		params.AuxilliaryColor = AuxilliaryColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorPickerClosed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_SignInteractWidget_C::OnColorPickerClosed(TArray<struct FLinearColor>* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorPickerClosed");
		
		UBPW_SignInteractWidget_C_OnColorPickerClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenColorPicker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::OpenColorPicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenColorPicker");
		
		UBPW_SignInteractWidget_C_OpenColorPicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetupColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupColors");
		
		UBPW_SignInteractWidget_C_SetupColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageBrowserClosed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     TextureObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnImageBrowserClosed(class UObject* TextureObject, int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageBrowserClosed");
		
		UBPW_SignInteractWidget_C_OnImageBrowserClosed_Params params {};
		params.TextureObject = TextureObject;
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenImageBrowser
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IconKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OpenImageBrowser(const class FString& IconKey, int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenImageBrowser");
		
		UBPW_SignInteractWidget_C_OpenImageBrowser_Params params {};
		params.IconKey = IconKey;
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageSettingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      IconKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnImageSettingChanged(const class FString& IconKey, int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageSettingChanged");
		
		UBPW_SignInteractWidget_C_OnImageSettingChanged_Params params {};
		params.IconKey = IconKey;
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetupIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupIcons");
		
		UBPW_SignInteractWidget_C_SetupIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.UpdateLayoutThumnails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MarkAsChangesWereMade                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::UpdateLayoutThumnails(bool MarkAsChangesWereMade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.UpdateLayoutThumnails");
		
		UBPW_SignInteractWidget_C_UpdateLayoutThumnails_Params params {};
		params.MarkAsChangesWereMade = MarkAsChangesWereMade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnLayoutButtonClicked
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SignPrefab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnLayoutButtonClicked(class UClass* SignPrefab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnLayoutButtonClicked");
		
		UBPW_SignInteractWidget_C_OnLayoutButtonClicked_Params params {};
		params.SignPrefab = SignPrefab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupLayoutThumnails
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetupLayoutThumnails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupLayoutThumnails");
		
		UBPW_SignInteractWidget_C_SetupLayoutThumnails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnTextSettingChanged
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignInteractWidget_C::OnTextSettingChanged(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnTextSettingChanged");
		
		UBPW_SignInteractWidget_C_OnTextSettingChanged_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GetTextData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 TextData                                                   (Parm, OutParm)
	 */
	void UBPW_SignInteractWidget_C::GetTextData(TMap<class FString, class FString>* TextData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GetTextData");
		
		UBPW_SignInteractWidget_C_GetTextData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextData != nullptr)
			*TextData = params.TextData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupTexts
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetupTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupTexts");
		
		UBPW_SignInteractWidget_C_SetupTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SaveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SaveData");
		
		UBPW_SignInteractWidget_C_SaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetLayout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::SetLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetLayout");
		
		UBPW_SignInteractWidget_C_SetLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_SignInteractWidget_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_SignInteractWidget_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UBPW_SignInteractWidget_C_BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_SignInteractWidget_C_BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UBPW_SignInteractWidget_C_BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Construct");
		
		UBPW_SignInteractWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnFactoryClipboardPasted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboardSettings                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::OnFactoryClipboardPasted(class UObject* interactObject, class UFGFactoryClipboardSettings* factoryClipboardSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnFactoryClipboardPasted");
		
		UBPW_SignInteractWidget_C_OnFactoryClipboardPasted_Params params {};
		params.interactObject = interactObject;
		params.factoryClipboardSettings = factoryClipboardSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignInteractWidget_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEscapePressed");
		
		UBPW_SignInteractWidget_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.ExecuteUbergraph_BPW_SignInteractWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignInteractWidget_C::ExecuteUbergraph_BPW_SignInteractWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.ExecuteUbergraph_BPW_SignInteractWidget");
		
		UBPW_SignInteractWidget_C_ExecuteUbergraph_BPW_SignInteractWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignInteractWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignInteractWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignInteractWidget.BPW_SignInteractWidget_C");
		return ptr;
	}

}


