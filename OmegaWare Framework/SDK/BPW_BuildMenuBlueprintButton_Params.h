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
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.GetDescriptorObject
	 */
	struct UBPW_BuildMenuBlueprintButton_C_GetDescriptorObject_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.GetRightClickMenu
	 */
	struct UBPW_BuildMenuBlueprintButton_C_GetRightClickMenu_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SetIsDirectory
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SetIsDirectory_Params
	{
	public:
		bool                                                       mIsDirectoryButton;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnBlueprintSettingsClicked
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnBlueprintSettingsClicked_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.IsMultiSelectModiferDown
	 */
	struct UBPW_BuildMenuBlueprintButton_C_IsMultiSelectModiferDown_Params
	{
	public:
		struct FPointerEvent                                       Event;                                                   // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIX2[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SetSelectedColors
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SetSelectedColors_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SetSelection
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SetSelection_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnMouseButtonUp
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragAndDropStateReset
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragAndDropStateReset_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.Init
	 */
	struct UBPW_BuildMenuBlueprintButton_C_Init_Params
	{
	public:
		class UFGBlueprintDescriptor*                              mBlueprintDescriptor;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mEditMode;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BZQL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0010(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SetEditMode
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SetEditMode_Params
	{
	public:
		bool                                                       mEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDrop
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9JP[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragDetected
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnMouseButtonDown
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.Construct
	 */
	struct UBPW_BuildMenuBlueprintButton_C_Construct_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnMouseEnter
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnMouseLeave
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragCancelled
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragEnter
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragLeave
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragStopped
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragStopped_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SetIsSelected
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SetIsSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.ClearDragEvent
	 */
	struct UBPW_BuildMenuBlueprintButton_C_ClearDragEvent_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.EditMode
	 */
	struct UBPW_BuildMenuBlueprintButton_C_EditMode_Params
	{
	public:
		bool                                                       EditMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.SimulateHover
	 */
	struct UBPW_BuildMenuBlueprintButton_C_SimulateHover_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.ExecuteUbergraph_BPW_BuildMenuBlueprintButton
	 */
	struct UBPW_BuildMenuBlueprintButton_C_ExecuteUbergraph_BPW_BuildMenuBlueprintButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnDragBegin__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnDragBegin__DelegateSignature_Params
	{
	public:
		class UBPW_BuildMenuBlueprintButton_C*                     Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UBPW_Blueprint_DragAndDropRep_C*                     DragAndDropRep;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnUnhovered__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnHovered__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnSettingsClicked__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnSettingsClicked__DelegateSignature_Params
	{
	public:
		class UBPW_BuildMenuBlueprintButton_C*                     Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnClicked__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnSelect__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnSelect__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnClearSelect__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnClearSelect__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnSelectToggle__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnSelectToggle__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BuildMenuBlueprintButton.BPW_BuildMenuBlueprintButton_C.OnButtonMoved__DelegateSignature
	 */
	struct UBPW_BuildMenuBlueprintButton_C_OnButtonMoved__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ToIndex;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVV7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPanelWidget*                                        Parent;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
