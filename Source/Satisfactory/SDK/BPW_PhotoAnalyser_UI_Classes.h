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
	 * WidgetBlueprintGeneratedClass BPW_PhotoAnalyser_UI.BPW_PhotoAnalyser_UI_C
	 * Size -> 0x007D (FullSize[0x03D0] - InheritedSize[0x0353])
	 */
	class UBPW_PhotoAnalyser_UI_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_OKB4[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mCategoryContainer;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mChallengeContainer;                                     // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           mWindow;                                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mChallengeLibrary;                                       // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, struct FStruct_PhotoAnalyser_ChallengeCategory> mCategorizedChallenges;                                  // 0x0380(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnCategoryClicked(int32_t Index, class UWidget_ListButton_C* ListButton);
		void CategorizeChallenges();
		void CreateCategories();
		void CreateChallengeList(class UClass* Category);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__BPW_PhotoAnalyser_UI_mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void ExecuteUbergraph_BPW_PhotoAnalyser_UI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
