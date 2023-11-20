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
	 * 		RVA    -> 0x4727E5EC0
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterValueColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterValueColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterValueColor");
		
		UAudioMeter_SetMeterValueColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5E30
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterScaleLabelColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor");
		
		UAudioMeter_SetMeterScaleLabelColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5DA0
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterScaleColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterScaleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterScaleColor");
		
		UAudioMeter_SetMeterScaleColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5D10
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterPeakColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterPeakColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterPeakColor");
		
		UAudioMeter_SetMeterPeakColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5C80
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterClippingColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterClippingColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterClippingColor");
		
		UAudioMeter_SetMeterClippingColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5BD0
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterChannelInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMeterChannelInfo>                   InMeterChannelInfo                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterChannelInfo");
		
		UAudioMeter_SetMeterChannelInfo_Params params {};
		params.InMeterChannelInfo = InMeterChannelInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5B40
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetMeterBackgroundColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetMeterBackgroundColor");
		
		UAudioMeter_SetMeterBackgroundColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5960
	 * 		Name   -> Function AudioWidgets.AudioMeter.SetBackgroundColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioMeter::SetBackgroundColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.SetBackgroundColor");
		
		UAudioMeter_SetBackgroundColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature");
		
		UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5620
	 * 		Name   -> Function AudioWidgets.AudioMeter.GetMeterChannelInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioMeter.GetMeterChannelInfo");
		
		UAudioMeter_GetMeterChannelInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioMeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioMeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioMeter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6DC0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EAudioRadialSliderLayout                           InLayout                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetWidgetLayout(EAudioRadialSliderLayout InLayout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetWidgetLayout");
		
		UAudioRadialSlider_SetWidgetLayout_Params params {};
		params.InLayout = InLayout;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6BD0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsReadOnly                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetValueTextReadOnly(bool bIsReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly");
		
		UAudioRadialSlider_SetValueTextReadOnly_Params params {};
		params.bIsReadOnly = bIsReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6A90
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsReadOnly                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetUnitsTextReadOnly(bool bIsReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly");
		
		UAudioRadialSlider_SetUnitsTextReadOnly_Params params {};
		params.bIsReadOnly = bIsReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E68B0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetUnitsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Units                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetUnitsText(const class FText& Units)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetUnitsText");
		
		UAudioRadialSlider_SetUnitsText_Params params {};
		params.Units = Units;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E66F0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FSlateColor                                 InColor                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor");
		
		UAudioRadialSlider_SetTextLabelBackgroundColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6570
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetSliderThickness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InThickness                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetSliderThickness(float InThickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderThickness");
		
		UAudioRadialSlider_SetSliderThickness_Params params {};
		params.InThickness = InThickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E64C0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetSliderProgressColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor");
		
		UAudioRadialSlider_SetSliderProgressColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6360
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetSliderBarColor");
		
		UAudioRadialSlider_SetSliderBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6170
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShowUnitsText                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetShowUnitsText(bool bShowUnitsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetShowUnitsText");
		
		UAudioRadialSlider_SetShowUnitsText_Params params {};
		params.bShowUnitsText = bShowUnitsText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5FF0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShowLabelOnlyOnHover                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover");
		
		UAudioRadialSlider_SetShowLabelOnlyOnHover_Params params {};
		params.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5F50
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetOutputRange
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InOutputRange                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetOutputRange(const struct FVector2D& InOutputRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetOutputRange");
		
		UAudioRadialSlider_SetOutputRange_Params params {};
		params.InOutputRange = InOutputRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5AA0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InHandStartEndRatio                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio");
		
		UAudioRadialSlider_SetHandStartEndRatio_Params params {};
		params.InHandStartEndRatio = InHandStartEndRatio;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E59F0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioRadialSlider::SetCenterBackgroundColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor");
		
		UAudioRadialSlider_SetCenterBackgroundColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E58A0
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.GetSliderValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OutputValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioRadialSlider::GetSliderValue(float OutputValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.GetSliderValue");
		
		UAudioRadialSlider_GetSliderValue_Params params {};
		params.OutputValue = OutputValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5720
	 * 		Name   -> Function AudioWidgets.AudioRadialSlider.GetOutputValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSliderValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioRadialSlider::GetOutputValue(float InSliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioRadialSlider.GetOutputValue");
		
		UAudioRadialSlider_GetOutputValue_Params params {};
		params.InSliderValue = InSliderValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioRadialSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioRadialSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioRadialSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioVolumeRadialSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioVolumeRadialSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioVolumeRadialSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFrequencyRadialSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFrequencyRadialSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioFrequencyRadialSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6D10
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetWidgetBackgroundColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor");
		
		UAudioSliderBase_SetWidgetBackgroundColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6C70
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsReadOnly                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetValueTextReadOnly(bool bIsReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly");
		
		UAudioSliderBase_SetValueTextReadOnly_Params params {};
		params.bIsReadOnly = bIsReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6B30
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsReadOnly                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetUnitsTextReadOnly(bool bIsReadOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly");
		
		UAudioSliderBase_SetUnitsTextReadOnly_Params params {};
		params.bIsReadOnly = bIsReadOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E69A0
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetUnitsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Units                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetUnitsText(const class FText& Units)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetUnitsText");
		
		UAudioSliderBase_SetUnitsText_Params params {};
		params.Units = Units;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E67D0
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FSlateColor                                 InColor                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor");
		
		UAudioSliderBase_SetTextLabelBackgroundColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6640
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetSliderThumbColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderThumbColor");
		
		UAudioSliderBase_SetSliderThumbColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6410
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetSliderBarColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderBarColor");
		
		UAudioSliderBase_SetSliderBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E62B0
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetSliderBackgroundColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor");
		
		UAudioSliderBase_SetSliderBackgroundColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E6210
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetShowUnitsText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShowUnitsText                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetShowUnitsText(bool bShowUnitsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetShowUnitsText");
		
		UAudioSliderBase_SetShowUnitsText_Params params {};
		params.bShowUnitsText = bShowUnitsText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E60B0
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShowLabelOnlyOnHover                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioSliderBase::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover");
		
		UAudioSliderBase_SetShowLabelOnlyOnHover_Params params {};
		params.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5560
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.GetSliderValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OutputValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioSliderBase::GetSliderValue(float OutputValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetSliderValue");
		
		UAudioSliderBase_GetSliderValue_Params params {};
		params.OutputValue = OutputValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E57E0
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.GetOutputValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InSliderValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioSliderBase::GetOutputValue(float InSliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetOutputValue");
		
		UAudioSliderBase_GetOutputValue_Params params {};
		params.InSliderValue = InSliderValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4727E5560
	 * 		Name   -> Function AudioWidgets.AudioSliderBase.GetLinValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OutputValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAudioSliderBase::GetLinValue(float OutputValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AudioWidgets.AudioSliderBase.GetLinValue");
		
		UAudioSliderBase_GetLinValue_Params params {};
		params.OutputValue = OutputValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSliderBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSliderBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioSliderBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioVolumeSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioVolumeSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioVolumeSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioFrequencySlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioFrequencySlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioWidgets.AudioFrequencySlider");
		return ptr;
	}

}


