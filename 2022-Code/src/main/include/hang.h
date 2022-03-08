#pragma once

#include <ctre/Phoenix.h>

class HangClass
{
public: 
    HangClass();
    void initHangClass();
    void runHang (bool,bool,bool,bool);

private:
    TalonSRX *mLeft1;
    TalonSRX *mRight1;
};