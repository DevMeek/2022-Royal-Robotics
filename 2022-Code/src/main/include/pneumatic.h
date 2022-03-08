#pragma once

#include <ctre/Phoenix.h>
#include <frc/Compressor.h>
#include <frc/Solenoid.h>
using namespace frc;
class pneumaticClass{
    public:
        pneumaticClass();
        void initPneu();
        void togSolenoid(int);
        void setTrueOrFalse(bool);

    private:
        Compressor *compress;
        Solenoid * sIntake1;
        Solenoid * sIntake2;

};