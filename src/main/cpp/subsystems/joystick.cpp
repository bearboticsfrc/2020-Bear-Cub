/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/joystick.h"

joystick::joystick(int port) : Subsystem("ExampleSubsystem"), stick(port)
 {}

void joystick::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

double joystick::GetX() {
  return stick.GetX();
}

double joystick::GetTwist() {
  return stick.GetTwist();
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
