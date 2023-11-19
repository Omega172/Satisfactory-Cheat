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
	 * Function BPW_Customiser.BPW_Customiser_C.ForceCloseColorPicker
	 */
	struct UBPW_Customiser_C_ForceCloseColorPicker_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.ScrollToLastPos
	 */
	struct UBPW_Customiser_C_ScrollToLastPos_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.SetLastScrollPos
	 */
	struct UBPW_Customiser_C_SetLastScrollPos_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSetDefaultOnAllClicked
	 */
	struct UBPW_Customiser_C_OnSetDefaultOnAllClicked_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.ClearAndHideSearchResults
	 */
	struct UBPW_Customiser_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.SetupButtonBindings
	 */
	struct UBPW_Customiser_C_SetupButtonBindings_Params
	{
	public:
		class UBPW_CustomiserSettingsButton_C*                     CustomizerButton;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSearch
	 */
	struct UBPW_Customiser_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnCategoryClicked
	 */
	struct UBPW_Customiser_C_OnCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74FM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.SetupCategories
	 */
	struct UBPW_Customiser_C_SetupCategories_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSettingClicked
	 */
	struct UBPW_Customiser_C_OnSettingClicked_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ButtonIndex;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SATZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.ColorPickerClosed
	 */
	struct UBPW_Customiser_C_ColorPickerClosed_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSettingEditClicked
	 */
	struct UBPW_Customiser_C_OnSettingEditClicked_Params
	{
	public:
		class UClass*                                              CustomiserDescriptor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UBPW_CustomiserSettingsButton_C*                     SettingsEditWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OpenColorPicker
	 */
	struct UBPW_Customiser_C_OpenColorPicker_Params
	{
	public:
		class UClass*                                              CustomiserDescriotor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.SetupPreviewDropdown
	 */
	struct UBPW_Customiser_C_SetupPreviewDropdown_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSettingUnhovered
	 */
	struct UBPW_Customiser_C_OnSettingUnhovered_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSettingHovered
	 */
	struct UBPW_Customiser_C_OnSettingHovered_Params
	{
	public:
		class UClass*                                              customizationRecipe;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GTS6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.Populate Settings
	 */
	struct UBPW_Customiser_C_PopulateSettings_Params
	{
	public:
		class UClass*                                              CategoryClass;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.Construct
	 */
	struct UBPW_Customiser_C_Construct_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnColorPickerCanceled
	 */
	struct UBPW_Customiser_C_OnColorPickerCanceled_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.Init
	 */
	struct UBPW_Customiser_C_Init_Params
	{
	public:
		TArray<class UClass*>                                      AvailableCustomizerRecipes;                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature
	 */
	struct UBPW_Customiser_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_0_OnSearchTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature
	 */
	struct UBPW_Customiser_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_3_OnSearchComittedEnter__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.Destruct
	 */
	struct UBPW_Customiser_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.ExecuteUbergraph_BPW_Customiser
	 */
	struct UBPW_Customiser_C_ExecuteUbergraph_BPW_Customiser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnColorPickerClosed__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnColorPickerClosed__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnColorPickerOpened__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnColorPickerOpened__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSetDefualtMaterialOnAllClicked__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnSetDefualtMaterialOnAllClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnSwatchUpdated__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnSwatchUpdated__DelegateSignature_Params
	{
	public:
		unsigned char                                              SlotIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X3Z4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFactoryCustomizationColorSlot                      slotData;                                                // 0x0004(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnStyleUnhovered__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnStyleUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnStyleHovered__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnStyleHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Customiser.BPW_Customiser_C.OnStyleSelected__DelegateSignature
	 */
	struct UBPW_Customiser_C_OnStyleSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
