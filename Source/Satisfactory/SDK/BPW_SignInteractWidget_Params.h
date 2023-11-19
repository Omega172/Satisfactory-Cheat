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
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnGlossinessSettingChanged
	 */
	struct UBPW_SignInteractWidget_C_OnGlossinessSettingChanged_Params
	{
	public:
		double                                                     NewGlossiness;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEmissionSettingChanged
	 */
	struct UBPW_SignInteractWidget_C_OnEmissionSettingChanged_Params
	{
	public:
		double                                                     mNewEmission;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfTextSettingHasFocus
	 */
	struct UBPW_SignInteractWidget_C_CheckIfTextSettingHasFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X7RZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Set Sign Data
	 */
	struct UBPW_SignInteractWidget_C_SetSignData_Params
	{
	public:
		struct FPrefabSignData                                     mSignData;                                               // 0x0000(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.CheckIfUsesBackgroundImage
	 */
	struct UBPW_SignInteractWidget_C_CheckIfUsesBackgroundImage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7MH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GenerateSettings
	 */
	struct UBPW_SignInteractWidget_C_GenerateSettings_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupMaterialSettings
	 */
	struct UBPW_SignInteractWidget_C_SetupMaterialSettings_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.HidePopupBackground
	 */
	struct UBPW_SignInteractWidget_C_HidePopupBackground_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetPopupBackgroundVisibility
	 */
	struct UBPW_SignInteractWidget_C_SetPopupBackgroundVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorSettingChanged
	 */
	struct UBPW_SignInteractWidget_C_OnColorSettingChanged_Params
	{
	public:
		struct FLinearColor                                        ForegroundColor;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        BackgroundColor;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        AuxilliaryColor;                                         // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnColorPickerClosed
	 */
	struct UBPW_SignInteractWidget_C_OnColorPickerClosed_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenColorPicker
	 */
	struct UBPW_SignInteractWidget_C_OpenColorPicker_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupColors
	 */
	struct UBPW_SignInteractWidget_C_SetupColors_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageBrowserClosed
	 */
	struct UBPW_SignInteractWidget_C_OnImageBrowserClosed_Params
	{
	public:
		class UObject*                                             TextureObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageID;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OpenImageBrowser
	 */
	struct UBPW_SignInteractWidget_C_OpenImageBrowser_Params
	{
	public:
		class FString                                              IconKey;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IconID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnImageSettingChanged
	 */
	struct UBPW_SignInteractWidget_C_OnImageSettingChanged_Params
	{
	public:
		class FString                                              IconKey;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    IconID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1SNT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupIcons
	 */
	struct UBPW_SignInteractWidget_C_SetupIcons_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.UpdateLayoutThumnails
	 */
	struct UBPW_SignInteractWidget_C_UpdateLayoutThumnails_Params
	{
	public:
		bool                                                       MarkAsChangesWereMade;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IU9L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnLayoutButtonClicked
	 */
	struct UBPW_SignInteractWidget_C_OnLayoutButtonClicked_Params
	{
	public:
		class UClass*                                              SignPrefab;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupLayoutThumnails
	 */
	struct UBPW_SignInteractWidget_C_SetupLayoutThumnails_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnTextSettingChanged
	 */
	struct UBPW_SignInteractWidget_C_OnTextSettingChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.GetTextData
	 */
	struct UBPW_SignInteractWidget_C_GetTextData_Params
	{
	public:
		TMap<class FString, class FString>                         TextData;                                                // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetupTexts
	 */
	struct UBPW_SignInteractWidget_C_SetupTexts_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SaveData
	 */
	struct UBPW_SignInteractWidget_C_SaveData_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.SetLayout
	 */
	struct UBPW_SignInteractWidget_C_SetLayout_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_SignInteractWidget_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_SignInteractWidget_C_BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBPW_SignInteractWidget_C_BndEvt__mSettingsTypeButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_SignInteractWidget_C_BndEvt__mCopyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBPW_SignInteractWidget_C_BndEvt__mPasteButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.Construct
	 */
	struct UBPW_SignInteractWidget_C_Construct_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnFactoryClipboardPasted
	 */
	struct UBPW_SignInteractWidget_C_OnFactoryClipboardPasted_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.OnEscapePressed
	 */
	struct UBPW_SignInteractWidget_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_SignInteractWidget.BPW_SignInteractWidget_C.ExecuteUbergraph_BPW_SignInteractWidget
	 */
	struct UBPW_SignInteractWidget_C_ExecuteUbergraph_BPW_SignInteractWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
