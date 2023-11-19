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
	 * WidgetBlueprintGeneratedClass BPW_PipeModule.BPW_PipeModule_C
	 * Size -> 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
	 */
	class UBPW_PipeModule_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_CurrentFluidInfo_C*                             BPW_CurrentFluidInfo;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_FluidTank_C*                                    BPW_FluidTank;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_FlushModule_C*                                  BPW_FlushModule;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_PipeModule_Screen_C*                            BPW_PipeModule_Screen;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFlush;                                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        mTint;                                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mFlushing;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mFlushNetwork;                                           // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IJY5[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mCurrentStorage;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxFlowRate;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMaxStorage;                                             // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowBorder;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_OLIQ[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDrainCompleted;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mStorageName;                                            // 0x0300(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void InternalUpdateValues(double CurrentStorage, double MaxStorage, double FlowIn, double FlowOut, double MaxFlowRate);
		void SetFluidType(class UClass* fluidDescriptor);
		void UpdateValues(double CurrentStorage, double MaxStorage, double FlowIn, double FlowOut, double MaxFlowRate);
		void UpdateTank(double NewValue);
		void Construct();
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_6_OnFlush__DelegateSignature(double DrainDuration);
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_12_OnFullNetworkClicked__DelegateSignature();
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_13_OnThisBufferClicked__DelegateSignature();
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_10_OnDrainCompleted__DelegateSignature();
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_8_OnFluidLerp__DelegateSignature(double Alpha);
		void BndEvt__BPW_FlushModule_K2Node_ComponentBoundEvent_9_OnFluidFilledUp__DelegateSignature();
		void ExecuteUbergraph_BPW_PipeModule(int32_t EntryPoint);
		void OnDrainCompleted__DelegateSignature();
		void OnFlush__DelegateSignature(bool FlushNetwork, double DrainDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
