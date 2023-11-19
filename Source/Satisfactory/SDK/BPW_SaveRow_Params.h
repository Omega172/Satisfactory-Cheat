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
	 * Function BPW_SaveRow.BPW_SaveRow_C.IsButtonSelected
	 */
	struct UBPW_SaveRow_C_IsButtonSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.IsButtonHovered
	 */
	struct UBPW_SaveRow_C_IsButtonHovered_Params
	{
	public:
		bool                                                       mIsHovered;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.SetWarningIconVisibility
	 */
	struct UBPW_SaveRow_C_SetWarningIconVisibility_Params
	{
	public:
		struct FSaveHeader                                         SaveGame;                                                // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.GetPlayDurationAndSaveTime
	 */
	struct UBPW_SaveRow_C_GetPlayDurationAndSaveTime_Params
	{
	public:
		struct FSaveHeader                                         mSaveHeader;                                             // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.GetSaveName
	 */
	struct UBPW_SaveRow_C_GetSaveName_Params
	{
	public:
		struct FSaveHeader                                         mSaveHeader;                                             // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.GetSave
	 */
	struct UBPW_SaveRow_C_GetSave_Params
	{
	public:
		class UObject*                                             mListObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.UpdateButton
	 */
	struct UBPW_SaveRow_C_UpdateButton_Params
	{
	public:
		struct FSaveHeader                                         mSaveHeader;                                             // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.BP_OnEntryReleased
	 */
	struct UBPW_SaveRow_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.BP_OnItemExpansionChanged
	 */
	struct UBPW_SaveRow_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.OnListItemObjectSet
	 */
	struct UBPW_SaveRow_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.BP_OnItemSelectionChanged
	 */
	struct UBPW_SaveRow_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SaveRow.BPW_SaveRow_C.ExecuteUbergraph_BPW_SaveRow
	 */
	struct UBPW_SaveRow_C_ExecuteUbergraph_BPW_SaveRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
