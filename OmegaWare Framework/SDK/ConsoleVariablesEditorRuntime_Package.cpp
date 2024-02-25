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
	 * 		RVA    -> 0x6E81536D0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InVariableCollectionDescription                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleVariablesAsset::SetVariableCollectionDescription(const class FString& InVariableCollectionDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription");
		
		UConsoleVariablesAsset_SetVariableCollectionDescription_Params params {};
		params.InVariableCollectionDescription = InVariableCollectionDescription;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E81535F0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UConsoleVariablesAsset::ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands");
		
		UConsoleVariablesAsset_ReplaceSavedCommands_Params params {};
		params.Replacement = Replacement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8153530
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InCommandString                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConsoleVariablesAsset::RemoveConsoleVariable(const class FString& InCommandString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable");
		
		UConsoleVariablesAsset_RemoveConsoleVariable_Params params {};
		params.InCommandString = InCommandString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E81534E0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UConsoleVariablesAsset::GetVariableCollectionDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription");
		
		UConsoleVariablesAsset_GetVariableCollectionDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E81534C0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UConsoleVariablesAsset::GetSavedCommandsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount");
		
		UConsoleVariablesAsset_GetSavedCommandsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8153390
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bOnlyIncludeChecked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UConsoleVariablesAsset::GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray");
		
		UConsoleVariablesAsset_GetSavedCommandsAsStringArray_Params params {};
		params.bOnlyIncludeChecked = bOnlyIncludeChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E81532D0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bOnlyIncludeChecked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString");
		
		UConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString_Params params {};
		params.bOnlyIncludeChecked = bOnlyIncludeChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E81532A0
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FConsoleVariablesEditorAssetSaveData> UConsoleVariablesAsset::GetSavedCommands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands");
		
		UConsoleVariablesAsset_GetSavedCommands_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8153100
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      InCommandString                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FConsoleVariablesEditorAssetSaveData        OutValue                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ESearchCase                                        SearchCase                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConsoleVariablesAsset::FindSavedDataByCommandString(const class FString& InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, ESearchCase SearchCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString");
		
		UConsoleVariablesAsset_FindSavedDataByCommandString_Params params {};
		params.InCommandString = InCommandString;
		params.SearchCase = SearchCase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8153020
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIncludeChecked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleVariablesAsset::ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands");
		
		UConsoleVariablesAsset_ExecuteSavedCommands_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bOnlyIncludeChecked = bOnlyIncludeChecked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8152F60
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UConsoleVariablesAsset*                      InAssetToCopy                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConsoleVariablesAsset::CopyFrom(class UConsoleVariablesAsset* InAssetToCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom");
		
		UConsoleVariablesAsset_CopyFrom_Params params {};
		params.InAssetToCopy = InAssetToCopy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E8152E90
	 * 		Name   -> Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FConsoleVariablesEditorAssetSaveData        InData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData(const struct FConsoleVariablesEditorAssetSaveData& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData");
		
		UConsoleVariablesAsset_AddOrSetConsoleObjectSavedData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsoleVariablesAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleVariablesAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset");
		return ptr;
	}

}


