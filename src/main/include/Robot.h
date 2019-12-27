/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/TimedRobot.h>
#include <frc/commands/Command.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Joystick.h>
#include "subsystems/driveTrain.h"
#include "subsystems/joystick.h"
#include "commands/manualDrive.h"

class Robot : public frc::TimedRobot {
 public:

  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  static std::unique_ptr< driveTrain > m_driveTrain;

  //static std::unique_ptr< driveTrain > m_driveTrain;
  static std::unique_ptr< joystick > m_joystick;
  static std::unique_ptr< manualDrive > m_manualDrive;
 private:
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.

  frc::SendableChooser<frc::Command*> m_chooser;
};
