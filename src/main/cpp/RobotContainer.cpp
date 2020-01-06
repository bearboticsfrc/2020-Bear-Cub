/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "RobotContainer.h"

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();

  m_driver.SetDefaultCommand(ManualDrive(&m_driver,
  [this] {return m_joystick.GetY();},
  [this] {return m_joystick.GetTwist();}));
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
}

