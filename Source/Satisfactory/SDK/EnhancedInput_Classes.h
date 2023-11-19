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
	 * Class EnhancedInput.EnhancedInputActionDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionDelegateBindings;                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputActionValueBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEnhancedInputActionValueBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintEnhancedInputActionBinding>        InputActionValueBindings;                                // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputComponent
	 * Size -> 0x0038 (FullSize[0x0160] - InheritedSize[0x0128])
	 */
	class UEnhancedInputComponent : public UInputComponent
	{
	public:
		unsigned char                                              UnknownData_5SAX[0x38];                                  // 0x0128(0x0038) MISSED OFFSET (PADDING)

	public:
		struct FInputActionValue GetBoundActionValue(class UInputAction* Action);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputDeveloperSettings
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
	{
	public:
		TArray<struct FDefaultContextSetting>                      DefaultMappingContexts;                                  // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FDefaultContextSetting>                      DefaultWorldSubsystemMappingContexts;                    // 0x0048(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              DefaultWorldInputClass[0x30];                            // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FPerPlatformSettings                                PlatformSettings;                                        // 0x0088(0x0010) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bEnableDefaultMappingContexts : 1;                       // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldOnlyTriggerLastActionInChord : 1;                 // 0x0098(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWorldSubsystem : 1;                               // 0x0098(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLogAllWorldSubsystemInputs : 1;                   // 0x0098(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUVC[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
		struct FInputActionValue STATIC_MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType);
		struct FInputActionValue STATIC_MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType);
		bool STATIC_IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
		struct FPlayerMappableKeySlot STATIC_GetThirdPlayerMappableKeySlot();
		struct FPlayerMappableKeySlot STATIC_GetSecondPlayerMappableKeySlot();
		class UPlayerMappableKeySettings* STATIC_GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
		class FName STATIC_GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping);
		struct FPlayerMappableKeySlot STATIC_GetFourthPlayerMappableKeySlot();
		struct FPlayerMappableKeySlot STATIC_GetFirstPlayerMappableKeySlot();
		struct FInputActionValue STATIC_GetBoundActionValue(class AActor* Actor, class UInputAction* Action);
		class FString STATIC_Conv_InputActionValueToString(const struct FInputActionValue& ActionValue);
		bool STATIC_Conv_InputActionValueToBool(const struct FInputActionValue& InValue);
		struct FVector STATIC_Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue);
		struct FVector2D STATIC_Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue);
		double STATIC_Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue);
		void STATIC_BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, EInputActionValueType* Type);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputPlatformData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UEnhancedInputPlatformData : public UObject
	{
	public:
		TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                                 // 0x0028(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputPlatformSettings
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UEnhancedInputPlatformSettings : public UPlatformSettings
	{
	public:
		unsigned char                                              InputData[0x10];                                         // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UClass*>                                      InputDataClasses;                                        // 0x0050(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       bShouldLogMappingContextRedirects;                       // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SE48[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputSubsystemInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnhancedInputSubsystemInterface : public UInterface
	{
	public:
		void RequestRebuildControlMappings(const struct FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);
		void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
		void RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options);
		int32_t RemoveAllPlayerMappedKeysForMapping(const class FName& MappingName, const struct FModifyContextOptions& Options);
		void RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options);
		EMappingQueryResult QueryMapKeyInContextSet(TArray<class UInputMappingContext*> PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues);
		TArray<struct FKey> QueryKeysMappedToAction(class UInputAction* Action);
		int32_t K2_RemovePlayerMappedKeyInSlot(const class FName& MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
		struct FKey K2_GetPlayerMappedKeyInSlot(const class FName& MappingName, const struct FPlayerMappableKeySlot& KeySlot);
		int32_t K2_AddPlayerMappedKeyInSlot(const class FName& MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options);
		void InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		void InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*> Modifiers, TArray<class UInputTrigger*> Triggers);
		bool HasMappingContext(class UInputMappingContext* MappingContext, int32_t* OutFoundPriority);
		TArray<struct FKey> GetAllPlayerMappedKeys(const class FName& MappingName);
		TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();
		void ClearAllMappings();
		void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
		void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, const struct FModifyContextOptions& Options);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
	 * Size -> 0x0210 (FullSize[0x0240] - InheritedSize[0x0030])
	 */
	class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
	{
	public:
		unsigned char                                              UnknownData_YAKN[0x200];                                 // 0x0030(0x0200) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ControlMappingsRebuiltDelegate;                          // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedInputWorldSubsystem
	 * Size -> 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
	 */
	class UEnhancedInputWorldSubsystem : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_8RUL[0x200];                                 // 0x0030(0x0200) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0230(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6M13[0x10];                                  // 0x0238(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class UInputComponent>>              CurrentInputStack;                                       // 0x0248(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		bool RemoveActorInputComponent(class AActor* Actor);
		void AddActorInputComponent(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.EnhancedPlayerInput
	 * Size -> 0x02B8 (FullSize[0x0750] - InheritedSize[0x0498])
	 */
	class UEnhancedPlayerInput : public UPlayerInput
	{
	public:
		TMap<class UInputMappingContext*, int32_t>                 AppliedInputContexts;                                    // 0x0498(0x0050) Transient, NativeAccessSpecifierPrivate
		TArray<struct FEnhancedActionKeyMapping>                   EnhancedActionMappings;                                  // 0x04E8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T5T6[0x50];                                  // 0x04F8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInputAction*, struct FInputActionInstance>     ActionInstanceData;                                      // 0x0548(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q0V4[0xB0];                                  // 0x0598(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FKey, struct FVector>                          KeysPressedThisTick;                                     // 0x0648(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class UInputAction*, struct FInjectedInputArray>      InputsInjectedThisTick;                                  // 0x0698(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              LastInjectedActions[0x50];                               // 0x06E8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_OCAI[0x18];                                  // 0x0738(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputAction
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UInputAction : public UDataAsset
	{
	public:
		class FText                                                ActionDescription;                                       // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bConsumeInput;                                           // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerWhenPaused;                                      // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReserveAllMappings;                                     // 0x004A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInputActionValueType                                      ValueType;                                               // 0x004B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSQM[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		class UPlayerMappableKeySettings*                          PlayerMappableKeySettings;                               // 0x0070(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputDebugKeyDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
	{
	public:
		TArray<struct FBlueprintInputDebugKeyDelegateBinding>      InputDebugKeyDelegateBindings;                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputMappingContext
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UInputMappingContext : public UDataAsset
	{
	public:
		TArray<struct FEnhancedActionKeyMapping>                   Mappings;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class FText                                                ContextDescription;                                      // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void UnmapKey(class UInputAction* Action, const struct FKey& Key);
		void UnmapAllKeysFromAction(class UInputAction* Action);
		void UnmapAll();
		void UnmapAction(class UInputAction* Action);
		struct FEnhancedActionKeyMapping MapKey(class UInputAction* Action, const struct FKey& ToKey);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifier : public UObject
	{
	public:
		struct FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime);
		struct FLinearColor GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue);
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierDeadZone
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputModifierDeadZone : public UInputModifier
	{
	public:
		float                                                      LowerThreshold;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperThreshold;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDeadZoneType                                              Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNWL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierScalar
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierScalar : public UInputModifier
	{
	public:
		struct FVector                                             Scalar;                                                  // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierScaleByDeltaTime
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifierScaleByDeltaTime : public UInputModifier
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierNegate
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierNegate : public UInputModifier
	{
	public:
		bool                                                       bX;                                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bY;                                                      // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZ;                                                      // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3YV[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSmooth
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UInputModifierSmooth : public UInputModifier
	{
	public:
		unsigned char                                              UnknownData_I17B[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveExponential
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveExponential : public UInputModifier
	{
	public:
		struct FVector                                             CurveExponent;                                           // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierResponseCurveUser
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInputModifierResponseCurveUser : public UInputModifier
	{
	public:
		class UCurveFloat*                                         ResponseX;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseY;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ResponseZ;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierFOVScaling
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierFOVScaling : public UInputModifier
	{
	public:
		float                                                      FOVScale;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFOVScalingType                                            FOVScalingType;                                          // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QIM[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierToWorldSpace
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputModifierToWorldSpace : public UInputModifier
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputModifierSwizzleAxis
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputModifierSwizzleAxis : public UInputModifier
	{
	public:
		EInputAxisSwizzle                                          Order;                                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J56W[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTrigger
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UInputTrigger : public UObject
	{
	public:
		float                                                      ActuationThreshold;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldAlwaysTick;                                       // 0x002C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJPV[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputActionValue                                   LastValue;                                               // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime);
		bool IsActuated(const struct FInputActionValue& ForValue);
		ETriggerType GetTriggerType();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTimedBase
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UInputTriggerTimedBase : public UInputTrigger
	{
	public:
		float                                                      HeldDuration;                                            // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAffectedByTimeDilation;                                 // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8G9A[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerDown
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerDown : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPressed
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerPressed : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerReleased
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UInputTriggerReleased : public UInputTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHold
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UInputTriggerHold : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_2GNC[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HoldTimeThreshold;                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOneShot;                                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PS8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerHoldAndRelease
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
	{
	public:
		float                                                      HoldTimeThreshold;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EYL[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerTap
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UInputTriggerTap : public UInputTriggerTimedBase
	{
	public:
		float                                                      TapReleaseTimeThreshold;                                 // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SXL[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerPulse
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UInputTriggerPulse : public UInputTriggerTimedBase
	{
	public:
		unsigned char                                              UnknownData_UFZ5[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bTriggerOnStart;                                         // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DVV[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Interval;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TriggerLimit;                                            // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordAction
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UInputTriggerChordAction : public UInputTrigger
	{
	public:
		class UInputAction*                                        ChordAction;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerChordBlocker
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UInputTriggerChordBlocker : public UInputTriggerChordAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.InputTriggerCombo
	 * Size -> 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
	 */
	class UInputTriggerCombo : public UInputTrigger
	{
	public:
		int32_t                                                    CurrentComboStepIndex;                                   // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurrentTimeBetweenComboSteps;                            // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FInputComboStepData>                         ComboActions;                                            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInputCancelAction>                          InputCancelActions;                                      // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.PlayerMappableInputConfig
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UPlayerMappableInputConfig : public UPrimaryDataAsset
	{
	public:
		class FName                                                ConfigName;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FText                                                ConfigDisplayName;                                       // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsDeprecated;                                           // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MP32[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MetaData;                                                // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UInputMappingContext*, int32_t>                 Contexts;                                                // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

	public:
		void ResetToDefault();
		bool IsDeprecated();
		TArray<struct FEnhancedActionKeyMapping> GetPlayerMappableKeys();
		class UObject* GetMetadata();
		TMap<class UInputMappingContext*, int32_t> GetMappingContexts();
		struct FEnhancedActionKeyMapping GetMappingByName(const class FName& MappingName);
		TArray<struct FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);
		class FText GetDisplayName();
		class FName GetConfigName();
		static UClass* StaticClass();
	};

	/**
	 * Class EnhancedInput.PlayerMappableKeySettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPlayerMappableKeySettings : public UObject
	{
	public:
		class UObject*                                             MetaData;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                DisplayCategory;                                         // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
