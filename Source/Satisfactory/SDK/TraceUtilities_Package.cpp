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
	 * 		RVA    -> 0x46F7E2060
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTraceUtilLibrary::STATIC_TraceMarkRegionStart(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart");
		
		UTraceUtilLibrary_TraceMarkRegionStart_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E2060
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTraceUtilLibrary::STATIC_TraceMarkRegionEnd(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd");
		
		UTraceUtilLibrary_TraceMarkRegionEnd_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E2060
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.TraceBookmark
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTraceUtilLibrary::STATIC_TraceBookmark(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceBookmark");
		
		UTraceUtilLibrary_TraceBookmark_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1F80
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.ToggleChannel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTraceUtilLibrary::STATIC_ToggleChannel(const class FString& ChannelName, bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.ToggleChannel");
		
		UTraceUtilLibrary_ToggleChannel_Params params {};
		params.ChannelName = ChannelName;
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1F50
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.StopTracing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTraceUtilLibrary::STATIC_StopTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StopTracing");
		
		UTraceUtilLibrary_StopTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1E20
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Channels                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTraceUtilLibrary::STATIC_StartTraceToFile(const class FString& Filename, TArray<class FString> Channels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StartTraceToFile");
		
		UTraceUtilLibrary_StartTraceToFile_Params params {};
		params.Filename = Filename;
		params.Channels = Channels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1E20
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Channels                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTraceUtilLibrary::STATIC_StartTraceSendTo(const class FString& Target, TArray<class FString> Channels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo");
		
		UTraceUtilLibrary_StartTraceSendTo_Params params {};
		params.Target = Target;
		params.Channels = Channels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1DF0
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.ResumeTracing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTraceUtilLibrary::STATIC_ResumeTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.ResumeTracing");
		
		UTraceUtilLibrary_ResumeTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1DC0
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.PauseTracing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTraceUtilLibrary::STATIC_PauseTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.PauseTracing");
		
		UTraceUtilLibrary_PauseTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1D90
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.IsTracing
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTraceUtilLibrary::STATIC_IsTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.IsTracing");
		
		UTraceUtilLibrary_IsTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1D00
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ChannelName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTraceUtilLibrary::STATIC_IsChannelEnabled(const class FString& ChannelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled");
		
		UTraceUtilLibrary_IsChannelEnabled_Params params {};
		params.ChannelName = ChannelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1C80
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UTraceUtilLibrary::STATIC_GetEnabledChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels");
		
		UTraceUtilLibrary_GetEnabledChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x46F7E1C00
	 * 		Name   -> Function TraceUtilities.TraceUtilLibrary.GetAllChannels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UTraceUtilLibrary::STATIC_GetAllChannels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.GetAllChannels");
		
		UTraceUtilLibrary_GetAllChannels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTraceUtilLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTraceUtilLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TraceUtilities.TraceUtilLibrary");
		return ptr;
	}

}


