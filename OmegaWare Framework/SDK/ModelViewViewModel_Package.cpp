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
	 * 		RVA    -> 0x47F1BB830
	 * 		Name   -> Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(class UUserWidget* UserWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget");
		
		UMVVMSubsystem_K2_GetViewFromUserWidget_Params params {};
		params.UserWidget = UserWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB690
	 * 		Name   -> Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Accessor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FMVVMAvailableBinding> UMVVMSubsystem::K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings");
		
		UMVVMSubsystem_K2_GetAvailableBindings_Params params {};
		params.Class = Class;
		params.Accessor = Accessor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB4E0
	 * 		Name   -> Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMVVMBindingName                            BindingName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Accessor                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMVVMAvailableBinding UMVVMSubsystem::K2_GetAvailableBinding(class UClass* Class, const struct FMVVMBindingName& BindingName, class UClass* Accessor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding");
		
		UMVVMSubsystem_K2_GetAvailableBinding_Params params {};
		params.Class = Class;
		params.BindingName = BindingName;
		params.Accessor = Accessor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB350
	 * 		Name   -> Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection");
		
		UMVVMSubsystem_GetGlobalViewModelCollection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB070
	 * 		Name   -> Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UWidgetTree*                                 WidgetTree                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ViewWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget");
		
		UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params params {};
		params.WidgetTree = WidgetTree;
		params.ViewWidget = ViewWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BBA20
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OldValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMVVMViewModelBase::K2_SetPropertyValue(int32_t OldValue, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue");
		
		UMVVMViewModelBase_K2_SetPropertyValue_Params params {};
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB8D0
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFieldNotificationId                        FieldId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate");
		
		UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params params {};
		params.FieldId = FieldId;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB450
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		struct FFieldNotificationId                        FieldId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged");
		
		UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params params {};
		params.FieldId = FieldId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB370
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FFieldNotificationId                        FieldId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate");
		
		UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params params {};
		params.FieldId = FieldId;
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMViewModelBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMViewModelBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMViewModelBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BBD40
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMVVMViewModelContext                       Context                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel");
		
		UMVVMViewModelCollectionObject_RemoveViewModel_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BBCA0
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMVVMViewModelBase*                          ViewModel                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance");
		
		UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params params {};
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB260
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMVVMViewModelContext                       Context                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance");
		
		UMVVMViewModelCollectionObject_FindViewModelInstance_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BB1B0
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ViewModelClass                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(class UClass* ViewModelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType");
		
		UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Params params {};
		params.ViewModelClass = ViewModelClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BAF80
	 * 		Name   -> Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMVVMViewModelContext                       Context                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMVVMViewModelBase*                          ViewModel                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMVVMViewModelCollectionObject::AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance");
		
		UMVVMViewModelCollectionObject_AddViewModelInstance_Params params {};
		params.Context = Context;
		params.ViewModel = ViewModel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMViewModelCollectionObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMViewModelCollectionObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMViewModelCollectionObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMViewModelBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMViewModelBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x47F1BBDF0
	 * 		Name   -> Function ModelViewViewModel.MVVMView.SetViewModel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ViewModelName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMVVMView::SetViewModel(const class FName& ViewModelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ModelViewViewModel.MVVMView.SetViewModel");
		
		UMVVMView_SetViewModel_Params params {};
		params.ViewModelName = ViewModelName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMViewClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMViewClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMViewClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMVVMViewWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMVVMViewWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ModelViewViewModel.MVVMViewWorldSubsystem");
		return ptr;
	}

}


