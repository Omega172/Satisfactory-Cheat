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
	 * Function Widget_TrainButton.Widget_TrainButton_C.SetTitle
	 */
	struct UWidget_TrainButton_C_SetTitle_Params
	{
	public:
		class FText                                                mTitle;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.PreConstruct
	 */
	struct UWidget_TrainButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.Construct
	 */
	struct UWidget_TrainButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.CheckNextStop
	 */
	struct UWidget_TrainButton_C_CheckNextStop_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.Destruct
	 */
	struct UWidget_TrainButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_TrainButton_C_BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.ExecuteUbergraph_Widget_TrainButton
	 */
	struct UWidget_TrainButton_C_ExecuteUbergraph_Widget_TrainButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VMOV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_TrainButton_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.OnHovered__DelegateSignature
	 */
	struct UWidget_TrainButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		class AFGTrain*                                            train;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TrainButton.Widget_TrainButton_C.OnClicked__DelegateSignature
	 */
	struct UWidget_TrainButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWidget_TrainButton_C*                               Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
