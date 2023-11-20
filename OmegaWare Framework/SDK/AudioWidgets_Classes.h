#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AudioWidgets.AudioMeter
	 * Size -> 0x0580 (FullSize[0x06D0] - InheritedSize[0x0150])
	 */
	class UAudioMeter : public UWidget
	{
	public:
		TArray<struct FMeterChannelInfo>                           MeterChannelInfo;                                        // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MeterChannelInfoDelegate;                                // 0x0160(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAudioMeterStyle                                    WidgetStyle;                                             // 0x0170(0x04D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0640(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBZA[0x3];                                   // 0x0641(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0644(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterBackgroundColor;                                    // 0x0654(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterValueColor;                                         // 0x0664(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterPeakColor;                                          // 0x0674(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterClippingColor;                                      // 0x0684(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleColor;                                         // 0x0694(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleLabelColor;                                    // 0x06A4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1VG[0x1C];                                  // 0x06B4(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetMeterValueColor(const struct FLinearColor& InValue);
		void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
		void SetMeterScaleColor(const struct FLinearColor& InValue);
		void SetMeterPeakColor(const struct FLinearColor& InValue);
		void SetMeterClippingColor(const struct FLinearColor& InValue);
		void SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo);
		void SetMeterBackgroundColor(const struct FLinearColor& InValue);
		void SetBackgroundColor(const struct FLinearColor& InValue);
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioRadialSlider
	 * Size -> 0x0220 (FullSize[0x0370] - InheritedSize[0x0150])
	 */
	class UAudioRadialSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0154(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioRadialSliderLayout                                   WidgetLayout;                                            // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IYA[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CenterBackgroundColor;                                   // 0x0168(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderProgressColor;                                     // 0x0178(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x0188(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HandStartEndRatio;                                       // 0x0198(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UnitsText;                                               // 0x01A8(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x01C0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x01D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x01D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x01D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x01D3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderThickness;                                         // 0x01D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           OutputRange;                                             // 0x01D8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4LS[0x178];                                 // 0x01F8(0x0178) MISSED OFFSET (PADDING)

	public:
		void SetWidgetLayout(EAudioRadialSliderLayout InLayout);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThickness(float InThickness);
		void SetSliderProgressColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		void SetOutputRange(const struct FVector2D& InOutputRange);
		void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
		void SetCenterBackgroundColor(const struct FLinearColor& InValue);
		float GetSliderValue(float OutputValue);
		float GetOutputValue(float InSliderValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeRadialSlider
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class UAudioVolumeRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencyRadialSlider
	 * Size -> 0x0000 (FullSize[0x0370] - InheritedSize[0x0370])
	 */
	class UAudioFrequencyRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSliderBase
	 * Size -> 0x0850 (FullSize[0x09A0] - InheritedSize[0x0150])
	 */
	class UAudioSliderBase : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KXS[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                UnitsText;                                               // 0x0158(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x0170(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextLabelBackgroundColorDelegate;                        // 0x0180(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x0190(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x0191(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x0192(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x0193(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0194(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBackgroundColor;                                   // 0x01A4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBackgroundColorDelegate;                           // 0x01B4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x01C4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBarColorDelegate;                                  // 0x01D4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderThumbColor;                                        // 0x01E4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderThumbColorDelegate;                                // 0x01F4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        WidgetBackgroundColor;                                   // 0x0204(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      WidgetBackgroundColorDelegate;                           // 0x0214(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0224(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCV8[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG8A[0x768];                                 // 0x0238(0x0768) MISSED OFFSET (PADDING)

	public:
		void SetWidgetBackgroundColor(const struct FLinearColor& InValue);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThumbColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetSliderBackgroundColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		float GetSliderValue(float OutputValue);
		float GetOutputValue(float InSliderValue);
		float GetLinValue(float OutputValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSlider
	 * Size -> 0x0010 (FullSize[0x09B0] - InheritedSize[0x09A0])
	 */
	class UAudioSlider : public UAudioSliderBase
	{
	public:
		TWeakObjectPtr<class UCurveFloat>                          LinToOutputCurve;                                        // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCurveFloat>                          OutputToLinCurve;                                        // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeSlider
	 * Size -> 0x0000 (FullSize[0x09B0] - InheritedSize[0x09B0])
	 */
	class UAudioVolumeSlider : public UAudioSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencySlider
	 * Size -> 0x0010 (FullSize[0x09B0] - InheritedSize[0x09A0])
	 */
	class UAudioFrequencySlider : public UAudioSliderBase
	{
	public:
		struct FVector2D                                           OutputRange;                                             // 0x09A0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
