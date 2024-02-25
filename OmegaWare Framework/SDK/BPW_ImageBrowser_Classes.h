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
	 * WidgetBlueprintGeneratedClass BPW_ImageBrowser.BPW_ImageBrowser_C
	 * Size -> 0x00B0 (FullSize[0x0330] - InheritedSize[0x0280])
	 */
	class UBPW_ImageBrowser_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_Scrollbox_C*                                 mBrowserScrollbox;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancelButton;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mCategoryContainer;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mIconsContainer;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mIconText;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPreviewIcon;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelectButton;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    mSelectedImageID;                                        // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_T1AM[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             mOnImageSelected;                                        // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPW_ImageBrowserThumbnail_C*                        mSelectedThumbnail;                                      // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mIconLibraryClass;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FIconData>                                   mIconData;                                               // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<EIconType>                                          mIconTypes;                                              // 0x0308(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mSelectedCategory;                                       // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MF3K[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             mOnCancel;                                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OpenCategoryForIconID(int32_t IconID);
		void GetIconType(int32_t IconID, EIconType* IconType, bool* Success);
		void GetIconDataFromAllTypes(TArray<struct FIconData>* mIconData);
		void OnSearch(const class FText& mSearchText);
		void GetIconData(class UClass* mIconLibraryClass);
		void OnCategoryClicked(int32_t Index, class UWidget_ListButton_C* ListButton);
		void CreateCategoryButtons();
		void OnThumbnailClicked(int32_t ImageID, class UBPW_ImageBrowserThumbnail_C* Instigator);
		void GenerateThumnailsFromCategory(EIconType IconType);
		void GenerateThumbnails(TArray<struct FIconData>* Array);
		void UpdatePreview(int32_t ImageID);
		void Construct();
		void BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BPW_ImageBrowser(int32_t EntryPoint);
		void mOnCancel__DelegateSignature();
		void mOnImageSelected__DelegateSignature(class UObject* Object, int32_t ImageID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
