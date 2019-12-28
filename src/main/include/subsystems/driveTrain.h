/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <ctre/Phoenix.h>
class driveTrain : public frc::Subsystem {
 public:
  driveTrain();
  void drive(double fwd, double turn);
 private:
  // It's desirable that everything
  // for methods that implement subsystem capabilities

 
};

