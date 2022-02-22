#include "hang.h"
  
HangClass::HangClass()

{
mLeft1 = new TalonSRX(0);
mRight1 = new TalonSRX(0);
}

void HangClass::initHangClass()

{
mLeft1 ->SetInverted(true);
mRight1 ->SetInverted(true);
}

void HangClass::runHang (bool forward, bool reverse)

{
mRight1->Set(ControlMode::PercentOutput,(forward-reverse)*0.75);
mLeft1->Set(ControlMode::PercentOutput,(forward-reverse)*0.75);
}