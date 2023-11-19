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
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetIsGraphVisible
	 */
	struct UBPW_Graph_DataPreview_C_SetIsGraphVisible_Params
	{
	public:
		bool                                                       mIsGraphVisibile;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnMouseButtonUp
	 */
	struct UBPW_Graph_DataPreview_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.UpdateStyling
	 */
	struct UBPW_Graph_DataPreview_C_UpdateStyling_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetValue
	 */
	struct UBPW_Graph_DataPreview_C_SetValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.SetGraphID
	 */
	struct UBPW_Graph_DataPreview_C_SetGraphID_Params
	{
	public:
		class FString                                              mTitle;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.PreConstruct
	 */
	struct UBPW_Graph_DataPreview_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnMouseEnter
	 */
	struct UBPW_Graph_DataPreview_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnMouseLeave
	 */
	struct UBPW_Graph_DataPreview_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.ExecuteUbergraph_BPW_Graph_DataPreview
	 */
	struct UBPW_Graph_DataPreview_C_ExecuteUbergraph_BPW_Graph_DataPreview_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnShowGraph__DelegateSignature
	 */
	struct UBPW_Graph_DataPreview_C_OnShowGraph__DelegateSignature_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnHideGraph__DelegateSignature
	 */
	struct UBPW_Graph_DataPreview_C_OnHideGraph__DelegateSignature_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_Graph_DataPreview_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Graph_DataPreview.BPW_Graph_DataPreview_C.OnHovered__DelegateSignature
	 */
	struct UBPW_Graph_DataPreview_C_OnHovered__DelegateSignature_Params
	{
	public:
		class FString                                              GraphID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
