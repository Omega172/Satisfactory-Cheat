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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RigVM.RigVMGraphFunctionHost
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URigVMGraphFunctionHost : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMBlueprintGeneratedClass
	 * Size -> 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
	 */
	class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		unsigned char                                              UnknownData_3HDZ[0x8];                                   // 0x0370(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMGraphFunctionStore                            GraphFunctionStore;                                      // 0x0378(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XD7[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVM
	 * Size -> 0x03C8 (FullSize[0x03F0] - InheritedSize[0x0028])
	 */
	class URigVM : public UObject
	{
	public:
		class URigVMMemoryStorage*                                 WorkMemoryStorageObject;                                 // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URigVMMemoryStorage*                                 LiteralMemoryStorageObject;                              // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URigVMMemoryStorage*                                 DebugMemoryStorageObject;                                // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BL1[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMByteCode                                      ByteCodeStorage;                                         // 0x0060(0x0090) HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YSB[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMInstructionArray                              Instructions;                                            // 0x00F8(0x0010) Transient, NativeAccessSpecifierPrivate
		struct FRigVMExtendedExecuteContext                        Context;                                                 // 0x0108(0x0108) Transient, Protected, NativeAccessSpecifierProtected
		uint32_t                                                   NumExecutions;                                           // 0x0210(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FR0J[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FunctionNamesStorage;                                    // 0x0218(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8XPQ[0x38];                                  // 0x0228(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMParameter>                             Parameters;                                              // 0x0260(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, int32_t>                                 ParametersNameMap;                                       // 0x0270(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1LWU[0xE8];                                  // 0x02C0(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              DeferredVMToCopy;                                        // 0x03A8(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DXIM[0x40];                                  // 0x03B0(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex);
		void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex);
		void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex);
		void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32_t InArrayIndex);
		void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex);
		void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32_t InArrayIndex);
		void SetParameterValueInt(const class FName& InParameterName, int32_t InValue, int32_t InArrayIndex);
		void SetParameterValueFloat(const class FName& InParameterName, float InValue, int32_t InArrayIndex);
		void SetParameterValueDouble(const class FName& InParameterName, double InValue, int32_t InArrayIndex);
		void SetParameterValueBool(const class FName& InParameterName, bool InValue, int32_t InArrayIndex);
		struct FRigVMStatistics GetStatistics();
		class FString GetRigVMFunctionName(int32_t InFunctionIndex);
		struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int32_t InArrayIndex);
		struct FVector GetParameterValueVector(const class FName& InParameterName, int32_t InArrayIndex);
		struct FTransform GetParameterValueTransform(const class FName& InParameterName, int32_t InArrayIndex);
		class FString GetParameterValueString(const class FName& InParameterName, int32_t InArrayIndex);
		struct FQuat GetParameterValueQuat(const class FName& InParameterName, int32_t InArrayIndex);
		class FName GetParameterValueName(const class FName& InParameterName, int32_t InArrayIndex);
		int32_t GetParameterValueInt(const class FName& InParameterName, int32_t InArrayIndex);
		float GetParameterValueFloat(const class FName& InParameterName, int32_t InArrayIndex);
		double GetParameterValueDouble(const class FName& InParameterName, int32_t InArrayIndex);
		bool GetParameterValueBool(const class FName& InParameterName, int32_t InArrayIndex);
		bool Execute(const class FName& InEntryName);
		int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMMemoryStorageGeneratorClass
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class URigVMMemoryStorageGeneratorClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_I93S[0x40];                                  // 0x0220(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMMemoryStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URigVMMemoryStorage : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMNativized
	 * Size -> 0x0028 (FullSize[0x0418] - InheritedSize[0x03F0])
	 */
	class URigVMNativized : public URigVM
	{
	public:
		unsigned char                                              UnknownData_GFGT[0x28];                                  // 0x03F0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMUserWorkflowOptions
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class URigVMUserWorkflowOptions : public UObject
	{
	public:
		class UObject*                                             Subject;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRigVMUserWorkflow                                  Workflow;                                                // 0x0030(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_08HE[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		bool RequiresDialog();
		void ReportWarning(const class FString& InMessage);
		void ReportInfo(const class FString& InMessage);
		void ReportError(const class FString& InMessage);
		bool IsValid();
		static UClass* StaticClass();
	};

	/**
	 * Class RigVM.RigVMHost
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class URigVMHost : public UObject
	{
	public:
		unsigned char                                              UnknownData_Q7SX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigVMRuntimeSettings                               VMRuntimeSettings;                                       // 0x0030(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTTE[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              VM;                                                      // 0x0058(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRigVMDrawContainer                                 DrawContainer;                                           // 0x0060(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EITC[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        EventQueue;                                              // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGQ7[0x90];                                  // 0x00A0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x0130(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OTFU[0x40];                                  // 0x0140(0x0040) MISSED OFFSET (PADDING)

	public:
		bool SupportsEvent(const class FName& InEventName);
		bool SetVariableFromString(const class FName& InVariableName, const class FString& InValue);
		void SetFramesPerSecond(float InFramesPerSecond);
		void SetDeltaTime(float InDeltaTime);
		void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
		void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
		void RequestRunOnceEvent(const class FName& InEventName, int32_t InEventIndex);
		void RequestInit();
		bool RemoveRunOnceEvent(const class FName& InEventName);
		class URigVM* GetVM();
		class FName GetVariableType(const class FName& InVariableName);
		class FString GetVariableAsString(const class FName& InVariableName);
		TArray<class FName> GetSupportedEvents();
		TArray<class FName> GetScriptAccessibleVariables();
		float GetDeltaTime();
		float GetCurrentFramesPerSecond();
		float GetAbsoluteTime();
		TArray<class URigVMHost*> STATIC_FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass);
		bool ExecuteEvent(const class FName& InEventName);
		bool Execute(const class FName& InEventName);
		bool CanExecute();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
