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
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.GetDescriptorObject
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_GetDescriptorObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryObject
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_SetSubcategoryObject_Params
	{
	public:
		class UFGCategory*                                         mSubcategoryObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonUp
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OverwriteName
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OverwriteName_Params
	{
	public:
		class FText                                                mSubCategoryText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateIndex
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_UpdateIndex_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragAndDropVisuals
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_ClearDragAndDropVisuals_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnRemoveButtonClicked
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnRemoveButtonClicked_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.UpdateRemoveButtonVisibility
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_UpdateRemoveButtonVisibility_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragDetected
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseButtonDown
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetEditMode
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_SetEditMode_Params
	{
	public:
		bool                                                       mEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDrop
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PX8Z[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubCategory
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_SetSubCategory_Params
	{
	public:
		class UClass*                                              mSubCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mCategory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.CloseDefaultMaterialMenu
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_CloseDefaultMaterialMenu_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetIsSelected
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.SetSubcategoryName
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_SetSubcategoryName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_BndEvt__BPW_BuildMenu_SubCategoryMaterial_K2Node_ComponentBoundEvent_0_OnDefaultMaterialChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultMaterial;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.PreConstruct
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_1_OnDefaultMaterialHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Destruct
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_BndEvt__mDefaultMaterialDropDown_K2Node_ComponentBoundEvent_2_OnSetDefaultMaterialOnAll__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragEnter
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragLeave
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.Construct
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_BndEvt__Widget_BuildMenu_SubCategoryButton_FGEditableText_60_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDragCancelled
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseEnter
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnMouseLeave
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ClearDragEvent
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_ClearDragEvent_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.EditMode
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_EditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_BndEvt__Widget_BuildMenu_SubCategoryButton_mName_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_ExecuteUbergraph_Widget_BuildMenu_SubCategoryButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSubcategoryUpdated__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnSubcategoryUpdated__DelegateSignature_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSelect__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnClearDragAndDropSelection__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnClearDragAndDropSelection__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnCatgeoryRemoved__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnCatgeoryRemoved__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnObjectDropped__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnObjectDropped__DelegateSignature_Params
	{
	public:
		class UWidget_BuildMenu_SubCategoryButton_C*               SubcategoryButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FGeometry                                           MyGemoetry;                                              // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0040(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialHovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDefaultMaterialHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_SubCategoryButton.Widget_BuildMenu_SubCategoryButton_C.OnDefaultMaterialChanged__DelegateSignature
	 */
	struct UWidget_BuildMenu_SubCategoryButton_C_OnDefaultMaterialChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultRecipe;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
