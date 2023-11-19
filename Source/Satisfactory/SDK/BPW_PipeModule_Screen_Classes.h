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
	 * WidgetBlueprintGeneratedClass BPW_PipeModule_Screen.BPW_PipeModule_Screen_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UBPW_PipeModule_Screen_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextBlock*                                      mDrainRateTextBlock;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mFillRateTextBlock;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mNetTextBlock;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mDrainRateText;                                          // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mNetText;                                                // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mFillRateText;                                           // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetNetText(const class FText& mNetText);
		void SetDrainRateText(const class FText& mDrainRateText);
		void SetFillRateText(const class FText& mFillRateText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_PipeModule_Screen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
