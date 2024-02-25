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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.OpenCategoryForIconID
	 */
	struct UBPW_ImageBrowser_C_OpenCategoryForIconID_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconType
	 */
	struct UBPW_ImageBrowser_C_GetIconType_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EIconType                                                  IconType;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7LCB[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconDataFromAllTypes
	 */
	struct UBPW_ImageBrowser_C_GetIconDataFromAllTypes_Params
	{
	public:
		TArray<struct FIconData>                                   mIconData;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnSearch
	 */
	struct UBPW_ImageBrowser_C_OnSearch_Params
	{
	public:
		class FText                                                mSearchText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.GetIconData
	 */
	struct UBPW_ImageBrowser_C_GetIconData_Params
	{
	public:
		class UClass*                                              mIconLibraryClass;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnCategoryClicked
	 */
	struct UBPW_ImageBrowser_C_OnCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STIP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.CreateCategoryButtons
	 */
	struct UBPW_ImageBrowser_C_CreateCategoryButtons_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.OnThumbnailClicked
	 */
	struct UBPW_ImageBrowser_C_OnThumbnailClicked_Params
	{
	public:
		int32_t                                                    ImageID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YJBP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_ImageBrowserThumbnail_C*                        Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumnailsFromCategory
	 */
	struct UBPW_ImageBrowser_C_GenerateThumnailsFromCategory_Params
	{
	public:
		EIconType                                                  IconType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9BI8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.GenerateThumbnails
	 */
	struct UBPW_ImageBrowser_C_GenerateThumbnails_Params
	{
	public:
		TArray<struct FIconData>                                   Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.UpdatePreview
	 */
	struct UBPW_ImageBrowser_C_UpdatePreview_Params
	{
	public:
		int32_t                                                    ImageID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A8FK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.Construct
	 */
	struct UBPW_ImageBrowser_C_Construct_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_BndEvt__mSelectButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_BndEvt__mSearchBar_K2Node_ComponentBoundEvent_3_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.ExecuteUbergraph_BPW_ImageBrowser
	 */
	struct UBPW_ImageBrowser_C_ExecuteUbergraph_BPW_ImageBrowser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnCancel__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_mOnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ImageBrowser.BPW_ImageBrowser_C.mOnImageSelected__DelegateSignature
	 */
	struct UBPW_ImageBrowser_C_mOnImageSelected__DelegateSignature_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageID;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
