#include "DriveTrain.h"
#include <iostream>

using namespace std;
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
    int x = 1000;
    Kp = -0.1f;
    minCommand = 0.001f;
    tx = table->GetNumber("tx",0.0);
    table->PutNumber("ledMode", 3);
    table->PutNumber("camMode", 0);
    steeringAdjust = 0.0f;
    cout<<tx<<endl;
    if (button == 1){
        if (tx > 0){
            steeringAdjust = Kp*-tx - minCommand;
            cout<<steeringAdjust<<endl;
            mLeft1->Set(ControlMode::PercentOutput,steeringAdjust*x); 
            mLeft2->Set(ControlMode::PercentOutput, steeringAdjust*x); 
            mRight1->Set(ControlMode::PercentOutput, steeringAdjust*x); 
            mRight2->Set(ControlMode::PercentOutput, steeringAdjust*x);
            cout<<"turning"<<endl;
        }
        if (tx < 0){
            steeringAdjust = Kp*-tx + minCommand;
            cout<<steeringAdjust<<endl;
            mLeft1->Set(ControlMode::PercentOutput,steeringAdjust*x); 
            mLeft2->Set(ControlMode::PercentOutput, steeringAdjust*x); 
            mRight1->Set(ControlMode::PercentOutput, steeringAdjust*x); 
            mRight2->Set(ControlMode::PercentOutput, steeringAdjust*x); 
            cout<<"turning"<<endl;
        }
        
    }
    if(button == 0){
        //steeringAdjust = 0;
        cout<<"not turning"<<endl;
    }
}