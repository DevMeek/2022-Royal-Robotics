#pragma once
#include "frc/smartdashboard/Smartdashboard.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableInstance.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableValue.h"
#include "wpi/span.h"

class limelight {
 public:
     limelight();
     double getHorizontal(double);
    //  void limelightSetup();
          
     float Kp; //constant
     float minCommand; //smallest amount robot will move
     float tx; 
     float steeringAdjust;
};