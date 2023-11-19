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
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultOnAll
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnSetDefaultOnAll_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.SetSubCategory
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_SetSubCategory_Params
	{
	public:
		class UClass*                                              mSubCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              mCategory;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialHovered
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnMaterialHovered_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserTyper;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnMaterialClicked
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnMaterialClicked_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.PopulateMenu
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_PopulateMenu_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Construct
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_Construct_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.Destruct
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_Destruct_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnFocusLost
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_ExecuteUbergraph_BPW_BuildMenu_SubCategoryMaterialMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CRPK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnSetDefaultMaterialOnAll__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnSetDefaultMaterialOnAll__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDestructed__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDestructed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialHovered__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDefaultMaterialHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenu_SubCategoryMaterialMenu.BPW_BuildMenu_SubCategoryMaterialMenu_C.OnDefaultMaterialChanged__DelegateSignature
	 */
	struct UBPW_BuildMenu_SubCategoryMaterialMenu_C_OnDefaultMaterialChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultMaterial;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
