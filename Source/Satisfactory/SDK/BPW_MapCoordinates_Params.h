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
	 * Function BPW_MapCoordinates.BPW_MapCoordinates_C.Set Position
	 */
	struct UBPW_MapCoordinates_C_SetPosition_Params
	{
	public:
		struct FVector2D                                           mCoordinates;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapCoordinates.BPW_MapCoordinates_C.Destruct
	 */
	struct UBPW_MapCoordinates_C_Destruct_Params
	{	};

	/**
	 * Function BPW_MapCoordinates.BPW_MapCoordinates_C.BndEvt__BPW_MapCoordinates_EditableText_92_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_MapCoordinates_C_BndEvt__BPW_MapCoordinates_EditableText_92_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapCoordinates.BPW_MapCoordinates_C.ExecuteUbergraph_BPW_MapCoordinates
	 */
	struct UBPW_MapCoordinates_C_ExecuteUbergraph_BPW_MapCoordinates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NFJT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_MapCoordinates.BPW_MapCoordinates_C.OnGoToWorldPosition__DelegateSignature
	 */
	struct UBPW_MapCoordinates_C_OnGoToWorldPosition__DelegateSignature_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
