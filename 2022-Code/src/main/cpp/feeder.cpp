#include "Feeder.h"

#include <iostream>
using namespace std;

Feeder::Feeder(){
    FeederMotor = new TalonSRX(59);
}
void Feeder::runFeeder(double forward){
    FeederMotor->Set(ControlMode::PercentOutput, -forward*0.75);
    cout<<forward<<endl;
}