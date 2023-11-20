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
	 * WidgetBlueprintGeneratedClass BPW_Reward_Card.BPW_Reward_Card_C
	 * Size -> 0x00A9 (FullSize[0x0329] - InheritedSize[0x0280])
	 */
	class UBPW_Reward_Card_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          mAmount;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mIconPreview;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mItemName;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mItemNameText;                                           // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UObject*                                             mIconPreviewTexture;                                     // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FFUnlockDataStruct                                  mUnlockDataStruct;                                       // 0x02C0(0x0050) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                mAmountText;                                             // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsDarkMode;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetIsDarkMode(bool mIsDarkMode);
		void SetAmountText(const struct FFUnlockDataStruct& UnlockDataStruct);
		void SetName(const struct FFUnlockDataStruct& UnlockDataStruct);
		void SetIcon(const struct FFUnlockDataStruct& UnlockDataStruct);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_Reward_Card(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
