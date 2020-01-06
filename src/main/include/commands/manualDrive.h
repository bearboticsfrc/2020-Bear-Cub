/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!
 */
#include "subsystems/Input.h"
#include "subsystems/Drivetrain.h"
class ManualDrive
    : public frc2::CommandHelper<frc2::CommandBase, ManualDrive> {
 public:
  ManualDrive(Drivetrain* driver, std::function<double()> forward, std::function<double()> rotation);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;
  double speed;
  double angle;

 private:
  Drivetrain* m_drive;
  std::function<double()> m_forward;
  std::function<double()> m_rotation;
};
