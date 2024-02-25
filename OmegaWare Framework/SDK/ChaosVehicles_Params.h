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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
	 */
	struct UChaosVehicleMovementComponent_SetYawInput_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
	 */
	struct UChaosVehicleMovementComponent_SetUseAutomaticGears_Params
	{
	public:
		bool                                                       bUseAuto;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
	 */
	struct UChaosVehicleMovementComponent_SetThrottleInput_Params
	{
	public:
		float                                                      Throttle;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
	 */
	struct UChaosVehicleMovementComponent_SetTargetGear_Params
	{
	public:
		int32_t                                                    GearNum;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
	 */
	struct UChaosVehicleMovementComponent_SetSteeringInput_Params
	{
	public:
		float                                                      Steering;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetSleeping
	 */
	struct UChaosVehicleMovementComponent_SetSleeping_Params
	{
	public:
		bool                                                       bEnableSleep;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
	 */
	struct UChaosVehicleMovementComponent_SetRollInput_Params
	{
	public:
		float                                                      Roll;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetRequiresControllerForInputs
	 */
	struct UChaosVehicleMovementComponent_SetRequiresControllerForInputs_Params
	{
	public:
		bool                                                       bRequiresController;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
	 */
	struct UChaosVehicleMovementComponent_SetPitchInput_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetParked
	 */
	struct UChaosVehicleMovementComponent_SetParked_Params
	{
	public:
		bool                                                       bParked;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
	 */
	struct UChaosVehicleMovementComponent_SetHandbrakeInput_Params
	{
	public:
		bool                                                       bNewHandbrake;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
	 */
	struct UChaosVehicleMovementComponent_SetChangeUpInput_Params
	{
	public:
		bool                                                       bNewGearUp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
	 */
	struct UChaosVehicleMovementComponent_SetChangeDownInput_Params
	{
	public:
		bool                                                       bNewGearDown;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
	 */
	struct UChaosVehicleMovementComponent_SetBrakeInput_Params
	{
	public:
		float                                                      Brake;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
	 */
	struct UChaosVehicleMovementComponent_ServerUpdateState_Params
	{
	public:
		float                                                      InSteeringInput;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InThrottleInput;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InBrakeInput;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InHandbrakeInput;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InCurrentGear;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRollInput;                                             // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPitchInput;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InYawInput;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.ResetVehicle
	 */
	struct UChaosVehicleMovementComponent_ResetVehicle_Params
	{	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.IsParked
	 */
	struct UChaosVehicleMovementComponent_IsParked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
	 */
	struct UChaosVehicleMovementComponent_IncreaseThrottleInput_Params
	{
	public:
		float                                                      ThrottleDelta;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
	 */
	struct UChaosVehicleMovementComponent_GetUseAutoGears_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetThrottleInput
	 */
	struct UChaosVehicleMovementComponent_GetThrottleInput_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
	 */
	struct UChaosVehicleMovementComponent_GetTargetGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetSteeringInput
	 */
	struct UChaosVehicleMovementComponent_GetSteeringInput_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetHandbrakeInput
	 */
	struct UChaosVehicleMovementComponent_GetHandbrakeInput_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
	 */
	struct UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
	 */
	struct UChaosVehicleMovementComponent_GetForwardSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
	 */
	struct UChaosVehicleMovementComponent_GetCurrentGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.GetBrakeInput
	 */
	struct UChaosVehicleMovementComponent_GetBrakeInput_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
	 */
	struct UChaosVehicleMovementComponent_EnableSelfRighting_Params
	{
	public:
		bool                                                       InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
	 */
	struct UChaosVehicleMovementComponent_DecreaseThrottleInput_Params
	{
	public:
		float                                                      ThrottleDelta;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.IsInAir
	 */
	struct UChaosVehicleWheel_IsInAir_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetWheelRadius
	 */
	struct UChaosVehicleWheel_GetWheelRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetWheelAngularVelocity
	 */
	struct UChaosVehicleWheel_GetWheelAngularVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
	 */
	struct UChaosVehicleWheel_GetSuspensionOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionAxis
	 */
	struct UChaosVehicleWheel_GetSuspensionAxis_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
	 */
	struct UChaosVehicleWheel_GetSteerAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngularVelocity
	 */
	struct UChaosVehicleWheel_GetRotationAngularVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
	 */
	struct UChaosVehicleWheel_GetRotationAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
	 */
	struct UChaosVehicleWheel_GetAxleType_Params
	{
	public:
		EAxleType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelSlipGraphMultiplier
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelSlipGraphMultiplier_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Multiplier;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelRadius
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelRadius_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxSteerAngle
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelMaxSteerAngle_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AngleDegrees;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelMaxBrakeTorque
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelMaxBrakeTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Torque;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelHandbrakeTorque
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelHandbrakeTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Torque;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelFrictionMultiplier
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelFrictionMultiplier_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Friction;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetWheelClass
	 */
	struct UChaosWheeledVehicleMovementComponent_SetWheelClass_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_THQZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              InWheelClass;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTractionControlEnabled
	 */
	struct UChaosWheeledVehicleMovementComponent_SetTractionControlEnabled_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetTorqueCombineMethod
	 */
	struct UChaosWheeledVehicleMovementComponent_SetTorqueCombineMethod_Params
	{
	public:
		ETorqueCombineMethod                                       InCombineMethod;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2XDN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSuspensionParams
	 */
	struct UChaosWheeledVehicleMovementComponent_SetSuspensionParams_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damping;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Preload;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRaise;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDrop;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_SetSnapshot_Params
	{
	public:
		struct FWheeledSnaphotData                                 SnapshotIn;                                              // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetMaxEngineTorque
	 */
	struct UChaosWheeledVehicleMovementComponent_SetMaxEngineTorque_Params
	{
	public:
		float                                                      Torque;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDriveTorque
	 */
	struct UChaosWheeledVehicleMovementComponent_SetDriveTorque_Params
	{
	public:
		float                                                      DriveTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDragCoefficient
	 */
	struct UChaosWheeledVehicleMovementComponent_SetDragCoefficient_Params
	{
	public:
		float                                                      DragCoeff;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDownforceCoefficient
	 */
	struct UChaosWheeledVehicleMovementComponent_SetDownforceCoefficient_Params
	{
	public:
		float                                                      DownforceCoeff;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetDifferentialFrontRearSplit
	 */
	struct UChaosWheeledVehicleMovementComponent_SetDifferentialFrontRearSplit_Params
	{
	public:
		float                                                      FrontRearSlpit;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetBrakeTorque
	 */
	struct UChaosWheeledVehicleMovementComponent_SetBrakeTorque_Params
	{
	public:
		float                                                      BrakeTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedBySteering
	 */
	struct UChaosWheeledVehicleMovementComponent_SetAffectedBySteering_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByHandbrake
	 */
	struct UChaosWheeledVehicleMovementComponent_SetAffectedByHandbrake_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByEngine
	 */
	struct UChaosWheeledVehicleMovementComponent_SetAffectedByEngine_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetAffectedByBrake
	 */
	struct UChaosWheeledVehicleMovementComponent_SetAffectedByBrake_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.SetABSEnabled
	 */
	struct UChaosWheeledVehicleMovementComponent_SetABSEnabled_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Enabled;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
	 */
	struct UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params
	{
	public:
		bool                                                       bInContact;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CL59[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ContactPoint;                                            // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NormalizedSuspensionLength;                              // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringForce;                                             // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SlipAngle;                                               // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlipping;                                             // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PBB5[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SlipMagnitude;                                           // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSkidding;                                             // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H9E2[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SkidMagnitude;                                           // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_THKQ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SkidNormal;                                              // 0x0048(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DriveTorque;                                             // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BrakeTorque;                                             // 0x0064(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bABSActivated;                                           // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CGEK[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWheelStatus                                        ReturnValue;                                             // 0x0070(0x0088)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_MakeWheelSnapshot_Params
	{
	public:
		float                                                      SuspensionOffset;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelRotationAngle;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SteeringAngle;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelRadius;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelAngularVelocity;                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWheelSnapshot                                      ReturnValue;                                             // 0x0014(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheeledSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_MakeWheeledSnapshot_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVelocity;                                          // 0x0060(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0078(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SelectedGear;                                            // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EngineRPM;                                               // 0x0094(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FWheelSnapshot>                              WheelSnapshots;                                          // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_260Z[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWheeledSnaphotData                                 ReturnValue;                                             // 0x00B0(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
	 */
	struct UChaosWheeledVehicleMovementComponent_GetWheelState_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IYPV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWheelStatus                                        ReturnValue;                                             // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_GetSnapshot_Params
	{
	public:
		struct FWheeledSnaphotData                                 ReturnValue;                                             // 0x0000(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
	 */
	struct UChaosWheeledVehicleMovementComponent_GetNumWheels_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
	 */
	struct UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	 */
	struct UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
	 */
	struct UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params
	{
	public:
		bool                                                       InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
	 */
	struct UChaosWheeledVehicleMovementComponent_EnableSuspension_Params
	{
	public:
		bool                                                       InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
	 */
	struct UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params
	{
	public:
		bool                                                       InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
	 */
	struct UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params
	{
	public:
		struct FWheelStatus                                        Status;                                                  // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInContact;                                              // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_41RP[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ContactPoint;                                            // 0x0090(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NormalizedSuspensionLength;                              // 0x00B0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpringForce;                                             // 0x00B4(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SlipAngle;                                               // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlipping;                                             // 0x00BC(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JHU4[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SlipMagnitude;                                           // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSkidding;                                             // 0x00C4(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H9WX[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SkidMagnitude;                                           // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E967[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             SkidNormal;                                              // 0x00D0(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DriveTorque;                                             // 0x00E8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BrakeTorque;                                             // 0x00EC(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bABSActivated;                                           // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_BreakWheelSnapshot_Params
	{
	public:
		struct FWheelSnapshot                                      Snapshot;                                                // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      SuspensionOffset;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelRotationAngle;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SteeringAngle;                                           // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelRadius;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WheelAngularVelocity;                                    // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheeledSnapshot
	 */
	struct UChaosWheeledVehicleMovementComponent_BreakWheeledSnapshot_Params
	{
	public:
		struct FWheeledSnaphotData                                 Snapshot;                                                // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x00B0(0x0060)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVelocity;                                          // 0x0110(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x0128(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SelectedGear;                                            // 0x0140(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EngineRPM;                                               // 0x0144(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FWheelSnapshot>                              WheelSnapshots;                                          // 0x0148(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
	 */
	struct UVehicleAnimationInstance_GetVehicle_Params
	{
	public:
		class AWheeledVehiclePawn*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
