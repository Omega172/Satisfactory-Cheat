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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	 */
	struct UMVVMSubsystem_K2_GetViewFromUserWidget_Params
	{
	public:
		class UUserWidget*                                         UserWidget;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMVVMView*                                           ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	 */
	struct UMVVMSubsystem_K2_GetAvailableBindings_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Accessor;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMVVMAvailableBinding>                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	 */
	struct UMVVMSubsystem_K2_GetAvailableBinding_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMVVMBindingName                                    BindingName;                                             // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Accessor;                                                // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMVVMAvailableBinding                               ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	 */
	struct UMVVMSubsystem_GetGlobalViewModelCollection_Params
	{
	public:
		class UMVVMViewModelCollectionObject*                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	 */
	struct UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             ViewWidget;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	 */
	struct UMVVMViewModelBase_K2_SetPropertyValue_Params
	{
	public:
		int32_t                                                    OldValue;                                                // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewValue;                                                // 0x0004(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	 */
	struct UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params
	{
	public:
		struct FFieldNotificationId                                FieldId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	 */
	struct UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params
	{
	public:
		struct FFieldNotificationId                                FieldId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	 */
	struct UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params
	{
	public:
		struct FFieldNotificationId                                FieldId;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	 */
	struct UMVVMViewModelCollectionObject_RemoveViewModel_Params
	{
	public:
		struct FMVVMViewModelContext                               Context;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	 */
	struct UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params
	{
	public:
		class UMVVMViewModelBase*                                  ViewModel;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	 */
	struct UMVVMViewModelCollectionObject_FindViewModelInstance_Params
	{
	public:
		struct FMVVMViewModelContext                               Context;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UMVVMViewModelBase*                                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	 */
	struct UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Params
	{
	public:
		class UClass*                                              ViewModelClass;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMVVMViewModelBase*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	 */
	struct UMVVMViewModelCollectionObject_AddViewModelInstance_Params
	{
	public:
		struct FMVVMViewModelContext                               Context;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class UMVVMViewModelBase*                                  ViewModel;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ModelViewViewModel.MVVMView.SetViewModel
	 */
	struct UMVVMView_SetViewModel_Params
	{
	public:
		class FName                                                ViewModelName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EXF1[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
