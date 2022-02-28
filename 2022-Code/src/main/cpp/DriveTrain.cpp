#include "DriveTrain.h"

std::shared_ptr<nt::NetworkTable> table = nt::NetworkTableInstance::GetDefault().GetTable("limelight");

DriveTrainClass::DriveTrainClass()

{
mLeft1 = new TalonFX(11);
mLeft2 = new TalonFX(12);
mLeft3 = new TalonFX(0);

mRight1 = new TalonFX(13);
mRight2 = new TalonFX(14);
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
//mLeft3->Set(ControlMode::PercentOutput, L); 
mRight1->Set(ControlMode::PercentOutput, R); 
mRight2->Set(ControlMode::PercentOutput, R); 
//mRight3->Set(ControlMode::PercentOutput, R); 
}

void DriveTrainClass::LimelightDrive(bool button)
{
    Kp = -0.1f;
    minCommand = 0.05f;
    tx = table->GetNumber("tx",0.0);
    table->PutNumber("ledMode", 3);
    table->PutNumber("camMode", 0);
    steeringAdjust = 0.0f;
    if (button == 1){
        if (tx > 1.0){
            steeringAdjust = Kp*-tx - minCommand;
            mLeft1->Set(ControlMode::PercentOutput,-steeringAdjust); 
            mLeft2->Set(ControlMode::PercentOutput, -steeringAdjust); 
            mRight1->Set(ControlMode::PercentOutput, steeringAdjust); 
            mRight2->Set(ControlMode::PercentOutput, steeringAdjust); 
        }
        else if (tx < 1.0){
            steeringAdjust = Kp*-tx + minCommand;
            mLeft1->Set(ControlMode::PercentOutput,-steeringAdjust); 
            mLeft2->Set(ControlMode::PercentOutput, -steeringAdjust); 
            mRight1->Set(ControlMode::PercentOutput, steeringAdjust); 
            mRight2->Set(ControlMode::PercentOutput, steeringAdjust); 
        }
    }
    else{
        steeringAdjust = 0;
    }
}