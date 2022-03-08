#pragma once

#include <ctre/Phoenix.h>
class Feeder{
    public:
        Feeder();
        void runFeeder(double);

    private:
        TalonSRX * FeederMotor;

};
