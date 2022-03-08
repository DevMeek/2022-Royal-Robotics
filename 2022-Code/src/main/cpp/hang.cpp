#include "hang.h"
  
HangClass::HangClass()

{
mLeft1 = new TalonSRX(36);
mRight1 = new TalonSRX(37);
}

void HangClass::initHangClass()

{
mLeft1 ->SetInverted(true);
mRight1 ->SetInverted(true);
mLeft1->SetNeutralMode(NeutralMode::Brake);
mRight1->SetNeutralMode(NeutralMode::Brake);
}

void HangClass::runHang (bool forwardL, bool backL, bool forwardR, bool backR)

{
mRight1->Set(ControlMode::PercentOutput,(forwardR - backR)*0.75);
mLeft1->Set(ControlMode::PercentOutput,(forwardL - backL)*0.75);
}