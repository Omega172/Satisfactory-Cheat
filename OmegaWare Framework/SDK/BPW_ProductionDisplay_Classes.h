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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BPW_ProductionDisplay.BPW_ProductionDisplay_C
	 * Size -> 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
	 */
	class UBPW_ProductionDisplay_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        mContainer;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InventorySlot_DropArea_C*                    Widget_InventorySlot_DropArea;                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_ListAlignment                                            mAlignment;                                              // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_1N12[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_ProductionDisplayModule>             mProductionModules;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UBPW_ProductionDisplayModule_Production_C*           mProductionWidget;                                       // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UBPW_ProductionDisplayModule_InputOutput_C*          mInputWidget;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UBPW_ProductionDisplayModule_InputOutput_C*          mOutputWidget;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     mCycleMultiplier;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mModuleOffset;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIsIdle(bool mIsIdle);
		void UpdateFluxPower(double FluxPowerMin, double FluxPowerMax);
		void CreateSingleModule(const struct FStruct_ProductionDisplayModule& ProductionModule);
		void AddModule(const struct FStruct_ProductionDisplayModule& ProductionModule);
		void SetResourceIcon(class UTexture2D* Texture);
		void GetInputSlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success);
		void GetOutputSlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success);
		void ManuallySetItemAmount(E_InputOutput InputOrOutput, const struct FItemAmount& ItemAmount);
		void SetupInputOutputInventories(class UFGInventoryComponent* InputInventoryComponent, class UFGInventoryComponent* OutputInventoryComponent);
		void UpdateRecipe(class UClass* recipe);
		void UpdatePerMinStat(double CycleTime);
		void UpdateProgress(double InPercent);
		void UpdateProductionStats(double Power, double CycleTime, double efficiency);
		void CreateSpacer(double Offset, double Size);
		void CreateModulesFromArray();
		void PreConstruct(bool IsDesignTime);
		void OnUpdateDropArea();
		void ExecuteUbergraph_BPW_ProductionDisplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
