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
	 * Function Widget_HintContainer.Widget_HintContainer_C.SetKeybindingHints
	 */
	struct UWidget_HintContainer_C_SetKeybindingHints_Params
	{
	public:
		TArray<struct FStruct_KeybindingHint>                      mKeyBindingHints;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.PreConstruct
	 */
	struct UWidget_HintContainer_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.AnimateHints
	 */
	struct UWidget_HintContainer_C_AnimateHints_Params
	{	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.Construct
	 */
	struct UWidget_HintContainer_C_Construct_Params
	{	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.OnHiddenHUDModeChanged
	 */
	struct UWidget_HintContainer_C_OnHiddenHUDModeChanged_Params
	{
	public:
		bool                                                       HideHUD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.OnHideDynamicKeyShortcutsChanged
	 */
	struct UWidget_HintContainer_C_OnHideDynamicKeyShortcutsChanged_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_HintContainer.Widget_HintContainer_C.ExecuteUbergraph_Widget_HintContainer
	 */
	struct UWidget_HintContainer_C_ExecuteUbergraph_Widget_HintContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
