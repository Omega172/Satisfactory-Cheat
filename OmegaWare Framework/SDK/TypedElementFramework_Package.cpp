﻿/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * 		Name   -> PredefinedFunction UTypedElementDataStorageCompatibilityInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementDataStorageCompatibilityInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementDataStorageInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementDataStorageInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementDataStorageInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementDataStorageUiInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementDataStorageUiInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementDataStorageUiInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD459110
	 * 		Name   -> Function TypedElementFramework.TypedElementHandleLibrary.Release
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementHandleLibrary::STATIC_Release(struct FScriptTypedElementHandle* ElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.Release");
		
		UTypedElementHandleLibrary_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ElementHandle != nullptr)
			*ElementHandle = params.ElementHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458E80
	 * 		Name   -> Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementHandleLibrary::STATIC_NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.NotEqual");
		
		UTypedElementHandleLibrary_NotEqual_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458BF0
	 * 		Name   -> Function TypedElementFramework.TypedElementHandleLibrary.IsSet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementHandleLibrary::STATIC_IsSet(const struct FScriptTypedElementHandle& ElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.IsSet");
		
		UTypedElementHandleLibrary_IsSet_Params params {};
		params.ElementHandle = ElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457E50
	 * 		Name   -> Function TypedElementFramework.TypedElementHandleLibrary.Equal
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   LHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   RHS                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementHandleLibrary::STATIC_Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.Equal");
		
		UTypedElementHandleLibrary_Equal_Params params {};
		params.LHS = LHS;
		params.RHS = RHS;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementHandleLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementHandleLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementHandleLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD459770
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Shrink
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_Shrink(const struct FScriptTypedElementListProxy& ElementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Shrink");
		
		UTypedElementListLibrary_Shrink_Params params {};
		params.ElementList = ElementList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD459500
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Reset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_Reset(const struct FScriptTypedElementListProxy& ElementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Reset");
		
		UTypedElementListLibrary_Reset_Params params {};
		params.ElementList = ElementList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4593E0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Reserve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_Reserve(const struct FScriptTypedElementListProxy& ElementList, int32_t Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Reserve");
		
		UTypedElementListLibrary_Reserve_Params params {};
		params.ElementList = ElementList;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4591E0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Remove
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Remove");
		
		UTypedElementListLibrary_Remove_Params params {};
		params.ElementList = ElementList;
		params.ElementHandle = ElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458FB0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Num
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UTypedElementListLibrary::STATIC_Num(const struct FScriptTypedElementListProxy& ElementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Num");
		
		UTypedElementListLibrary_Num_Params params {};
		params.ElementList = ElementList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458CC0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.IsValidIndex");
		
		UTypedElementListLibrary_IsValidIndex_Params params {};
		params.ElementList = ElementList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458A40
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        ElementTypeName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName& ElementTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType");
		
		UTypedElementListLibrary_HasElementsOfType_Params params {};
		params.ElementList = ElementList;
		params.ElementTypeName = ElementTypeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458890
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.HasElements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BaseInterfaceType                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_HasElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.HasElements");
		
		UTypedElementListLibrary_HasElements_Params params {};
		params.ElementList = ElementList;
		params.BaseInterfaceType = BaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458430
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BaseInterfaceType                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTypedElementListLibrary::STATIC_GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementInterface");
		
		UTypedElementListLibrary_GetElementInterface_Params params {};
		params.ElementList = ElementList;
		params.ElementHandle = ElementHandle;
		params.BaseInterfaceType = BaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458240
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BaseInterfaceType                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FScriptTypedElementHandle> UTypedElementListLibrary::STATIC_GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementHandles");
		
		UTypedElementListLibrary_GetElementHandles_Params params {};
		params.ElementList = ElementList;
		params.BaseInterfaceType = BaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458060
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementHandle UTypedElementListLibrary::STATIC_GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt");
		
		UTypedElementListLibrary_GetElementHandleAt_Params params {};
		params.ElementList = ElementList;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457D30
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Empty
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Slack                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_Empty(const struct FScriptTypedElementListProxy& ElementList, int32_t Slack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Empty");
		
		UTypedElementListLibrary_Empty_Params params {};
		params.ElementList = ElementList;
		params.Slack = Slack;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457BD0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTypedElementRegistry*                       Registry                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementListProxy UTypedElementListLibrary::STATIC_CreateScriptElementList(class UTypedElementRegistry* Registry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList");
		
		UTypedElementListLibrary_CreateScriptElementList_Params params {};
		params.Registry = Registry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4579D0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FName                                        ElementTypeName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTypedElementListLibrary::STATIC_CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, const class FName& ElementTypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType");
		
		UTypedElementListLibrary_CountElementsOfType_Params params {};
		params.ElementList = ElementList;
		params.ElementTypeName = ElementTypeName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457820
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.CountElements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      BaseInterfaceType                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTypedElementListLibrary::STATIC_CountElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CountElements");
		
		UTypedElementListLibrary_CountElements_Params params {};
		params.ElementList = ElementList;
		params.BaseInterfaceType = BaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4576C0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Contains
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Contains");
		
		UTypedElementListLibrary_Contains_Params params {};
		params.ElementList = ElementList;
		params.ElementHandle = ElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457590
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Clone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementListProxy UTypedElementListLibrary::STATIC_Clone(const struct FScriptTypedElementListProxy& ElementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Clone");
		
		UTypedElementListLibrary_Clone_Params params {};
		params.ElementList = ElementList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457410
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.AppendList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                OtherElementList                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.AppendList");
		
		UTypedElementListLibrary_AppendList_Params params {};
		params.ElementList = ElementList;
		params.OtherElementList = OtherElementList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4571D0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Append
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FScriptTypedElementHandle>           ElementHandles                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementListLibrary::STATIC_Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle> ElementHandles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Append");
		
		UTypedElementListLibrary_Append_Params params {};
		params.ElementList = ElementList;
		params.ElementHandles = ElementHandles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD456FD0
	 * 		Name   -> Function TypedElementFramework.TypedElementListLibrary.Add
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementHandle                   ElementHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementListLibrary::STATIC_Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Add");
		
		UTypedElementListLibrary_Add_Params params {};
		params.ElementList = ElementList;
		params.ElementHandle = ElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementListLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementListLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementListLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementCounterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementCounterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementCounterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458770
	 * 		Name   -> Function TypedElementFramework.TypedElementRegistry.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UTypedElementRegistry* UTypedElementRegistry::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementRegistry.GetInstance");
		
		UTypedElementRegistry_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD458640
	 * 		Name   -> Function TypedElementFramework.TypedElementRegistry.GetElementInterface
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InBaseInterfaceType                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTypedElementRegistry::GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementRegistry.GetElementInterface");
		
		UTypedElementRegistry_GetElementInterface_Params params {};
		params.InElementHandle = InElementHandle;
		params.InBaseInterfaceType = InBaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TypedElementRegistry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4595E0
	 * 		Name   -> Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        InNewName                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTestTypedElementInterfaceA::SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, const class FText& InNewName, bool bNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName");
		
		UTestTypedElementInterfaceA_SetDisplayName_Params params {};
		params.InElementHandle = InElementHandle;
		params.InNewName = InNewName;
		params.bNotify = bNotify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD457F80
	 * 		Name   -> Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UTestTypedElementInterfaceA::GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName");
		
		UTestTypedElementInterfaceA_GetDisplayName_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4587C0
	 * 		Name   -> Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTestTypedElementInterfaceB::MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested");
		
		UTestTypedElementInterfaceB_MarkAsTested_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4DD4587C0
	 * 		Name   -> Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTestTypedElementInterfaceC::GetIsTested(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested");
		
		UTestTypedElementInterfaceC_GetIsTested_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceA_ImplTyped.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceA_ImplTyped::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceA_ImplUntyped.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceA_ImplUntyped::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestTypedElementInterfaceBAndC_Typed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestTypedElementInterfaceBAndC_Typed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed");
		return ptr;
	}

}


