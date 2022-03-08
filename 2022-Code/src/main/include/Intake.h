#pragma once

#include <ctre/Phoenix.h>
class Intake{
    public:
        Intake();
        void runIntake(double);
        void setTrueOrFalse(bool);

    private:
        TalonSRX * IntakeMotor;

};