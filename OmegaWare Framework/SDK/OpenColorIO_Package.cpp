/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF062E0
	 * 		Name   -> Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOpenColorIOColorConversionSettings         ConversionSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    InputTexture                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      OutputRenderTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenColorIOBlueprintLibrary::STATIC_ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform");
		
		UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ConversionSettings = ConversionSettings;
		params.InputTexture = InputTexture;
		params.OutputRenderTarget = OutputRenderTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOColorTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOColorTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOColorTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06C00
	 * 		Name   -> Function OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOpenColorIOConfiguration::ReloadExistingColorspaces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces");
		
		UOpenColorIOConfiguration_ReloadExistingColorspaces_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06E60
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FSceneViewExtensionIsActiveFunctor>  IsActiveFunctions                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions");
		
		UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params params {};
		params.IsActiveFunctions = IsActiveFunctions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06D70
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction");
		
		UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params params {};
		params.IsActiveFunction = IsActiveFunction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06C40
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FOpenColorIODisplayConfiguration            InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration");
		
		UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params params {};
		params.InDisplayConfiguration = InDisplayConfiguration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06C20
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension");
		
		UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06B40
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FOpenColorIODisplayConfiguration UOpenColorIODisplayExtensionWrapper::GetOpenColorIOConfiguration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration");
		
		UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06990
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FOpenColorIODisplayConfiguration            InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::STATIC_CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension");
		
		UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params params {};
		params.InDisplayConfiguration = InDisplayConfiguration;
		params.IsActiveFunction = IsActiveFunction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71EF06880
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FOpenColorIODisplayConfiguration            InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::STATIC_CreateInGameOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension");
		
		UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params params {};
		params.InDisplayConfiguration = InDisplayConfiguration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIODisplayExtensionWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIODisplayExtensionWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIODisplayExtensionWrapper");
		return ptr;
	}

}


