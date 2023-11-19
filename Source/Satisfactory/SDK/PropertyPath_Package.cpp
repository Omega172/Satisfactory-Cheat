/**
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
	 * 		RVA    -> 0x4C50796A0
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.SetStructRef
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FPropertyPathTestStruct                     InStruct                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UPropertyPathTestObject::SetStructRef(const struct FPropertyPathTestStruct& InStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.SetStructRef");
		
		UPropertyPathTestObject_SetStructRef_Params params {};
		params.InStruct = InStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C5079510
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.SetStructConstRef
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FPropertyPathTestStruct                     InStruct                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UPropertyPathTestObject::SetStructConstRef(const struct FPropertyPathTestStruct& InStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.SetStructConstRef");
		
		UPropertyPathTestObject_SetStructConstRef_Params params {};
		params.InStruct = InStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C5079380
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.SetStruct
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FPropertyPathTestStruct                     InStruct                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UPropertyPathTestObject::SetStruct(const struct FPropertyPathTestStruct& InStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.SetStruct");
		
		UPropertyPathTestObject_SetStruct_Params params {};
		params.InStruct = InStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C50792F0
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.SetFloat
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              InFloat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPropertyPathTestObject::SetFloat(float InFloat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.SetFloat");
		
		UPropertyPathTestObject_SetFloat_Params params {};
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C50792C0
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.GetStructRef
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.GetStructRef");
		
		UPropertyPathTestObject_GetStructRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C5079290
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.GetStructConstRef
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructConstRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.GetStructConstRef");
		
		UPropertyPathTestObject_GetStructConstRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C5079120
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.GetStruct
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	struct FPropertyPathTestStruct UPropertyPathTestObject::GetStruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.GetStruct");
		
		UPropertyPathTestObject_GetStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C50790F0
	 * 		Name   -> Function PropertyPath.PropertyPathTestObject.GetFloat
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	float UPropertyPathTestObject::GetFloat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PropertyPath.PropertyPathTestObject.GetFloat");
		
		UPropertyPathTestObject_GetFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyPathTestObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyPathTestObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PropertyPath.PropertyPathTestObject");
		return ptr;
	}

}


