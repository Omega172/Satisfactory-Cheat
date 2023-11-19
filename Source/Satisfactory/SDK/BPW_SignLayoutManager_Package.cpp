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
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateMaterialParameters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      ImageObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               mIsBackgroundObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignLayoutManager_C::UpdateMaterialParameters(class UImage* ImageObject, bool mIsBackgroundObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateMaterialParameters");
		
		UBPW_SignLayoutManager_C_UpdateMaterialParameters_Params params {};
		params.ImageObject = ImageObject;
		params.mIsBackgroundObject = mIsBackgroundObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.CalculateSizeDiscrepancy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::CalculateSizeDiscrepancy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.CalculateSizeDiscrepancy");
		
		UBPW_SignLayoutManager_C_CalculateSizeDiscrepancy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetValidColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAlwaysBackground                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UsesAuxilliary                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UBPW_SignLayoutManager_C::GetValidColor(class UWidget* InWidget, bool IsAlwaysBackground, bool UsesAuxilliary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetValidColor");
		
		UBPW_SignLayoutManager_C_GetValidColor_Params params {};
		params.InWidget = InWidget;
		params.IsAlwaysBackground = IsAlwaysBackground;
		params.UsesAuxilliary = UsesAuxilliary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetActiveKeys
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              ImageKeys                                                  (Parm, OutParm)
	 * 		TArray<class FString>                              TextKeys                                                   (Parm, OutParm)
	 */
	void UBPW_SignLayoutManager_C::GetActiveKeys(TArray<class FString>* ImageKeys, TArray<class FString>* TextKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.GetActiveKeys");
		
		UBPW_SignLayoutManager_C_GetActiveKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImageKeys != nullptr)
			*ImageKeys = params.ImageKeys;
		if (TextKeys != nullptr)
			*TextKeys = params.TextKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::UpdateColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.UpdateColors");
		
		UBPW_SignLayoutManager_C_UpdateColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetColorToOtherImages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::SetColorToOtherImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetColorToOtherImages");
		
		UBPW_SignLayoutManager_C_SetColorToOtherImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetSignPrefabData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrefabSignData                             SignPrefabData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_SignLayoutManager_C::SetSignPrefabData(const struct FPrefabSignData& SignPrefabData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetSignPrefabData");
		
		UBPW_SignLayoutManager_C_SetSignPrefabData_Params params {};
		params.SignPrefabData = SignPrefabData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ShowBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowBackground                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignLayoutManager_C::ShowBackground(bool ShowBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ShowBackground");
		
		UBPW_SignLayoutManager_C_ShowBackground_Params params {};
		params.ShowBackground = ShowBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SendDataToFGPrefab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::SendDataToFGPrefab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SendDataToFGPrefab");
		
		UBPW_SignLayoutManager_C_SendDataToFGPrefab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::SetupText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupText");
		
		UBPW_SignLayoutManager_C_SetupText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupImage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::SetupImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupImage");
		
		UBPW_SignLayoutManager_C_SetupImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupElementData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_SignLayoutManager_C::SetupElementData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.SetupElementData");
		
		UBPW_SignLayoutManager_C_SetupElementData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignLayoutManager_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.PreConstruct");
		
		UBPW_SignLayoutManager_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ExecuteUbergraph_BPW_SignLayoutManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_SignLayoutManager_C::ExecuteUbergraph_BPW_SignLayoutManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_SignLayoutManager.BPW_SignLayoutManager_C.ExecuteUbergraph_BPW_SignLayoutManager");
		
		UBPW_SignLayoutManager_C_ExecuteUbergraph_BPW_SignLayoutManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_SignLayoutManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_SignLayoutManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SignLayoutManager.BPW_SignLayoutManager_C");
		return ptr;
	}

}


