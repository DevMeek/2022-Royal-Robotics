#include "Intake.h"

#include <iostream>
using namespace std;

Intake::Intake(){
    IntakeMotor = new TalonSRX(49);
}
void Intake::runIntake(double x){
    IntakeMotor->Set(ControlMode::PercentOutput, x*0.8);
}

void Intake::setTrueOrFalse(bool b)
{
    
}