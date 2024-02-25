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
	 * 		RVA    -> 0x6E98565D0
	 * 		Name   -> Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceStartTangent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UInstancedSplineMeshComponent::GetInstanceStartTangent(int32_t Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceStartTangent");
		
		UInstancedSplineMeshComponent_GetInstanceStartTangent_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9856520
	 * 		Name   -> Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceStartPos
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UInstancedSplineMeshComponent::GetInstanceStartPos(int32_t Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceStartPos");
		
		UInstancedSplineMeshComponent_GetInstanceStartPos_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9856470
	 * 		Name   -> Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceEndTangent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UInstancedSplineMeshComponent::GetInstanceEndTangent(int32_t Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceEndTangent");
		
		UInstancedSplineMeshComponent_GetInstanceEndTangent_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E98563C0
	 * 		Name   -> Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceEndPos
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UInstancedSplineMeshComponent::GetInstanceEndPos(int32_t Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstancedSplinesComponent.InstancedSplineMeshComponent.GetInstanceEndPos");
		
		UInstancedSplineMeshComponent_GetInstanceEndPos_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9856130
	 * 		Name   -> Function InstancedSplinesComponent.InstancedSplineMeshComponent.AddSplineInstance
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     StartPosition                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartTangent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPosition                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndTangent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScaleLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRotateMesh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkDirty                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInstancedSplineMeshComponent::AddSplineInstance(const struct FVector& StartPosition, const struct FVector& StartTangent, const struct FVector& EndPosition, const struct FVector& EndTangent, bool bScaleLength, bool bRotateMesh, bool bMarkDirty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstancedSplinesComponent.InstancedSplineMeshComponent.AddSplineInstance");
		
		UInstancedSplineMeshComponent_AddSplineInstance_Params params {};
		params.StartPosition = StartPosition;
		params.StartTangent = StartTangent;
		params.EndPosition = EndPosition;
		params.EndTangent = EndTangent;
		params.bScaleLength = bScaleLength;
		params.bRotateMesh = bRotateMesh;
		params.bMarkDirty = bMarkDirty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstancedSplineMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstancedSplineMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class InstancedSplinesComponent.InstancedSplineMeshComponent");
		return ptr;
	}

}


