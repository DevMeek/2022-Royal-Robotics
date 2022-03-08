#pragma once

#include <ctre/Phoenix.h>

class ShooterClass
{
public: 
    ShooterClass();
    void initShooterClass();
    void varShoot (int);
    void scalShoot(bool, bool, bool, bool, bool, bool, bool);
    double sped;

private:
    TalonFX *mShoot1;
    TalonFX *mShoot2;
};