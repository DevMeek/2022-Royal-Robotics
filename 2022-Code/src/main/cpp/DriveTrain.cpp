#include "DriveTrain.h"

 DriveTrainClass::DriveTrainClass()

{
mLeft1 = new TalonFX(0);
mLeft2 = new TalonFX(0);
mLeft3 = new TalonFX(0);

mRight1 = new TalonFX(0);
mRight2 = new TalonFX(0);
mRight3 = new TalonFX(0);
}

void DriveTrainClass::initDriveTrainClass()

{
mRight1-> SetInverted(true);
mRight2-> SetInverted(true);
mRight3-> SetInverted(true);
mLeft1-> SetInverted(true);
mLeft2-> SetInverted(true);
mLeft3-> SetInverted(true);
}

void DriveTrainClass::TankDrive(double L, double R)

{
mLeft1->Set(ControlMode::PercentOutput, L); 
mLeft2->Set(ControlMode::PercentOutput, L); 
mLeft3->Set(ControlMode::PercentOutput, L); 
mRight1->Set(ControlMode::PercentOutput, R); 
mRight2->Set(ControlMode::PercentOutput, R); 
mRight3->Set(ControlMode::PercentOutput, R); 
}
