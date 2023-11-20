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
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnMouseButtonDown
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragDetected
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.PreConstruct
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDragCanceled
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnDragCanceled_Params
	{
	public:
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnDropped
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnDropped_Params
	{
	public:
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_ExecuteUbergraph_BPW_DragAndDropList_ItemWrapper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDetected__DelegateSignature
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragDetected__DelegateSignature_Params
	{
	public:
		class UBPW_DragAndDropList_ItemWrapper_C*                  ListWrapper;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragDropped__DelegateSignature
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragDropped__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_DragAndDropList_ItemWrapper.BPW_DragAndDropList_ItemWrapper_C.OnWrapperDragCancelled__DelegateSignature
	 */
	struct UBPW_DragAndDropList_ItemWrapper_C_OnWrapperDragCancelled__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
