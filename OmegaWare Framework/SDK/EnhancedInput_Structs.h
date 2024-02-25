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
	 * Enum EnhancedInput.EInputActionValueType
	 */
	enum class EInputActionValueType : uint8_t
	{
		Boolean = 0,
		Axis1D  = 1,
		Axis2D  = 2,
		Axis3D  = 3,
		MAX     = 4
	};

	/**
	 * Enum EnhancedInput.EMappingQueryResult
	 */
	enum class EMappingQueryResult : uint8_t
	{
		Error_EnhancedInputNotEnabled         = 0,
		Error_InputContextNotInActiveContexts = 1,
		Error_InvalidAction                   = 2,
		NotMappable                           = 3,
		MappingAvailable                      = 4,
		MAX                                   = 5
	};

	/**
	 * Enum EnhancedInput.EMappingQueryIssue
	 */
	enum class EMappingQueryIssue : uint8_t
	{
		NoIssue                           = 0,
		ReservedByAction                  = 1,
		HidesExistingMapping              = 2,
		HiddenByExistingMapping           = 3,
		CollisionWithMappingInSameContext = 4,
		ForcesTypePromotion               = 5,
		ForcesTypeDemotion                = 6,
		MAX                               = 7
	};

	/**
	 * Enum EnhancedInput.EPlayerMappableKeySettingBehaviors
	 */
	enum class EPlayerMappableKeySettingBehaviors : uint8_t
	{
		InheritSettingsFromAction = 0,
		OverrideSettings          = 1,
		IgnoreSettings            = 2,
		MAX                       = 3
	};

	/**
	 * Enum EnhancedInput.EInputMappingRebuildType
	 */
	enum class EInputMappingRebuildType : uint8_t
	{
		None             = 0,
		Rebuild          = 1,
		RebuildWithFlush = 2,
		MAX              = 3
	};

	/**
	 * Enum EnhancedInput.EDeadZoneType
	 */
	enum class EDeadZoneType : uint8_t
	{
		Axial  = 0,
		Radial = 1,
		MAX    = 2
	};

	/**
	 * Enum EnhancedInput.EFOVScalingType
	 */
	enum class EFOVScalingType : uint8_t
	{
		Standard       = 0,
		UE4_BackCompat = 1,
		MAX            = 2
	};

	/**
	 * Enum EnhancedInput.EInputAxisSwizzle
	 */
	enum class EInputAxisSwizzle : uint8_t
	{
		YXZ = 0,
		ZYX = 1,
		XZY = 2,
		YZX = 3,
		ZXY = 4,
		MAX = 5
	};

	/**
	 * Enum EnhancedInput.ETriggerState
	 */
	enum class ETriggerState : uint8_t
	{
		None      = 0,
		Ongoing   = 1,
		Triggered = 2,
		MAX       = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerEvent
	 */
	enum class ETriggerEvent : uint8_t
	{
		None      = 0,
		Triggered = 1,
		Started   = 2,
		Ongoing   = 3,
		Canceled  = 4,
		Completed = 5,
		MAX       = 6
	};

	/**
	 * Enum EnhancedInput.ETriggerType
	 */
	enum class ETriggerType : uint8_t
	{
		Explicit = 0,
		Implicit = 1,
		Blocker  = 2,
		MAX      = 3
	};

	/**
	 * Enum EnhancedInput.ETriggerEventsSupported
	 */
	enum class ETriggerEventsSupported : uint8_t
	{
		None            = 0,
		Instant         = 1,
		Uninterruptible = 2,
		Ongoing         = 3,
		All             = 4,
		MAX             = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
	 * Size -> 0x0018
	 */
	struct FBlueprintEnhancedInputActionBinding
	{
	public:
		class UInputAction*                                        InputAction;                                             // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETriggerEvent                                              TriggerEvent;                                            // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F16K[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNTG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.DefaultContextSetting
	 * Size -> 0x0038
	 */
	struct FDefaultContextSetting
	{
	public:
		unsigned char                                              InputMappingContext[0x30];                               // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    Priority;                                                // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRTL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.PlayerMappableKeyOptions
	 * Size -> 0x0040
	 */
	struct FPlayerMappableKeyOptions
	{
	public:
		class UObject*                                             MetaData;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                DisplayCategory;                                         // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.EnhancedActionKeyMapping
	 * Size -> 0x0098
	 */
	struct FEnhancedActionKeyMapping
	{
	public:
		struct FPlayerMappableKeyOptions                           PlayerMappableOptions;                                   // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class UInputAction*                                        Action;                                                  // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0068(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldBeIgnored : 1;                                    // 0x0080(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerMappableKeySettingBehaviors                         SettingBehavior;                                         // 0x0081(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0L1K[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerMappableKeySettings*                          PlayerMappableKeySettings;                               // 0x0088(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsPlayerMappable : 1;                                   // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_INNP[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionInstance
	 * Size -> 0x0060
	 */
	struct FInputActionInstance
	{
	public:
		class UInputAction*                                        SourceAction;                                            // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OC0E[0xB];                                   // 0x0008(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETriggerEvent                                              TriggerEvent;                                            // 0x0013(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastTriggeredWorldTime;                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0018(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DVJD[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedProcessedTime;                                    // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTriggeredTime;                                    // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct EnhancedInput.InjectedInputArray
	 * Size -> 0x0010
	 */
	struct FInjectedInputArray
	{
	public:
		unsigned char                                              UnknownData_DLMM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
	 * Size -> 0x0030
	 */
	struct FBlueprintInputDebugKeyDelegateBinding
	{
	public:
		struct FInputChord                                         InputChord;                                              // 0x0000(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputEvent                                                InputKeyEvent;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZPJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FunctionNameToBind;                                      // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExecuteWhenPaused;                                      // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G916[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.InputActionValue
	 * Size -> 0x0020
	 */
	struct FInputActionValue
	{
	public:
		unsigned char                                              UnknownData_9CA4[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.InputComboStepData
	 * Size -> 0x0010
	 */
	struct FInputComboStepData
	{
	public:
		class UInputAction*                                        ComboStepAction;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ComboStepCompletionStates;                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCF4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToPressKey;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.InputCancelAction
	 * Size -> 0x0010
	 */
	struct FInputCancelAction
	{
	public:
		class UInputAction*                                        CancelAction;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CancellationStates;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TU9T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.MappingQueryIssue
	 * Size -> 0x0018
	 */
	struct FMappingQueryIssue
	{
	public:
		EMappingQueryIssue                                         Issue;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DZN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                BlockingContext;                                         // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputAction*                                        BlockingAction;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EnhancedInput.PlayerMappableKeySlot
	 * Size -> 0x0010
	 */
	struct FPlayerMappableKeySlot
	{
	public:
		unsigned char                                              UnknownData_JB49[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotNumber;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_648X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EnhancedInput.ModifyContextOptions
	 * Size -> 0x0001
	 */
	struct FModifyContextOptions
	{
	public:
		bool                                                       bIgnoreAllPressedKeysUntilRelease : 1;                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceImmediately : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
