/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>

#include <frc/Joystick.h>

class joystick : public frc::Subsystem {
 private:
frc::Joystick stick;
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  joystick(int port);
  void InitDefaultCommand() override;
  double GetX();
  double GetTwist();
};
