// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"


#include <iostream>
using namespace std;

Feeder * FeederClass;

DriveTrainClass * drivetrain;
controllerclass * controller1;

HangClass * hang;
limelight * limelight1;
ShooterClass * shoot;
Intake * intake;
pneumaticClass * pneumatics;

void Robot::RobotInit() {

  drivetrain = new DriveTrainClass();
  controller1 = new controllerclass();
  hang = new HangClass();
  drivetrain->initDriveTrainClass();
  shoot = new ShooterClass();
  shoot->initShooterClass();
  intake = new Intake();
  pneumatics = new pneumaticClass();

  pneumatics->initPneu();
  i = 0;

  FeederClass = new Feeder();
  limelight1 = new limelight();

}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {
  // i++;
  // cout<<i<<endl;
  // shoot->varShoot(0);
  // if(i<2)
  // {
  //   pneumatics->setTrueOrFalse(true);
  // }
  // else if(i<20)
  // {
  //   shoot->scalShoot(0, 0, 0, 0, 0, 1, 0);
  // }
  // else if(i<70)
  // {
  //   FeederClass->runFeeder(-1);
  // }
  // else if(i < 120)
  // {
  //   FeederClass->runFeeder(0);
  //   intake->runIntake(1);
  //   drivetrain->TankDrive(-0.22, -0.22);
  // }
  // else if(i < 160)
  // {
  //   pneumatics->togSolenoid(i/122);
  //   drivetrain->TankDrive(0, 0);
  //   shoot->scalShoot(0, 0, 0, 0, 0, 0, 1);
  // }
  // else if(i<170){
  //   FeederClass->runFeeder(-0.7);
  // }
  if(i<20)
  {
    shoot->scalShoot(0, 1, 0, 0, 0, 0, 0);
  }
  else if(i<40)
  { 
    drivetrain->TankDrive(0, 0.2);
    pneumatics->setTrueOrFalse(1);
  }
  else if(i<60)
  {
    drivetrain->TankDrive(0.3, 0.3);
  }

}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  controller1->update();
  //limelight1->getHorizontal(controller1->bAbuttonpressedC1);
  drivetrain->TankDrive(controller1->dleftstickYC1, controller1->drightstickYC1);
  intake->runIntake(controller1->drighttriggerC1 - controller1->dlefttriggerC1);
  intake->runIntake(controller1->drighttriggerC2 - controller1->dlefttriggerC2);
  hang->runHang(controller1->bAbuttonrawC1, controller1->bYbuttonrawC1, controller1->bXbuttonrawC1, controller1->bBbuttonrawC1);
  FeederClass->runFeeder(controller1->dleftstickYC2); 
  shoot->varShoot(controller1->brightbumperC2 - controller1->bleftbumperC2);
  shoot->scalShoot(controller1->bAbuttonpressedC2, controller1->bXbuttonpressedC2, controller1->bBbuttonpressedC2, controller1->bYbuttonpressedC2, controller1->bstartbuttonC2, 0, 0);
  pneumatics->togSolenoid(controller1->brightbumperpressedC1 + controller1->bleftbumperpressedC1*2);
// drivetrain->TankDrive(controller1->dleftstickYC1 + limelight->steeringAdjust, controller1->drightstickYC1 - limelight->steeringAdjust);

}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() {
  ///shoot->scalShoot();
  controller1->update();
  
  //shoot->varShoot(controller1->bAbuttonrawC1, controller1->bBbuttonrawC1);
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
