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
	 * 		Name   -> PredefinedFunction UEnhancedInputActionDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputActionDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputActionDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputActionValueBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputActionValueBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputActionValueBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1460
	 * 		Name   -> Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue");
		
		UEnhancedInputComponent_GetBoundActionValue_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3EE0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        Context                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceImmediately                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputLibrary::STATIC_RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext");
		
		UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params params {};
		params.Context = Context;
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3020
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		double                                             X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputActionValueType                              ValueType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputLibrary::STATIC_MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType");
		
		UEnhancedInputLibrary_MakeInputActionValueOfType_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.ValueType = ValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2E60
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		double                                             X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           MatchValueType                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputLibrary::STATIC_MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue");
		
		UEnhancedInputLibrary_MakeInputActionValue_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.MatchValueType = MatchValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2740
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEnhancedActionKeyMapping                   ActionKeyMapping                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputLibrary::STATIC_IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable");
		
		UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params params {};
		params.ActionKeyMapping = ActionKeyMapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2110
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPlayerMappableKeySlot UEnhancedInputLibrary::STATIC_GetThirdPlayerMappableKeySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot");
		
		UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC20F0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPlayerMappableKeySlot UEnhancedInputLibrary::STATIC_GetSecondPlayerMappableKeySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot");
		
		UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1E80
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEnhancedActionKeyMapping                   ActionKeyMapping                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UPlayerMappableKeySettings* UEnhancedInputLibrary::STATIC_GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings");
		
		UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params params {};
		params.ActionKeyMapping = ActionKeyMapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1C70
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetMappingName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FEnhancedActionKeyMapping                   ActionKeyMapping                                           (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class FName UEnhancedInputLibrary::STATIC_GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetMappingName");
		
		UEnhancedInputLibrary_GetMappingName_Params params {};
		params.ActionKeyMapping = ActionKeyMapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1910
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPlayerMappableKeySlot UEnhancedInputLibrary::STATIC_GetFourthPlayerMappableKeySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot");
		
		UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC18F0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPlayerMappableKeySlot UEnhancedInputLibrary::STATIC_GetFirstPlayerMappableKeySlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot");
		
		UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1590
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputLibrary::STATIC_GetBoundActionValue(class AActor* Actor, class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue");
		
		UEnhancedInputLibrary_GetBoundActionValue_Params params {};
		params.Actor = Actor;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC11F0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEnhancedInputLibrary::STATIC_Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString");
		
		UEnhancedInputLibrary_Conv_InputActionValueToString_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1130
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputLibrary::STATIC_Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool");
		
		UEnhancedInputLibrary_Conv_InputActionValueToBool_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1090
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0FF0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0F50
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	double UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0D10
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InActionValue                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		double                                             X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputActionValueType                              Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputLibrary::STATIC_BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, EInputActionValueType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue");
		
		UEnhancedInputLibrary_BreakInputActionValue_Params params {};
		params.InActionValue = InActionValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Z != nullptr)
			*Z = params.Z;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1820
	 * 		Name   -> Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMappingContext*                        InContext                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect");
		
		UEnhancedInputPlatformData_GetContextRedirect_Params params {};
		params.InContext = InContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputPlatformData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputPlatformData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputPlatformData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputPlatformSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputPlatformSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputPlatformSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3DF0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EInputMappingRebuildType                           RebuildType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RequestRebuildControlMappings(const struct FModifyContextOptions& Options, EInputMappingRebuildType RebuildType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings");
		
		UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params params {};
		params.Options = Options;
		params.RebuildType = RebuildType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3D00
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPlayerMappableInputConfig*                  Config                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig");
		
		UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params params {};
		params.Config = Config;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3C10
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext");
		
		UEnhancedInputSubsystemInterface_RemoveMappingContext_Params params {};
		params.MappingContext = MappingContext;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3B20
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeysForMapping(const class FName& MappingName, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping");
		
		UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params params {};
		params.MappingName = MappingName;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3A70
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys");
		
		UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params params {};
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3720
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UInputMappingContext*>                PrioritizedActiveContexts                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UInputMappingContext*                        InputContext                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMappingQueryIssue>                  OutIssues                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMappingQueryIssue                                 BlockingIssues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(TArray<class UInputMappingContext*> PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet");
		
		UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params params {};
		params.PrioritizedActiveContexts = PrioritizedActiveContexts;
		params.InputContext = InputContext;
		params.Action = Action;
		params.Key = Key;
		params.BlockingIssues = BlockingIssues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIssues != nullptr)
			*OutIssues = params.OutIssues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3530
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        InputContext                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMappingQueryIssue>                  OutIssues                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMappingQueryIssue                                 BlockingIssues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet");
		
		UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params params {};
		params.InputContext = InputContext;
		params.Action = Action;
		params.Key = Key;
		params.BlockingIssues = BlockingIssues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIssues != nullptr)
			*OutIssues = params.OutIssues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3450
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FKey> UEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction");
		
		UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2D00
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlayerMappableKeySlot                      KeySlot                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UEnhancedInputSubsystemInterface::K2_RemovePlayerMappedKeyInSlot(const class FName& MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot");
		
		UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params params {};
		params.MappingName = MappingName;
		params.KeySlot = KeySlot;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2BE0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlayerMappableKeySlot                      KeySlot                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FKey UEnhancedInputSubsystemInterface::K2_GetPlayerMappedKeyInSlot(const class FName& MappingName, const struct FPlayerMappableKeySlot& KeySlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot");
		
		UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params params {};
		params.MappingName = MappingName;
		params.KeySlot = KeySlot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC29F0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        NewKey                                                     (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPlayerMappableKeySlot                      KeySlot                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UEnhancedInputSubsystemInterface::K2_AddPlayerMappedKeyInSlot(const class FName& MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot");
		
		UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params params {};
		params.MappingName = MappingName;
		params.NewKey = NewKey;
		params.KeySlot = KeySlot;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2580
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UInputModifier*>                      Modifiers                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UInputTrigger*>                       Triggers                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction");
		
		UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params params {};
		params.Action = Action;
		params.Value = Value;
		params.Modifiers = Modifiers;
		params.Triggers = Triggers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC23A0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           RawValue                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UInputModifier*>                      Modifiers                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UInputTrigger*>                       Triggers                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction");
		
		UEnhancedInputSubsystemInterface_InjectInputForAction_Params params {};
		params.Action = Action;
		params.RawValue = RawValue;
		params.Modifiers = Modifiers;
		params.Triggers = Triggers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC22C0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutFoundPriority                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32_t* OutFoundPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext");
		
		UEnhancedInputSubsystemInterface_HasMappingContext_Params params {};
		params.MappingContext = MappingContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFoundPriority != nullptr)
			*OutFoundPriority = params.OutFoundPriority;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1380
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FKey> UEnhancedInputSubsystemInterface::GetAllPlayerMappedKeys(const class FName& MappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys");
		
		UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params params {};
		params.MappingName = MappingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC12C0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FEnhancedActionKeyMapping> UEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings");
		
		UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0F30
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UEnhancedInputSubsystemInterface::ClearAllMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings");
		
		UEnhancedInputSubsystemInterface_ClearAllMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0C20
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPlayerMappableInputConfig*                  Config                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig");
		
		UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params params {};
		params.Config = Config;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC0B00
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FModifyContextOptions                       Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, const struct FModifyContextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext");
		
		UEnhancedInputSubsystemInterface_AddMappingContext_Params params {};
		params.MappingContext = MappingContext;
		params.Priority = Priority;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputSubsystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputSubsystemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputSubsystemInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputLocalPlayerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputLocalPlayerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputLocalPlayerSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3980
	 * 		Name   -> Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputWorldSubsystem::RemoveActorInputComponent(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent");
		
		UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC08C0
	 * 		Name   -> Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputWorldSubsystem::AddActorInputComponent(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent");
		
		UEnhancedInputWorldSubsystem_AddActorInputComponent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedPlayerInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedPlayerInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedPlayerInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputDebugKeyDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputDebugKeyDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputDebugKeyDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC40F0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapKey");
		
		UInputMappingContext_UnmapKey_Params params {};
		params.Action = Action;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3FF0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction");
		
		UInputMappingContext_UnmapAllKeysFromAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC4080
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UInputMappingContext::UnmapAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAll");
		
		UInputMappingContext_UnmapAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3FF0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingContext::UnmapAction(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAction");
		
		UInputMappingContext_UnmapAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC31B0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.MapKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        ToKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.MapKey");
		
		UInputMappingContext_MapKey_Params params {};
		params.Action = Action;
		params.ToKey = ToKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMappingContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMappingContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputMappingContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC32C0
	 * 		Name   -> Function EnhancedInput.InputModifier.ModifyRaw
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UEnhancedPlayerInput*                        PlayerInput                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           CurrentValue                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.ModifyRaw");
		
		UInputModifier_ModifyRaw_Params params {};
		params.PlayerInput = PlayerInput;
		params.CurrentValue = CurrentValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2160
	 * 		Name   -> Function EnhancedInput.InputModifier.GetVisualizationColor
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FInputActionValue                           SampleValue                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           FinalValue                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.GetVisualizationColor");
		
		UInputModifier_GetVisualizationColor_Params params {};
		params.SampleValue = SampleValue;
		params.FinalValue = FinalValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierDeadZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierDeadZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierDeadZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierScalar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierScalar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierScaleByDeltaTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierScaleByDeltaTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierScaleByDeltaTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierNegate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierNegate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierNegate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierSmooth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierSmooth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierSmooth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierResponseCurveExponential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierResponseCurveExponential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierResponseCurveExponential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierResponseCurveUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierResponseCurveUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierResponseCurveUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierFOVScaling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierFOVScaling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierFOVScaling");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierToWorldSpace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierToWorldSpace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierToWorldSpace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierSwizzleAxis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierSwizzleAxis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierSwizzleAxis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC41E0
	 * 		Name   -> Function EnhancedInput.InputTrigger.UpdateState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnhancedPlayerInput*                        PlayerInput                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           ModifiedValue                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETriggerState UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.UpdateState");
		
		UInputTrigger_UpdateState_Params params {};
		params.PlayerInput = PlayerInput;
		params.ModifiedValue = ModifiedValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC28F0
	 * 		Name   -> Function EnhancedInput.InputTrigger.IsActuated
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FInputActionValue                           ForValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UInputTrigger::IsActuated(const struct FInputActionValue& ForValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.IsActuated");
		
		UInputTrigger_IsActuated_Params params {};
		params.ForValue = ForValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2130
	 * 		Name   -> Function EnhancedInput.InputTrigger.GetTriggerType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	ETriggerType UInputTrigger::GetTriggerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.GetTriggerType");
		
		UInputTrigger_GetTriggerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerTimedBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerTimedBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerTimedBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerDown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerDown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerDown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerPressed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerPressed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerPressed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerReleased.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerReleased::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerReleased");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerHold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerHold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerHold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerHoldAndRelease.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerHoldAndRelease::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerHoldAndRelease");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerTap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerTap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerTap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerPulse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerPulse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerPulse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerChordAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerChordAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerChordAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerChordBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerChordBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerChordBlocker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerCombo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerCombo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerCombo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC3FD0
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPlayerMappableInputConfig::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault");
		
		UPlayerMappableInputConfig_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC29D0
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPlayerMappableInputConfig::IsDeprecated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated");
		
		UPlayerMappableInputConfig_IsDeprecated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC2010
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys");
		
		UPlayerMappableInputConfig_GetPlayerMappableKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1E60
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UPlayerMappableInputConfig::GetMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMetadata");
		
		UPlayerMappableInputConfig_GetMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1B70
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class UInputMappingContext*, int32_t> UPlayerMappableInputConfig::GetMappingContexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts");
		
		UPlayerMappableInputConfig_GetMappingContexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1A70
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MappingName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(const class FName& MappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName");
		
		UPlayerMappableInputConfig_GetMappingByName_Params params {};
		params.MappingName = MappingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1930
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputAction*                                InAction                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction");
		
		UPlayerMappableInputConfig_GetKeysBoundToAction_Params params {};
		params.InAction = InAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC18C0
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UPlayerMappableInputConfig::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName");
		
		UPlayerMappableInputConfig_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6EBDC1800
	 * 		Name   -> Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UPlayerMappableInputConfig::GetConfigName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.PlayerMappableInputConfig.GetConfigName");
		
		UPlayerMappableInputConfig_GetConfigName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMappableInputConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMappableInputConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.PlayerMappableInputConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMappableKeySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMappableKeySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.PlayerMappableKeySettings");
		return ptr;
	}

}


