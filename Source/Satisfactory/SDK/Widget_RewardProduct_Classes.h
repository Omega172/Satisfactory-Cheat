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
	 * WidgetBlueprintGeneratedClass Widget_RewardProduct.Widget_RewardProduct_C
	 * Size -> 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
	 */
	class UWidget_RewardProduct_C : public UWidget_SchematicRewardItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTexture*                                            mForcedCategoryIcon;                                     // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FItemAmount>                                 mProducts;                                               // 0x0420(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void GetFirstProductItemClass(class UClass** ItemClass);
		void IsValidRewardItem(bool* IsValid);
		class FText GetName();
		struct FSlateBrush GetIcon();
		void Construct();
		void ExecuteUbergraph_Widget_RewardProduct(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
