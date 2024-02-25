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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_DragNDropInventory.BP_DragNDropInventory_C
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBP_DragNDropInventory_C : public UDragDropOperation
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0090(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		void Drop(const struct FPointerEvent& PointerEvent);
		void ExecuteUbergraph_BP_DragNDropInventory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
