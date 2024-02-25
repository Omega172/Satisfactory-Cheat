/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51D10
	 * 		Name   -> Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.UnsetCurveValueByIndex");
		
		URigHierarchy_UnsetCurveValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51B40
	 * 		Name   -> Function ControlRig.RigHierarchy.UnsetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.UnsetCurveValue");
		
		URigHierarchy_UnsetCurveValue_Params params {};
		params.InKey = InKey;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F519F0
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToWorldSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToWorldSpace");
		
		URigHierarchy_SwitchToWorldSpace_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F517B0
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToParent");
		
		URigHierarchy_SwitchToParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51660
	 * 		Name   -> Function ControlRig.RigHierarchy.SwitchToDefaultParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SwitchToDefaultParent");
		
		URigHierarchy_SwitchToDefaultParent_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51560
	 * 		Name   -> Function ControlRig.RigHierarchy.SortKeys
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::SortKeys(TArray<struct FRigElementKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SortKeys");
		
		URigHierarchy_SortKeys_Params params {};
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51310
	 * 		Name   -> Function ControlRig.RigHierarchy.SetVectorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetVectorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetVectorMetadata");
		
		URigHierarchy_SetVectorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F51080
	 * 		Name   -> Function ControlRig.RigHierarchy.SetVectorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetVectorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FVector> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetVectorArrayMetadata");
		
		URigHierarchy_SetVectorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F50DB0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetTransformMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InValue                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetTransformMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTransformMetadata");
		
		URigHierarchy_SetTransformMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F50B20
	 * 		Name   -> Function ControlRig.RigHierarchy.SetTransformArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetTransformArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FTransform> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTransformArrayMetadata");
		
		URigHierarchy_SetTransformArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F50A20
	 * 		Name   -> Function ControlRig.RigHierarchy.SetTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetTag(const struct FRigElementKey& InItem, const class FName& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetTag");
		
		URigHierarchy_SetTag_Params params {};
		params.InItem = InItem;
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F507D0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetRotatorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetRotatorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRotator& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRotatorMetadata");
		
		URigHierarchy_SetRotatorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F50540
	 * 		Name   -> Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRotator>                            InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetRotatorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FRotator> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRotatorArrayMetadata");
		
		URigHierarchy_SetRotatorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F502F0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InValue                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetRigElementKeyMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRigElementKey& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRigElementKeyMetadata");
		
		URigHierarchy_SetRigElementKeyMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F50060
	 * 		Name   -> Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRigElementKey>                      InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FRigElementKey> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata");
		
		URigHierarchy_SetRigElementKeyArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4FE10
	 * 		Name   -> Function ControlRig.RigHierarchy.SetQuatMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       InValue                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetQuatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FQuat& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetQuatMetadata");
		
		URigHierarchy_SetQuatMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4FB80
	 * 		Name   -> Function ControlRig.RigHierarchy.SetQuatArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FQuat>                               InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetQuatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FQuat> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetQuatArrayMetadata");
		
		URigHierarchy_SetQuatArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4F980
	 * 		Name   -> Function ControlRig.RigHierarchy.SetPose_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigPose                                    InPose                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetPose_ForBlueprint");
		
		URigHierarchy_SetPose_ForBlueprint_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4F7A0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetParentWeightArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FRigElementWeight>                   InWeights                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeightArray");
		
		URigHierarchy_SetParentWeightArray_Params params {};
		params.InChild = InChild;
		params.InWeights = InWeights;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4F5A0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetParentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementWeight                           InWeight                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetParentWeight");
		
		URigHierarchy_SetParentWeight_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.InWeight = InWeight;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4F360
	 * 		Name   -> Function ControlRig.RigHierarchy.SetNameMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetNameMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const class FName& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetNameMetadata");
		
		URigHierarchy_SetNameMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4F0D0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetNameArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetNameArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<class FName> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetNameArrayMetadata");
		
		URigHierarchy_SetNameArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4EE00
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLocalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetLocalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransformByIndex");
		
		URigHierarchy_SetLocalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4EA00
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLocalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLocalTransform");
		
		URigHierarchy_SetLocalTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4E7C0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLinearColorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetLinearColorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLinearColorMetadata");
		
		URigHierarchy_SetLinearColorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4E530
	 * 		Name   -> Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<struct FLinearColor> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata");
		
		URigHierarchy_SetLinearColorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4E2F0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetInt32Metadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetInt32Metadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetInt32Metadata");
		
		URigHierarchy_SetInt32Metadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4E060
	 * 		Name   -> Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetInt32ArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<int32_t> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetInt32ArrayMetadata");
		
		URigHierarchy_SetInt32ArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4DD90
	 * 		Name   -> Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetGlobalTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransformByIndex");
		
		URigHierarchy_SetGlobalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D990
	 * 		Name   -> Function ControlRig.RigHierarchy.SetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetGlobalTransform");
		
		URigHierarchy_SetGlobalTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D750
	 * 		Name   -> Function ControlRig.RigHierarchy.SetFloatMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetFloatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetFloatMetadata");
		
		URigHierarchy_SetFloatMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D4C0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetFloatArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetFloatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<float> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetFloatArrayMetadata");
		
		URigHierarchy_SetFloatArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D390
	 * 		Name   -> Function ControlRig.RigHierarchy.SetCurveValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValueByIndex");
		
		URigHierarchy_SetCurveValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D150
	 * 		Name   -> Function ControlRig.RigHierarchy.SetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetCurveValue");
		
		URigHierarchy_SetCurveValue_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4D050
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibilityByIndex");
		
		URigHierarchy_SetControlVisibilityByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4CE80
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisibility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlVisibility");
		
		URigHierarchy_SetControlVisibility_Params params {};
		params.InKey = InKey;
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4CC20
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlValueByIndex(int32_t InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValueByIndex");
		
		URigHierarchy_SetControlValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValue = InValue;
		params.InValueType = InValueType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4C870
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlValue");
		
		URigHierarchy_SetControlValue_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		params.InValueType = InValueType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4C640
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlShapeTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex");
		
		URigHierarchy_SetControlShapeTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4C2E0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlShapeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlShapeTransform");
		
		URigHierarchy_SetControlShapeTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4C050
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlSettingsByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlSettingsByIndex(int32_t InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettingsByIndex");
		
		URigHierarchy_SetControlSettingsByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		params.bForce = bForce;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4BD00
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlSettings");
		
		URigHierarchy_SetControlSettings_Params params {};
		params.InKey = InKey;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		params.bForce = bForce;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4BB50
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFixEulerFlips                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlPreferredRotatorByIndex(int32_t InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex");
		
		URigHierarchy_SetControlPreferredRotatorByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValue = InValue;
		params.bInitial = bInitial;
		params.bFixEulerFlips = bFixEulerFlips;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4B8E0
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlPreferredRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFixEulerFlips                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlPreferredRotator");
		
		URigHierarchy_SetControlPreferredRotator_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		params.bInitial = bInitial;
		params.bFixEulerFlips = bFixEulerFlips;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4B620
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlOffsetTransformByIndex(int32_t InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex");
		
		URigHierarchy_SetControlOffsetTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4B240
	 * 		Name   -> Function ControlRig.RigHierarchy.SetControlOffsetTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAffectChildren                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetControlOffsetTransform");
		
		URigHierarchy_SetControlOffsetTransform_Params params {};
		params.InKey = InKey;
		params.InTransform = InTransform;
		params.bInitial = bInitial;
		params.bAffectChildren = bAffectChildren;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4B000
	 * 		Name   -> Function ControlRig.RigHierarchy.SetBoolMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetBoolMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetBoolMetadata");
		
		URigHierarchy_SetBoolMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AD80
	 * 		Name   -> Function ControlRig.RigHierarchy.SetBoolArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       InValue                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::SetBoolArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, TArray<bool> InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SetBoolArrayMetadata");
		
		URigHierarchy_SetBoolArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AC40
	 * 		Name   -> Function ControlRig.RigHierarchy.SendAutoKeyEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InOffsetInSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAsynchronous                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.SendAutoKeyEvent");
		
		URigHierarchy_SendAutoKeyEvent_Params params {};
		params.InElement = InElement;
		params.InOffsetInSeconds = InOffsetInSeconds;
		params.bAsynchronous = bAsynchronous;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AC20
	 * 		Name   -> Function ControlRig.RigHierarchy.ResetToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URigHierarchy::ResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetToDefault");
		
		URigHierarchy_ResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4ABA0
	 * 		Name   -> Function ControlRig.RigHierarchy.ResetPoseToInitial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERigElementType                                    InTypeFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::ResetPoseToInitial(ERigElementType InTypeFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetPoseToInitial");
		
		URigHierarchy_ResetPoseToInitial_Params params {};
		params.InTypeFilter = InTypeFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AB80
	 * 		Name   -> Function ControlRig.RigHierarchy.ResetCurveValues
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URigHierarchy::ResetCurveValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.ResetCurveValues");
		
		URigHierarchy_ResetCurveValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AB60
	 * 		Name   -> Function ControlRig.RigHierarchy.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void URigHierarchy::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Reset");
		
		URigHierarchy_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4AA60
	 * 		Name   -> Function ControlRig.RigHierarchy.RemoveMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::RemoveMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.RemoveMetadata");
		
		URigHierarchy_RemoveMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A9B0
	 * 		Name   -> Function ControlRig.RigHierarchy.RemoveAllMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::RemoveAllMetadata(const struct FRigElementKey& InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.RemoveAllMetadata");
		
		URigHierarchy_RemoveAllMetadata_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A990
	 * 		Name   -> Function ControlRig.RigHierarchy.Num
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t URigHierarchy::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Num");
		
		URigHierarchy_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A710
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector2D(const struct FVector2D& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector2D");
		
		URigHierarchy_MakeControlValueFromVector2D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A850
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromVector
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromVector(const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromVector");
		
		URigHierarchy_MakeControlValueFromVector_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A590
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransformNoScale                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale");
		
		URigHierarchy_MakeControlValueFromTransformNoScale_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A310
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InValue                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromTransform(const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromTransform");
		
		URigHierarchy_MakeControlValueFromTransform_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A1A0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromRotator(const struct FRotator& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromRotator");
		
		URigHierarchy_MakeControlValueFromRotator_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F4A0C0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromInt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromInt(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromInt");
		
		URigHierarchy_MakeControlValueFromInt_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49F90
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromFloat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromFloat(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromFloat");
		
		URigHierarchy_MakeControlValueFromFloat_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49DA0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FEulerTransform                             InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform");
		
		URigHierarchy_MakeControlValueFromEulerTransform_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49CB0
	 * 		Name   -> Function ControlRig.RigHierarchy.MakeControlValueFromBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::STATIC_MakeControlValueFromBool(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.MakeControlValueFromBool");
		
		URigHierarchy_MakeControlValueFromBool_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49C10
	 * 		Name   -> Function ControlRig.RigHierarchy.IsValidIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsValidIndex(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsValidIndex");
		
		URigHierarchy_IsValidIndex_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49B50
	 * 		Name   -> Function ControlRig.RigHierarchy.IsSelectedByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsSelectedByIndex(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelectedByIndex");
		
		URigHierarchy_IsSelectedByIndex_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F499C0
	 * 		Name   -> Function ControlRig.RigHierarchy.IsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsSelected(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsSelected");
		
		URigHierarchy_IsSelected_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49910
	 * 		Name   -> Function ControlRig.RigHierarchy.IsProcedural
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsProcedural(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsProcedural");
		
		URigHierarchy_IsProcedural_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F497F0
	 * 		Name   -> Function ControlRig.RigHierarchy.IsParentedTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsParentedTo");
		
		URigHierarchy_IsParentedTo_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49720
	 * 		Name   -> Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsCurveValueSetByIndex(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsCurveValueSetByIndex");
		
		URigHierarchy_IsCurveValueSetByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49590
	 * 		Name   -> Function ControlRig.RigHierarchy.IsCurveValueSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::IsCurveValueSet(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsCurveValueSet");
		
		URigHierarchy_IsCurveValueSet_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49560
	 * 		Name   -> Function ControlRig.RigHierarchy.IsControllerAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool URigHierarchy::IsControllerAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.IsControllerAvailable");
		
		URigHierarchy_IsControllerAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49420
	 * 		Name   -> Function ControlRig.RigHierarchy.HasTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InTag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::HasTag(const struct FRigElementKey& InItem, const class FName& InTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.HasTag");
		
		URigHierarchy_HasTag_Params params {};
		params.InItem = InItem;
		params.InTag = InTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F491E0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVectorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector URigHierarchy::GetVectorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FVector& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorMetadata");
		
		URigHierarchy_GetVectorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F49100
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVectorFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector URigHierarchy::STATIC_GetVectorFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorFromControlValue");
		
		URigHierarchy_GetVectorFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48FC0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVectorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> URigHierarchy::GetVectorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVectorArrayMetadata");
		
		URigHierarchy_GetVectorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48EF0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetVector2DFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D URigHierarchy::STATIC_GetVector2DFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetVector2DFromControlValue");
		
		URigHierarchy_GetVector2DFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48DC0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransformNoScale URigHierarchy::STATIC_GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue");
		
		URigHierarchy_GetTransformNoScaleFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48AE0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  DefaultValue                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetTransformMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FTransform& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformMetadata");
		
		URigHierarchy_GetTransformMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48990
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::STATIC_GetTransformFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformFromControlValue");
		
		URigHierarchy_GetTransformFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48850
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTransformArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FTransform> URigHierarchy::GetTransformArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTransformArrayMetadata");
		
		URigHierarchy_GetTransformArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48750
	 * 		Name   -> Function ControlRig.RigHierarchy.GetTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> URigHierarchy::GetTags(const struct FRigElementKey& InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetTags");
		
		URigHierarchy_GetTags_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48670
	 * 		Name   -> Function ControlRig.RigHierarchy.GetSelectedKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		ERigElementType                                    InTypeFilter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(ERigElementType InTypeFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetSelectedKeys");
		
		URigHierarchy_GetSelectedKeys_Params params {};
		params.InTypeFilter = InTypeFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48430
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRotatorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator URigHierarchy::GetRotatorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRotator& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorMetadata");
		
		URigHierarchy_GetRotatorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48330
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRotatorFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator URigHierarchy::STATIC_GetRotatorFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorFromControlValue");
		
		URigHierarchy_GetRotatorFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F481F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRotator> URigHierarchy::GetRotatorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRotatorArrayMetadata");
		
		URigHierarchy_GetRotatorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48140
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRootElementKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetRootElementKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRootElementKeys");
		
		URigHierarchy_GetRootElementKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F48060
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRigidBodyKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigidBodyKeys");
		
		URigHierarchy_GetRigidBodyKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47E30
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              DefaultValue                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetRigElementKeyMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FRigElementKey& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigElementKeyMetadata");
		
		URigHierarchy_GetRigElementKeyMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47CF0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata");
		
		URigHierarchy_GetRigElementKeyArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47C10
	 * 		Name   -> Function ControlRig.RigHierarchy.GetReferenceKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetReferenceKeys");
		
		URigHierarchy_GetReferenceKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F479E0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetQuatMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuat                                       DefaultValue                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FQuat URigHierarchy::GetQuatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FQuat& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetQuatMetadata");
		
		URigHierarchy_GetQuatMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F478A0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetQuatArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FQuat> URigHierarchy::GetQuatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetQuatArrayMetadata");
		
		URigHierarchy_GetQuatArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F477E0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPreviousParent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetPreviousParent(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousParent");
		
		URigHierarchy_GetPreviousParent_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47720
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPreviousName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URigHierarchy::GetPreviousName(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPreviousName");
		
		URigHierarchy_GetPreviousName_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F475F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetPose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigPose URigHierarchy::GetPose(bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetPose");
		
		URigHierarchy_GetPose_Params params {};
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47370
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentWeightArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeightArray");
		
		URigHierarchy_GetParentWeightArray_Params params {};
		params.InChild = InChild;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47210
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentWeight");
		
		URigHierarchy_GetParentWeight_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F47070
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetParentTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransformByIndex");
		
		URigHierarchy_GetParentTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46E20
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParentTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParentTransform");
		
		URigHierarchy_GetParentTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F474B0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetParents");
		
		URigHierarchy_GetParents_Params params {};
		params.InKey = InKey;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46D70
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNumberOfParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNumberOfParents");
		
		URigHierarchy_GetNumberOfParents_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46C90
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNullKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNullKeys");
		
		URigHierarchy_GetNullKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46A80
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNameMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URigHierarchy::GetNameMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const class FName& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNameMetadata");
		
		URigHierarchy_GetNameMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46940
	 * 		Name   -> Function ControlRig.RigHierarchy.GetNameArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> URigHierarchy::GetNameArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetNameArrayMetadata");
		
		URigHierarchy_GetNameArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46840
	 * 		Name   -> Function ControlRig.RigHierarchy.GetMetadataType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ERigMetadataType URigHierarchy::GetMetadataType(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetMetadataType");
		
		URigHierarchy_GetMetadataType_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46740
	 * 		Name   -> Function ControlRig.RigHierarchy.GetMetadataNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> URigHierarchy::GetMetadataNames(const struct FRigElementKey& InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetMetadataNames");
		
		URigHierarchy_GetMetadataNames_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46580
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransformByIndex");
		
		URigHierarchy_GetLocalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46300
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalTransform");
		
		URigHierarchy_GetLocalTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F46170
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint");
		
		URigHierarchy_GetLocalIndex_ForBlueprint_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45FC0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex");
		
		URigHierarchy_GetLocalControlShapeTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45D60
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLocalControlShapeTransform");
		
		URigHierarchy_GetLocalControlShapeTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45B40
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLinearColorMetadata
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor URigHierarchy::GetLinearColorMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, const struct FLinearColor& DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLinearColorMetadata");
		
		URigHierarchy_GetLinearColorMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45A00
	 * 		Name   -> Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata");
		
		URigHierarchy_GetLinearColorArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F458C0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<int32_t>                                    InElementIndices                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetKeys(TArray<int32_t> InElementIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetKeys");
		
		URigHierarchy_GetKeys_Params params {};
		params.InElementIndices = InElementIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F457F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetKey(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetKey");
		
		URigHierarchy_GetKey_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45740
	 * 		Name   -> Function ControlRig.RigHierarchy.GetIntFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::STATIC_GetIntFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIntFromControlValue");
		
		URigHierarchy_GetIntFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45530
	 * 		Name   -> Function ControlRig.RigHierarchy.GetInt32Metadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetInt32Metadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, int32_t DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetInt32Metadata");
		
		URigHierarchy_GetInt32Metadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F453F0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> URigHierarchy::GetInt32ArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetInt32ArrayMetadata");
		
		URigHierarchy_GetInt32ArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F45280
	 * 		Name   -> Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetIndex_ForBlueprint");
		
		URigHierarchy_GetIndex_ForBlueprint_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F450C0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransformByIndex");
		
		URigHierarchy_GetGlobalTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44E40
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalTransform");
		
		URigHierarchy_GetGlobalTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44C90
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex");
		
		URigHierarchy_GetGlobalControlShapeTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44A30
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform");
		
		URigHierarchy_GetGlobalControlShapeTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44880
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex");
		
		URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44620
	 * 		Name   -> Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform");
		
		URigHierarchy_GetGlobalControlOffsetTransform_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44420
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFloatMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::GetFloatMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, float DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatMetadata");
		
		URigHierarchy_GetFloatMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44360
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFloatFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::STATIC_GetFloatFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatFromControlValue");
		
		URigHierarchy_GetFloatFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44220
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFloatArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> URigHierarchy::GetFloatArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFloatArrayMetadata");
		
		URigHierarchy_GetFloatArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44150
	 * 		Name   -> Function ControlRig.RigHierarchy.GetFirstParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetFirstParent");
		
		URigHierarchy_GetFirstParent_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F44000
	 * 		Name   -> Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEulerTransform URigHierarchy::STATIC_GetEulerTransformFromControlValue(const struct FRigControlValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue");
		
		URigHierarchy_GetEulerTransformFromControlValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43F30
	 * 		Name   -> Function ControlRig.RigHierarchy.GetDefaultParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchy::GetDefaultParent(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetDefaultParent");
		
		URigHierarchy_GetDefaultParent_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43E60
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::GetCurveValueByIndex(int32_t InElementIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValueByIndex");
		
		URigHierarchy_GetCurveValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43CD0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveValue");
		
		URigHierarchy_GetCurveValue_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43C50
	 * 		Name   -> Function ControlRig.RigHierarchy.GetCurveKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetCurveKeys");
		
		URigHierarchy_GetCurveKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43A00
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValueByIndex");
		
		URigHierarchy_GetControlValueByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.InValueType = InValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43780
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigControlValueType                               InValueType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlValue URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlValue");
		
		URigHierarchy_GetControlValue_Params params {};
		params.InKey = InKey;
		params.InValueType = InValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43640
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex");
		
		URigHierarchy_GetControlPreferredRotatorByIndex_Params params {};
		params.InElementIndex = InElementIndex;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43420
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlPreferredRotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator URigHierarchy::GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlPreferredRotator");
		
		URigHierarchy_GetControlPreferredRotator_Params params {};
		params.InKey = InKey;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43BB0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCreateIfNeeded                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetController");
		
		URigHierarchy_GetController_Params params {};
		params.bCreateIfNeeded = bCreateIfNeeded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43340
	 * 		Name   -> Function ControlRig.RigHierarchy.GetControlKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetControlKeys");
		
		URigHierarchy_GetControlKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F43200
	 * 		Name   -> Function ControlRig.RigHierarchy.GetChildren
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetChildren");
		
		URigHierarchy_GetChildren_Params params {};
		params.InKey = InKey;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42FF0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetBoolMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DefaultValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::GetBoolMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName, bool DefaultValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoolMetadata");
		
		URigHierarchy_GetBoolMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		params.DefaultValue = DefaultValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42EB0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetBoolArrayMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InItem                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InMetadataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> URigHierarchy::GetBoolArrayMetadata(const struct FRigElementKey& InItem, const class FName& InMetadataName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoolArrayMetadata");
		
		URigHierarchy_GetBoolArrayMetadata_Params params {};
		params.InItem = InItem;
		params.InMetadataName = InMetadataName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42DD0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetBoneKeys
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetBoneKeys");
		
		URigHierarchy_GetBoneKeys_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42CE0
	 * 		Name   -> Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bTraverse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint");
		
		URigHierarchy_GetAllKeys_ForBlueprint_Params params {};
		params.bTraverse = bTraverse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42B50
	 * 		Name   -> Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly");
		
		URigHierarchy_FindNull_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42950
	 * 		Name   -> Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly");
		
		URigHierarchy_FindControl_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42830
	 * 		Name   -> Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly");
		
		URigHierarchy_FindBone_ForBlueprintOnly_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42660
	 * 		Name   -> Function ControlRig.RigHierarchy.CopyPose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCurrent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInitial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeights                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchPoseInGlobalIfNeeded                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyPose");
		
		URigHierarchy_CopyPose_Params params {};
		params.InHierarchy = InHierarchy;
		params.bCurrent = bCurrent;
		params.bInitial = bInitial;
		params.bWeights = bWeights;
		params.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F425D0
	 * 		Name   -> Function ControlRig.RigHierarchy.CopyHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.CopyHierarchy");
		
		URigHierarchy_CopyHierarchy_Params params {};
		params.InHierarchy = InHierarchy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3F42460
	 * 		Name   -> Function ControlRig.RigHierarchy.Contains_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchy.Contains_ForBlueprint");
		
		URigHierarchy_Contains_ForBlueprint_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigHierarchy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigHierarchy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.RigHierarchy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformableControlHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformableControlHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.TransformableControlHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1C70
	 * 		Name   -> Function ControlRig.ControlRig.SetInteractionRigClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InInteractionRigClass                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetInteractionRigClass(class UClass* InInteractionRigClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRigClass");
		
		UControlRig_SetInteractionRigClass_Params params {};
		params.InInteractionRigClass = InInteractionRigClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1BE0
	 * 		Name   -> Function ControlRig.ControlRig.SetInteractionRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InInteractionRig                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SetInteractionRig");
		
		UControlRig_SetInteractionRig_Params params {};
		params.InInteractionRig = InInteractionRig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD05B0
	 * 		Name   -> Function ControlRig.ControlRig.SelectControl
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InControlName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::SelectControl(const class FName& InControlName, bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.SelectControl");
		
		UControlRig_SelectControl_Params params {};
		params.InControlName = InControlName;
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0530
	 * 		Name   -> Function ControlRig.ControlRig.RequestConstruction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRig::RequestConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.RequestConstruction");
		
		UControlRig_RequestConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		class UControlRig*                                 Rig                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlElement                          Control                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRig::OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const struct FRigControlElement& Control, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature");
		
		UControlRig_OnControlSelectedBP__DelegateSignature_Params params {};
		params.Rig = Rig;
		params.Control = Control;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFDB0
	 * 		Name   -> Function ControlRig.ControlRig.IsControlSelected
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        InControlName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRig::IsControlSelected(const class FName& InControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.IsControlSelected");
		
		UControlRig_IsControlSelected_Params params {};
		params.InControlName = InControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFB10
	 * 		Name   -> Function ControlRig.ControlRig.GetInteractionRigClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UControlRig::GetInteractionRigClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRigClass");
		
		UControlRig_GetInteractionRigClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFAF0
	 * 		Name   -> Function ControlRig.ControlRig.GetInteractionRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UControlRig* UControlRig::GetInteractionRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetInteractionRig");
		
		UControlRig_GetInteractionRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF840
	 * 		Name   -> Function ControlRig.ControlRig.GetHostingActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UControlRig::GetHostingActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetHostingActor");
		
		UControlRig_GetHostingActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF820
	 * 		Name   -> Function ControlRig.ControlRig.GetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class URigHierarchy* UControlRig::GetHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.GetHierarchy");
		
		UControlRig_GetHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE7F0
	 * 		Name   -> Function ControlRig.ControlRig.FindControlRigs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OptionalClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UControlRig*> UControlRig::STATIC_FindControlRigs(class UObject* Outer, class UClass* OptionalClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.FindControlRigs");
		
		UControlRig_FindControlRigs_Params params {};
		params.Outer = Outer;
		params.OptionalClass = OptionalClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE660
	 * 		Name   -> Function ControlRig.ControlRig.CurrentControlSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRig::CurrentControlSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CurrentControlSelection");
		
		UControlRig_CurrentControlSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE580
	 * 		Name   -> Function ControlRig.ControlRig.CreateTransformableControlHandle
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ControlName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(class UObject* Outer, const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.CreateTransformableControlHandle");
		
		UControlRig_CreateTransformableControlHandle_Params params {};
		params.Outer = Outer;
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE400
	 * 		Name   -> Function ControlRig.ControlRig.ClearControlSelection
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UControlRig::ClearControlSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRig.ClearControlSelection");
		
		UControlRig_ClearControlSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD2320
	 * 		Name   -> Function ControlRig.ControlRigComponent.Update
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::Update(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Update");
		
		UControlRigComponent_Update_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1F10
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetObjectBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InObjectToBind                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetObjectBinding(class UObject* InObjectToBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetObjectBinding");
		
		UControlRigComponent_SetObjectBinding_Params params {};
		params.InObjectToBind = InObjectToBind;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1E20
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedElement>   NewMappedElements                                          (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetMappedElements");
		
		UControlRigComponent_SetMappedElements_Params params {};
		params.NewMappedElements = NewMappedElements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD19A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InitialTransform                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetInitialSpaceTransform(const class FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialSpaceTransform");
		
		UControlRigComponent_SetInitialSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.InitialTransform = InitialTransform;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD17A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InitialTransform                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetInitialBoneTransform(const class FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetInitialBoneTransform");
		
		UControlRigComponent_SetInitialBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.InitialTransform = InitialTransform;
		params.Space = Space;
		params.bPropagateToChildren = bPropagateToChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1480
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlVector2D
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlVector2D(const class FName& ControlName, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlVector2D");
		
		UControlRigComponent_SetControlVector2D_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1240
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlTransform(const class FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlTransform");
		
		UControlRigComponent_SetControlTransform_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1100
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlScale(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlScale");
		
		UControlRigComponent_SetControlScale_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0FC0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlRotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlRotator(const class FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlRotator");
		
		UControlRigComponent_SetControlRotator_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0F20
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlRigClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InControlRigClass                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlRigClass(class UClass* InControlRigClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlRigClass");
		
		UControlRigComponent_SetControlRigClass_Params params {};
		params.InControlRigClass = InControlRigClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0DE0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlPosition(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlPosition");
		
		UControlRigComponent_SetControlPosition_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0C30
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OffsetTransform                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlOffset(const class FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlOffset");
		
		UControlRigComponent_SetControlOffset_Params params {};
		params.ControlName = ControlName;
		params.OffsetTransform = OffsetTransform;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0B60
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlInt(const class FName& ControlName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlInt");
		
		UControlRigComponent_SetControlInt_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0A80
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlFloat(const class FName& ControlName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlFloat");
		
		UControlRigComponent_SetControlFloat_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD09A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetControlBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetControlBool(const class FName& ControlName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetControlBool");
		
		UControlRigComponent_SetControlBool_Params params {};
		params.ControlName = ControlName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0750
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetBoneTransform(const class FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneTransform");
		
		UControlRigComponent_SetBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Transform = Transform;
		params.Space = Space;
		params.Weight = Weight;
		params.bPropagateToChildren = bPropagateToChildren;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD06A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh");
		
		UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params params {};
		params.InSkeletalMesh = InSkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0230
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreInitialize");
		
		UControlRigComponent_OnPreInitialize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD01A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreForwardsSolve
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreForwardsSolve");
		
		UControlRigComponent_OnPreForwardsSolve_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0110
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreConstruction
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPreConstruction(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreConstruction");
		
		UControlRigComponent_OnPreConstruction_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0080
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostInitialize");
		
		UControlRigComponent_OnPostInitialize_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFFF0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostForwardsSolve
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostForwardsSolve");
		
		UControlRigComponent_OnPostForwardsSolve_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFF60
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostConstruction
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UControlRigComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::OnPostConstruction(class UControlRigComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostConstruction");
		
		UControlRigComponent_OnPostConstruction_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFD90
	 * 		Name   -> Function ControlRig.ControlRigComponent.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRigComponent::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.Initialize");
		
		UControlRigComponent_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFB90
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetSpaceTransform");
		
		UControlRigComponent_GetSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF9C0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SpaceName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetInitialSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialSpaceTransform");
		
		UControlRigComponent_GetInitialSpaceTransform_Params params {};
		params.SpaceName = SpaceName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF890
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetInitialBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetInitialBoneTransform");
		
		UControlRigComponent_GetInitialBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF580
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetElementNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ERigElementType                                    ElementType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UControlRigComponent::GetElementNames(ERigElementType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetElementNames");
		
		UControlRigComponent_GetElementNames_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF4E0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlVector2D
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UControlRigComponent::GetControlVector2D(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlVector2D");
		
		UControlRigComponent_GetControlVector2D_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF3B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetControlTransform(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlTransform");
		
		UControlRigComponent_GetControlTransform_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF2A0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlScale
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UControlRigComponent::GetControlScale(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlScale");
		
		UControlRigComponent_GetControlScale_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF160
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlRotator
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UControlRigComponent::GetControlRotator(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRotator");
		
		UControlRigComponent_GetControlRotator_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF130
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UControlRig* UControlRigComponent::GetControlRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlRig");
		
		UControlRigComponent_GetControlRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF020
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UControlRigComponent::GetControlPosition(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlPosition");
		
		UControlRigComponent_GetControlPosition_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCEEF0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetControlOffset(const class FName& ControlName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlOffset");
		
		UControlRigComponent_GetControlOffset_Params params {};
		params.ControlName = ControlName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCEE50
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UControlRigComponent::GetControlInt(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlInt");
		
		UControlRigComponent_GetControlInt_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCEDB0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UControlRigComponent::GetControlFloat(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlFloat");
		
		UControlRigComponent_GetControlFloat_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCED10
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetControlBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ControlName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigComponent::GetControlBool(const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetControlBool");
		
		UControlRigComponent_GetControlBool_Params params {};
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCEBE0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetBoneTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControlRigComponentSpace                          Space                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UControlRigComponent::GetBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetBoneTransform");
		
		UControlRigComponent_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		params.Space = Space;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCEBA0
	 * 		Name   -> Function ControlRig.ControlRigComponent.GetAbsoluteTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UControlRigComponent::GetAbsoluteTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.GetAbsoluteTime");
		
		UControlRigComponent_GetAbsoluteTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE6E0
	 * 		Name   -> Function ControlRig.ControlRigComponent.DoesElementExist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigElementType                                    ElementType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigComponent::DoesElementExist(const class FName& Name, ERigElementType ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.DoesElementExist");
		
		UControlRigComponent_DoesElementExist_Params params {};
		params.Name = Name;
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE430
	 * 		Name   -> Function ControlRig.ControlRigComponent.ClearMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRigComponent::ClearMappedElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.ClearMappedElements");
		
		UControlRigComponent_ClearMappedElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE370
	 * 		Name   -> Function ControlRig.ControlRigComponent.CanExecute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UControlRigComponent::CanExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.CanExecute");
		
		UControlRigComponent_CanExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE1B0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FControlRigComponentMappedBone>      Bones                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FControlRigComponentMappedCurve>     Curves                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh");
		
		UControlRigComponent_AddMappedSkeletalMesh_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		params.Bones = Bones;
		params.Curves = Curves;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE0C0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedElement>   NewMappedElements                                          (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedElements");
		
		UControlRigComponent_AddMappedElements_Params params {};
		params.NewMappedElements = NewMappedElements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCDFD0
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FControlRigComponentMappedComponent> Components                                                 (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedComponents");
		
		UControlRigComponent_AddMappedComponents_Params params {};
		params.Components = Components;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCDF20
	 * 		Name   -> Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh");
		
		UControlRigComponent_AddMappedCompleteSkeletalMesh_Params params {};
		params.SkeletalMeshComponent = SkeletalMeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0560
	 * 		Name   -> Function ControlRig.ControlRigControlActor.ResetControlActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AControlRigControlActor::ResetControlActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.ResetControlActor");
		
		AControlRigControlActor_ResetControlActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD04F0
	 * 		Name   -> Function ControlRig.ControlRigControlActor.Refresh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AControlRigControlActor::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Refresh");
		
		AControlRigControlActor_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE3E0
	 * 		Name   -> Function ControlRig.ControlRigControlActor.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AControlRigControlActor::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigControlActor.Clear");
		
		AControlRigControlActor_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AControlRigControlActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AControlRigControlActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigControlActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD2030
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetSelected
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetSelected(bool bInSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelected");
		
		AControlRigShapeActor_SetSelected_Params params {};
		params.bInSelected = bInSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1FA0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetSelectable
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelectable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetSelectable(bool bInSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetSelectable");
		
		AControlRigShapeActor_SetSelectable_Params params {};
		params.bInSelectable = bInSelectable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1710
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetHovered
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInHovered                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetHovered(bool bInHovered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetHovered");
		
		AControlRigShapeActor_SetHovered_Params params {};
		params.bInHovered = bInHovered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD15F0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetGlobalTransform");
		
		AControlRigShapeActor_SetGlobalTransform_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD1560
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.SetEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::SetEnabled(bool bInEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.SetEnabled");
		
		AControlRigShapeActor_SetEnabled_Params params {};
		params.bInEnabled = bInEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnTransformChanged
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnTransformChanged(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnTransformChanged");
		
		AControlRigShapeActor_OnTransformChanged_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnSelectionChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnSelectionChanged");
		
		AControlRigShapeActor_OnSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsManipulating                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnManipulatingChanged");
		
		AControlRigShapeActor_OnManipulatingChanged_Params params {};
		params.bIsManipulating = bIsManipulating;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnHoveredChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnHoveredChanged");
		
		AControlRigShapeActor_OnHoveredChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.OnEnabledChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.OnEnabledChanged");
		
		AControlRigShapeActor_OnEnabledChanged_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFF30
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsSelectedInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsSelectedInEditor");
		
		AControlRigShapeActor_IsSelectedInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFE90
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsHovered
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsHovered");
		
		AControlRigShapeActor_IsHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFE60
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.IsEnabled
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AControlRigShapeActor::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.IsEnabled");
		
		AControlRigShapeActor_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF740
	 * 		Name   -> Function ControlRig.ControlRigShapeActor.GetGlobalTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform AControlRigShapeActor::GetGlobalTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigShapeActor.GetGlobalTransform");
		
		AControlRigShapeActor_GetGlobalTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AControlRigShapeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AControlRigShapeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigShapeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigShapeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigShapeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigShapeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD20C0
	 * 		Name   -> Function ControlRig.ControlRigTestData.SetupReplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGroundTruth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigTestData::SetupReplay(class UControlRig* InControlRig, bool bGroundTruth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.SetupReplay");
		
		UControlRigTestData_SetupReplay_Params params {};
		params.InControlRig = InControlRig;
		params.bGroundTruth = bGroundTruth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD0510
	 * 		Name   -> Function ControlRig.ControlRigTestData.ReleaseReplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UControlRigTestData::ReleaseReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.ReleaseReplay");
		
		UControlRigTestData_ReleaseReplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FD02C0
	 * 		Name   -> Function ControlRig.ControlRigTestData.Record
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             InRecordingDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigTestData::Record(class UControlRig* InControlRig, double InRecordingDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.Record");
		
		UControlRigTestData_Record_Params params {};
		params.InControlRig = InControlRig;
		params.InRecordingDuration = InRecordingDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFEF0
	 * 		Name   -> Function ControlRig.ControlRigTestData.IsReplaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UControlRigTestData::IsReplaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.IsReplaying");
		
		UControlRigTestData_IsReplaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFEC0
	 * 		Name   -> Function ControlRig.ControlRigTestData.IsRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UControlRigTestData::IsRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.IsRecording");
		
		UControlRigTestData_IsRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFCC0
	 * 		Name   -> Function ControlRig.ControlRigTestData.GetTimeRange
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UControlRigTestData::GetTimeRange(bool bInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.GetTimeRange");
		
		UControlRigTestData_GetTimeRange_Params params {};
		params.bInput = bInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCFB30
	 * 		Name   -> Function ControlRig.ControlRigTestData.GetPlaybackMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EControlRigTestDataPlaybackMode UControlRigTestData::GetPlaybackMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.GetPlaybackMode");
		
		UControlRigTestData_GetPlaybackMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCF660
	 * 		Name   -> Function ControlRig.ControlRigTestData.GetFrameIndexForTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		double                                             InSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UControlRigTestData::GetFrameIndexForTime(double InSeconds, bool bInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.GetFrameIndexForTime");
		
		UControlRigTestData_GetFrameIndexForTime_Params params {};
		params.InSeconds = InSeconds;
		params.bInput = bInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F3FCE450
	 * 		Name   -> Function ControlRig.ControlRigTestData.CreateNewAsset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDesiredPackagePath                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InBlueprintPathName                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UControlRigTestData* UControlRigTestData::STATIC_CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTestData.CreateNewAsset");
		
		UControlRigTestData_CreateNewAsset_Params params {};
		params.InDesiredPackagePath = InDesiredPackagePath;
		params.InBlueprintPathName = InBlueprintPathName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigTestData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigTestData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigTestData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigValidator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigValidator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigValidator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigValidationPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigValidationPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigValidationPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdditiveControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdditiveControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.AdditiveControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFKControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFKControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.FKControlRig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0AD0
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetSelection
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetSelection(TArray<struct FRigElementKey> InKeys, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetSelection");
		
		URigHierarchyController_SetSelection_Params params {};
		params.InKeys = InKeys;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B08F0
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetParent");
		
		URigHierarchyController_SetParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0860
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class URigHierarchy*                               InHierarchy                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetHierarchy");
		
		URigHierarchyController_SetHierarchy_Params params {};
		params.InHierarchy = InHierarchy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0600
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InControl                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InDisplayName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRenameElement                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName URigHierarchyController::SetDisplayName(const struct FRigElementKey& InControl, const class FName& InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetDisplayName");
		
		URigHierarchyController_SetDisplayName_Params params {};
		params.InControl = InControl;
		params.InDisplayName = InDisplayName;
		params.bRenameElement = bRenameElement;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0410
	 * 		Name   -> Function ControlRig.RigHierarchyController.SetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SetControlSettings");
		
		URigHierarchyController_SetControlSettings_Params params {};
		params.InKey = InKey;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B02C0
	 * 		Name   -> Function ControlRig.RigHierarchyController.SelectElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelect                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearSelection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.SelectElement");
		
		URigHierarchyController_SelectElement_Params params {};
		params.InKey = InKey;
		params.bSelect = bSelect;
		params.bClearSelection = bClearSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AFE60
	 * 		Name   -> Function ControlRig.RigHierarchyController.ReorderElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::ReorderElement(const struct FRigElementKey& InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ReorderElement");
		
		URigHierarchyController_ReorderElement_Params params {};
		params.InElement = InElement;
		params.InIndex = InIndex;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AFC80
	 * 		Name   -> Function ControlRig.RigHierarchyController.RenameElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearSelection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, const class FName& InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RenameElement");
		
		URigHierarchyController_RenameElement_Params params {};
		params.InElement = InElement;
		params.InName = InName;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		params.bClearSelection = bClearSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AFAA0
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveParent");
		
		URigHierarchyController_RemoveParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF950
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InElement                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveElement");
		
		URigHierarchyController_RemoveElement_Params params {};
		params.InElement = InElement;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF790
	 * 		Name   -> Function ControlRig.RigHierarchyController.RemoveAllParents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.RemoveAllParents");
		
		URigHierarchyController_RemoveAllParents_Params params {};
		params.InChild = InChild;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF2F0
	 * 		Name   -> Function ControlRig.RigHierarchyController.MirrorElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FRigVMMirrorSettings                        InSettings                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(TArray<struct FRigElementKey> InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.MirrorElements");
		
		URigHierarchyController_MirrorElements_Params params {};
		params.InKeys = InKeys;
		params.InSettings = InSettings;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF0C0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportFromText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InContent                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplaceExistingElements                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportFromText");
		
		URigHierarchyController_ImportFromText_Params params {};
		params.InContent = InContent;
		params.bReplaceExistingElements = bReplaceExistingElements;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AEBA0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportCurves
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InNameSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectCurves                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportCurves");
		
		URigHierarchyController_ImportCurves_Params params {};
		params.InSkeleton = InSkeleton;
		params.InNameSpace = InNameSpace;
		params.bSelectCurves = bSelectCurves;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE8D0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ImportBones
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeleton*                                   InSkeleton                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InNameSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReplaceExistingBones                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemoveObsoleteBones                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectBones                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::ImportBones(class USkeleton* InSkeleton, const class FName& InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ImportBones");
		
		URigHierarchyController_ImportBones_Params params {};
		params.InSkeleton = InSkeleton;
		params.InNameSpace = InNameSpace;
		params.bReplaceExistingBones = bReplaceExistingBones;
		params.bRemoveObsoleteBones = bRemoveObsoleteBones;
		params.bSelectBones = bSelectBones;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE890
	 * 		Name   -> Function ControlRig.RigHierarchyController.GetHierarchy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class URigHierarchy* URigHierarchyController::GetHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetHierarchy");
		
		URigHierarchyController_GetHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE540
	 * 		Name   -> Function ControlRig.RigHierarchyController.GetControlSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigControlSettings URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.GetControlSettings");
		
		URigHierarchyController_GetControlSettings_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE3A0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ExportToText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class FString URigHierarchyController::ExportToText(TArray<struct FRigElementKey> InKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportToText");
		
		URigHierarchyController_ExportToText_Params params {};
		params.InKeys = InKeys;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE300
	 * 		Name   -> Function ControlRig.RigHierarchyController.ExportSelectionToText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString URigHierarchyController::ExportSelectionToText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ExportSelectionToText");
		
		URigHierarchyController_ExportSelectionToText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ADFF0
	 * 		Name   -> Function ControlRig.RigHierarchyController.DuplicateElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FRigElementKey>                      InKeys                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectNewElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommands                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DuplicateElements");
		
		URigHierarchyController_DuplicateElements_Params params {};
		params.InKeys = InKeys;
		params.bSelectNewElements = bSelectNewElements;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommands = bPrintPythonCommands;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ADE50
	 * 		Name   -> Function ControlRig.RigHierarchyController.DeselectElement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InKey                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.DeselectElement");
		
		URigHierarchyController_DeselectElement_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ADDF0
	 * 		Name   -> Function ControlRig.RigHierarchyController.ClearSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool URigHierarchyController::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.ClearSelection");
		
		URigHierarchyController_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ADB10
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddRigidBody
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigRigidBodySettings                       InSettings                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InLocalTransform                                           (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddRigidBody(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddRigidBody");
		
		URigHierarchyController_AddRigidBody_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InSettings = InSettings;
		params.InLocalTransform = InLocalTransform;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AD930
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FRigElementKey                              InChild                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InWeight                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainGlobalTransform                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddParent");
		
		URigHierarchyController_AddParent_Params params {};
		params.InChild = InChild;
		params.InParent = InParent;
		params.InWeight = InWeight;
		params.bMaintainGlobalTransform = bMaintainGlobalTransform;
		params.bSetupUndo = bSetupUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AD660
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddNull
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformInGlobal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddNull(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddNull");
		
		URigHierarchyController_AddNull_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InTransform = InTransform;
		params.bTransformInGlobal = bTransformInGlobal;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AD4C0
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddCurve(const class FName& InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddCurve");
		
		URigHierarchyController_AddCurve_Params params {};
		params.InName = InName;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AD110
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlValue                            InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddControl_ForBlueprint");
		
		URigHierarchyController_AddControl_ForBlueprint_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InSettings = InSettings;
		params.InValue = InValue;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ACE00
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddBone
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParent                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformInGlobal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERigBoneType                                       InBoneType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddBone(const class FName& InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddBone");
		
		URigHierarchyController_AddBone_Params params {};
		params.InName = InName;
		params.InParent = InParent;
		params.InTransform = InTransform;
		params.bTransformInGlobal = bTransformInGlobal;
		params.InBoneType = InBoneType;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ACB30
	 * 		Name   -> Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigElementKey                              InParentControl                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRigControlSettings                         InSettings                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetupUndo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrintPythonCommand                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(const class FName& InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint");
		
		URigHierarchyController_AddAnimationChannel_ForBlueprint_Params params {};
		params.InName = InName;
		params.InParentControl = InParentControl;
		params.InSettings = InSettings;
		params.bSetupUndo = bSetupUndo;
		params.bPrintPythonCommand = bPrintPythonCommand;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigHierarchyController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigHierarchyController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.RigHierarchyController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigLayerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigLayerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigLayerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigObjectHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigObjectHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigObjectHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigParameterTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B01E0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.SelectControls
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoMirror                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SelectControls");
		
		UControlRigPoseAsset_SelectControls_Params params {};
		params.InControlRig = InControlRig;
		params.bDoMirror = bDoMirror;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0100
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.SavePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseAll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.SavePose");
		
		UControlRigPoseAsset_SavePose_Params params {};
		params.InControlRig = InControlRig;
		params.bUseAll = bUseAll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40B0010
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.ReplaceControlName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        CurrentName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::ReplaceControlName(const class FName& CurrentName, const class FName& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.ReplaceControlName");
		
		UControlRigPoseAsset_ReplaceControlName_Params params {};
		params.CurrentName = CurrentName;
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF570
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.PastePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoKey                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDoMirror                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.PastePose");
		
		UControlRigPoseAsset_PastePose_Params params {};
		params.InControlRig = InControlRig;
		params.bDoKey = bDoKey;
		params.bDoMirror = bDoMirror;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE6D0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.GetCurrentPose
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UControlRig*                                 InControlRig                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FControlRigControlPose                      OutPose                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetCurrentPose");
		
		UControlRigPoseAsset_GetCurrentPose_Params params {};
		params.InControlRig = InControlRig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPose != nullptr)
			*OutPose = params.OutPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE4C0
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.GetControlNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UControlRigPoseAsset::GetControlNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.GetControlNames");
		
		UControlRigPoseAsset_GetControlNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40ADF10
	 * 		Name   -> Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UControlRig*                                 ControlRig                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ControlName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch");
		
		UControlRigPoseAsset_DoesMirrorMatch_Params params {};
		params.ControlRig = ControlRig;
		params.ControlName = ControlName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseMirrorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseMirrorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseMirrorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigPoseProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigPoseProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigPoseProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSnapSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSnapSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigSnapSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AE280
	 * 		Name   -> Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected");
		
		UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigWorkflowOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigWorkflowOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigWorkflowOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6F40AF6C0
	 * 		Name   -> Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UObject*                                     InSubject                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(class UObject* InSubject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows");
		
		UControlRigTransformWorkflowOptions_ProvideWorkflows_Params params {};
		params.InSubject = InSubject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigTransformWorkflowOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigTransformWorkflowOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigTransformWorkflowOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigNumericalValidationPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigNumericalValidationPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ControlRig.ControlRigNumericalValidationPass");
		return ptr;
	}

}


