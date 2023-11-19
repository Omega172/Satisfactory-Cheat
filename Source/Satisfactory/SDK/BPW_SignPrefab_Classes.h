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
	 * WidgetBlueprintGeneratedClass BPW_SignPrefab.BPW_SignPrefab_C
	 * Size -> 0x0011 (FullSize[0x0429] - InheritedSize[0x0418])
	 */
	class UBPW_SignPrefab_C : public UFGSignPrefabWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_SignLayoutManager_C*                            mLayoutManager;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowBackground;                                         // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetLayoutManager(class UBPW_SignLayoutManager_C* LayoutManager);
		void GetActiveKeys(TArray<class FString>* ImageKeys, TArray<class FString>* TextKeys, bool* Success);
		void SetShowBackground(bool ShowBackground);
		void UpdateLayoutData(const struct FPrefabSignData& SignPrefabData);
		void GetLayoutManager(class UBPW_SignLayoutManager_C** mLayoutManager);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BPW_SignPrefab(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
