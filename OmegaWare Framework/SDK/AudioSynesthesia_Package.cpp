﻿/**
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSynesthesiaNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSynesthesiaNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D830
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime");
		
		UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D2E0
	 * 		Name   -> Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutConstantQ                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>* OutConstantQ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime");
		
		UConstantQNRT_GetChannelConstantQAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConstantQ != nullptr)
			*OutConstantQ = params.OutConstantQ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantQNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstantQNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessAnalyzer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessAnalyzer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessAnalyzer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5DC90
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime");
		
		ULoudnessNRT_GetNormalizedLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D970
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime");
		
		ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D740
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime");
		
		ULoudnessNRT_GetLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D420
	 * 		Name   -> Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InSeconds                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutLoudness                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float* OutLoudness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime");
		
		ULoudnessNRT_GetChannelLoudnessAtTime_Params params {};
		params.InSeconds = InSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoudness != nullptr)
			*OutLoudness = params.OutLoudness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoudnessNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoudnessNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.MeterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeterAnalyzer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeterAnalyzer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.MeterAnalyzer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRTSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5DAA0
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes");
		
		UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D550
	 * 		Name   -> Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              InStartSeconds                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InChannel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetTimestamps                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutOnsetStrengths                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes");
		
		UOnsetNRT_GetChannelOnsetsBetweenTimes_Params params {};
		params.InStartSeconds = InStartSeconds;
		params.InEndSeconds = InEndSeconds;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOnsetTimestamps != nullptr)
			*OutOnsetTimestamps = params.OutOnsetTimestamps;
		if (OutOnsetStrengths != nullptr)
			*OutOnsetStrengths = params.OutOnsetStrengths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnsetNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnsetNRT::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRT");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynesthesiaSpectrumAnalysisSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynesthesiaSpectrumAnalysisSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5DD80
	 * 		Name   -> Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies");
		
		USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x478F5D1E0
	 * 		Name   -> Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSampleRate                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutCenterFrequencies                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(float InSampleRate, TArray<float>* OutCenterFrequencies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies");
		
		USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params params {};
		params.InSampleRate = InSampleRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCenterFrequencies != nullptr)
			*OutCenterFrequencies = params.OutCenterFrequencies;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynesthesiaSpectrumAnalyzer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynesthesiaSpectrumAnalyzer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer");
		return ptr;
	}

}


