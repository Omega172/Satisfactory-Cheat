﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadVector4
	 */
	struct UNiagaraDataChannelReader_ReadVector4_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EOKS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadVector2D
	 */
	struct UNiagaraDataChannelReader_ReadVector2D_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ITYR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadVector
	 */
	struct UNiagaraDataChannelReader_ReadVector_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RFTW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadQuat
	 */
	struct UNiagaraDataChannelReader_ReadQuat_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W2ER[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadLinearColor
	 */
	struct UNiagaraDataChannelReader_ReadLinearColor_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadInt
	 */
	struct UNiagaraDataChannelReader_ReadInt_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadFloat
	 */
	struct UNiagaraDataChannelReader_ReadFloat_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E685[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.ReadBool
	 */
	struct UNiagaraDataChannelReader_ReadBool_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.Num
	 */
	struct UNiagaraDataChannelReader_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelReader.InitAccess
	 */
	struct UNiagaraDataChannelReader_InitAccess_Params
	{
	public:
		class UActorComponent*                                     OwningComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteVector4
	 */
	struct UNiagaraDataChannelWriter_WriteVector4_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6UA0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            InData;                                                  // 0x0010(0x0020)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteVector2D
	 */
	struct UNiagaraDataChannelWriter_WriteVector2D_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FBZS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteVector
	 */
	struct UNiagaraDataChannelWriter_WriteVector_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZRQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InData;                                                  // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	 */
	struct UNiagaraDataChannelWriter_WriteSpawnInfo_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNiagaraSpawnInfo                                   InData;                                                  // 0x000C(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteQuat
	 */
	struct UNiagaraDataChannelWriter_WriteQuat_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7KK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               InData;                                                  // 0x0010(0x0020)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteLinearColor
	 */
	struct UNiagaraDataChannelWriter_WriteLinearColor_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InData;                                                  // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteInt
	 */
	struct UNiagaraDataChannelWriter_WriteInt_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InData;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteFloat
	 */
	struct UNiagaraDataChannelWriter_WriteFloat_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G1D8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     InData;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.WriteBool
	 */
	struct UNiagaraDataChannelWriter_WriteBool_Params
	{
	public:
		class FName                                                VarName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InData;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.Num
	 */
	struct UNiagaraDataChannelWriter_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelWriter.InitWrite
	 */
	struct UNiagaraDataChannelWriter_InitWrite_Params
	{
	public:
		class UActorComponent*                                     OwningComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibleToGame;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibleToCPU;                                           // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibleToGPU;                                           // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000F(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	 */
	struct UNiagaraDataChannelHandler_GetDataChannelWriter_Params
	{
	public:
		class UNiagaraDataChannelWriter*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	 */
	struct UNiagaraDataChannelHandler_GetDataChannelReader_Params
	{
	public:
		class UNiagaraDataChannelReader*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	 */
	struct UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params
	{
	public:
		class AActor*                                              InSource;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             Reason;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	 */
	struct UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UserParameterName;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                GraphName;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                RemapName;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	 */
	struct ANiagaraActor_SetDestroyOnSystemFinish_Params
	{
	public:
		bool                                                       bShouldDestroyOnSystemFinish;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraActor.OnNiagaraSystemFinished
	 */
	struct ANiagaraActor_OnNiagaraSystemFinished_Params
	{
	public:
		class UNiagaraComponent*                                   FinishedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec4
	 */
	struct UNiagaraComponent_SetVariableVec4_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NBJT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec3
	 */
	struct UNiagaraComponent_SetVariableVec3_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec2
	 */
	struct UNiagaraComponent_SetVariableVec2_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	 */
	struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget*                                TextureRenderTarget;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableTexture
	 */
	struct UNiagaraComponent_SetVariableTexture_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableStaticMesh
	 */
	struct UNiagaraComponent_SetVariableStaticMesh_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         InValue;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableQuat
	 */
	struct UNiagaraComponent_SetVariableQuat_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VV3D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariablePosition
	 */
	struct UNiagaraComponent_SetVariablePosition_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableObject
	 */
	struct UNiagaraComponent_SetVariableObject_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableMatrix
	 */
	struct UNiagaraComponent_SetVariableMatrix_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EOIY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             InValue;                                                 // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableMaterial
	 */
	struct UNiagaraComponent_SetVariableMaterial_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableLinearColor
	 */
	struct UNiagaraComponent_SetVariableLinearColor_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableInt
	 */
	struct UNiagaraComponent_SetVariableInt_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableFloat
	 */
	struct UNiagaraComponent_SetVariableFloat_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableBool
	 */
	struct UNiagaraComponent_SetVariableBool_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableActor
	 */
	struct UNiagaraComponent_SetVariableActor_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetTickBehavior
	 */
	struct UNiagaraComponent_SetTickBehavior_Params
	{
	public:
		ENiagaraTickBehavior                                       NewTickBehavior;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetSystemFixedBounds
	 */
	struct UNiagaraComponent_SetSystemFixedBounds_Params
	{
	public:
		struct FBox                                                LocalBounds;                                             // 0x0000(0x0038)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetSimCache
	 */
	struct UNiagaraComponent_SetSimCache_Params
	{
	public:
		class UNiagaraSimCache*                                    SimCache;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetSystem;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetSeekDelta
	 */
	struct UNiagaraComponent_SetSeekDelta_Params
	{
	public:
		float                                                      InSeekDelta;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetRenderingEnabled
	 */
	struct UNiagaraComponent_SetRenderingEnabled_Params
	{
	public:
		bool                                                       bInRenderingEnabled;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetRandomSeedOffset
	 */
	struct UNiagaraComponent_SetRandomSeedOffset_Params
	{
	public:
		int32_t                                                    NewRandomSeedOffset;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetPreviewLODDistance
	 */
	struct UNiagaraComponent_SetPreviewLODDistance_Params
	{
	public:
		bool                                                       bEnablePreviewLODDistance;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZJAQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreviewLODDistance;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PreviewMaxDistance;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetPaused
	 */
	struct UNiagaraComponent_SetPaused_Params
	{
	public:
		bool                                                       bInPaused;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec4_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec3_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec2_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	 */
	struct UNiagaraComponent_SetNiagaraVariableQuat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
	 */
	struct UNiagaraComponent_SetNiagaraVariablePosition_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	 */
	struct UNiagaraComponent_SetNiagaraVariableObject_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	 */
	struct UNiagaraComponent_SetNiagaraVariableMatrix_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                             InValue;                                                 // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	 */
	struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	 */
	struct UNiagaraComponent_SetNiagaraVariableInt_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	 */
	struct UNiagaraComponent_SetNiagaraVariableFloat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	 */
	struct UNiagaraComponent_SetNiagaraVariableBool_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	 */
	struct UNiagaraComponent_SetNiagaraVariableActor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetMaxSimTime
	 */
	struct UNiagaraComponent_SetMaxSimTime_Params
	{
	public:
		float                                                      InMaxTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	 */
	struct UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetGpuComputeDebug
	 */
	struct UNiagaraComponent_SetGpuComputeDebug_Params
	{
	public:
		bool                                                       bEnableDebug;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetForceSolo
	 */
	struct UNiagaraComponent_SetForceSolo_Params
	{
	public:
		bool                                                       bInForceSolo;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	 */
	struct UNiagaraComponent_SetForceLocalPlayerEffect_Params
	{
	public:
		bool                                                       bIsPlayerEffect;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetEmitterFixedBounds
	 */
	struct UNiagaraComponent_SetEmitterFixedBounds_Params
	{
	public:
		class FName                                                EmitterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                LocalBounds;                                             // 0x0008(0x0038)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetDesiredAge
	 */
	struct UNiagaraComponent_SetDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetCustomTimeDilation
	 */
	struct UNiagaraComponent_SetCustomTimeDilation_Params
	{
	public:
		float                                                      Dilation;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	 */
	struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
	{
	public:
		bool                                                       bInCanRenderWhileSeeking;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAutoDestroy
	 */
	struct UNiagaraComponent_SetAutoDestroy_Params
	{
	public:
		bool                                                       bInAutoDestroy;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAsset
	 */
	struct UNiagaraComponent_SetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      InAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bResetExistingOverrideParameters;                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAllowScalability
	 */
	struct UNiagaraComponent_SetAllowScalability_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAgeUpdateMode
	 */
	struct UNiagaraComponent_SetAgeUpdateMode_Params
	{
	public:
		ENiagaraAgeUpdateMode                                      InAgeUpdateMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SeekToDesiredAge
	 */
	struct UNiagaraComponent_SeekToDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.ResetSystem
	 */
	struct UNiagaraComponent_ResetSystem_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.ReinitializeSystem
	 */
	struct UNiagaraComponent_ReinitializeSystem_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.IsPaused
	 */
	struct UNiagaraComponent_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.InitForPerformanceBaseline
	 */
	struct UNiagaraComponent_InitForPerformanceBaseline_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.GetTickBehavior
	 */
	struct UNiagaraComponent_GetTickBehavior_Params
	{
	public:
		ENiagaraTickBehavior                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetSystemFixedBounds
	 */
	struct UNiagaraComponent_GetSystemFixedBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetSimCache
	 */
	struct UNiagaraComponent_GetSimCache_Params
	{
	public:
		class UNiagaraSimCache*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetSeekDelta
	 */
	struct UNiagaraComponent_GetSeekDelta_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetRandomSeedOffset
	 */
	struct UNiagaraComponent_GetRandomSeedOffset_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	 */
	struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetPreviewLODDistance
	 */
	struct UNiagaraComponent_GetPreviewLODDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetMaxSimTime
	 */
	struct UNiagaraComponent_GetMaxSimTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	 */
	struct UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetForceSolo
	 */
	struct UNiagaraComponent_GetForceSolo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	 */
	struct UNiagaraComponent_GetForceLocalPlayerEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetEmitterFixedBounds
	 */
	struct UNiagaraComponent_GetEmitterFixedBounds_Params
	{
	public:
		class FName                                                EmitterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetDesiredAge
	 */
	struct UNiagaraComponent_GetDesiredAge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetDataInterface
	 */
	struct UNiagaraComponent_GetDataInterface_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraDataInterface*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetCustomTimeDilation
	 */
	struct UNiagaraComponent_GetCustomTimeDilation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetAsset
	 */
	struct UNiagaraComponent_GetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetAllowScalability
	 */
	struct UNiagaraComponent_GetAllowScalability_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetAgeUpdateMode
	 */
	struct UNiagaraComponent_GetAgeUpdateMode_Params
	{
	public:
		ENiagaraAgeUpdateMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.ClearSystemFixedBounds
	 */
	struct UNiagaraComponent_ClearSystemFixedBounds_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.ClearSimCache
	 */
	struct UNiagaraComponent_ClearSimCache_Params
	{
	public:
		bool                                                       bResetSystem;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
	 */
	struct UNiagaraComponent_ClearEmitterFixedBounds_Params
	{
	public:
		class FName                                                EmitterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	 */
	struct UNiagaraComponent_AdvanceSimulationByTime_Params
	{
	public:
		float                                                      SimulateTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulation
	 */
	struct UNiagaraComponent_AdvanceSimulation_Params
	{
	public:
		int32_t                                                    TickCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
	 */
	struct UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Channel;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraDataChannelHandler*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8E3P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Value;                                                   // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZJZZ[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            Value;                                                   // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector4>                                    ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I7VG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           Value;                                                   // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IKNL[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               Value;                                                   // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FQuat>                                       ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCJ7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Value;                                                   // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0014(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSizeToFit;                                              // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K0P0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QGX0[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector4>                                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W1VZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JCNC[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FQuat>                                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NU49[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0014(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	 */
	struct UNiagaraParticleCallbackHandler_ReceiveParticleData_Params
	{
	public:
		TArray<struct FBasicParticleData>                          Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UNiagaraSystem*                                      NiagaraSystem;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SimulationPositionOffset;                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttributeIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesX;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesY;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeZ;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeZ;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttributeIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesX;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesY;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TileZ;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
	 */
	struct UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      SourceActors;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	 */
	struct UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params
	{
	public:
		class AActor*                                              InSource;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             Reason;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params
	{
	public:
		struct FFXSystemSpawnParameters                            SpawnParams;                                             // 0x0000(0x0078)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0078(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
	{
	public:
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0030(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoActivate;                                           // 0x004A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENCPoolMethod                                              PoolingMethod;                                           // 0x004B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreCullCheck;                                           // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FUB0[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params
	{
	public:
		struct FFXSystemSpawnParameters                            SpawnParams;                                             // 0x0000(0x0078)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0078(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0028(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0040(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoActivate;                                           // 0x0059(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENCPoolMethod                                              PoolingMethod;                                           // 0x005A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreCullCheck;                                           // 0x005B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XTR3[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0060(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	 */
	struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Texture;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	 */
	struct UNiagaraFunctionLibrary_SetTextureObject_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Texture;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	 */
	struct UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2DArray*                                     Texture;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	 */
	struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        SamplingRegions;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
	 */
	struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        FilteredSockets;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
	 */
	struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        FilteredBones;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
	 */
	struct UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CollisionGroup;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
	 */
	struct UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CollisionGroup;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
	 */
	struct UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CollisionGroup;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	 */
	struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollectionInstance*                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
	 */
	struct UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0010(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraBaselineController.OnTickTest
	 */
	struct UNiagaraBaselineController_OnTickTest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraBaselineController.OnOwnerTick
	 */
	struct UNiagaraBaselineController_OnOwnerTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraBaselineController.OnEndTest
	 */
	struct UNiagaraBaselineController_OnEndTest_Params
	{
	public:
		struct FNiagaraPerfBaselineStats                           Stats;                                                   // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraBaselineController.OnBeginTest
	 */
	struct UNiagaraBaselineController_OnBeginTest_Params
	{	};

	/**
	 * Function Niagara.NiagaraBaselineController.GetSystem
	 */
	struct UNiagaraBaselineController_GetSystem_Params
	{
	public:
		class UNiagaraSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewBase.SetSystem
	 */
	struct ANiagaraPreviewBase_SetSystem_Params
	{
	public:
		class UNiagaraSystem*                                      InSystem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewBase.SetLabelText
	 */
	struct ANiagaraPreviewBase_SetLabelText_Params
	{
	public:
		class FText                                                InXAxisText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                InYAxisText;                                             // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewAxis.Num
	 */
	struct UNiagaraPreviewAxis_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewAxis.ApplyToPreview
	 */
	struct UNiagaraPreviewAxis_ApplyToPreview_Params
	{
	public:
		class UNiagaraComponent*                                   PreviewComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviewIndex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsXAxis;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2HCK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutLabelText;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.SetPaused
	 */
	struct ANiagaraPreviewGrid_SetPaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.GetPreviews
	 */
	struct ANiagaraPreviewGrid_GetPreviews_Params
	{
	public:
		TArray<class UNiagaraComponent*>                           OutPreviews;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	 */
	struct ANiagaraPreviewGrid_DeactivatePreviews_Params
	{	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.ActivatePreviews
	 */
	struct ANiagaraPreviewGrid_ActivatePreviews_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	 */
	struct UNiagaraScript_RaiseOnGPUCompilationComplete_Params
	{	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadVectorAttribute
	 */
	struct UNiagaraSimCache_ReadVectorAttribute_Params
	{
	public:
		TArray<struct FVector>                                     OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadVector4Attribute
	 */
	struct UNiagaraSimCache_ReadVector4Attribute_Params
	{
	public:
		TArray<struct FVector4>                                    OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadVector2Attribute
	 */
	struct UNiagaraSimCache_ReadVector2Attribute_Params
	{
	public:
		TArray<struct FVector2D>                                   OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	 */
	struct UNiagaraSimCache_ReadQuatAttributeWithRebase_Params
	{
	public:
		TArray<struct FQuat>                                       OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FQuat                                               Quat;                                                    // 0x0010(0x0020)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadQuatAttribute
	 */
	struct UNiagaraSimCache_ReadQuatAttribute_Params
	{
	public:
		TArray<struct FQuat>                                       OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLocalSpaceToWorld;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_835V[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FrameIndex;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	 */
	struct UNiagaraSimCache_ReadPositionAttributeWithRebase_Params
	{
	public:
		TArray<struct FVector>                                     OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadPositionAttribute
	 */
	struct UNiagaraSimCache_ReadPositionAttribute_Params
	{
	public:
		TArray<struct FVector>                                     OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLocalSpaceToWorld;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AZAA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    FrameIndex;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadIntAttribute
	 */
	struct UNiagaraSimCache_ReadIntAttribute_Params
	{
	public:
		TArray<int32_t>                                            OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadFloatAttribute
	 */
	struct UNiagaraSimCache_ReadFloatAttribute_Params
	{
	public:
		TArray<float>                                              OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.ReadColorAttribute
	 */
	struct UNiagaraSimCache_ReadColorAttribute_Params
	{
	public:
		TArray<struct FLinearColor>                                OutValues;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FName                                                AttributeName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmitterName;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FrameIndex;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.IsEmpty
	 */
	struct UNiagaraSimCache_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.IsCacheValid
	 */
	struct UNiagaraSimCache_IsCacheValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetStartSeconds
	 */
	struct UNiagaraSimCache_GetStartSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetNumFrames
	 */
	struct UNiagaraSimCache_GetNumFrames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetNumEmitters
	 */
	struct UNiagaraSimCache_GetNumEmitters_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetEmitterNames
	 */
	struct UNiagaraSimCache_GetEmitterNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetEmitterName
	 */
	struct UNiagaraSimCache_GetEmitterName_Params
	{
	public:
		int32_t                                                    EmitterIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
	 */
	struct UNiagaraSimCache_GetAttributeCaptureMode_Params
	{
	public:
		ENiagaraSimCacheAttributeCaptureMode                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	 */
	struct UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	 */
	struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params
	{
	public:
		class UNiagaraSimCache*                                    SimCache;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNiagaraSimCacheCreateParameters                    CreateParameters;                                        // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0060(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSimCache*                                    OutSimCache;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CaptureRate;                                             // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdvanceSimulation;                                      // 0x0074(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XWID[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AdvanceDeltaTime;                                        // 0x0078(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2AQS[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAsyncNiagaraCaptureSimCache*                        ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	 */
	struct UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params
	{
	public:
		class UNiagaraSimCache*                                    SimCache;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNiagaraSimCacheCreateParameters                    CreateParameters;                                        // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0060(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSimCache*                                    OutSimCache;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumFrames;                                               // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CaptureRate;                                             // 0x0074(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdvanceSimulation;                                      // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GUT4[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AdvanceDeltaTime;                                        // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAsyncNiagaraCaptureSimCache*                        ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
	 */
	struct UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSimCache*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
	 */
	struct UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params
	{
	public:
		class UNiagaraSimCache*                                    SimCache;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNiagaraSimCacheCreateParameters                    CreateParameters;                                        // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0060(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSimCache*                                    OutSimCache;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdvanceSimulation;                                      // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_14NX[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AdvanceDeltaTime;                                        // 0x0074(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
