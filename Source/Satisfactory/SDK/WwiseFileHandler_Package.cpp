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
	 * 		RVA    -> 0x47CCD8150
	 * 		Name   -> Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FAkUniqueID                                 ExternalSourceCookie                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MediaId                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseExternalSourceStatics::STATIC_SetExternalSourceMediaWithIds(const struct FAkUniqueID& ExternalSourceCookie, int32_t MediaId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds");
		
		UWwiseExternalSourceStatics_SetExternalSourceMediaWithIds_Params params {};
		params.ExternalSourceCookie = ExternalSourceCookie;
		params.MediaId = MediaId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CCD7FB0
	 * 		Name   -> Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ExternalSourceName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MediaName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseExternalSourceStatics::STATIC_SetExternalSourceMediaByName(const class FString& ExternalSourceName, const class FString& MediaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName");
		
		UWwiseExternalSourceStatics_SetExternalSourceMediaByName_Params params {};
		params.ExternalSourceName = ExternalSourceName;
		params.MediaName = MediaName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CCD7E60
	 * 		Name   -> Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ExternalSourceName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MediaId                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseExternalSourceStatics::STATIC_SetExternalSourceMediaById(const class FString& ExternalSourceName, int32_t MediaId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById");
		
		UWwiseExternalSourceStatics_SetExternalSourceMediaById_Params params {};
		params.ExternalSourceName = ExternalSourceName;
		params.MediaId = MediaId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseExternalSourceStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseExternalSourceStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseFileHandler.WwiseExternalSourceStatics");
		return ptr;
	}

}


