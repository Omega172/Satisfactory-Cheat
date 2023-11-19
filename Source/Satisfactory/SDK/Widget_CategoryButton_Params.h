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
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.GetDescriptorObject
	 */
	struct UWidget_CategoryButton_C_GetDescriptorObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetIsDirectory
	 */
	struct UWidget_CategoryButton_C_SetIsDirectory_Params
	{
	public:
		bool                                                       mIsDirectory;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnMouseButtonUp
	 */
	struct UWidget_CategoryButton_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnPreviewMouseButtonDown
	 */
	struct UWidget_CategoryButton_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDragDetected
	 */
	struct UWidget_CategoryButton_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDrop
	 */
	struct UWidget_CategoryButton_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_379V[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryData
	 */
	struct UWidget_CategoryButton_C_SetCategoryData_Params
	{
	public:
		struct FStruct_BlueprintCategoryData                       mCategoryData;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategory
	 */
	struct UWidget_CategoryButton_C_SetCategory_Params
	{
	public:
		class UFGCategory*                                         mCategory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetEditMode
	 */
	struct UWidget_CategoryButton_C_SetEditMode_Params
	{
	public:
		bool                                                       mEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.PlaySFXSelect
	 */
	struct UWidget_CategoryButton_C_PlaySFXSelect_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.PlaySFXHover
	 */
	struct UWidget_CategoryButton_C_PlaySFXHover_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetAsSelected
	 */
	struct UWidget_CategoryButton_C_SetAsSelected_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.UnselectOtherCategoryButtons
	 */
	struct UWidget_CategoryButton_C_UnselectOtherCategoryButtons_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryIcon
	 */
	struct UWidget_CategoryButton_C_SetCategoryIcon_Params
	{
	public:
		class UTexture2D*                                          mIcon;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetCategoryName
	 */
	struct UWidget_CategoryButton_C_SetCategoryName_Params
	{
	public:
		class FText                                                mName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.UpdateButtonStyle
	 */
	struct UWidget_CategoryButton_C_UpdateButtonStyle_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.ClearDragEvent
	 */
	struct UWidget_CategoryButton_C_ClearDragEvent_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.Construct
	 */
	struct UWidget_CategoryButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnStartDragOverTimer
	 */
	struct UWidget_CategoryButton_C_OnStartDragOverTimer_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDragEnter
	 */
	struct UWidget_CategoryButton_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDragLeave
	 */
	struct UWidget_CategoryButton_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDragCancelled
	 */
	struct UWidget_CategoryButton_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.EditMode
	 */
	struct UWidget_CategoryButton_C_EditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SimulateClick
	 */
	struct UWidget_CategoryButton_C_SimulateClick_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Widget_CategoryButton_BPW_SmallSettingsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_BndEvt__Widget_CategoryButton_BPW_SmallSettingsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnMouseEnter
	 */
	struct UWidget_CategoryButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnMouseLeave
	 */
	struct UWidget_CategoryButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_BndEvt__Widget_CategoryButton_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.SetIsSelected
	 */
	struct UWidget_CategoryButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.ExecuteUbergraph_Widget_CategoryButton
	 */
	struct UWidget_CategoryButton_C_ExecuteUbergraph_Widget_CategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnObjectDropped__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_OnObjectDropped__DelegateSignature_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           MyGeometry;                                              // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnClickedWithCategoryObject__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_OnClickedWithCategoryObject__DelegateSignature_Params
	{
	public:
		class UFGCategory*                                         CatgeoryObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnSettingsClicked__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_OnSettingsClicked__DelegateSignature_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FStruct_BlueprintCategoryData                       CategoryData;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnDragOverTimerCompleted__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_OnDragOverTimerCompleted__DelegateSignature_Params
	{
	public:
		class UWidget_CategoryButton_C*                            Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_CategoryButton.Widget_CategoryButton_C.OnClicked__DelegateSignature
	 */
	struct UWidget_CategoryButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
