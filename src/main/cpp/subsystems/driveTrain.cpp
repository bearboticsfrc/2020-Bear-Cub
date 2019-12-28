/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/driveTrain.h"
#include "Robot.h"
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>
WPI_TalonSRX frontLeft{6};
WPI_TalonSRX frontRight{8};
WPI_TalonSRX backLeft{4};
WPI_TalonSRX backRight{3};
frc::SpeedControllerGroup left{frontLeft,backLeft};
frc::SpeedControllerGroup right{frontRight,backRight};
frc::DifferentialDrive driver{left,right};
driveTrain::driveTrain() : Subsystem("driveTrain")
 {
 }

void driveTrain::drive(double fwd, double turn) {

    driver.ArcadeDrive(fwd, turn);
    
}
