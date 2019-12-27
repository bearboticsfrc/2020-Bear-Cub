/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
<<<<<<< HEAD
#include "ctre/Phoenix.h"

class driveTrain : public frc::Subsystem {
 public:
 driveTrain();
  WPI_TalonSRX frontLeft;
  WPI_TalonSRX frontRight;
  WPI_TalonSRX backLeft;
  WPI_TalonSRX backRight;
 private:
  // It's desirable that everything
  // for methods that implement subsystem capabilities

  void drive(double leftSpeed, double rightSpeed);
}

=======

class driveTrain : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  driveTrain();
  void InitDefaultCommand() override;
};
>>>>>>> ea90d52fcfba3db706fcb07127d8f5f5ca0050f1
