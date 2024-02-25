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
	 * 		RVA    -> 0x6E9506310
	 * 		Name   -> Function DSTelemetry.DJSONArray.CreateJSONArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDJSONArray* UDJSONArray::STATIC_CreateJSONArray(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.CreateJSONArray");
		
		UDJSONArray_CreateJSONArray_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95062E0
	 * 		Name   -> Function DSTelemetry.DJSONArray.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDJSONArray::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.Clear");
		
		UDJSONArray_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506280
	 * 		Name   -> Function DSTelemetry.DJSONArray.AsString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UDJSONArray::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AsString");
		
		UDJSONArray_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95061C0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddStringItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Item                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddStringItem(const class FString& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddStringItem");
		
		UDJSONArray_AddStringItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506080
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddStringArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddStringArrayItem(TArray<class FString> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddStringArrayItem");
		
		UDJSONArray_AddStringArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505FE0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONObjectItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDJSONObject*                                Item                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONObjectItem(class UDJSONObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONObjectItem");
		
		UDJSONArray_AddJSONObjectItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505EE0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONObjectArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UDJSONObject*>                        Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONObjectArrayItem(TArray<class UDJSONObject*> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONObjectArrayItem");
		
		UDJSONArray_AddJSONObjectArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505E40
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDJSONArray*                                 Item                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONArrayItem(class UDJSONArray* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONArrayItem");
		
		UDJSONArray_AddJSONArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505D40
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddJSONArrayArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UDJSONArray*>                         Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddJSONArrayArrayItem(TArray<class UDJSONArray*> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddJSONArrayArrayItem");
		
		UDJSONArray_AddJSONArrayArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505CA0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddIntegerItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddIntegerItem(int32_t Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddIntegerItem");
		
		UDJSONArray_AddIntegerItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505BA0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddIntegerArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddIntegerArrayItem(TArray<int32_t> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddIntegerArrayItem");
		
		UDJSONArray_AddIntegerArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505B00
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddFloatItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddFloatItem(float Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddFloatItem");
		
		UDJSONArray_AddFloatItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505A00
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddFloatArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddFloatArrayItem(TArray<float> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddFloatArrayItem");
		
		UDJSONArray_AddFloatArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95059D0
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddEmptyItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDJSONArray::AddEmptyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddEmptyItem");
		
		UDJSONArray_AddEmptyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505930
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddBooleanItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Item                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddBooleanItem(bool Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddBooleanItem");
		
		UDJSONArray_AddBooleanItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9505830
	 * 		Name   -> Function DSTelemetry.DJSONArray.AddBooleanArrayItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<bool>                                       Item                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONArray::AddBooleanArrayItem(TArray<bool> Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONArray.AddBooleanArrayItem");
		
		UDJSONArray_AddBooleanArrayItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJSONArray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJSONArray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DJSONArray");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507AA0
	 * 		Name   -> Function DSTelemetry.DJSONObject.CreateJSONObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDJSONObject* UDJSONObject::STATIC_CreateJSONObject(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.CreateJSONObject");
		
		UDJSONObject_CreateJSONObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507A70
	 * 		Name   -> Function DSTelemetry.DJSONObject.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDJSONObject::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.Clear");
		
		UDJSONObject_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507A10
	 * 		Name   -> Function DSTelemetry.DJSONObject.AsString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UDJSONObject::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AsString");
		
		UDJSONObject_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95078D0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddStringField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddStringField(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddStringField");
		
		UDJSONObject_AddStringField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507740
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddStringArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddStringArrayField(const class FString& Key, TArray<class FString> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddStringArrayField");
		
		UDJSONObject_AddStringArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507640
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONObjectField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                Value                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONObjectField(const class FString& Key, class UDJSONObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONObjectField");
		
		UDJSONObject_AddJSONObjectField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95074E0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONObjectArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDJSONObject*>                        Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONObjectArrayField(const class FString& Key, TArray<class UDJSONObject*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONObjectArrayField");
		
		UDJSONObject_AddJSONObjectArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95073E0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 Value                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONArrayField(const class FString& Key, class UDJSONArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONArrayField");
		
		UDJSONObject_AddJSONArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507280
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddJSONArrayArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UDJSONArray*>                         Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddJSONArrayArrayField(const class FString& Key, TArray<class UDJSONArray*> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddJSONArrayArrayField");
		
		UDJSONObject_AddJSONArrayArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507180
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddIntegerField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddIntegerField(const class FString& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddIntegerField");
		
		UDJSONObject_AddIntegerField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9507020
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddIntegerArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddIntegerArrayField(const class FString& Key, TArray<int32_t> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddIntegerArrayField");
		
		UDJSONObject_AddIntegerArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506F10
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddFloatField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddFloatField(const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddFloatField");
		
		UDJSONObject_AddFloatField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506DB0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddFloatArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddFloatArrayField(const class FString& Key, TArray<float> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddFloatArrayField");
		
		UDJSONObject_AddFloatArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506CF0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddEmptyField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddEmptyField(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddEmptyField");
		
		UDJSONObject_AddEmptyField_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506BE0
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddBooleanField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddBooleanField(const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddBooleanField");
		
		UDJSONObject_AddBooleanField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9506A80
	 * 		Name   -> Function DSTelemetry.DJSONObject.AddBooleanArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       Value                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UDJSONObject::AddBooleanArrayField(const class FString& Key, TArray<bool> Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DJSONObject.AddBooleanArrayField");
		
		UDJSONObject_AddBooleanArrayField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJSONObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJSONObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DJSONObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9509730
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Terminate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDSTelemetry::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Terminate");
		
		UDSTelemetry_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9509610
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitString(const class FString& EventKey, const class FString& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitString");
		
		UDSTelemetry_SubmitString_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95094F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitSerialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitSerialized(const class FString& EventKey, const class FString& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitSerialized");
		
		UDSTelemetry_SubmitSerialized_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95093F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitJSONObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                EventData                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitJSONObject(const class FString& EventKey, class UDJSONObject* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitJSONObject");
		
		UDSTelemetry_SubmitJSONObject_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95092F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitJSONArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 EventData                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitJSONArray(const class FString& EventKey, class UDJSONArray* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitJSONArray");
		
		UDSTelemetry_SubmitJSONArray_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95091F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitInteger(const class FString& EventKey, int32_t EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitInteger");
		
		UDSTelemetry_SubmitInteger_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95090F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitFloat(const class FString& EventKey, float EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitFloat");
		
		UDSTelemetry_SubmitFloat_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9509030
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitEmpty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitEmpty(const class FString& EventKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitEmpty");
		
		UDSTelemetry_SubmitEmpty_Params params {};
		params.EventKey = EventKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508F30
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SubmitBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               EventData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SubmitBoolean(const class FString& EventKey, bool EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SubmitBoolean");
		
		UDSTelemetry_SubmitBoolean_Params params {};
		params.EventKey = EventKey;
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508DF0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BuildID                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::Start(const class FString& GameID, const class FString& BuildID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Start");
		
		UDSTelemetry_Start_Params params {};
		params.GameID = GameID;
		params.BuildID = BuildID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508CD0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateString(const class FString& StateKey, const class FString& StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateString");
		
		UDSTelemetry_SetStateString_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508BB0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateSerialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateSerialized(const class FString& StateKey, const class FString& StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateSerialized");
		
		UDSTelemetry_SetStateSerialized_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508AB0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateJSONObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONObject*                                StateData                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateJSONObject(const class FString& StateKey, class UDJSONObject* StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateJSONObject");
		
		UDSTelemetry_SetStateJSONObject_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95089B0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateJSONArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDJSONArray*                                 StateData                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateJSONArray(const class FString& StateKey, class UDJSONArray* StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateJSONArray");
		
		UDSTelemetry_SetStateJSONArray_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95088B0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateInteger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateInteger(const class FString& StateKey, int32_t StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateInteger");
		
		UDSTelemetry_SetStateInteger_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95087B0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateFloat(const class FString& StateKey, float StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateFloat");
		
		UDSTelemetry_SetStateFloat_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95086F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateEmpty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateEmpty(const class FString& StateKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateEmpty");
		
		UDSTelemetry_SetStateEmpty_Params params {};
		params.StateKey = StateKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95085F0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetStateBoolean
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StateKey                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               StateData                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetStateBoolean(const class FString& StateKey, bool StateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetStateBoolean");
		
		UDSTelemetry_SetStateBoolean_Params params {};
		params.StateKey = StateKey;
		params.StateData = StateData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508530
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetOnlinePlatformUserID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OnlinePlatformUserID                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetOnlinePlatformUserID(const class FString& OnlinePlatformUserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetOnlinePlatformUserID");
		
		UDSTelemetry_SetOnlinePlatformUserID_Params params {};
		params.OnlinePlatformUserID = OnlinePlatformUserID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508470
	 * 		Name   -> Function DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OnlinePlatformIdentifier                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDSTelemetry::SetOnlinePlatformIdentifier(const class FString& OnlinePlatformIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier");
		
		UDSTelemetry_SetOnlinePlatformIdentifier_Params params {};
		params.OnlinePlatformIdentifier = OnlinePlatformIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508450
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Resume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDSTelemetry::Resume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Resume");
		
		UDSTelemetry_Resume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508430
	 * 		Name   -> Function DSTelemetry.DSTelemetry.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDSTelemetry::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.Pause");
		
		UDSTelemetry_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508400
	 * 		Name   -> Function DSTelemetry.DSTelemetry.IsTerminated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDSTelemetry::IsTerminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.IsTerminated");
		
		UDSTelemetry_IsTerminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95083D0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDSTelemetry::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.IsPaused");
		
		UDSTelemetry_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E95083A0
	 * 		Name   -> Function DSTelemetry.DSTelemetry.GetTelemetryInstanceID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int64_t UDSTelemetry::GetTelemetryInstanceID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.GetTelemetryInstanceID");
		
		UDSTelemetry_GetTelemetryInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x6E9508310
	 * 		Name   -> Function DSTelemetry.DSTelemetry.CreateTelemetry
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDSTelemetry* UDSTelemetry::STATIC_CreateTelemetry(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DSTelemetry.DSTelemetry.CreateTelemetry");
		
		UDSTelemetry_CreateTelemetry_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDSTelemetry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDSTelemetry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DSTelemetry.DSTelemetry");
		return ptr;
	}

}


