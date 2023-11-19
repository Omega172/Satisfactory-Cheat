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
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromVector
	 */
	struct UBPW_NumericEntry_Vector_C_SetValuesFromVector_Params
	{
	public:
		struct FVector                                             newValues;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromRotator
	 */
	struct UBPW_NumericEntry_Vector_C_SetValuesFromRotator_Params
	{
	public:
		struct FRotator                                            newValues;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.UpdateTextAndValues
	 */
	struct UBPW_NumericEntry_Vector_C_UpdateTextAndValues_Params
	{	};

	/**
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.Construct
	 */
	struct UBPW_NumericEntry_Vector_C_Construct_Params
	{	};

	/**
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.PreConstruct
	 */
	struct UBPW_NumericEntry_Vector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.ExecuteUbergraph_BPW_NumericEntry_Vector
	 */
	struct UBPW_NumericEntry_Vector_C_ExecuteUbergraph_BPW_NumericEntry_Vector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
