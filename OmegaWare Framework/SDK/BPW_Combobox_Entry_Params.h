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
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.mSetIsSelected
	 */
	struct UBPW_Combobox_Entry_C_mSetIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnMouseButtonUp
	 */
	struct UBPW_Combobox_Entry_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnSelected
	 */
	struct UBPW_Combobox_Entry_C_OnSelected_Params
	{	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnUnselected
	 */
	struct UBPW_Combobox_Entry_C_OnUnselected_Params
	{	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnMouseEnter
	 */
	struct UBPW_Combobox_Entry_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnMouseLeave
	 */
	struct UBPW_Combobox_Entry_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.ExecuteUbergraph_BPW_Combobox_Entry
	 */
	struct UBPW_Combobox_Entry_C_ExecuteUbergraph_BPW_Combobox_Entry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_Combobox_Entry_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnHovered__DelegateSignature
	 */
	struct UBPW_Combobox_Entry_C_OnHovered__DelegateSignature_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Combobox_Entry.BPW_Combobox_Entry_C.OnClicked__DelegateSignature
	 */
	struct UBPW_Combobox_Entry_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
