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
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.OpenCategoryForIconID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::OpenCategoryForIconID(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.OpenCategoryForIconID");
		
		UBPW_ImageBrowser_C_OpenCategoryForIconID_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EIconType                                          IconType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::GetIconType(int32_t IconID, EIconType* IconType, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconType");
		
		UBPW_ImageBrowser_C_GetIconType_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconType != nullptr)
			*IconType = params.IconType;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconDataFromAllTypes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIconData>                           mIconData                                                  (Parm, OutParm)
	 */
	void UBPW_ImageBrowser_C::GetIconDataFromAllTypes(TArray<struct FIconData>* mIconData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconDataFromAllTypes");
		
		UBPW_ImageBrowser_C_GetIconDataFromAllTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mIconData != nullptr)
			*mIconData = params.mIconData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnSearch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mSearchText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ImageBrowser_C::OnSearch(const class FText& mSearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnSearch");
		
		UBPW_ImageBrowser_C_OnSearch_Params params {};
		params.mSearchText = mSearchText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mIconLibraryClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::GetIconData(class UClass* mIconLibraryClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconData");
		
		UBPW_ImageBrowser_C_GetIconData_Params params {};
		params.mIconLibraryClass = mIconLibraryClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnCategoryClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_ListButton_C*                        ListButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::OnCategoryClicked(int32_t Index, class UWidget_ListButton_C* ListButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnCategoryClicked");
		
		UBPW_ImageBrowser_C_OnCategoryClicked_Params params {};
		params.Index = Index;
		params.ListButton = ListButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.CreateCategoryButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::CreateCategoryButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.CreateCategoryButtons");
		
		UBPW_ImageBrowser_C_CreateCategoryButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnThumbnailClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBPW_ImageBrowserThumbnail_C*                Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::OnThumbnailClicked(int32_t ImageID, class UBPW_ImageBrowserThumbnail_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnThumbnailClicked");
		
		UBPW_ImageBrowser_C_OnThumbnailClicked_Params params {};
		params.ImageID = ImageID;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumnailsFromCategory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIconType                                          IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::GenerateThumnailsFromCategory(EIconType IconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumnailsFromCategory");
		
		UBPW_ImageBrowser_C_GenerateThumnailsFromCategory_Params params {};
		params.IconType = IconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumbnails
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FIconData>                           Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ImageBrowser_C::GenerateThumbnails(TArray<struct FIconData>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumbnails");
		
		UBPW_ImageBrowser_C_GenerateThumbnails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.UpdatePreview
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::UpdatePreview(int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.UpdatePreview");
		
		UBPW_ImageBrowser_C_UpdatePreview_Params params {};
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.Construct");
		
		UBPW_ImageBrowser_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_ImageBrowser_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_ImageBrowser_C_BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UBPW_ImageBrowser_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ImageBrowser_C::BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature");
		
		UBPW_ImageBrowser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.ExecuteUbergraph_BPW_ImageBrowser
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::ExecuteUbergraph_BPW_ImageBrowser(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.ExecuteUbergraph_BPW_ImageBrowser");
		
		UBPW_ImageBrowser_C_ExecuteUbergraph_BPW_ImageBrowser_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnCancel__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ImageBrowser_C::mOnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnCancel__DelegateSignature");
		
		UBPW_ImageBrowser_C_mOnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnImageSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ImageBrowser_C::mOnImageSelected__DelegateSignature(class UObject* Object, int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnImageSelected__DelegateSignature");
		
		UBPW_ImageBrowser_C_mOnImageSelected__DelegateSignature_Params params {};
		params.Object = Object;
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ImageBrowser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ImageBrowser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ImageBrowser.BPW_ImageBrowser_C");
		return ptr;
	}

}


