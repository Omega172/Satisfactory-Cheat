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
	 * WidgetBlueprintGeneratedClass Widget_EmoteMenu.Widget_EmoteMenu_C
	 * Size -> 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
	 */
	class UWidget_EmoteMenu_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_RadialMenu_C*                                Widget_RadialMenu;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ShowEmote;                                               // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<int32_t, class UClass*>                               mIndexToEmote;                                           // 0x0308(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool OnShortcutPressed(int32_t Index);
		void PlaySelectedEmote();
		void SetupEmoteData();
		void Construct();
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Widget_EmoteMenu(int32_t EntryPoint);
		void ShowEmote__DelegateSignature(int32_t EmoteIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
