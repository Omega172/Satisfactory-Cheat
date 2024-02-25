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
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetText
	 */
	struct UWidget_PlayerInteraction_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetOverwriteInteractionText
	 */
	struct UWidget_PlayerInteraction_C_SetOverwriteInteractionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldOverwriteText;                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetTextAndVisibility
	 */
	struct UWidget_PlayerInteraction_C_SetTextAndVisibility_Params
	{
	public:
		class URichTextBlock*                                      TextObject;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ParseText
	 */
	struct UWidget_PlayerInteraction_C_ParseText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Left;                                                    // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Key;                                                     // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Right;                                                   // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetInteractionTextFromUsabeActor
	 */
	struct UWidget_PlayerInteraction_C_SetInteractionTextFromUsabeActor_Params
	{	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.OnUpdateText
	 */
	struct UWidget_PlayerInteraction_C_OnUpdateText_Params
	{	};

	/**
	 * Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ExecuteUbergraph_Widget_PlayerInteraction
	 */
	struct UWidget_PlayerInteraction_C_ExecuteUbergraph_Widget_PlayerInteraction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
