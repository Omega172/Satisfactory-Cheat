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
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.UpdateMaterialText
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_UpdateMaterialText_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetSubCategory
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_SetSubCategory_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mCategory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OpenCloseMenu
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_OpenCloseMenu_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.GetMenuContent
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_GetMenuContent_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnMouseButtonUp
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetStyling
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_SetStyling_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4ZF[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__Button_76_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetupBindings
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_SetupBindings_Params
	{
	public:
		class UBPW_BuildMenu_SubCategoryMaterialMenu_C*            MaterialMenu;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialChanged
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_DefaultMaterialChanged_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultMaterial;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.DefaultMaterialHovered
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_DefaultMaterialHovered_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.Destruct
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_Destruct_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_BndEvt__mMenuAnchor_K2Node_ComponentBoundEvent_4_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.SetDefaultMaterialOnAll
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_SetDefaultMaterialOnAll_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ERF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialHovered__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_OnDefaultMaterialHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterial.BPW_BuildMenu_SubCategoryMaterial_C.OnDefaultMaterialChanged__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterial_C_OnDefaultMaterialChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultMaterial;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
