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
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.UpdateTextAndValue
	 */
	struct UBPW_NumericEntry_Labeled_C_UpdateTextAndValue_Params
	{	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetNumericEntryValue
	 */
	struct UBPW_NumericEntry_Labeled_C_SetNumericEntryValue_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.SetLabel
	 */
	struct UBPW_NumericEntry_Labeled_C_SetLabel_Params
	{
	public:
		class FText                                                Label;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.PreConstruct
	 */
	struct UBPW_NumericEntry_Labeled_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.Construct
	 */
	struct UBPW_NumericEntry_Labeled_C_Construct_Params
	{	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 */
	struct UBPW_NumericEntry_Labeled_C_BndEvt__mSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.ExecuteUbergraph_BPW_NumericEntry_Labeled
	 */
	struct UBPW_NumericEntry_Labeled_C_ExecuteUbergraph_BPW_NumericEntry_Labeled_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Labeled.BPW_NumericEntry_Labeled_C.OnValueChanged__DelegateSignature
	 */
	struct UBPW_NumericEntry_Labeled_C_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
