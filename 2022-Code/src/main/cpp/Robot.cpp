// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"



#include "Feeder.h"
#include "controllerclass.h"
#include "DriveTrain.h"
// #include "limelight.h"

  Feeder * FeederClass;

DriveTrainClass * drivetrain;
controllerclass * controller1;

HangClass * hang;
// class limelight * limelight;

void Robot::RobotInit() {

  drivetrain = new DriveTrainClass();
  controller1 = new controllerclass();
  hang = new HangClass();
  drivetrain->initDriveTrainClass();



  FeederClass = new Feeder();
// limelight = new  limelight();

}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  controller1->update();
   //limelight->getHorizontal(controller1->bAbuttonpressedC1);
  drivetrain->TankDrive(controller1->dleftstickYC1, controller1->drightstickYC1);

  hang->runHang(controller1->brightbumperC1, controller1->bleftbumperC1);
  FeederClass->runFeeder(controller1->dleftstickYC2); 
// drivetrain->TankDrive(controller1->dleftstickYC1 + limelight->steeringAdjust, controller1->drightstickYC1 - limelight->steeringAdjust);
  drivetrain->LimelightDrive(controller1->bAbuttonrawC1);
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
