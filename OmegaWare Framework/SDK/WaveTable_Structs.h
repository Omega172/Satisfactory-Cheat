#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Enum WaveTable.EWaveTableResolution
	 */
	enum class EWaveTableResolution : uint8_t
	{
		None    = 0,
		Res     = 1,
		Res01   = 2,
		Res02   = 3,
		Res03   = 4,
		Res04   = 5,
		Res05   = 6,
		Res06   = 7,
		Res07   = 8,
		Res08   = 9,
		Res09   = 10,
		Res_Max = 11,
		Maximum = 12,
		MAX     = 13
	};

	/**
	 * Enum WaveTable.EWaveTableCurve
	 */
	enum class EWaveTableCurve : uint8_t
	{
		Linear      = 0,
		Linear_Inv  = 1,
		Exp         = 2,
		Exp_Inverse = 3,
		Log         = 4,
		Sin         = 5,
		Sin_Full    = 6,
		SCurve      = 7,
		Shared      = 8,
		Custom      = 9,
		File        = 10,
		Count       = 11,
		MAX         = 12
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WaveTable.WaveTableTransform
	 * Size -> 0x00A8
	 */
	struct FWaveTableTransform
	{
	public:
		EWaveTableCurve                                            Curve;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A70S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scalar;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRichCurve                                          CurveCustom;                                             // 0x0008(0x0080) NativeAccessSpecifierPublic
		class UCurveFloat*                                         CurveShared;                                             // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              WaveTable;                                               // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      FinalValue;                                              // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IBIT[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WaveTable.WaveTableBankEntry
	 * Size -> 0x00A8
	 */
	struct FWaveTableBankEntry
	{
	public:
		struct FWaveTableTransform                                 Transform;                                               // 0x0000(0x00A8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WaveTable.WaveTableSettings
	 * Size -> 0x0040
	 */
	struct FWaveTableSettings
	{
	public:
		struct FFilePath                                           FilePath;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChannelIndex;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Phase;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tail;                                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeIn;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOut;                                                 // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalize;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveOffset;                                           // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIY2[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              SourcePCMData;                                           // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
