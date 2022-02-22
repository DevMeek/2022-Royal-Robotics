#include "limelight.h"

std::shared_ptr<nt::NetworkTable> table = nt::NetworkTableInstance::GetDefault().GetTable("limelight");

limelight::limelight(){
    Kp = -0.1f;
    minCommand = 0.05f;
    
    tx = table->GetNumber("tx",0.0);

}

double limelight::getHorizontal(double on){
    if (on == 1){
    table->PutNumber("ledMode", 3);
    table->PutNumber("camMode", 0);
    steeringAdjust = 0.0f;
    if (tx > 1.0){
        steeringAdjust = Kp*-tx - minCommand;
    }
    if (tx < 1.0){
        steeringAdjust = Kp*-tx + minCommand;
    }}
    else{
        table->PutNumber("ledMode", 1);
    }
}
// void limelight::limelightSetup(){
//     table->PutNumber("ledMode", 1);
// }