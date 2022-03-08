#pragma once

#include <ctre/Phoenix.h> 
//#include "Shooter.h"
class DriveTrainClass 
{
public: 
DriveTrainClass();
void initDriveTrainClass();
void TankDrive (double, double);
void GTADrive (double, double);
void LimeDrive (double);
//void Auto1 ();
//int i;

private:

TalonFX *mLeft1;
TalonFX *mLeft2;
//TalonFX *mLeft3;
TalonFX *mRight1;
TalonFX *mRight2;
//Shooter *shoot;
//TalonFX *mRight3;

};

