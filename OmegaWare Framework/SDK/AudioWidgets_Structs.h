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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AudioWidgets.EAudioRadialSliderLayout
	 */
	enum class EAudioRadialSliderLayout : uint8_t
	{
		Layout_LabelTop    = 0,
		Layout_LabelCenter = 1,
		Layout_LabelBottom = 2,
		Layout_MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AudioWidgets.MeterChannelInfo
	 * Size -> 0x000C
	 */
	struct FMeterChannelInfo
	{
	public:
		float                                                      MeterValue;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeakValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClippingValue;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AudioWidgets.AudioMeterStyle
	 * Size -> 0x04C8 (FullSize[0x04D0] - InheritedSize[0x0008])
	 */
	struct FAudioMeterStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_A40H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         MeterValueImage;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImage;                                         // 0x00E0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MeterBackgroundImage;                                    // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MeterValueBackgroundImage;                               // 0x0280(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MeterPeakImage;                                          // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           MeterSize;                                               // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           MeterPadding;                                            // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeterValuePadding;                                       // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeakValueWidth;                                          // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ValueRangeDb;                                            // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowScale;                                              // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleSide;                                              // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTJP[0x2];                                   // 0x045A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleHashOffset;                                         // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleHashWidth;                                          // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleHashHeight;                                         // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DecibelsPerHash;                                         // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYMY[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0470(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ6W[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioWidgets.AudioTextBoxStyle
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FAudioTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_FSUI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0010(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x00E0(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XOXH[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioWidgets.AudioSliderStyle
	 * Size -> 0x0748 (FullSize[0x0750] - InheritedSize[0x0008])
	 */
	struct FAudioSliderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_YES4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        SliderStyle;                                             // 0x0010(0x0500) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAudioTextBoxStyle                                  TextBoxStyle;                                            // 0x0510(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         WidgetBackgroundImage;                                   // 0x0610(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SliderBackgroundColor;                                   // 0x06E0(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTJH[0x4];                                   // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SliderBackgroundSize;                                    // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LabelPadding;                                            // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         SliderBarColor;                                          // 0x070C(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SliderThumbColor;                                        // 0x0720(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         WidgetBackgroundColor;                                   // 0x0734(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MAR[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AudioWidgets.AudioRadialSliderStyle
	 * Size -> 0x0158 (FullSize[0x0160] - InheritedSize[0x0008])
	 */
	struct FAudioRadialSliderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_7UUV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAudioTextBoxStyle                                  TextBoxStyle;                                            // 0x0010(0x0100) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         CenterBackgroundColor;                                   // 0x0110(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SliderBarColor;                                          // 0x0124(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SliderProgressColor;                                     // 0x0138(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      LabelPadding;                                            // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultSliderRadius;                                     // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OCJ[0xC];                                   // 0x0154(0x000C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
