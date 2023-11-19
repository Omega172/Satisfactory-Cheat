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
	 * Function BPW_TrainMenuLabel.BPW_TrainMenuLabel_C.SetCollapsableWidget
	 */
	struct UBPW_TrainMenuLabel_C_SetCollapsableWidget_Params
	{
	public:
		class UWidget*                                             mCollapseWidget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TrainMenuLabel.BPW_TrainMenuLabel_C.SetText
	 */
	struct UBPW_TrainMenuLabel_C_SetText_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_TrainMenuLabel.BPW_TrainMenuLabel_C.PreConstruct
	 */
	struct UBPW_TrainMenuLabel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_TrainMenuLabel.BPW_TrainMenuLabel_C.BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_TrainMenuLabel_C_BndEvt__mButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_TrainMenuLabel.BPW_TrainMenuLabel_C.ExecuteUbergraph_BPW_TrainMenuLabel
	 */
	struct UBPW_TrainMenuLabel_C_ExecuteUbergraph_BPW_TrainMenuLabel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
