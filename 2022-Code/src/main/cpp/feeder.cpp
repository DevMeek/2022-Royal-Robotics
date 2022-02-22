#include "Feeder.h"

Feeder::Feeder(){
    FeederMotor = new VictorSPX(0);
}
void Feeder::runFeeder(double forward){
    FeederMotor->Set(ControlMode::PercentOutput, forward);
}