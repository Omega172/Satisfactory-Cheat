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
	 * Function BPW_SessionRow.BPW_SessionRow_C.GetSessionIcon
	 */
	struct UBPW_SessionRow_C_GetSessionIcon_Params
	{
	public:
		struct FSessionSaveStruct                                  Session;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.SetIsDisabled
	 */
	struct UBPW_SessionRow_C_SetIsDisabled_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LIHG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.SetIsSelected
	 */
	struct UBPW_SessionRow_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.IsButtonHovered
	 */
	struct UBPW_SessionRow_C_IsButtonHovered_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.GetSession
	 */
	struct UBPW_SessionRow_C_GetSession_Params
	{
	public:
		class UObject*                                             mListObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.GetMostRecentSaveFromSession
	 */
	struct UBPW_SessionRow_C_GetMostRecentSaveFromSession_Params
	{
	public:
		struct FSessionSaveStruct                                  mSession;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.GetSaveNameAndSaveTime
	 */
	struct UBPW_SessionRow_C_GetSaveNameAndSaveTime_Params
	{
	public:
		struct FSessionSaveStruct                                  mSession;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.GetSessionName
	 */
	struct UBPW_SessionRow_C_GetSessionName_Params
	{
	public:
		struct FSessionSaveStruct                                  mSession;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.UpdateButton
	 */
	struct UBPW_SessionRow_C_UpdateButton_Params
	{
	public:
		struct FSessionSaveStruct                                  mSaveSession;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.BP_OnEntryReleased
	 */
	struct UBPW_SessionRow_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_SessionRow_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.OnListItemObjectSet
	 */
	struct UBPW_SessionRow_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.Start Autoscroll Session Row
	 */
	struct UBPW_SessionRow_C_StartAutoscrollSessionRow_Params
	{	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.Stop Autoscroll Session Row
	 */
	struct UBPW_SessionRow_C_StopAutoscrollSessionRow_Params
	{	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_SessionRow_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.PreConstruct
	 */
	struct UBPW_SessionRow_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SessionRow.BPW_SessionRow_C.ExecuteUbergraph_BPW_SessionRow
	 */
	struct UBPW_SessionRow_C_ExecuteUbergraph_BPW_SessionRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
