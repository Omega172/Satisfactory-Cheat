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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AConstraintsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AConstraintsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.ConstraintsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstraintsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstraintsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.ConstraintsManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E17140
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTickableConstraint*                         InTickableConstraint                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConstraintsScriptingLibrary::STATIC_RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint");
		
		UConstraintsScriptingLibrary_RemoveThisConstraint_Params params {};
		params.InWorld = InWorld;
		params.InTickableConstraint = InTickableConstraint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E17060
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConstraintsScriptingLibrary::STATIC_RemoveConstraint(class UWorld* InWorld, int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint");
		
		UConstraintsScriptingLibrary_RemoveConstraint_Params params {};
		params.InWorld = InWorld;
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16FD0
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.GetManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UConstraintsManager* UConstraintsScriptingLibrary::STATIC_GetManager(class UWorld* InWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.GetManager");
		
		UConstraintsScriptingLibrary_GetManager_Params params {};
		params.InWorld = InWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16E70
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UTickableConstraint*> UConstraintsScriptingLibrary::STATIC_GetConstraintsArray(class UWorld* InWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray");
		
		UConstraintsScriptingLibrary_GetConstraintsArray_Params params {};
		params.InWorld = InWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16D50
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InAttachmentName                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTransformableHandle* UConstraintsScriptingLibrary::STATIC_CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, const class FName& InAttachmentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle");
		
		UConstraintsScriptingLibrary_CreateTransformableHandle_Params params {};
		params.InWorld = InWorld;
		params.InObject = InObject;
		params.InAttachmentName = InAttachmentName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16C00
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             InSceneComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InSocketName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTransformableComponentHandle* UConstraintsScriptingLibrary::STATIC_CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, const class FName& InSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle");
		
		UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params params {};
		params.InWorld = InWorld;
		params.InSceneComponent = InSceneComponent;
		params.InSocketName = InSocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16B30
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.CreateFromType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETransformConstraintType                           InType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTickableTransformConstraint* UConstraintsScriptingLibrary::STATIC_CreateFromType(class UWorld* InWorld, ETransformConstraintType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.CreateFromType");
		
		UConstraintsScriptingLibrary_CreateFromType_Params params {};
		params.InWorld = InWorld;
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x725E16990
	 * 		Name   -> Function Constraints.ConstraintsScriptingLibrary.AddConstraint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      InWorld                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTransformableHandle*                        InParentHandle                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTransformableHandle*                        InChildHandle                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTickableTransformConstraint*                InConstraint                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMaintainOffset                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConstraintsScriptingLibrary::STATIC_AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.AddConstraint");
		
		UConstraintsScriptingLibrary_AddConstraint_Params params {};
		params.InWorld = InWorld;
		params.InParentHandle = InParentHandle;
		params.InChildHandle = InChildHandle;
		params.InConstraint = InConstraint;
		params.bMaintainOffset = bMaintainOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstraintsScriptingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConstraintsScriptingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.ConstraintsScriptingLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformableHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformableHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TransformableHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTransformableComponentHandle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTransformableComponentHandle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TransformableComponentHandle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableTransformConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableTransformConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableTransformConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableTranslationConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableTranslationConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableTranslationConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableRotationConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableRotationConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableRotationConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableScaleConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableScaleConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableScaleConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableParentConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableParentConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableParentConstraint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableLookAtConstraint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableLookAtConstraint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Constraints.TickableLookAtConstraint");
		return ptr;
	}

}


