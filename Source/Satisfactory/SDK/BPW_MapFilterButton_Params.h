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
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnUnhovered
	 */
	struct UBPW_MapFilterButton_C_OnUnhovered_Params
	{	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnHovered
	 */
	struct UBPW_MapFilterButton_C_OnHovered_Params
	{	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.CustomButtonUnhovered
	 */
	struct UBPW_MapFilterButton_C_CustomButtonUnhovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.CustomButtonHovered
	 */
	struct UBPW_MapFilterButton_C_CustomButtonHovered_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.AddCustomButtons
	 */
	struct UBPW_MapFilterButton_C_AddCustomButtons_Params
	{
	public:
		TArray<class FText>                                        ButtonNames;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.GetName
	 */
	struct UBPW_MapFilterButton_C_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.SetShowOnMap
	 */
	struct UBPW_MapFilterButton_C_SetShowOnMap_Params
	{
	public:
		bool                                                       mShowOnMap;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnMouseButtonDoubleClick
	 */
	struct UBPW_MapFilterButton_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.SetActorRepresentation
	 */
	struct UBPW_MapFilterButton_C_SetActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              mActorRepresentation;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.Construct
	 */
	struct UBPW_MapFilterButton_C_Construct_Params
	{	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnMouseEnter
	 */
	struct UBPW_MapFilterButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnMouseLeave
	 */
	struct UBPW_MapFilterButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.ExecuteUbergraph_BPW_MapFilterButton
	 */
	struct UBPW_MapFilterButton_C_ExecuteUbergraph_BPW_MapFilterButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnCustomButtonUnhovered__DelegateSignature
	 */
	struct UBPW_MapFilterButton_C_OnCustomButtonUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQKH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_MapFilterButton_C*                              FilterButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnCustomButtonHovered__DelegateSignature
	 */
	struct UBPW_MapFilterButton_C_OnCustomButtonHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LVLQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPW_MapFilterButton_C*                              FilterButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnGenericClassUnhovered__DelegateSignature
	 */
	struct UBPW_MapFilterButton_C_OnGenericClassUnhovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_MapFilterButton.BPW_MapFilterButton_C.OnGenericClassHovered__DelegateSignature
	 */
	struct UBPW_MapFilterButton_C_OnGenericClassHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
