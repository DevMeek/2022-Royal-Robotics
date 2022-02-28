#pragma once

#include <ctre/Phoenix.h> 
#include "limelight.h"
class DriveTrainClass 
{
public: 
DriveTrainClass();
void initDriveTrainClass();
void TankDrive (double, double);
void GTADrive (double, double);
void LimelightDrive (bool);
private:

TalonFX *mLeft1;
TalonFX *mLeft2;
TalonFX *mLeft3;
TalonFX *mRight1;
TalonFX *mRight2;
TalonFX *mRight3;

};

