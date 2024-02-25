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
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutVisibility
	 */
	struct UWidget_KeyShortcuts_C_UpdateShortcutVisibility_Params
	{
	public:
		bool                                                       Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DBGW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              Icon;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UImage*                                              divider;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UImage*                                              Background;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UTextBlock*                                          Text;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Try Show Map
	 */
	struct UWidget_KeyShortcuts_C_TryShowMap_Params
	{	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.TryShowCustomizer
	 */
	struct UWidget_KeyShortcuts_C_TryShowCustomizer_Params
	{	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutText
	 */
	struct UWidget_KeyShortcuts_C_UpdateShortcutText_Params
	{	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.GetKeyForAction
	 */
	struct UWidget_KeyShortcuts_C_GetKeyForAction_Params
	{
	public:
		class FText                                                ActionName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                keyText;                                                 // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.Construct
	 */
	struct UWidget_KeyShortcuts_C_Construct_Params
	{	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.UpdateShortcutAvilability
	 */
	struct UWidget_KeyShortcuts_C_UpdateShortcutAvilability_Params
	{
	public:
		class UClass*                                              Unused;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.On Hide KeyShortcuts Updated
	 */
	struct UWidget_KeyShortcuts_C_OnHideKeyShortcutsUpdated_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_KeyShortcuts.Widget_KeyShortcuts_C.ExecuteUbergraph_Widget_KeyShortcuts
	 */
	struct UWidget_KeyShortcuts_C_ExecuteUbergraph_Widget_KeyShortcuts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
