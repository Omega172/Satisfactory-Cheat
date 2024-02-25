#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * WidgetBlueprintGeneratedClass Widget_ChatMessageRow.Widget_ChatMessageRow_C
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class UWidget_ChatMessageRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextBlock*                                      mChatRichText;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPlayerIcon;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mPlayerNameText;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ChatWindow_C*                                mChatWindow;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FChatMessageStruct                                  mChatMessage;                                            // 0x02A8(0x0048) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetTextMessage();
		void SetPlayerNameColor();
		void SetPlayerIconColor();
		void SetPlayerName();
		struct FSlateColor GetPlayerNameColor();
		class FText GetPlayerName();
		class FText GetChatText();
		void Construct();
		void RemoveWidgetAfterDelay(double Delay);
		void ExecuteUbergraph_Widget_ChatMessageRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
