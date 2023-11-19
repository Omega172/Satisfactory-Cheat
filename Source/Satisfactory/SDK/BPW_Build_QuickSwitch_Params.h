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
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BuildBlueprintMenu
	 */
	struct UBPW_Build_QuickSwitch_C_BuildBlueprintMenu_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.UpdateHintText
	 */
	struct UBPW_Build_QuickSwitch_C_UpdateHintText_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetBlueprints
	 */
	struct UBPW_Build_QuickSwitch_C_GetBlueprints_Params
	{
	public:
		TArray<class UFGBlueprintDescriptor*>                      Blueprints;                                              // 0x0000(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGO9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupBlueprints
	 */
	struct UBPW_Build_QuickSwitch_C_SetupBlueprints_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetCustomizerDescriptorText
	 */
	struct UBPW_Build_QuickSwitch_C_GetCustomizerDescriptorText_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapCategorySFX
	 */
	struct UBPW_Build_QuickSwitch_C_PlayTapCategorySFX_Params
	{
	public:
		int32_t                                                    MatchedRecipesIndex;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ETI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayTapBuildmodeSFX
	 */
	struct UBPW_Build_QuickSwitch_C_PlayTapBuildmodeSFX_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.PlayFastSwitchMaterialSFX
	 */
	struct UBPW_Build_QuickSwitch_C_PlayFastSwitchMaterialSFX_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetCurrentMaterialRecipe
	 */
	struct UBPW_Build_QuickSwitch_C_SetCurrentMaterialRecipe_Params
	{
	public:
		class UClass*                                              mCurrentMaterialRecipe;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupMaterialDescriptors
	 */
	struct UBPW_Build_QuickSwitch_C_SetupMaterialDescriptors_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnMenuScrolled
	 */
	struct UBPW_Build_QuickSwitch_C_OnMenuScrolled_Params
	{
	public:
		bool                                                       ScrollRight;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IG1K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnRadialMenuClosed
	 */
	struct UBPW_Build_QuickSwitch_C_OnRadialMenuClosed_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenBuildModes
	 */
	struct UBPW_Build_QuickSwitch_C_OpenBuildModes_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.CloseQuickSwitch
	 */
	struct UBPW_Build_QuickSwitch_C_CloseQuickSwitch_Params
	{
	public:
		EQuickSwitch_Modes                                         mQuickSwitchMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FYNQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.SetupRecipes
	 */
	struct UBPW_Build_QuickSwitch_C_SetupRecipes_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.GetItemRecipes
	 */
	struct UBPW_Build_QuickSwitch_C_GetItemRecipes_Params
	{
	public:
		TArray<class UClass*>                                      Recipes;                                                 // 0x0000(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Dividers;                                                // 0x0010(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VTPM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2
	 */
	struct UBPW_Build_QuickSwitch_C_InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1
	 */
	struct UBPW_Build_QuickSwitch_C_InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_Build_QuickSwitch_C_BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{
	public:
		class FText                                                ActiveName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Open
	 */
	struct UBPW_Build_QuickSwitch_C_Open_Params
	{
	public:
		class UClass*                                              mItemDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ShowRadialMenu
	 */
	struct UBPW_Build_QuickSwitch_C_ShowRadialMenu_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.Destruct
	 */
	struct UBPW_Build_QuickSwitch_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OpenWithBlueprints
	 */
	struct UBPW_Build_QuickSwitch_C_OpenWithBlueprints_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.ExecuteUbergraph_BPW_Build_QuickSwitch
	 */
	struct UBPW_Build_QuickSwitch_C_ExecuteUbergraph_BPW_Build_QuickSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBlueprintClosed__DelegateSignature
	 */
	struct UBPW_Build_QuickSwitch_C_OnBlueprintClosed__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              Blueprint;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildModeClosed__DelegateSignature
	 */
	struct UBPW_Build_QuickSwitch_C_OnBuildModeClosed__DelegateSignature_Params
	{
	public:
		class UClass*                                              buildMode;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C.OnBuildingClose__DelegateSignature
	 */
	struct UBPW_Build_QuickSwitch_C_OnBuildingClose__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
