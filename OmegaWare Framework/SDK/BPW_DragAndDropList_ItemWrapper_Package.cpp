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
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UBPW_DragAndDropList_ItemWrapper_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnMouseButtonDown");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragDetected");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.PreConstruct");
		
		UBPW_DragAndDropList_ItemWrapper_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragCanceled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnDragCanceled(class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragCanceled");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnDragCanceled_Params params {};
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDropped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnDropped(class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDropped");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnDropped_Params params {};
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper");
		
		UBPW_DragAndDropList_ItemWrapper_C_ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDetected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_DragAndDropList_ItemWrapper_C*          ListWrapper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnWrapperDragDetected__DelegateSignature(class UBPW_DragAndDropList_ItemWrapper_C* ListWrapper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDetected__DelegateSignature");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragDetected__DelegateSignature_Params params {};
		params.ListWrapper = ListWrapper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDropped__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnWrapperDragDropped__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDropped__DelegateSignature");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragDropped__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragCancelled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_DragAndDropList_ItemWrapper_C::OnWrapperDragCancelled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragCancelled__DelegateSignature");
		
		UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragCancelled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_DragAndDropList_ItemWrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_DragAndDropList_ItemWrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C");
		return ptr;
	}

}


