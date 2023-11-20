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
	 * 		RVA    -> 0x47CC7AB40
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetWwiseShortId(const struct FWwiseEventInfo& Ref, int32_t WwiseShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId");
		
		UWwiseEventInfoLibrary_SetWwiseShortId_Params params {};
		params.Ref = Ref;
		params.WwiseShortId = WwiseShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A6F0
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetWwiseName(const struct FWwiseEventInfo& Ref, const class FString& WwiseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName");
		
		UWwiseEventInfoLibrary_SetWwiseName_Params params {};
		params.Ref = Ref;
		params.WwiseName = WwiseName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A470
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       WwiseGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetWwiseGuid(const struct FWwiseEventInfo& Ref, const struct FGuid& WwiseGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid");
		
		UWwiseEventInfoLibrary_SetWwiseGuid_Params params {};
		params.Ref = Ref;
		params.WwiseGuid = WwiseGuid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A340
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventSwitchContainerLoading                  SwitchContainerLoading                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetSwitchContainerLoading(const struct FWwiseEventInfo& Ref, EWwiseEventSwitchContainerLoading SwitchContainerLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading");
		
		UWwiseEventInfoLibrary_SetSwitchContainerLoading_Params params {};
		params.Ref = Ref;
		params.SwitchContainerLoading = SwitchContainerLoading;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A110
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HardCodedSoundBankShortId                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetHardCodedSoundBankShortId(const struct FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId");
		
		UWwiseEventInfoLibrary_SetHardCodedSoundBankShortId_Params params {};
		params.Ref = Ref;
		params.HardCodedSoundBankShortId = HardCodedSoundBankShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79EC0
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventDestroyOptions                          DestroyOptions                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_SetDestroyOptions(const struct FWwiseEventInfo& Ref, EWwiseEventDestroyOptions DestroyOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions");
		
		UWwiseEventInfoLibrary_SetDestroyOptions_Params params {};
		params.Ref = Ref;
		params.DestroyOptions = DestroyOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79790
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGuid                                       WwiseGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventSwitchContainerLoading                  SwitchContainerLoading                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventDestroyOptions                          DestroyOptions                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HardCodedSoundBankShortId                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseEventInfo UWwiseEventInfoLibrary::STATIC_MakeStruct(const struct FGuid& WwiseGuid, int32_t WwiseShortId, const class FString& WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct");
		
		UWwiseEventInfoLibrary_MakeStruct_Params params {};
		params.WwiseGuid = WwiseGuid;
		params.WwiseShortId = WwiseShortId;
		params.WwiseName = WwiseName;
		params.SwitchContainerLoading = SwitchContainerLoading;
		params.DestroyOptions = DestroyOptions;
		params.HardCodedSoundBankShortId = HardCodedSoundBankShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC795B0
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseEventInfoLibrary::STATIC_GetWwiseShortId(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortId");
		
		UWwiseEventInfoLibrary_GetWwiseShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79350
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UWwiseEventInfoLibrary::STATIC_GetWwiseName(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName");
		
		UWwiseEventInfoLibrary_GetWwiseName_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79200
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UWwiseEventInfoLibrary::STATIC_GetWwiseGuid(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid");
		
		UWwiseEventInfoLibrary_GetWwiseGuid_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79150
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWwiseEventSwitchContainerLoading UWwiseEventInfoLibrary::STATIC_GetSwitchContainerLoading(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading");
		
		UWwiseEventInfoLibrary_GetSwitchContainerLoading_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79010
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseEventInfoLibrary::STATIC_GetHardCodedSoundBankShortId(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId");
		
		UWwiseEventInfoLibrary_GetHardCodedSoundBankShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78EC0
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EWwiseEventDestroyOptions UWwiseEventInfoLibrary::STATIC_GetDestroyOptions(const struct FWwiseEventInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions");
		
		UWwiseEventInfoLibrary_GetDestroyOptions_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78670
	 * 		Name   -> Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseEventInfo                             Ref                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       OutWwiseGuid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWwiseShortId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutWwiseName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventSwitchContainerLoading                  OutSwitchContainerLoading                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWwiseEventDestroyOptions                          OutDestroyOptions                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutHardCodedSoundBankShortId                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseEventInfoLibrary::STATIC_BreakStruct(const struct FWwiseEventInfo& Ref, struct FGuid* OutWwiseGuid, int32_t* OutWwiseShortId, class FString* OutWwiseName, EWwiseEventSwitchContainerLoading* OutSwitchContainerLoading, EWwiseEventDestroyOptions* OutDestroyOptions, int32_t* OutHardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct");
		
		UWwiseEventInfoLibrary_BreakStruct_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWwiseGuid != nullptr)
			*OutWwiseGuid = params.OutWwiseGuid;
		if (OutWwiseShortId != nullptr)
			*OutWwiseShortId = params.OutWwiseShortId;
		if (OutWwiseName != nullptr)
			*OutWwiseName = params.OutWwiseName;
		if (OutSwitchContainerLoading != nullptr)
			*OutSwitchContainerLoading = params.OutSwitchContainerLoading;
		if (OutDestroyOptions != nullptr)
			*OutDestroyOptions = params.OutDestroyOptions;
		if (OutHardCodedSoundBankShortId != nullptr)
			*OutHardCodedSoundBankShortId = params.OutHardCodedSoundBankShortId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseEventInfoLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseEventInfoLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseResourceLoader.WwiseEventInfoLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7AC60
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::STATIC_SetWwiseShortId(const struct FWwiseGroupValueInfo& Ref, int32_t WwiseShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId");
		
		UWwiseGroupValueInfoLibrary_SetWwiseShortId_Params params {};
		params.Ref = Ref;
		params.WwiseShortId = WwiseShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A870
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::STATIC_SetWwiseName(const struct FWwiseGroupValueInfo& Ref, const class FString& WwiseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName");
		
		UWwiseGroupValueInfoLibrary_SetWwiseName_Params params {};
		params.Ref = Ref;
		params.WwiseName = WwiseName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79FF0
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GroupShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::STATIC_SetGroupShortId(const struct FWwiseGroupValueInfo& Ref, int32_t GroupShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId");
		
		UWwiseGroupValueInfoLibrary_SetGroupShortId_Params params {};
		params.Ref = Ref;
		params.GroupShortId = GroupShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79D80
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       AssetGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::STATIC_SetAssetGuid(const struct FWwiseGroupValueInfo& Ref, const struct FGuid& AssetGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid");
		
		UWwiseGroupValueInfoLibrary_SetAssetGuid_Params params {};
		params.Ref = Ref;
		params.AssetGuid = AssetGuid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC799F0
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGuid                                       AssetGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GroupShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseGroupValueInfo UWwiseGroupValueInfoLibrary::STATIC_MakeStruct(const struct FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, const class FString& WwiseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct");
		
		UWwiseGroupValueInfoLibrary_MakeStruct_Params params {};
		params.AssetGuid = AssetGuid;
		params.GroupShortId = GroupShortId;
		params.WwiseShortId = WwiseShortId;
		params.WwiseName = WwiseName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79650
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseGroupValueInfoLibrary::STATIC_GetWwiseShortId(const struct FWwiseGroupValueInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortId");
		
		UWwiseGroupValueInfoLibrary_GetWwiseShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79420
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UWwiseGroupValueInfoLibrary::STATIC_GetWwiseName(const struct FWwiseGroupValueInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName");
		
		UWwiseGroupValueInfoLibrary_GetWwiseName_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78F70
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseGroupValueInfoLibrary::STATIC_GetGroupShortId(const struct FWwiseGroupValueInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId");
		
		UWwiseGroupValueInfoLibrary_GetGroupShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78E20
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UWwiseGroupValueInfoLibrary::STATIC_GetAssetGuid(const struct FWwiseGroupValueInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid");
		
		UWwiseGroupValueInfoLibrary_GetAssetGuid_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78980
	 * 		Name   -> Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseGroupValueInfo                        Ref                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       OutAssetGuid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutGroupShortId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWwiseShortId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutWwiseName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseGroupValueInfoLibrary::STATIC_BreakStruct(const struct FWwiseGroupValueInfo& Ref, struct FGuid* OutAssetGuid, int32_t* OutGroupShortId, int32_t* OutWwiseShortId, class FString* OutWwiseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct");
		
		UWwiseGroupValueInfoLibrary_BreakStruct_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetGuid != nullptr)
			*OutAssetGuid = params.OutAssetGuid;
		if (OutGroupShortId != nullptr)
			*OutGroupShortId = params.OutGroupShortId;
		if (OutWwiseShortId != nullptr)
			*OutWwiseShortId = params.OutWwiseShortId;
		if (OutWwiseName != nullptr)
			*OutWwiseName = params.OutWwiseName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseGroupValueInfoLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseGroupValueInfoLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseResourceLoader.WwiseGroupValueInfoLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7AD80
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseObjectInfo UWwiseObjectInfoLibrary::STATIC_SetWwiseShortId(const struct FWwiseObjectInfo& Ref, int32_t WwiseShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId");
		
		UWwiseObjectInfoLibrary_SetWwiseShortId_Params params {};
		params.Ref = Ref;
		params.WwiseShortId = WwiseShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A9E0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseObjectInfo UWwiseObjectInfoLibrary::STATIC_SetWwiseName(const struct FWwiseObjectInfo& Ref, const class FString& WwiseName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName");
		
		UWwiseObjectInfoLibrary_SetWwiseName_Params params {};
		params.Ref = Ref;
		params.WwiseName = WwiseName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A5C0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       WwiseGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseObjectInfo UWwiseObjectInfoLibrary::STATIC_SetWwiseGuid(const struct FWwiseObjectInfo& Ref, const struct FGuid& WwiseGuid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid");
		
		UWwiseObjectInfoLibrary_SetWwiseGuid_Params params {};
		params.Ref = Ref;
		params.WwiseGuid = WwiseGuid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC7A230
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HardCodedSoundBankShortId                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseObjectInfo UWwiseObjectInfoLibrary::STATIC_SetHardCodedSoundBankShortId(const struct FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId");
		
		UWwiseObjectInfoLibrary_SetHardCodedSoundBankShortId_Params params {};
		params.Ref = Ref;
		params.HardCodedSoundBankShortId = HardCodedSoundBankShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC79BB0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FGuid                                       WwiseGuid                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WwiseShortId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      WwiseName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HardCodedSoundBankShortId                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FWwiseObjectInfo UWwiseObjectInfoLibrary::STATIC_MakeStruct(const struct FGuid& WwiseGuid, int32_t WwiseShortId, const class FString& WwiseName, int32_t HardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct");
		
		UWwiseObjectInfoLibrary_MakeStruct_Params params {};
		params.WwiseGuid = WwiseGuid;
		params.WwiseShortId = WwiseShortId;
		params.WwiseName = WwiseName;
		params.HardCodedSoundBankShortId = HardCodedSoundBankShortId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC796F0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseObjectInfoLibrary::STATIC_GetWwiseShortId(const struct FWwiseObjectInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortId");
		
		UWwiseObjectInfoLibrary_GetWwiseShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC794F0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UWwiseObjectInfoLibrary::STATIC_GetWwiseName(const struct FWwiseObjectInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName");
		
		UWwiseObjectInfoLibrary_GetWwiseName_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC792B0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGuid UWwiseObjectInfoLibrary::STATIC_GetWwiseGuid(const struct FWwiseObjectInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid");
		
		UWwiseObjectInfoLibrary_GetWwiseGuid_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC790B0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UWwiseObjectInfoLibrary::STATIC_GetHardCodedSoundBankShortId(const struct FWwiseObjectInfo& Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId");
		
		UWwiseObjectInfoLibrary_GetHardCodedSoundBankShortId_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47CC78BD0
	 * 		Name   -> Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FWwiseObjectInfo                            Ref                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGuid                                       OutWwiseGuid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWwiseShortId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutWwiseName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutHardCodedSoundBankShortId                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWwiseObjectInfoLibrary::STATIC_BreakStruct(const struct FWwiseObjectInfo& Ref, struct FGuid* OutWwiseGuid, int32_t* OutWwiseShortId, class FString* OutWwiseName, int32_t* OutHardCodedSoundBankShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct");
		
		UWwiseObjectInfoLibrary_BreakStruct_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWwiseGuid != nullptr)
			*OutWwiseGuid = params.OutWwiseGuid;
		if (OutWwiseShortId != nullptr)
			*OutWwiseShortId = params.OutWwiseShortId;
		if (OutWwiseName != nullptr)
			*OutWwiseName = params.OutWwiseName;
		if (OutHardCodedSoundBankShortId != nullptr)
			*OutHardCodedSoundBankShortId = params.OutHardCodedSoundBankShortId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWwiseObjectInfoLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseObjectInfoLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseResourceLoader.WwiseObjectInfoLibrary");
		return ptr;
	}

}


