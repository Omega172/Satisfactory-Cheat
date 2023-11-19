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
	 * WidgetBlueprintGeneratedClass BPW_CurrentFluidInfo.BPW_CurrentFluidInfo_C
	 * Size -> 0x0090 (FullSize[0x0310] - InheritedSize[0x0280])
	 */
	class UBPW_CurrentFluidInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          mCurrentContainerType;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mCurrentFluidAmountText;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mFluidIcon;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mFluidName;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             mFluidIconObject;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mFluidNameText;                                          // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mCurrentAmountText;                                      // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                mCurrentTypeOfContainerText;                             // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mMaxAmountText;                                          // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetCurrentContainerTypeText(const class FText& mCurrentTypeOfContainerText);
		void SetCurrentAmountText(const class FText& mCurrentAmountText, const class FText& mMaxAmountText);
		void SetFluidNameText(const class FText& mFluidNameText);
		void SetFluidIconObject(class UObject* mFluidIconObject);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_CurrentFluidInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
