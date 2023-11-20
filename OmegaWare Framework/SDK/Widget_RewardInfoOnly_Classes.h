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
	 * WidgetBlueprintGeneratedClass Widget_RewardInfoOnly.Widget_RewardInfoOnly_C
	 * Size -> 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
	 */
	class UWidget_RewardInfoOnly_C : public UWidget_SchematicRewardItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTexture*                                            mUnlockIcon;                                             // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UTexture*                                            mCategoryIcon;                                           // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		struct FSlateBrush GetIcon();
		void IsValidRewardItem(bool* IsValid);
		void Construct();
		void ExecuteUbergraph_Widget_RewardInfoOnly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
