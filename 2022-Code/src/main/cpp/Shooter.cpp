#include "Shooter.h"
#include <iostream>
using namespace std;
  
ShooterClass::ShooterClass()
{
    mShoot1 = new TalonFX(61);
    mShoot2 = new TalonFX(62);
}

void ShooterClass::initShooterClass()
{
    
    mShoot1->SetInverted(true);
    mShoot2->SetInverted(false);
    
    mShoot1->ConfigVoltageCompSaturation(11);
    mShoot1->EnableVoltageCompensation(true);
    mShoot2->ConfigVoltageCompSaturation(11);
    mShoot2->EnableVoltageCompensation(true);
    sped = 0;
}


void ShooterClass::varShoot(int x){
    sped+=x*0.001;
    mShoot1->Set(ControlMode::PercentOutput, sped);
    mShoot2->Set(ControlMode::PercentOutput, sped);
    cout<<sped<<endl;


}

void ShooterClass::scalShoot(bool a, bool x, bool b, bool y, bool start, bool a1, bool a2){
    if(a == 1)
    {
        sped = 0.25;
    }
    else if(x == 1)
    {
        sped = 0.62;
    }
    else if(b == 1)
    {
        sped = 0.85;
    }
    else if(y == 1)
    {
        sped = 1;
    }
    else if(start == 1)
    {
        sped = 0;
    }
    else if(a1 == 1)
    {
        sped = 0.60;
    }
    else if(a2 == 1)
    {
        sped = 0.725;
    }

}


