/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/driveTrain.h"
#include "Robot.h"
WPI_TalonSRX frontLeft{2};
WPI_TalonSRX frontRight{3};
WPI_TalonSRX backLeft{4};
WPI_TalonSRX backRight{5};
driveTrain::driveTrain() : Subsystem("driveTrain")
 {
 }

void drive(double leftSpeed, double rightSpeed) {
    frontLeft.Set(leftSpeed);
    frontRight.Set(rightSpeed);
    backLeft.Set(leftSpeed);
    backRight.Set(rightSpeed);
}
