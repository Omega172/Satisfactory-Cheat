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
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnDropdownSelectionChanged
	 */
	struct UBPW_Option_AntiAliasMethod_C_OnDropdownSelectionChanged_Params
	{
	public:
		ESelectInfo                                                SelectionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JRX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.UpdateCurrentValue
	 */
	struct UBPW_Option_AntiAliasMethod_C_UpdateCurrentValue_Params
	{	};

	/**
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Construct
	 */
	struct UBPW_Option_AntiAliasMethod_C_Construct_Params
	{	};

	/**
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.OnUpscalingMethodChanged
	 */
	struct UBPW_Option_AntiAliasMethod_C_OnUpscalingMethodChanged_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.Destruct
	 */
	struct UBPW_Option_AntiAliasMethod_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C.ExecuteUbergraph_BPW_Option_AntiAliasMethod
	 */
	struct UBPW_Option_AntiAliasMethod_C_ExecuteUbergraph_BPW_Option_AntiAliasMethod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
