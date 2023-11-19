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
	 * Function BPW_RadarTower.BPW_RadarTower_C.UpdateZoomSlider
	 */
	struct UBPW_RadarTower_C_UpdateZoomSlider_Params
	{	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.NormalizedValueToZoomValue
	 */
	struct UBPW_RadarTower_C_NormalizedValueToZoomValue_Params
	{
	public:
		double                                                     NormalizedValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ZoomX;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ZoomY;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.UpdatePowerState
	 */
	struct UBPW_RadarTower_C_UpdatePowerState_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.UpdateName
	 */
	struct UBPW_RadarTower_C_UpdateName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.Construct
	 */
	struct UBPW_RadarTower_C_Construct_Params
	{	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UBPW_RadarTower_C_BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature
	 */
	struct UBPW_RadarTower_C_BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_RadarTower_C_BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_RadarTower.BPW_RadarTower_C.ExecuteUbergraph_BPW_RadarTower
	 */
	struct UBPW_RadarTower_C_ExecuteUbergraph_BPW_RadarTower_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVTQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
