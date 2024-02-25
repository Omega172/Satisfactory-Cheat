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
	 * 		RVA    -> 0x713BEB890
	 * 		Name   -> Function GLTFExporter.GLTFExportOptions.ResetToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGLTFExportOptions::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExportOptions.ResetToDefault");
		
		UGLTFExportOptions_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFExportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFExportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFExportOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x713BEB550
	 * 		Name   -> Function GLTFExporter.GLTFExporter.ExportToGLTF
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGLTFExportOptions*                          Options                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGLTFExportMessages                         OutMessages                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UGLTFExporter::STATIC_ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, struct FGLTFExportMessages* OutMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFExporter.ExportToGLTF");
		
		UGLTFExporter_ExportToGLTF_Params params {};
		params.Object = Object;
		params.FilePath = FilePath;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMessages != nullptr)
			*OutMessages = params.OutMessages;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFAnimSequenceExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFAnimSequenceExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFAnimSequenceExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelSequenceExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelSequenceExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelSequenceExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFLevelVariantSetsExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFLevelVariantSetsExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFLevelVariantSetsExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFMaterialExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFMaterialExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFMaterialExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFSkeletalMeshExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFSkeletalMeshExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFSkeletalMeshExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFStaticMeshExporter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFStaticMeshExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFStaticMeshExporter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x713BEB900
	 * 		Name   -> Function GLTFExporter.GLTFProxyOptions.ResetToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGLTFProxyOptions::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GLTFExporter.GLTFProxyOptions.ResetToDefault");
		
		UGLTFProxyOptions_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFProxyOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFProxyOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFProxyOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGLTFMaterialExportOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGLTFMaterialExportOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GLTFExporter.GLTFMaterialExportOptions");
		return ptr;
	}

}


