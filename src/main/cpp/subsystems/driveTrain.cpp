/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/driveTrain.h"
<<<<<<< HEAD
#include "Robot.h"
driveTrain::driveTrain() :
frontLeft(0),
frontRight(1),
backLeft(2),
backRight(3),
Subsystem("ExampleSubsystem")
 {
    frontLeft.Set(1.0);

 }

void drive(double leftSpeed, double rightSpeed) {
    frontLeft.Set(leftSpeed);
    frontRight.Set(rightSpeed);
    backLeft.Set(leftSpeed);
    backRight.Set(rightSpeed);
}
=======

driveTrain::driveTrain() : Subsystem("ExampleSubsystem") {}

void driveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
>>>>>>> ea90d52fcfba3db706fcb07127d8f5f5ca0050f1
