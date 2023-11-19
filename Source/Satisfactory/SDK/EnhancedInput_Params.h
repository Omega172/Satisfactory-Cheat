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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	 */
	struct UEnhancedInputComponent_GetBoundActionValue_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	 */
	struct UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params
	{
	public:
		class UInputMappingContext*                                Context;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceImmediately;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	 */
	struct UEnhancedInputLibrary_MakeInputActionValueOfType_Params
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Y;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Z;                                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputActionValueType                                      ValueType;                                               // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2SKU[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInputActionValue                                   ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	 */
	struct UEnhancedInputLibrary_MakeInputActionValue_Params
	{
	public:
		double                                                     X;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Y;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Z;                                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   MatchValueType;                                          // 0x0018(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0038(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
	 */
	struct UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params
	{
	public:
		struct FEnhancedActionKeyMapping                           ActionKeyMapping;                                        // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
	 */
	struct UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params
	{
	public:
		struct FPlayerMappableKeySlot                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
	 */
	struct UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params
	{
	public:
		struct FPlayerMappableKeySlot                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
	 */
	struct UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params
	{
	public:
		struct FEnhancedActionKeyMapping                           ActionKeyMapping;                                        // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UPlayerMappableKeySettings*                          ReturnValue;                                             // 0x0098(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetMappingName
	 */
	struct UEnhancedInputLibrary_GetMappingName_Params
	{
	public:
		struct FEnhancedActionKeyMapping                           ActionKeyMapping;                                        // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
	 */
	struct UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params
	{
	public:
		struct FPlayerMappableKeySlot                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
	 */
	struct UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params
	{
	public:
		struct FPlayerMappableKeySlot                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	 */
	struct UEnhancedInputLibrary_GetBoundActionValue_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToString_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToBool_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	 */
	struct UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params
	{
	public:
		struct FInputActionValue                                   InValue;                                                 // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		double                                                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	 */
	struct UEnhancedInputLibrary_BreakInputActionValue_Params
	{
	public:
		struct FInputActionValue                                   InActionValue;                                           // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		double                                                     X;                                                       // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Y;                                                       // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                                     Z;                                                       // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputActionValueType                                      Type;                                                    // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	 */
	struct UEnhancedInputPlatformData_GetContextRedirect_Params
	{
	public:
		class UInputMappingContext*                                InContext;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputMappingContext*                                ReturnValue;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	 */
	struct UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params
	{
	public:
		struct FModifyContextOptions                               Options;                                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EInputMappingRebuildType                                   RebuildType;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	 */
	struct UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params
	{
	public:
		class UPlayerMappableInputConfig*                          Config;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_RemoveMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
	 */
	struct UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4460[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	 */
	struct UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params
	{
	public:
		struct FModifyContextOptions                               Options;                                                 // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	 */
	struct UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params
	{
	public:
		TArray<class UInputMappingContext*>                        PrioritizedActiveContexts;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UInputMappingContext*                                InputContext;                                            // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0020(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMappingQueryIssue>                          OutIssues;                                               // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMappingQueryIssue                                         BlockingIssues;                                          // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMappingQueryResult                                        ReturnValue;                                             // 0x0049(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	 */
	struct UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params
	{
	public:
		class UInputMappingContext*                                InputContext;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInputAction*                                        Action;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0010(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMappingQueryIssue>                          OutIssues;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMappingQueryIssue                                         BlockingIssues;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMappingQueryResult                                        ReturnValue;                                             // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	 */
	struct UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
	 */
	struct UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlayerMappableKeySlot                              KeySlot;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0018(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R3AZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
	 */
	struct UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlayerMappableKeySlot                              KeySlot;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
	 */
	struct UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlayerMappableKeySlot                              KeySlot;                                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0030(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_015Q[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	 */
	struct UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	 */
	struct UEnhancedInputSubsystemInterface_InjectInputForAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   RawValue;                                                // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<class UInputModifier*>                              Modifiers;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UInputTrigger*>                               Triggers;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_HasMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutFoundPriority;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
	 */
	struct UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	 */
	struct UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params
	{
	public:
		TArray<struct FEnhancedActionKeyMapping>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	 */
	struct UEnhancedInputSubsystemInterface_ClearAllMappings_Params
	{	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	 */
	struct UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params
	{
	public:
		class UPlayerMappableInputConfig*                          Config;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	 */
	struct UEnhancedInputSubsystemInterface_AddMappingContext_Params
	{
	public:
		class UInputMappingContext*                                MappingContext;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FModifyContextOptions                               Options;                                                 // 0x000C(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	 */
	struct UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	 */
	struct UEnhancedInputWorldSubsystem_AddActorInputComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapKey
	 */
	struct UInputMappingContext_UnmapKey_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	 */
	struct UInputMappingContext_UnmapAllKeysFromAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapAll
	 */
	struct UInputMappingContext_UnmapAll_Params
	{	};

	/**
	 * Function EnhancedInput.InputMappingContext.UnmapAction
	 */
	struct UInputMappingContext_UnmapAction_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputMappingContext.MapKey
	 */
	struct UInputMappingContext_MapKey_Params
	{
	public:
		class UInputAction*                                        Action;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ToKey;                                                   // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEnhancedActionKeyMapping                           ReturnValue;                                             // 0x0020(0x0098)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputModifier.ModifyRaw
	 */
	struct UInputModifier_ModifyRaw_Params
	{
	public:
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   CurrentValue;                                            // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VJOX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInputActionValue                                   ReturnValue;                                             // 0x0030(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputModifier.GetVisualizationColor
	 */
	struct UInputModifier_GetVisualizationColor_Params
	{
	public:
		struct FInputActionValue                                   SampleValue;                                             // 0x0000(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   FinalValue;                                              // 0x0020(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.UpdateState
	 */
	struct UInputTrigger_UpdateState_Params
	{
	public:
		class UEnhancedPlayerInput*                                PlayerInput;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInputActionValue                                   ModifiedValue;                                           // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETriggerState                                              ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.IsActuated
	 */
	struct UInputTrigger_IsActuated_Params
	{
	public:
		struct FInputActionValue                                   ForValue;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.InputTrigger.GetTriggerType
	 */
	struct UInputTrigger_GetTriggerType_Params
	{
	public:
		ETriggerType                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	 */
	struct UPlayerMappableInputConfig_ResetToDefault_Params
	{	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	 */
	struct UPlayerMappableInputConfig_IsDeprecated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	 */
	struct UPlayerMappableInputConfig_GetPlayerMappableKeys_Params
	{
	public:
		TArray<struct FEnhancedActionKeyMapping>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
	 */
	struct UPlayerMappableInputConfig_GetMetadata_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	 */
	struct UPlayerMappableInputConfig_GetMappingContexts_Params
	{
	public:
		TMap<class UInputMappingContext*, int32_t>                 ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	 */
	struct UPlayerMappableInputConfig_GetMappingByName_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEnhancedActionKeyMapping                           ReturnValue;                                             // 0x0008(0x0098)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	 */
	struct UPlayerMappableInputConfig_GetKeysBoundToAction_Params
	{
	public:
		class UInputAction*                                        InAction;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEnhancedActionKeyMapping>                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	 */
	struct UPlayerMappableInputConfig_GetDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
	 */
	struct UPlayerMappableInputConfig_GetConfigName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
