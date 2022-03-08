#include "DriveTrain.h"

 DriveTrainClass::DriveTrainClass()

{
mLeft1 = new TalonFX(11);
mLeft2 = new TalonFX(12);
//mLeft3 = new TalonFX(0);

mRight1 = new TalonFX(13);
mRight2 = new TalonFX(14);

//shoot = new ShooterClass();
//mRight3 = new TalonFX(0);
}

void DriveTrainClass::initDriveTrainClass()

{
mRight1-> SetInverted(true);
mRight2-> SetInverted(true);
//mRight3-> SetInverted(true);
mLeft1-> SetInverted(false);
mLeft2-> SetInverted(false);

mLeft1->ConfigFactoryDefault(50);
mLeft2->ConfigFactoryDefault(50);
mRight1->ConfigFactoryDefault(50);
mRight2->ConfigFactoryDefault(50);

mLeft1->SetSelectedSensorPosition(0);
mLeft2->SetSelectedSensorPosition(0);
mRight1->SetSelectedSensorPosition(0);
mRight2->SetSelectedSensorPosition(0);
//mLeft3-> SetInverted(true);
//i = 0;
}

void DriveTrainClass::TankDrive(double L, double R)

{
mLeft1->Set(ControlMode::PercentOutput, L); 
mLeft2->Set(ControlMode::PercentOutput, L); 
//mLeft3->Set(ControlMode::PercentOutput, L); 
mRight1->Set(ControlMode::PercentOutput, R); 
mRight2->Set(ControlMode::PercentOutput, R); 
//mRight3->Set(ControlMode::PercentOutput, R); 
}

void DriveTrainClass::LimeDrive(double x)
{
mLeft1->Set(ControlMode::PercentOutput, x); 
mLeft2->Set(ControlMode::PercentOutput, x); 
//mLeft3->Set(ControlMode::PercentOutput, L); 
mRight1->Set(ControlMode::PercentOutput, -x); 
mRight2->Set(ControlMode::PercentOutput, -x);
}

// void DriveTrainClass::Auto1()
// {
//     i++
//     if(i<500)
//     {
//         shoot->scalShoot(i/500);
//     }
//     else if
// }