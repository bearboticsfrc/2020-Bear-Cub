/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/driveTrain.h"
#include "Robot.h"
WPI_TalonSRX frontLeft{6};
WPI_TalonSRX frontRight{8};
WPI_TalonSRX backLeft{4};
WPI_TalonSRX backRight{3};
driveTrain::driveTrain() : Subsystem("driveTrain")
 {
 }

void driveTrain::drive(double leftSpeed, double rightSpeed) {
    frontLeft.Set(1.0);
    frontRight.Set(1.0);
    backLeft.Set(1.0);
    backRight.Set(1.0);
}
