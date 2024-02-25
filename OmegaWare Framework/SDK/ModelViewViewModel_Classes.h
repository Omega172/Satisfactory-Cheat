#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ModelViewViewModel.MVVMSubsystem
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UMVVMSubsystem : public UEngineSubsystem
	{
	public:
		class UMVVMViewModelCollectionObject*                      GlobalViewModelCollection;                               // 0x0030(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);
		TArray<struct FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);
		struct FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, const struct FMVVMBindingName& BindingName, class UClass* Accessor);
		class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();
		bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMViewModelBase
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UMVVMViewModelBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_0WAW[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	public:
		bool K2_SetPropertyValue(int32_t OldValue, int32_t NewValue);
		void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate);
		void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
		void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMViewModelCollectionObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMVVMViewModelCollectionObject : public UObject
	{
	public:
		struct FMVVMViewModelCollection                            ViewModelCollection;                                     // 0x0028(0x0028) Transient, NativeAccessSpecifierPrivate

	public:
		bool RemoveViewModel(const struct FMVVMViewModelContext& Context);
		int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);
		class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& Context);
		class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass* ViewModelClass);
		bool AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
	 * Size -> 0x0020 (FullSize[0x0390] - InheritedSize[0x0370])
	 */
	class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		TArray<struct FFieldNotificationId>                        FieldNotifyNames;                                        // 0x0370(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3BXX[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMView
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UMVVMView : public UUserWidgetExtension
	{
	public:
		class UMVVMViewClass*                                      ClassExtension;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O1OL[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (PADDING)

	public:
		bool SetViewModel(const class FName& ViewModelName);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMViewClass
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
	{
	public:
		TArray<struct FMVVMViewClass_SourceCreator>                SourceCreators;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMVVMViewClass_CompiledBinding>              CompiledBindings;                                        // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMVVMCompiledBindingLibrary                         BindingLibrary;                                          // 0x0048(0x0060) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYBE[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelViewViewModel.MVVMViewWorldSubsystem
	 * Size -> 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
	 */
	class UMVVMViewWorldSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_ABPU[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
