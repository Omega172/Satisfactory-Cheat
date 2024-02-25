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
	 * Enum ModelViewViewModel.EMVVMExecutionMode
	 */
	enum class EMVVMExecutionMode : uint8_t
	{
		Immediate = 0,
		Delayed   = 1,
		Tick      = 2,
		MAX       = 3
	};

	/**
	 * Enum ModelViewViewModel.EMVVMBindingMode
	 */
	enum class EMVVMBindingMode : uint8_t
	{
		OneTimeToDestination = 0,
		OneWayToDestination  = 1,
		TwoWay               = 2,
		OneTimeToSource      = 3,
		OneWayToSource       = 4,
		MAX                  = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ModelViewViewModel.MVVMViewModelContext
	 * Size -> 0x0010
	 */
	struct FMVVMViewModelContext
	{
	public:
		class UClass*                                              ContextClass;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ContextName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMViewModelContextInstance
	 * Size -> 0x0018
	 */
	struct FMVVMViewModelContextInstance
	{
	public:
		struct FMVVMViewModelContext                               Context;                                                 // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		class UMVVMViewModelBase*                                  Instance;                                                // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMViewModelCollection
	 * Size -> 0x0028
	 */
	struct FMVVMViewModelCollection
	{
	public:
		TArray<struct FMVVMViewModelContextInstance>               ViewModelInstances;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7TKI[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMVCompiledFieldPath
	 * Size -> 0x0004
	 */
	struct FMVVMVCompiledFieldPath
	{
	public:
		int16_t                                                    StartIndex;                                              // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int16_t                                                    Num;                                                     // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMViewClass_SourceCreator
	 * Size -> 0x0028
	 */
	struct FMVVMViewClass_SourceCreator
	{
	public:
		class UClass*                                              ExpectedSourceType;                                      // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMVVMViewModelContext                               GlobalViewModelInstance;                                 // 0x0008(0x0010) NoDestructor, NativeAccessSpecifierPrivate
		struct FMVVMVCompiledFieldPath                             FieldPath;                                               // 0x0018(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                PropertyName;                                            // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateInstance;                                         // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOptional;                                               // 0x0025(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HLU2[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMVCompiledFieldId
	 * Size -> 0x0002
	 */
	struct FMVVMVCompiledFieldId
	{
	public:
		int16_t                                                    FieldIdIndex;                                            // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMVCompiledBinding
	 * Size -> 0x000C
	 */
	struct FMVVMVCompiledBinding
	{
	public:
		struct FMVVMVCompiledFieldPath                             SourceFieldPath;                                         // 0x0000(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		struct FMVVMVCompiledFieldPath                             DestinationFieldPath;                                    // 0x0004(0x0004) NoDestructor, NativeAccessSpecifierPrivate
		struct FMVVMVCompiledFieldPath                             ConversionFunctionFieldPath;                             // 0x0008(0x0004) NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMViewClass_CompiledBinding
	 * Size -> 0x001C
	 */
	struct FMVVMViewClass_CompiledBinding
	{
	public:
		struct FMVVMVCompiledFieldId                               FieldId;                                                 // 0x0000(0x0002) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4L1A[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourcePropertyName;                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMVVMVCompiledBinding                               Binding;                                                 // 0x000C(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		EMVVMExecutionMode                                         ExecutionMode;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              Flags;                                                   // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RRU7[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
	 * Size -> 0x0004
	 */
	struct FMVVMCompiledLoadedPropertyOrFunctionIndex
	{
	public:
		int16_t                                                    Index;                                                   // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsObjectProperty : 1;                                   // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsScriptStructProperty : 1;                             // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsProperty : 1;                                         // 0x0002(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9JMS[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMVCompiledFields
	 * Size -> 0x0010
	 */
	struct FMVVMVCompiledFields
	{
	public:
		class UStruct*                                             ClassOrScriptStruct;                                     // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int16_t                                                    LibraryStartIndex;                                       // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int16_t                                                    NumberOfProperties;                                      // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int16_t                                                    NumberOfFunctions;                                       // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int16_t                                                    NumberOfFieldIds;                                        // 0x000E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMCompiledBindingLibrary
	 * Size -> 0x0060
	 */
	struct FMVVMCompiledBindingLibrary
	{
	public:
		unsigned char                                              UnknownData_28FG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFunction*>                                   LoadedFunctions;                                         // 0x0010(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8QN[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex>  FieldPaths;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMVVMVCompiledFields>                        CompiledFields;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class FName>                                        CompiledFieldNames;                                      // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMBindingName
	 * Size -> 0x0008
	 */
	struct FMVVMBindingName
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMAvailableBinding
	 * Size -> 0x000C
	 */
	struct FMVVMAvailableBinding
	{
	public:
		struct FMVVMBindingName                                    BindingName;                                             // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsReadable;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsWritable;                                             // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasNotify;                                              // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DJG4[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ModelViewViewModel.MVVMEventField
	 * Size -> 0x0001
	 */
	struct FMVVMEventField
	{
	public:
		unsigned char                                              UnknownData_2CJG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
