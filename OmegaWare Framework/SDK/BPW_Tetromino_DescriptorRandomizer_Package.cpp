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
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.AddChild
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_DescriptorRandomizer_C::AddChild(class UWidget* Widget, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.AddChild");
		
		UBPW_Tetromino_DescriptorRandomizer_C_AddChild_Params params {};
		params.Widget = Widget;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.RemoveItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     WidgetToRemove                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AddNewItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_DescriptorRandomizer_C::RemoveItem(class UWidget* WidgetToRemove, bool AddNewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.RemoveItem");
		
		UBPW_Tetromino_DescriptorRandomizer_C_RemoveItem_Params params {};
		params.WidgetToRemove = WidgetToRemove;
		params.AddNewItem = AddNewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.GenerateList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_DescriptorRandomizer_C::GenerateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.GenerateList");
		
		UBPW_Tetromino_DescriptorRandomizer_C_GenerateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_DescriptorRandomizer_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.PreConstruct");
		
		UBPW_Tetromino_DescriptorRandomizer_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_DescriptorRandomizer_C::ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C.ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer");
		
		UBPW_Tetromino_DescriptorRandomizer_C_ExecuteUbergraph_BPW_Tetromino_DescriptorRandomizer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tetromino_DescriptorRandomizer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tetromino_DescriptorRandomizer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tetromino_DescriptorRandomizer.BPW_Tetromino_DescriptorRandomizer_C");
		return ptr;
	}

}


