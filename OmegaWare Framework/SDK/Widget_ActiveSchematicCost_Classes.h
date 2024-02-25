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
	 * WidgetBlueprintGeneratedClass Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C
	 * Size -> 0x0029 (FullSize[0x02A9] - InheritedSize[0x0280])
	 */
	class UWidget_ActiveSchematicCost_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            mMilestonePaidOff;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_CostSlotWrapper_C*                           Widget_CostSlotWrapper;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ActiveSchematicContainer_C*                  mActiveSchematicContainer;                               // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTimerHandle                                        mUpdateHandle;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mSmallSlot;                                              // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetNumIngredientsPaidOff(int32_t* NumItems);
		void GetIngredient(struct FItemAmount* ingredient);
		void UpdateTimer();
		void Construct();
		void Destruct();
		void OnUpdateSlotSize(const class FString& updatedCvar);
		void ExecuteUbergraph_Widget_ActiveSchematicCost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
