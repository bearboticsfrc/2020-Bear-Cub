/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "Robot.h"
#include "commands/manualDrive.h"

manualDrive::manualDrive() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  
}

// Called just before this Command runs the first time
void manualDrive::Initialize() {
  //Robot::m_driveTrain->drive(0,0);

}

// Called repeatedly when this Command is scheduled to run
void manualDrive::Execute() {
double fwd = -Robot::m_joystick->GetY();
double turn = Robot::m_joystick->GetTwist();
Robot::m_driveTrain->drive(fwd, turn);
}

// Make this return true when this Command no longer needs to run execute()
bool manualDrive::IsFinished() { return false; }

// Called once after isFinished returns true
void manualDrive::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void manualDrive::Interrupted() {}
