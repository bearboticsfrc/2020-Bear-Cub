/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/phoenix/motorcontrol/can/WPI_TalonSRX.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>
class Drivetrain : public frc2::SubsystemBase {
 public:
  Drivetrain();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();
  void Drive(double speed, double angle);
 private:
  ctre::phoenix::motorcontrol::can::WPI_TalonSRX LFront{6};
  ctre::phoenix::motorcontrol::can::WPI_TalonSRX RFront{8};
  ctre::phoenix::motorcontrol::can::WPI_TalonSRX LBack{4};
  ctre::phoenix::motorcontrol::can::WPI_TalonSRX RBack{3};
  frc::SpeedControllerGroup left{LFront, LBack};
  frc::SpeedControllerGroup right{RFront, RBack};
  frc::DifferentialDrive driver{left, right};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
