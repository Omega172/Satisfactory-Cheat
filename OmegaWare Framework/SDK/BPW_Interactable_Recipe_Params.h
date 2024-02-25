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
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.GetToDoListMenu
	 */
	struct UBPW_Interactable_Recipe_C_GetToDoListMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.OnMouseButtonUp
	 */
	struct UBPW_Interactable_Recipe_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.Construct
	 */
	struct UBPW_Interactable_Recipe_C_Construct_Params
	{	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Interactable_Recipe_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_Interactable_Recipe_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.BndEvt__BPW_Interactable_Recipe_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_Interactable_Recipe_C_BndEvt__BPW_Interactable_Recipe_mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Interactable_Recipe.BPW_Interactable_Recipe_C.ExecuteUbergraph_BPW_Interactable_Recipe
	 */
	struct UBPW_Interactable_Recipe_C_ExecuteUbergraph_BPW_Interactable_Recipe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MTUU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
