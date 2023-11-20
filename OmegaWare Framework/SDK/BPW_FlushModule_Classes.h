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
	 * WidgetBlueprintGeneratedClass BPW_FlushModule.BPW_FlushModule_C
	 * Size -> 0x00D9 (FullSize[0x0359] - InheritedSize[0x0280])
	 */
	class UBPW_FlushModule_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_FlushHandle_C*                                  BPW_FlushHandle;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_FlushLabel_C*                                   BPW_FlushLabel;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_DarkButton_C*                                   Button_PipeNetwork;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_DarkButton_C*                                   Button_PipeSegment;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mLabelSizebox;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             mPipeNetworkSpacer;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFlush;                                                 // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFluidLerp;                                             // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFluidFilledUp;                                         // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDrainCompleted;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFlushCompleted;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFullNetworkClicked;                                    // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnThisBufferClicked;                                     // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mPipeNetworkText;                                        // 0x0328(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mPipeSegmentText;                                        // 0x0340(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       mCanFlushSegmentOnly;                                    // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetFlushButtonVisibility(bool mCanFlushSegmentOnly);
		void BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFlush__DelegateSignature(double DrainDuration);
		void BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFluidLerp__DelegateSignature(double Alpha);
		void BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_3_OnFluidFilledUp__DelegateSignature();
		void BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature();
		void BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_5_OnFlushCompleted__DelegateSignature();
		void BndEvt__BPW_DarkButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__BPW_DarkButton_101_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_FlushModule(int32_t EntryPoint);
		void OnThisBufferClicked__DelegateSignature();
		void OnFullNetworkClicked__DelegateSignature();
		void OnFlushCompleted__DelegateSignature();
		void OnDrainCompleted__DelegateSignature();
		void OnFluidFilledUp__DelegateSignature();
		void OnFluidLerp__DelegateSignature(double Alpha);
		void OnFlush__DelegateSignature(double DrainDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
