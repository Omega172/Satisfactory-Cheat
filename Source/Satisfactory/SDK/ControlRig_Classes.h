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
	 * Class ControlRig.RigHierarchy
	 * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
	 */
	class URigHierarchy : public UObject
	{
	public:
		unsigned char                                              UnknownData_8XLW[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TopologyVersion;                                         // 0x0088(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   MetadataVersion;                                         // 0x008A(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   MetadataTagVersion;                                      // 0x008C(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableDirtyPropagation;                                 // 0x008E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2GQX[0x99];                                  // 0x008F(0x0099) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransformStackIndex;                                     // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V4N9[0x74];                                  // 0x012C(0x0074) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigHierarchyController*                             HierarchyController;                                     // 0x01A0(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z59N[0x58];                                  // 0x01A8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FRigElementKey, struct FRigElementKey>         PreviousNameMap;                                         // 0x0200(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JWNZ[0x80];                                  // 0x0250(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigHierarchy*                                       HierarchyForCacheValidation;                             // 0x02D0(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MDBL[0x98];                                  // 0x02D8(0x0098) MISSED OFFSET (PADDING)

	public:
		void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);
		void UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo);
		bool SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
		bool SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren);
		bool SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren);
		TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey> InKeys);
		bool SetVectorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FVector& InValue);
		bool SetVectorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FVector> InValue);
		bool SetTransformMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FTransform& InValue);
		bool SetTransformArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FTransform> InValue);
		bool SetTag(const struct FRigElementKey& InItem, const class FName& InTag);
		bool SetRotatorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRotator& InValue);
		bool SetRotatorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FRotator> InValue);
		bool SetRigElementKeyMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRigElementKey& InValue);
		bool SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FRigElementKey> InValue);
		bool SetQuatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FQuat& InValue);
		bool SetQuatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FQuat> InValue);
		void SetPose_ForBlueprint(const struct FRigPose& InPose);
		bool SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren);
		bool SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren);
		bool SetNameMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const class FName& InValue);
		bool SetNameArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<class FName> InValue);
		void SetLocalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		bool SetLinearColorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FLinearColor& InValue);
		bool SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FLinearColor> InValue);
		bool SetInt32Metadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, int32_t InValue);
		bool SetInt32ArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<int32_t> InValue);
		void SetGlobalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
		void SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand);
		bool SetFloatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, float InValue);
		bool SetFloatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<float> InValue);
		void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);
		void SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo);
		void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);
		void SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility);
		void SetControlValueByIndex(int32_t InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlShapeTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
		void SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo);
		void SetControlSettingsByIndex(int32_t InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
		void SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands);
		void SetControlPreferredRotatorByIndex(int32_t InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
		void SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips);
		void SetControlOffsetTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		void SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands);
		bool SetBoolMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, bool InValue);
		bool SetBoolArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<bool> InValue);
		void SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous);
		void ResetToDefault();
		void ResetPoseToInitial(ERigElementType InTypeFilter);
		void ResetCurveValues();
		void Reset();
		bool RemoveMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		bool RemoveAllMetadata(const struct FRigElementKey& InItem);
		int32_t Num();
		struct FRigControlValue STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromVector(const struct FVector& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromTransform(const struct FTransform& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromRotator(const struct FRotator& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromInt(int32_t InValue);
		struct FRigControlValue STATIC_MakeControlValueFromFloat(float InValue);
		struct FRigControlValue STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue);
		struct FRigControlValue STATIC_MakeControlValueFromBool(bool InValue);
		bool IsValidIndex(int32_t InElementIndex);
		bool IsSelectedByIndex(int32_t InIndex);
		bool IsSelected(const struct FRigElementKey& InKey);
		bool IsProcedural(const struct FRigElementKey& InKey);
		bool IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent);
		bool IsCurveValueSetByIndex(int32_t InElementIndex);
		bool IsCurveValueSet(const struct FRigElementKey& InKey);
		bool IsControllerAvailable();
		bool HasTag(const struct FRigElementKey& InItem, const class FName& InTag);
		struct FVector GetVectorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FVector& DefaultValue);
		struct FVector STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue);
		TArray<struct FVector> GetVectorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		struct FVector2D STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue);
		struct FTransformNoScale STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue);
		struct FTransform GetTransformMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FTransform& DefaultValue);
		struct FTransform STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue);
		TArray<struct FTransform> GetTransformArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<class FName> GetTags(const struct FRigElementKey& InItem);
		TArray<struct FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);
		struct FRotator GetRotatorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRotator& DefaultValue);
		struct FRotator STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue);
		TArray<struct FRotator> GetRotatorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<struct FRigElementKey> GetRootElementKeys();
		TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse);
		struct FRigElementKey GetRigElementKeyMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRigElementKey& DefaultValue);
		TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse);
		struct FQuat GetQuatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FQuat& DefaultValue);
		TArray<struct FQuat> GetQuatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		struct FRigElementKey GetPreviousParent(const struct FRigElementKey& InKey);
		class FName GetPreviousName(const struct FRigElementKey& InKey);
		struct FRigPose GetPose(bool bInitial);
		TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial);
		struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial);
		struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetParentTransform(const struct FRigElementKey& InKey, bool bInitial);
		TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InKey, bool bRecursive);
		int32_t GetNumberOfParents(const struct FRigElementKey& InKey);
		TArray<struct FRigElementKey> GetNullKeys(bool bTraverse);
		class FName GetNameMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const class FName& DefaultValue);
		TArray<class FName> GetNameArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		ERigMetadataType GetMetadataType(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<class FName> GetMetadataNames(const struct FRigElementKey& InItem);
		struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial);
		int32_t GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey);
		struct FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FLinearColor GetLinearColorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FLinearColor& DefaultValue);
		TArray<struct FLinearColor> GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<struct FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);
		struct FRigElementKey GetKey(int32_t InElementIndex);
		int32_t STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue);
		int32_t GetInt32Metadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, int32_t DefaultValue);
		TArray<int32_t> GetInt32ArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		int32_t GetIndex_ForBlueprint(const struct FRigElementKey& InKey);
		struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial);
		struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);
		struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial);
		float GetFloatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, float DefaultValue);
		float STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue);
		TArray<float> GetFloatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		struct FRigElementKey GetFirstParent(const struct FRigElementKey& InKey);
		struct FEulerTransform STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue);
		struct FRigElementKey GetDefaultParent(const struct FRigElementKey& InKey);
		float GetCurveValueByIndex(int32_t InElementIndex);
		float GetCurveValue(const struct FRigElementKey& InKey);
		TArray<struct FRigElementKey> GetCurveKeys();
		struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);
		struct FRigControlValue GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType);
		struct FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);
		struct FRotator GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial);
		class URigHierarchyController* GetController(bool bCreateIfNeeded);
		TArray<struct FRigElementKey> GetControlKeys(bool bTraverse);
		TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InKey, bool bRecursive);
		bool GetBoolMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, bool DefaultValue);
		TArray<bool> GetBoolArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName);
		TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse);
		TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);
		struct FRigNullElement FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey);
		struct FRigControlElement FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey);
		struct FRigBoneElement FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey);
		void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded);
		void CopyHierarchy(class URigHierarchy* InHierarchy);
		bool Contains_ForBlueprint(const struct FRigElementKey& InKey);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.TransformableControlHandle
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	class UTransformableControlHandle : public UTransformableHandle
	{
	public:
		unsigned char                                              ControlRig[0x30];                                        // 0x0058(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                ControlName;                                             // 0x0088(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRig
	 * Size -> 0x0278 (FullSize[0x03F8] - InheritedSize[0x0180])
	 */
	class UControlRig : public URigVMHost
	{
	public:
		unsigned char                                              UnknownData_RR5I[0x8];                                   // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERigExecutionType                                          ExecutionType;                                           // 0x0188(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJPR[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigHierarchySettings                               HierarchySettings;                                       // 0x018C(0x0004) NoDestructor, NativeAccessSpecifierPublic
		TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                                   // 0x0190(0x0050) Protected, NativeAccessSpecifierProtected
		class URigHierarchy*                                       DynamicHierarchy;                                        // 0x01E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ShapeLibraries[0x10];                                    // 0x01E8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_HK5L[0x18];                                  // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataSourceRegistry*                        DataSourceRegistry;                                      // 0x0210(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1YVP[0x90];                                  // 0x0218(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigInfluenceMapPerEvent                            Influences;                                              // 0x02A8(0x0060) NativeAccessSpecifierPrivate
		class UControlRig*                                         InteractionRig;                                          // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              InteractionRigClass;                                     // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6JUA[0xC0];                                  // 0x0318(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FMulticastSparseDelegate                             OnControlSelected_BP;                                    // 0x03D8(0x0001) InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4IFP[0x1F];                                  // 0x03D9(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetInteractionRigClass(class UClass* InInteractionRigClass);
		void SetInteractionRig(class UControlRig* InInteractionRig);
		void SelectControl(const class FName& InControlName, bool bSelect);
		void RequestConstruction();
		void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const struct FRigControlElement& Control, bool bSelected);
		bool IsControlSelected(const class FName& InControlName);
		class UClass* GetInteractionRigClass();
		class UControlRig* GetInteractionRig();
		class AActor* GetHostingActor();
		class URigHierarchy* GetHierarchy();
		TArray<class UControlRig*> STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass);
		TArray<class FName> CurrentControlSelection();
		class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, const class FName& ControlName);
		bool ClearControlSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigAnimInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UControlRigAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QBTQ[0x8];                                   // 0x0348(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
	 */
	class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigComponent
	 * Size -> 0x0168 (FullSize[0x06D0] - InheritedSize[0x0568])
	 */
	class UControlRigComponent : public UPrimitiveComponent
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreInitializeDelegate;                                 // 0x0570(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostInitializeDelegate;                                // 0x0580(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreConstructionDelegate;                               // 0x0590(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostConstructionDelegate;                              // 0x05A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreForwardsSolveDelegate;                              // 0x05B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostForwardsSolveDelegate;                             // 0x05C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FControlRigComponentMappedElement>           UserDefinedElements;                                     // 0x05D0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FControlRigComponentMappedElement>           MappedElements;                                          // 0x05E0(0x0010) Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bEnableLazyEvaluation;                                   // 0x05F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFAB[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LazyEvaluationPositionThreshold;                         // 0x05F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LazyEvaluationRotationThreshold;                         // 0x05F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LazyEvaluationScaleThreshold;                            // 0x05FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetTransformBeforeTick;                               // 0x0600(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetInitialsBeforeConstruction;                        // 0x0601(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateRigOnTick;                                        // 0x0602(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInEditor;                                         // 0x0603(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawBones;                                              // 0x0604(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebugDrawing;                                       // 0x0605(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HSZ[0x2];                                   // 0x0606(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x0608(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5NLZ[0xC0];                                  // 0x0610(0x00C0) MISSED OFFSET (PADDING)

	public:
		void Update(float DeltaTime);
		void SetObjectBinding(class UObject* InObjectToBind);
		void SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void SetInitialSpaceTransform(const class FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space);
		void SetInitialBoneTransform(const class FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
		void SetControlVector2D(const class FName& ControlName, const struct FVector2D& Value);
		void SetControlTransform(const class FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space);
		void SetControlScale(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlRotator(const class FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space);
		void SetControlRigClass(class UClass* InControlRigClass);
		void SetControlPosition(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlOffset(const class FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space);
		void SetControlInt(const class FName& ControlName, int32_t Value);
		void SetControlFloat(const class FName& ControlName, float Value);
		void SetControlBool(const class FName& ControlName, bool Value);
		void SetBoneTransform(const class FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
		void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
		void OnPreInitialize(class UControlRigComponent* Component);
		void OnPreForwardsSolve(class UControlRigComponent* Component);
		void OnPreConstruction(class UControlRigComponent* Component);
		void OnPostInitialize(class UControlRigComponent* Component);
		void OnPostForwardsSolve(class UControlRigComponent* Component);
		void OnPostConstruction(class UControlRigComponent* Component);
		void Initialize();
		struct FTransform GetSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		TArray<class FName> GetElementNames(ERigElementType ElementType);
		struct FVector2D GetControlVector2D(const class FName& ControlName);
		struct FTransform GetControlTransform(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FVector GetControlScale(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FRotator GetControlRotator(const class FName& ControlName, EControlRigComponentSpace Space);
		class UControlRig* GetControlRig();
		struct FVector GetControlPosition(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FTransform GetControlOffset(const class FName& ControlName, EControlRigComponentSpace Space);
		int32_t GetControlInt(const class FName& ControlName);
		float GetControlFloat(const class FName& ControlName);
		bool GetControlBool(const class FName& ControlName);
		struct FTransform GetBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		float GetAbsoluteTime();
		bool DoesElementExist(const class FName& Name, ERigElementType ElementType);
		void ClearMappedElements();
		bool CanExecute();
		void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves);
		void AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components);
		void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigControlActor
	 * Size -> 0x00B8 (FullSize[0x03B0] - InheritedSize[0x02F8])
	 */
	class AControlRigControlActor : public AActor
	{
	public:
		class AActor*                                              ActorToTrack;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControlRigClass;                                         // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshOnTick;                                          // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSelectable;                                           // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LFU[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ColorParameter;                                          // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadows;                                            // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IK7[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ActorRootComponent;                                      // 0x0330(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              ControlRig[0x30];                                        // 0x0338(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class FName>                                        ControlNames;                                            // 0x0368(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FTransform>                                  ShapeTransforms;                                         // 0x0378(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        Components;                                              // 0x0388(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0398(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		class FName                                                ColorParameterName;                                      // 0x03A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ResetControlActor();
		void Refresh();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigShapeActor
	 * Size -> 0x0048 (FullSize[0x0340] - InheritedSize[0x02F8])
	 */
	class AControlRigShapeActor : public AActor
	{
	public:
		class USceneComponent*                                     ActorRootComponent;                                      // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ControlRigIndex;                                         // 0x0308(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UControlRig>                          ControlRig;                                              // 0x030C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ControlName;                                             // 0x0314(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ShapeName;                                               // 0x031C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorParameterName;                                      // 0x0324(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2M7H[0x10];                                  // 0x032C(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSelected : 1;                                           // 0x033C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHovered : 1;                                            // 0x033C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ISEB[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool bInSelected);
		void SetSelectable(bool bInSelectable);
		void SetHovered(bool bInHovered);
		void SetGlobalTransform(const struct FTransform& InTransform);
		void SetEnabled(bool bInEnabled);
		void OnTransformChanged(const struct FTransform& NewTransform);
		void OnSelectionChanged(bool bIsSelected);
		void OnManipulatingChanged(bool bIsManipulating);
		void OnHoveredChanged(bool bIsSelected);
		void OnEnabledChanged(bool bIsEnabled);
		bool IsSelectedInEditor();
		bool IsHovered();
		bool IsEnabled();
		struct FTransform GetGlobalTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigShapeLibrary
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UControlRigShapeLibrary : public UObject
	{
	public:
		unsigned char                                              UnknownData_3VAZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigShapeDefinition                          DefaultShape;                                            // 0x0030(0x00B0) Edit, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMaterial[0x30];                                   // 0x00E0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              XRayMaterial[0x30];                                      // 0x0110(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialColorParameter;                                  // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FControlRigShapeDefinition>                  Shapes;                                                  // 0x0148(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B9L[0x18];                                  // 0x0158(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigTestData
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UControlRigTestData : public UObject
	{
	public:
		struct FSoftObjectPath                                     ControlRigObjectPath;                                    // 0x0028(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FControlRigTestDataFrame                            Initial;                                                 // 0x0048(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TArray<struct FControlRigTestDataFrame>                    InputFrames;                                             // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FControlRigTestDataFrame>                    OutputFrames;                                            // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FramesToSkip;                                            // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     Tolerance;                                               // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WQ6[0x40];                                  // 0x0110(0x0040) MISSED OFFSET (PADDING)

	public:
		bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);
		void ReleaseReplay();
		bool Record(class UControlRig* InControlRig, double InRecordingDuration);
		bool IsReplaying();
		bool IsRecording();
		struct FVector2D GetTimeRange(bool bInput);
		EControlRigTestDataPlaybackMode GetPlaybackMode();
		int32_t GetFrameIndexForTime(double InSeconds, bool bInput);
		class UControlRigTestData* STATIC_CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidator
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UControlRigValidator : public UObject
	{
	public:
		TArray<class UControlRigValidationPass*>                   Passes;                                                  // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H22I[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidationPass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlRigValidationPass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.AdditiveControlRig
	 * Size -> 0x0010 (FullSize[0x0408] - InheritedSize[0x03F8])
	 */
	class UAdditiveControlRig : public UControlRig
	{
	public:
		unsigned char                                              UnknownData_Y0TE[0x10];                                  // 0x03F8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.FKControlRig
	 * Size -> 0x0040 (FullSize[0x0438] - InheritedSize[0x03F8])
	 */
	class UFKControlRig : public UControlRig
	{
	public:
		TArray<bool>                                               IsControlActive;                                         // 0x03F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		EControlRigFKRigExecuteMode                                ApplyMode;                                               // 0x0408(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FZX0[0x2F];                                  // 0x0409(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.RigHierarchyController
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class URigHierarchyController : public UObject
	{
	public:
		bool                                                       bReportWarningsAndErrors;                                // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8LG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class URigHierarchy>                        Hierarchy;                                               // 0x002C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HH16[0x6C];                                  // 0x0034(0x006C) MISSED OFFSET (PADDING)

	public:
		bool SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand);
		bool SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		void SetHierarchy(class URigHierarchy* InHierarchy);
		class FName SetDisplayName(const struct FRigElementKey& InControl, const class FName& InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand);
		bool SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo);
		bool SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection);
		bool ReorderElement(const struct FRigElementKey& InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey RenameElement(const struct FRigElementKey& InElement, const class FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection);
		bool RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		bool RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand);
		bool RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		TArray<struct FRigElementKey> MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		TArray<struct FRigElementKey> ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		TArray<struct FRigElementKey> ImportCurves(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand);
		TArray<struct FRigElementKey> ImportBones(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand);
		class URigHierarchy* GetHierarchy();
		struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InKey);
		class FString ExportToText(TArray<struct FRigElementKey> InKeys);
		class FString ExportSelectionToText();
		TArray<struct FRigElementKey> DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands);
		bool DeselectElement(const struct FRigElementKey& InKey);
		bool ClearSelection();
		struct FRigElementKey AddRigidBody(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand);
		bool AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo);
		struct FRigElementKey AddNull(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddCurve(const class FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddControl_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddBone(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand);
		struct FRigElementKey AddAnimationChannel_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigLayerInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UControlRigLayerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_2C90[0x8];                                   // 0x0348(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigObjectHolder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigObjectHolder : public UObject
	{
	public:
		TArray<class UObject*>                                     Objects;                                                 // 0x0028(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequence
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class UControlRigSequence : public ULevelSequence
	{
	public:
		unsigned char                                              LastExportedToAnimationSequence[0x30];                   // 0x0220(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LastExportedUsingSkeletalMesh[0x30];                     // 0x0250(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      LastExportedFrameRate;                                   // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IGF[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterSection
	 * Size -> 0x0278 (FullSize[0x03D0] - InheritedSize[0x0158])
	 */
	class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
	{
	public:
		unsigned char                                              UnknownData_0V5K[0x48];                                  // 0x0158(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x01A0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ControlRigClass;                                         // 0x01A8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               ControlsMask;                                            // 0x01B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x01C0(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQWF[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x01C8(0x0110) NativeAccessSpecifierPublic
		TMap<class FName, struct FChannelMapInfo>                  ControlChannelMap;                                       // 0x02D8(0x0050) NativeAccessSpecifierPublic
		TArray<struct FEnumParameterNameAndCurve>                  EnumParameterNamesAndCurves;                             // 0x0328(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               IntegerParameterNamesAndCurves;                          // 0x0338(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FSpaceControlNameAndChannel>                 SpaceChannels;                                           // 0x0348(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FConstraintAndActiveChannel>                 ConstraintsChannels;                                     // 0x0358(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KJ47[0x68];                                  // 0x0368(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterTrack
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_U1QD[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigEditorSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigEditorSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseAsset
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UControlRigPoseAsset : public UObject
	{
	public:
		struct FControlRigControlPose                              Pose;                                                    // 0x0028(0x0060) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void SelectControls(class UControlRig* InControlRig, bool bDoMirror);
		void SavePose(class UControlRig* InControlRig, bool bUseAll);
		void ReplaceControlName(const class FName& CurrentName, const class FName& NewName);
		void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);
		void GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose);
		TArray<class FName> GetControlNames();
		bool DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseMirrorSettings
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UControlRigPoseMirrorSettings : public UObject
	{
	public:
		class FString                                              RightSide;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LeftSide;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      MirrorAxis;                                              // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      AxisToFlip;                                              // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVSR[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigPoseProjectSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigPoseProjectSettings : public UObject
	{
	public:
		TArray<struct FDirectoryPath>                              RootSaveDirs;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSnapSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UControlRigSnapSettings : public UObject
	{
	public:
		bool                                                       bKeepOffset;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapPosition;                                           // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapRotation;                                           // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapScale;                                              // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I63[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigWorkflowOptions
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
	{
	public:
		class URigHierarchy*                                       Hierarchy;                                               // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigElementKey>                              Selection;                                               // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		bool EnsureAtLeastOneRigElementSelected();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigTransformWorkflowOptions
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
	{
	public:
		ERigTransformType                                          TransformType;                                           // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZI8[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigNumericalValidationPass
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UControlRigNumericalValidationPass : public UControlRigValidationPass
	{
	public:
		bool                                                       bCheckControls;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckBones;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckCurves;                                            // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OVQ[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationPrecision;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationPrecision;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScalePrecision;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurvePrecision;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventNameA;                                              // 0x003C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                EventNameB;                                              // 0x0044(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6FY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigPose                                            Pose;                                                    // 0x0050(0x0070) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
