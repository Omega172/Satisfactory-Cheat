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
	 * 		RVA    -> 0x723FEAA70
	 * 		Name   -> Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioComponent*                             OnComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMetasoundGeneratorHandle* UMetasoundGeneratorHandle::STATIC_CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle");
		
		UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Params params {};
		params.OnComponent = OnComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x723FEA890
	 * 		Name   -> Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMetasoundParameterPack*                     Pack                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundGeneratorHandle::ApplyParameterPack(class UMetasoundParameterPack* Pack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack");
		
		UMetasoundGeneratorHandle_ApplyParameterPack_Params params {};
		params.Pack = Pack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetasoundGeneratorHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetasoundGeneratorHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetasoundGeneratorHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetasoundEditorGraphBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetasoundEditorGraphBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetasoundEditorGraphBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundPatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundPatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundPatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x723FEAC80
	 * 		Name   -> Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMetaSoundAssetDirectory>            Directories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories");
		
		UMetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories_Params params {};
		params.Directories = Directories;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x723FEABB0
	 * 		Name   -> Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMetaSoundAssetDirectory>            Directories                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories(TArray<struct FMetaSoundAssetDirectory> Directories)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories");
		
		UMetaSoundAssetSubsystem_RegisterAssetClassesInDirectories_Params params {};
		params.Directories = Directories;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundAssetSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundAssetSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundAssetSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetaSoundSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetaSoundSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundEngine.MetaSoundSource");
		return ptr;
	}

}


