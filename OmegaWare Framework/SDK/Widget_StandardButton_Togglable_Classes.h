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
	 * WidgetBlueprintGeneratedClass Widget_StandardButton_Togglable.Widget_StandardButton_Togglable_C
	 * Size -> 0x0210 (FullSize[0x0490] - InheritedSize[0x0280])
	 */
	class UWidget_StandardButton_Togglable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_C*                            Widget_StandardButton;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mTrueText;                                               // 0x0290(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                mFalseText;                                              // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mTrueIconBrush;                                          // 0x02C0(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateBrush                                         mFalseIconBrush;                                         // 0x0390(0x00D0) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       mIsTrue;                                                 // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_79J1[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStateChanged;                                          // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsOrangeButton;                                         // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mIsLightButton;                                          // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_93FX[0x6];                                   // 0x047A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mIconHeight;                                             // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     mIconWidth;                                              // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetButtonState(bool mIsTrue);
		void PreConstruct(bool IsDesignTime);
		void Init(bool mIsTrue);
		void Construct();
		void OnButtonClicked();
		void ExecuteUbergraph_Widget_StandardButton_Togglable(int32_t EntryPoint);
		void OnStateChanged__DelegateSignature(bool IsTrue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
