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
	 * WidgetBlueprintGeneratedClass BPW_Tetromino_Box.BPW_Tetromino_Box_C
	 * Size -> 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
	 */
	class UBPW_Tetromino_Box_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_MoveOut;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_MoveIn;                                             // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_BlockPlaced;                                        // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_CloseBox;                                           // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_TetrominoPlacementGrid_C*                       mPlacementGrid;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Tetromino_DescriptorRandomizer_C*               mDescRandomizer;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBlockDropped;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFIllAmountChanged;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBoxClosed;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FIntVector2D                                        mGridSize;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    mBlockerAmount;                                          // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOKF[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIntVector2D>                                mStaticBlockers;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLinearColor                                        mColor;                                                  // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        mReliefColor;                                            // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTBPW_Tetromino_Box();
		void CloseBox();
		void ClearGrid();
		void SetDescRandomizer(class UBPW_Tetromino_DescriptorRandomizer_C* mDescRandomizer);
		void OnLidClosed();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__mPlacementGrid_K2Node_ComponentBoundEvent_2_OnBlockPlaced__DelegateSignature(int32_t PointsAdded, double FillAmountAdded);
		void OnBoxClosedCompleted();
		void OnAnimMoveOutCompleted();
		void ExecuteUbergraph_BPW_Tetromino_Box(int32_t EntryPoint);
		void OnBoxClosed__DelegateSignature();
		void OnFIllAmountChanged__DelegateSignature(double FillAmount);
		void OnBlockDropped__DelegateSignature(int32_t Points, double FillAmount);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
