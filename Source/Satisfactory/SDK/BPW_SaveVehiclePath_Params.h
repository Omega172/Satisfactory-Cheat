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
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.UpdateButtonAndErrors
	 */
	struct UBPW_SaveVehiclePath_C_UpdateButtonAndErrors_Params
	{
	public:
		bool                                                       IsPathNameValid;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.CheckIfPathNameIsValid
	 */
	struct UBPW_SaveVehiclePath_C_CheckIfPathNameIsValid_Params
	{
	public:
		class FText                                                PathName;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LS8C[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Construct
	 */
	struct UBPW_SaveVehiclePath_C_Construct_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.Destruct
	 */
	struct UBPW_SaveVehiclePath_C_Destruct_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_3_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_BndEvt__Widget_InputBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnEscapePressed
	 */
	struct UBPW_SaveVehiclePath_C_OnEscapePressed_Params
	{	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.ExecuteUbergraph_BPW_SaveVehiclePath
	 */
	struct UBPW_SaveVehiclePath_C_ExecuteUbergraph_BPW_SaveVehiclePath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZMJ9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SaveVehiclePath.BPW_SaveVehiclePath_C.OnClosed__DelegateSignature
	 */
	struct UBPW_SaveVehiclePath_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
