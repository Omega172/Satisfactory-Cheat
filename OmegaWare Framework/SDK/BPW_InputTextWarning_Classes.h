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
	 * WidgetBlueprintGeneratedClass BPW_InputTextWarning.BPW_InputTextWarning_C
	 * Size -> 0x0090 (FullSize[0x0310] - InheritedSize[0x0280])
	 */
	class UBPW_InputTextWarning_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              mWarningIcon;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           mSize;                                                   // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FStruct_TooltipText                                 mWarningTooltip;                                         // 0x02A0(0x0030) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FStruct_TooltipText                                 mErrorTooltip;                                           // 0x02D0(0x0030) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		EInputTextWarningState                                     mState;                                                  // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_APZE[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            mWarningMaterial;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		struct FStruct_TooltipText GetCurrentStatesTooltip();
		class UWidget* GetToolTip();
		void SetState(EInputTextWarningState mState);
		void SetErrorTooltip(const struct FStruct_TooltipText& mErrorTooltip);
		void SetWarningTooltip(const struct FStruct_TooltipText& mWarningTooltip);
		void SetSize(const struct FVector2D& mSize);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_InputTextWarning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
