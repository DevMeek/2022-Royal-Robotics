#include "pneumatic.h"

#include <iostream>
using namespace std;

pneumaticClass::pneumaticClass(){
    compress = new Compressor(0, frc::PneumaticsModuleType::CTREPCM);
    sIntake1 = new Solenoid(frc::PneumaticsModuleType::CTREPCM, 0);
    sIntake2 = new Solenoid(frc::PneumaticsModuleType::CTREPCM, 1);
}

void pneumaticClass::initPneu()
{
    compress->EnableDigital();
}
void pneumaticClass::togSolenoid(int s){
    if(s==1)
    {
        sIntake1->Toggle();
        
    }
    else if(s == 2)
    {
        sIntake2->Toggle();
    }
    
    //cout<<forward<<endl;
}

void pneumaticClass::setTrueOrFalse(bool b)
{
    sIntake1->Set(1);
}