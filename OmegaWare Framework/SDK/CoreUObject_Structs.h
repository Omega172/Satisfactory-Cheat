﻿#pragma once

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
	 * Enum CoreUObject.EAutomationEventType
	 */
	enum class EAutomationEventType : uint8_t
	{
		Info    = 0,
		Warning = 1,
		Error   = 2,
		MAX     = 3
	};

	/**
	 * Enum CoreUObject.ERangeBoundTypes
	 */
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open      = 2,
		MAX       = 3
	};

	/**
	 * Enum CoreUObject.EInterpCurveMode
	 */
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear           = 0,
		CIM_CurveAuto        = 1,
		CIM_Constant         = 2,
		CIM_CurveUser        = 3,
		CIM_CurveBreak       = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX              = 6
	};

	/**
	 * Enum CoreUObject.EInputDeviceConnectionState
	 */
	enum class EInputDeviceConnectionState : uint8_t
	{
		Invalid      = 0,
		Unknown      = 1,
		Disconnected = 2,
		Connected    = 3,
		MAX          = 4
	};

	/**
	 * Enum CoreUObject.ELocalizedTextSourceCategory
	 */
	enum class ELocalizedTextSourceCategory : uint8_t
	{
		Game   = 0,
		Engine = 1,
		Editor = 2,
		MAX    = 3
	};

	/**
	 * Enum CoreUObject.ELifetimeCondition
	 */
	enum class ELifetimeCondition : uint8_t
	{
		COND_None                       = 0,
		COND_InitialOnly                = 1,
		COND_OwnerOnly                  = 2,
		COND_SkipOwner                  = 3,
		COND_SimulatedOnly              = 4,
		COND_AutonomousOnly             = 5,
		COND_SimulatedOrPhysics         = 6,
		COND_InitialOrOwner             = 7,
		COND_Custom                     = 8,
		COND_ReplayOrOwner              = 9,
		COND_ReplayOnly                 = 10,
		COND_SimulatedOnlyNoReplay      = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay                 = 13,
		COND_Never                      = 14,
		COND_NetGroup                   = 15,
		COND_Max                        = 16
	};

	/**
	 * Enum CoreUObject.ESearchCase
	 */
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase    = 1,
		MAX           = 2
	};

	/**
	 * Enum CoreUObject.ESearchDir
	 */
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd   = 1,
		MAX       = 2
	};

	/**
	 * Enum CoreUObject.ELogTimes
	 */
	enum class ELogTimes : uint8_t
	{
		None            = 0,
		UTC             = 1,
		SinceGStartTime = 2,
		Local           = 3,
		MAX             = 4
	};

	/**
	 * Enum CoreUObject.EAxis
	 */
	enum class EAxis : uint8_t
	{
		None = 0,
		X    = 1,
		Y    = 2,
		Z    = 3,
		MAX  = 4
	};

	/**
	 * Enum CoreUObject.EAxisList
	 */
	enum class EAxisList : uint8_t
	{
		None      = 0,
		X         = 1,
		Y         = 2,
		Z         = 3,
		Screen    = 4,
		XY        = 5,
		XZ        = 6,
		YZ        = 7,
		XYZ       = 8,
		All       = 9,
		ZRotation = 10,
		Rotate2D  = 11,
		MAX       = 12
	};

	/**
	 * Enum CoreUObject.EPixelFormat
	 */
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown            = 0,
		PF_A32B32G32R32F      = 1,
		PF_B8G8R8A8           = 2,
		PF_G8                 = 3,
		PF_G16                = 4,
		PF_DXT1               = 5,
		PF_DXT3               = 6,
		PF_DXT5               = 7,
		PF_UYVY               = 8,
		PF_FloatRGB           = 9,
		PF_FloatRGBA          = 10,
		PF_DepthStencil       = 11,
		PF_ShadowDepth        = 12,
		PF_R32_FLOAT          = 13,
		PF_G16R16             = 14,
		PF_G16R16F            = 15,
		PF_G16R16F_FILTER     = 16,
		PF_G32R32F            = 17,
		PF_A2B10G10R10        = 18,
		PF_A16B16G16R16       = 19,
		PF_D24                = 20,
		PF_R16F               = 21,
		PF_R16F_FILTER        = 22,
		PF_BC5                = 23,
		PF_V8U8               = 24,
		PF_A1                 = 25,
		PF_FloatR11G11B10     = 26,
		PF_A8                 = 27,
		PF_R32_UINT           = 28,
		PF_R32_SINT           = 29,
		PF_PVRTC2             = 30,
		PF_PVRTC4             = 31,
		PF_R16_UINT           = 32,
		PF_R16_SINT           = 33,
		PF_R16G16B16A16_UINT  = 34,
		PF_R16G16B16A16_SINT  = 35,
		PF_R5G6B5_UNORM       = 36,
		PF_R8G8B8A8           = 37,
		PF_A8R8G8B8           = 38,
		PF_BC4                = 39,
		PF_R8G8               = 40,
		PF_ATC_RGB            = 41,
		PF_ATC_RGBA_E         = 42,
		PF_ATC_RGBA_I         = 43,
		PF_X24_G8             = 44,
		PF_ETC1               = 45,
		PF_ETC2_RGB           = 46,
		PF_ETC2_RGBA          = 47,
		PF_R32G32B32A32_UINT  = 48,
		PF_R16G16_UINT        = 49,
		PF_ASTC_4x4           = 50,
		PF_ASTC_6x6           = 51,
		PF_ASTC_8x8           = 52,
		PF_ASTC_10x10         = 53,
		PF_ASTC_12x12         = 54,
		PF_BC6H               = 55,
		PF_BC7                = 56,
		PF_R8_UINT            = 57,
		PF_L8                 = 58,
		PF_XGXR8              = 59,
		PF_R8G8B8A8_UINT      = 60,
		PF_R8G8B8A8_SNORM     = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		PF_PLATFORM_HDR       = 64,
		PF_PLATFORM_HDR01     = 65,
		PF_PLATFORM_HDR02     = 66,
		PF_NV12               = 67,
		PF_R32G32_UINT        = 68,
		PF_ETC2_R11_EAC       = 69,
		PF_ETC2_RG11_EAC      = 70,
		PF_R8                 = 71,
		PF_B5G5R5A1_UNORM     = 72,
		PF_ASTC_4x4_HDR       = 73,
		PF_ASTC_6x6_HDR       = 74,
		PF_ASTC_8x8_HDR       = 75,
		PF_ASTC_10x10_HDR     = 76,
		PF_ASTC_12x12_HDR     = 77,
		PF_G16R16_SNORM       = 78,
		PF_R8G8_UINT          = 79,
		PF_R32G32B32_UINT     = 80,
		PF_R32G32B32_SINT     = 81,
		PF_R32G32B32F         = 82,
		PF_R8_SINT            = 83,
		PF_R64_UINT           = 84,
		PF_R9G9B9EXP5         = 85,
		PF_P010               = 86,
		_PF_MAX_              = 87
	};

	/**
	 * Enum CoreUObject.EMouseCursor
	 */
	enum class EMouseCursor : uint8_t
	{
		None            = 0,
		Default         = 1,
		TextEditBeam    = 2,
		ResizeLeftRight = 3,
		ResizeUpDown    = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross   = 7,
		Crosshairs      = 8,
		Hand            = 9,
		GrabHand        = 10,
		GrabHandClosed  = 11,
		SlashedCircle   = 12,
		EyeDropper      = 13,
		MAX             = 14
	};

	/**
	 * Enum CoreUObject.EUnit
	 */
	enum class EUnit : uint8_t
	{
		Micrometers          = 0,
		Millimeters          = 1,
		Centimeters          = 2,
		Meters               = 3,
		Kilometers           = 4,
		Inches               = 5,
		Feet                 = 6,
		Yards                = 7,
		Miles                = 8,
		Lightyears           = 9,
		Degrees              = 10,
		Radians              = 11,
		CentimetersPerSecond = 12,
		MetersPerSecond      = 13,
		KilometersPerHour    = 14,
		MilesPerHour         = 15,
		Celsius              = 16,
		Farenheit            = 17,
		Kelvin               = 18,
		Micrograms           = 19,
		Milligrams           = 20,
		Grams                = 21,
		Kilograms            = 22,
		MetricTons           = 23,
		Ounces               = 24,
		Pounds               = 25,
		Stones               = 26,
		Newtons              = 27,
		PoundsForce          = 28,
		KilogramsForce       = 29,
		Hertz                = 30,
		Kilohertz            = 31,
		Megahertz            = 32,
		Gigahertz            = 33,
		RevolutionsPerMinute = 34,
		Bytes                = 35,
		Kilobytes            = 36,
		Megabytes            = 37,
		Gigabytes            = 38,
		Terabytes            = 39,
		Lumens               = 40,
		Milliseconds         = 41,
		Seconds              = 42,
		Minutes              = 43,
		Hours                = 44,
		Days                 = 45,
		Months               = 46,
		Years                = 47,
		Multiplier           = 48,
		Percentage           = 49,
		Unspecified          = 50,
		MAX                  = 51
	};

	/**
	 * Enum CoreUObject.EPropertyAccessChangeNotifyMode
	 */
	enum class EPropertyAccessChangeNotifyMode : uint8_t
	{
		Default = 0,
		Never   = 1,
		Always  = 2,
		MAX     = 3
	};

	/**
	 * Enum CoreUObject.EAppReturnType
	 */
	enum class EAppReturnType : uint8_t
	{
		No       = 0,
		Yes      = 1,
		YesAll   = 2,
		NoAll    = 3,
		Cancel   = 4,
		Ok       = 5,
		Retry    = 6,
		Continue = 7,
		MAX      = 8
	};

	/**
	 * Enum CoreUObject.EAppMsgType
	 */
	enum class EAppMsgType : uint8_t
	{
		Ok                     = 0,
		YesNo                  = 1,
		OkCancel               = 2,
		YesNoCancel            = 3,
		CancelRetryContinue    = 4,
		YesNoYesAllNoAll       = 5,
		YesNoYesAllNoAllCancel = 6,
		YesNoYesAll            = 7,
		MAX                    = 8
	};

	/**
	 * Enum CoreUObject.EInputDeviceTriggerMask
	 */
	enum class EInputDeviceTriggerMask : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		All   = 3,
		MAX   = 4
	};

	/**
	 * Enum CoreUObject.EDataValidationResult
	 */
	enum class EDataValidationResult : uint8_t
	{
		Invalid      = 0,
		Valid        = 1,
		NotValidated = 2,
		MAX          = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUObject.TopLevelAssetPath
	 * Size -> 0x0010
	 */
	struct FTopLevelAssetPath
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                AssetName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.SoftObjectPath
	 * Size -> 0x0020
	 */
	struct FSoftObjectPath
	{
	public:
		struct FTopLevelAssetPath                                  AssetPath;                                               // 0x0000(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SubPathString;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.ARFilter
	 * Size -> 0x0150
	 */
	struct FARFilter
	{
	public:
		TArray<class FName>                                        PackageNames;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        PackagePaths;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             SoftObjectPaths;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        ClassNames;                                              // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTopLevelAssetPath>                          ClassPaths;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOU2[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RecursiveClassesExclusionSet[0x50];                      // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              RecursiveClassPathsExclusionSet[0x50];                   // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bRecursivePaths;                                         // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursiveClasses;                                       // 0x0141(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0142(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1N1[0xD];                                   // 0x0143(0x000D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.AssetBundleEntry
	 * Size -> 0x0018
	 */
	struct FAssetBundleEntry
	{
	public:
		class FName                                                BundleName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTopLevelAssetPath>                          AssetPaths;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AssetBundleData
	 * Size -> 0x0010
	 */
	struct FAssetBundleData
	{
	public:
		TArray<struct FAssetBundleEntry>                           Bundles;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AssetData
	 * Size -> 0x0068
	 */
	struct FAssetData
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackagePath;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetName;                                               // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetClass;                                              // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTopLevelAssetPath                                  AssetClassPath;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HN0[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Guid
	 * Size -> 0x0010
	 */
	struct FGuid
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    C;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    D;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.AutomationEvent
	 * Size -> 0x0038
	 */
	struct FAutomationEvent
	{
	public:
		EAutomationEventType                                       Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GO5G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Context;                                                 // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Artifact;                                                // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.DateTime
	 * Size -> 0x0008
	 */
	struct FDateTime
	{
	public:
		unsigned char                                              UnknownData_589E[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.AutomationExecutionEntry
	 * Size -> 0x0058
	 */
	struct FAutomationExecutionEntry
	{
	public:
		struct FAutomationEvent                                    Event;                                                   // 0x0000(0x0038) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LineNumber;                                              // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZOL[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Timestamp;                                               // 0x0050(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Rotator
	 * Size -> 0x0018
	 */
	struct FRotator
	{
	public:
		double                                                     Pitch;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Yaw;                                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Roll;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FRotator();
		FRotator(double pitch, double yaw, double roll);
		FRotator operator +(double scalar) const;
		FRotator operator +(const FRotator& other) const;
		FRotator operator -(double scalar) const;
		FRotator operator -(const FRotator& other) const;
		FRotator operator *(double scalar) const;
		FRotator operator *(const FRotator& other) const;
		FRotator operator /(double scalar) const;
		FRotator operator /(const FRotator& other) const;
		FRotator& operator =(const FRotator& other);
		FRotator& operator +=(double scalar);
		FRotator& operator +=(const FRotator& other);
		FRotator& operator -=(double scalar);
		FRotator& operator -=(const FRotator& other);
		FRotator& operator *=(const FRotator& other);
		FRotator& operator *=(const double other);
		FRotator& operator /=(const FRotator& other);
		FRotator& operator /=(const double other);
		double Size() const;
		FRotator Clamp() const;
	};

	/**
	 * ScriptStruct CoreUObject.Vector
	 * Size -> 0x0018
	 */
	struct FVector
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FVector();
		FVector(double x, double y, double z);
		FVector operator +(double scalar) const;
		FVector operator +(const FVector& other) const;
		FVector operator -(double scalar) const;
		FVector operator -(const FVector& other) const;
		FVector operator *(double scalar) const;
		FVector operator *(const FVector& other) const;
		FVector operator /(double scalar) const;
		FVector operator /(const FVector& other) const;
		FVector& operator =(const FVector& other);
		FVector& operator +=(double scalar);
		FVector& operator +=(const FVector& other);
		FVector& operator -=(double scalar);
		FVector& operator -=(const FVector& other);
		FVector& operator *=(const FVector& other);
		FVector& operator *=(double scalar);
		bool IsValid();
		void Normalize360(FVector& angle);
		double Dot(const FVector& b) const;
		double MagnitudeSqr() const;
		double Magnitude() const;
		FVector Unit() const;
		FRotator ToRotator() const;
		double Distance(const FVector& v) const;
		double DistanceMeter(FVector& v) const;
		friend bool operator ==(const FVector& first, const FVector& second)
		{
			return first.X == second.X && first.Y == second.Y && first.Z == second.Z;
		}

		friend bool operator !=(const FVector& first, const FVector& second)
		{
			return !(first == second);
		}

	};

	/**
	 * ScriptStruct CoreUObject.Box
	 * Size -> 0x0038
	 */
	struct FBox
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LL6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Vector2D
	 * Size -> 0x0010
	 */
	struct FVector2D
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FVector2D();
		FVector2D(double x, double y);
		bool IsValid();
		double Distance(FVector2D& v) const;
		FVector2D operator +(const FVector2D& other) const;
		FVector2D operator +(double scalar) const;
		FVector2D operator -(double scalar) const;
		FVector2D operator -(const FVector2D& other) const;
		FVector2D operator *(double scalar) const;
		FVector2D operator *(const FVector2D& other) const;
		FVector2D operator /(double scalar) const;
		FVector2D operator /(const FVector2D& other) const;
		FVector2D& operator =(const FVector2D& other);
		FVector2D& operator +=(double scalar);
		FVector2D& operator +=(const FVector2D& other);
		FVector2D& operator -=(double scalar);
		FVector2D& operator -=(const FVector2D& other);
		FVector2D& operator *=(const FVector2D& other);
		FVector2D& operator *=(double scalar);
	};

	/**
	 * ScriptStruct CoreUObject.Box2D
	 * Size -> 0x0028
	 */
	struct FBox2D
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Max;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N4E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Vector2f
	 * Size -> 0x0008
	 */
	struct FVector2f
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Box2f
	 * Size -> 0x0014
	 */
	struct FBox2f
	{
	public:
		struct FVector2f                                           Min;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2f                                           Max;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x0010(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV9K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Vector3d
	 * Size -> 0x0018
	 */
	struct FVector3d
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Box3d
	 * Size -> 0x0038
	 */
	struct FBox3d
	{
	public:
		struct FVector3d                                           Min;                                                     // 0x0000(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3d                                           Max;                                                     // 0x0018(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0030(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERCC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Vector3f
	 * Size -> 0x000C
	 */
	struct FVector3f
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Box3f
	 * Size -> 0x001C
	 */
	struct FBox3f
	{
	public:
		struct FVector3f                                           Min;                                                     // 0x0000(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           Max;                                                     // 0x000C(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValid;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Z2E[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.BoxSphereBounds
	 * Size -> 0x0038
	 */
	struct FBoxSphereBounds
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtent;                                               // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     SphereRadius;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.BoxSphereBounds3d
	 * Size -> 0x0038
	 */
	struct FBoxSphereBounds3d
	{
	public:
		struct FVector3d                                           Origin;                                                  // 0x0000(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3d                                           BoxExtent;                                               // 0x0018(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     SphereRadius;                                            // 0x0030(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.BoxSphereBounds3f
	 * Size -> 0x001C
	 */
	struct FBoxSphereBounds3f
	{
	public:
		struct FVector3f                                           Origin;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           BoxExtent;                                               // 0x000C(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x0018(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Color
	 * Size -> 0x0004
	 */
	struct FColor
	{
	public:
		unsigned char                                              B;                                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              G;                                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              R;                                                       // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              A;                                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.DirectoryPath
	 * Size -> 0x0010
	 */
	struct FDirectoryPath
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.DoubleRangeBound
	 * Size -> 0x0010
	 */
	struct FDoubleRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_42PE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Value;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.DoubleRange
	 * Size -> 0x0020
	 */
	struct FDoubleRange
	{
	public:
		struct FDoubleRangeBound                                   LowerBound;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDoubleRangeBound                                   UpperBound;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.FallbackStruct
	 * Size -> 0x0001
	 */
	struct FFallbackStruct
	{
	public:
		unsigned char                                              UnknownData_HQFH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.FilePath
	 * Size -> 0x0010
	 */
	struct FFilePath
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FloatInterval
	 * Size -> 0x0008
	 */
	struct FFloatInterval
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FloatRangeBound
	 * Size -> 0x0008
	 */
	struct FFloatRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7CSH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.FloatRange
	 * Size -> 0x0010
	 */
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFloatRangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumber
	 * Size -> 0x0004
	 */
	struct FFrameNumber
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumberRangeBound
	 * Size -> 0x0008
	 */
	struct FFrameNumberRangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OHYE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameNumber                                        Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.FrameNumberRange
	 * Size -> 0x0010
	 */
	struct FFrameNumberRange
	{
	public:
		struct FFrameNumberRangeBound                              LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FFrameNumberRangeBound                              UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.FrameRate
	 * Size -> 0x0008
	 */
	struct FFrameRate
	{
	public:
		int32_t                                                    Numerator;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Denominator;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.FrameTime
	 * Size -> 0x0008
	 */
	struct FFrameTime
	{
	public:
		struct FFrameNumber                                        FrameNumber;                                             // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SubFrame;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.InputDeviceId
	 * Size -> 0x0004
	 */
	struct FInputDeviceId
	{
	public:
		int32_t                                                    InternalId;                                              // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.Int32Interval
	 * Size -> 0x0008
	 */
	struct FInt32Interval
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32Point
	 * Size -> 0x0008
	 */
	struct FInt32Point
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32RangeBound
	 * Size -> 0x0008
	 */
	struct FInt32RangeBound
	{
	public:
		ERangeBoundTypes                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_26HV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.Int32Range
	 * Size -> 0x0010
	 */
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                                    LowerBound;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInt32RangeBound                                    UpperBound;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.Int32Vector
	 * Size -> 0x000C
	 */
	struct FInt32Vector
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32Vector2
	 * Size -> 0x0008
	 */
	struct FInt32Vector2
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int32Vector4
	 * Size -> 0x0010
	 */
	struct FInt32Vector4
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int64Point
	 * Size -> 0x0010
	 */
	struct FInt64Point
	{
	public:
		int64_t                                                    X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int64Vector
	 * Size -> 0x0018
	 */
	struct FInt64Vector
	{
	public:
		int64_t                                                    X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int64Vector2
	 * Size -> 0x0010
	 */
	struct FInt64Vector2
	{
	public:
		int64_t                                                    X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Int64Vector4
	 * Size -> 0x0020
	 */
	struct FInt64Vector4
	{
	public:
		int64_t                                                    X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointFloat
	 * Size -> 0x0014
	 */
	struct FInterpCurvePointFloat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutVal;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArriveTangent;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69X2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveFloat
	 * Size -> 0x0018
	 */
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>                      Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BQ8R[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.LinearColor
	 * Size -> 0x0010
	 */
	struct FLinearColor
	{
	public:
		float                                                      R;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      G;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      A;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FLinearColor();
		FLinearColor(float r, float g, float b, float a);
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointLinearColor
	 * Size -> 0x0038
	 */
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutVal;                                                  // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ArriveTangent;                                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LeaveTangent;                                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOS5[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveLinearColor
	 * Size -> 0x0018
	 */
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>                Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S74V[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Quat
	 * Size -> 0x0020
	 */
	struct FQuat
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointQuat
	 * Size -> 0x0080
	 */
	struct FInterpCurvePointQuat
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O953[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               OutVal;                                                  // 0x0010(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               ArriveTangent;                                           // 0x0030(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               LeaveTangent;                                            // 0x0050(0x0020) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWQU[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.TwoVectors
	 * Size -> 0x0030
	 */
	struct FTwoVectors
	{
	public:
		struct FVector                                             v1;                                                      // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             v2;                                                      // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	 * Size -> 0x00A0
	 */
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DI01[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTwoVectors                                         OutVal;                                                  // 0x0008(0x0030) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors                                         ArriveTangent;                                           // 0x0038(0x0030) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoVectors                                         LeaveTangent;                                            // 0x0068(0x0030) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXE5[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector
	 * Size -> 0x0058
	 */
	struct FInterpCurvePointVector
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT36[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OutVal;                                                  // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ArriveTangent;                                           // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeaveTangent;                                            // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLZF[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurvePointVector2D
	 * Size -> 0x0040
	 */
	struct FInterpCurvePointVector2D
	{
	public:
		float                                                      InVal;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKFK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           OutVal;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ArriveTangent;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LeaveTangent;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpCurveMode                                           InterpMode;                                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8H9T[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveQuat
	 * Size -> 0x0018
	 */
	struct FInterpCurveQuat
	{
	public:
		TArray<struct FInterpCurvePointQuat>                       Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8U6P[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveTwoVectors
	 * Size -> 0x0018
	 */
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>                 Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JPNF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>                     Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWIJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.InterpCurveVector2D
	 * Size -> 0x0018
	 */
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>                   Points;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLooped;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJDQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LoopKeyOffset;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntPoint
	 * Size -> 0x0008
	 */
	struct FIntPoint
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntVector
	 * Size -> 0x000C
	 */
	struct FIntVector
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntVector2
	 * Size -> 0x0008
	 */
	struct FIntVector2
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.IntVector4
	 * Size -> 0x0010
	 */
	struct FIntVector4
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    W;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Plane
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FPlane : public FVector
	{
	public:
		double                                                     W;                                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Matrix
	 * Size -> 0x0080
	 */
	struct FMatrix
	{
	public:
		struct FPlane                                              XPlane;                                                  // 0x0000(0x0020) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              YPlane;                                                  // 0x0020(0x0020) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              ZPlane;                                                  // 0x0040(0x0020) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane                                              WPlane;                                                  // 0x0060(0x0020) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		FMatrix operator *(const FMatrix& other) const;
	};

	/**
	 * ScriptStruct CoreUObject.Plane4d
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FPlane4d : public FVector3d
	{
	public:
		double                                                     W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Matrix44d
	 * Size -> 0x0080
	 */
	struct FMatrix44d
	{
	public:
		struct FPlane4d                                            XPlane;                                                  // 0x0000(0x0020) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4d                                            YPlane;                                                  // 0x0020(0x0020) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4d                                            ZPlane;                                                  // 0x0040(0x0020) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4d                                            WPlane;                                                  // 0x0060(0x0020) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Plane4f
	 * Size -> 0x0004 (FullSize[0x0010] - InheritedSize[0x000C])
	 */
	struct FPlane4f : public FVector3f
	{
	public:
		float                                                      W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Matrix44f
	 * Size -> 0x0040
	 */
	struct FMatrix44f
	{
	public:
		struct FPlane4f                                            XPlane;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4f                                            YPlane;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4f                                            ZPlane;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlane4f                                            WPlane;                                                  // 0x0030(0x0010) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.OrientedBox
	 * Size -> 0x0078
	 */
	struct FOrientedBox
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisX;                                                   // 0x0018(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisY;                                                   // 0x0030(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AxisZ;                                                   // 0x0048(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtentX;                                                 // 0x0060(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtentY;                                                 // 0x0068(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtentZ;                                                 // 0x0070(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedNormal
	 * Size -> 0x0004
	 */
	struct FPackedNormal
	{
	public:
		unsigned char                                              X;                                                       // 0x0000(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Y;                                                       // 0x0001(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Z;                                                       // 0x0002(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              W;                                                       // 0x0003(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedRGB10A2N
	 * Size -> 0x0004
	 */
	struct FPackedRGB10A2N
	{
	public:
		int32_t                                                    Packed;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PackedRGBA16N
	 * Size -> 0x0008
	 */
	struct FPackedRGBA16N
	{
	public:
		int32_t                                                    XY;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZW;                                                      // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PlatformUserId
	 * Size -> 0x0004
	 */
	struct FPlatformUserId
	{
	public:
		int32_t                                                    InternalId;                                              // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CoreUObject.PlatformInputDeviceState
	 * Size -> 0x0008
	 */
	struct FPlatformInputDeviceState
	{
	public:
		struct FPlatformUserId                                     OwningPlatformUser;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputDeviceConnectionState                                ConnectionState;                                         // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKZS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.PolyglotTextData
	 * Size -> 0x00B8
	 */
	struct FPolyglotTextData
	{
	public:
		ELocalizedTextSourceCategory                               Category;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NativeCulture;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NativeString;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         LocalizedStrings;                                        // 0x0048(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsMinimalPatch;                                         // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWB0[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CachedText;                                              // 0x00A0(0x0018) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PrimaryAssetType
	 * Size -> 0x0008
	 */
	struct FPrimaryAssetType
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.PrimaryAssetId
	 * Size -> 0x0010
	 */
	struct FPrimaryAssetId
	{
	public:
		struct FPrimaryAssetType                                   PrimaryAssetType;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrimaryAssetName;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.QualifiedFrameTime
	 * Size -> 0x0010
	 */
	struct FQualifiedFrameTime
	{
	public:
		struct FFrameTime                                          Time;                                                    // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          Rate;                                                    // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Quat4d
	 * Size -> 0x0020
	 */
	struct FQuat4d
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Quat4f
	 * Size -> 0x0010
	 */
	struct FQuat4f
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.RandomStream
	 * Size -> 0x0008
	 */
	struct FRandomStream
	{
	public:
		int32_t                                                    InitialSeed;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Ray
	 * Size -> 0x0030
	 */
	struct FRay
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Ray3d
	 * Size -> 0x0030
	 */
	struct FRay3d
	{
	public:
		struct FVector3d                                           Origin;                                                  // 0x0000(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3d                                           Direction;                                               // 0x0018(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Ray3f
	 * Size -> 0x0018
	 */
	struct FRay3f
	{
	public:
		struct FVector3f                                           Origin;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           Direction;                                               // 0x000C(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Rotator3d
	 * Size -> 0x0018
	 */
	struct FRotator3d
	{
	public:
		double                                                     Pitch;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Yaw;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Roll;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Rotator3f
	 * Size -> 0x000C
	 */
	struct FRotator3f
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.SoftClassPath
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FSoftClassPath : public FSoftObjectPath
	{	};

	/**
	 * ScriptStruct CoreUObject.Sphere
	 * Size -> 0x0020
	 */
	struct FSphere
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Sphere3d
	 * Size -> 0x0020
	 */
	struct FSphere3d
	{
	public:
		struct FVector3d                                           Center;                                                  // 0x0000(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Sphere3f
	 * Size -> 0x0010
	 */
	struct FSphere3f
	{
	public:
		struct FVector3f                                           Center;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.TemplateString
	 * Size -> 0x0010
	 */
	struct FTemplateString
	{
	public:
		class FString                                              Template;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
	 * Size -> 0x0018
	 */
	struct FTestUninitializedScriptStructMembersTest
	{
	public:
		class UObject*                                             UninitializedObjectReference;                            // 0x0000(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             InitializedObjectReference;                              // 0x0008(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnusedValue;                                             // 0x0010(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QTUY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Timecode
	 * Size -> 0x0014
	 */
	struct FTimecode
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seconds;                                                 // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Frames;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropFrameFormat;                                        // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQJF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Timespan
	 * Size -> 0x0008
	 */
	struct FTimespan
	{
	public:
		unsigned char                                              UnknownData_KAVC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Transform
	 * Size -> 0x0060
	 */
	struct FTransform
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0020) Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N22W[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale3D;                                                 // 0x0040(0x0018) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRO8[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		FMatrix ToMatrixWithScale() const;
	};

	/**
	 * ScriptStruct CoreUObject.Transform3d
	 * Size -> 0x0060
	 */
	struct FTransform3d
	{
	public:
		struct FQuat4d                                             Rotation;                                                // 0x0000(0x0020) Edit, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3d                                           Translation;                                             // 0x0020(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBCI[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector3d                                           Scale3D;                                                 // 0x0040(0x0018) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V798[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Transform3f
	 * Size -> 0x0030
	 */
	struct FTransform3f
	{
	public:
		struct FQuat4f                                             Rotation;                                                // 0x0000(0x0010) Edit, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector3f                                           Translation;                                             // 0x0010(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJIU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector3f                                           Scale3D;                                                 // 0x0020(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOF0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CoreUObject.Uint32Point
	 * Size -> 0x0008
	 */
	struct FUint32Point
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint32Vector
	 * Size -> 0x000C
	 */
	struct FUint32Vector
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint32Vector2
	 * Size -> 0x0008
	 */
	struct FUint32Vector2
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint32Vector4
	 * Size -> 0x0010
	 */
	struct FUint32Vector4
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint64Point
	 * Size -> 0x0010
	 */
	struct FUint64Point
	{
	public:
		int64_t                                                    X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint64Vector
	 * Size -> 0x0018
	 */
	struct FUint64Vector
	{
	public:
		uint64_t                                                   X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint64Vector2
	 * Size -> 0x0010
	 */
	struct FUint64Vector2
	{
	public:
		uint64_t                                                   X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Uint64Vector4
	 * Size -> 0x0020
	 */
	struct FUint64Vector4
	{
	public:
		uint64_t                                                   X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.UintPoint
	 * Size -> 0x0008
	 */
	struct FUintPoint
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.UintVector
	 * Size -> 0x000C
	 */
	struct FUintVector
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.UintVector2
	 * Size -> 0x0008
	 */
	struct FUintVector2
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.UintVector4
	 * Size -> 0x0010
	 */
	struct FUintVector4
	{
	public:
		uint32_t                                                   X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Vector4
	 * Size -> 0x0020
	 */
	struct FVector4
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Vector4d
	 * Size -> 0x0020
	 */
	struct FVector4d
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Y;                                                       // 0x0008(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Z;                                                       // 0x0010(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     W;                                                       // 0x0018(0x0008) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CoreUObject.Vector4f
	 * Size -> 0x0010
	 */
	struct FVector4f
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      W;                                                       // 0x000C(0x0004) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
