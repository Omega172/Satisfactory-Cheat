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
	 * WidgetBlueprintGeneratedClass Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C
	 * Size -> 0x00A0 (FullSize[0x0320] - InheritedSize[0x0280])
	 */
	class UWidget_LetterSpacedLetter_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SpawnAnim;                                               // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              mOverlayBlock;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTextBlock;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mText;                                                   // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateFontInfo                                      mFont;                                                   // 0x02B8(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        mAnimColor;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTextAndFont(const class FText& Text, const struct FSlateFontInfo& Font);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Widget_LetterSpacedLetter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
