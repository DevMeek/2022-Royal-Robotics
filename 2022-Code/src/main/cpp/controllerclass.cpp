#include "controllerclass.h"

 controllerclass::controllerclass()

{
    controller1 = new XboxController(1);
    controller2 = new XboxController(2);
}

    void controllerclass::readcontroller1()

{
    bAbuttonrawC1 = controller1 -> GetRawButton(a_button);
    bBbuttonrawC1 = controller1 -> GetRawButton(b_button);
    bXbuttonrawC1 = controller1 -> GetRawButton(x_button);
    bYbuttonrawC1 = controller1 -> GetRawButton(y_button);


    bAbuttonpressedC1 = controller1 -> GetAButtonPressed();
    bBbuttonpressedC1 = controller1 -> GetBButtonPressed();
    bXbuttonpressedC1 = controller1 -> GetXButtonPressed();
    bYbuttonpressedC1 = controller1 -> GetYButtonPressed();

    bAbuttonreleasedC1 = controller1 -> GetAButtonReleased();
    bBbuttonreleasedC1 = controller1 -> GetBButtonReleased();
    bXbuttonreleasedC1 = controller1 -> GetXButtonReleased();
    bYbuttonreleasedC1 = controller1 -> GetYButtonReleased();

    dleftstickXC1 = controller1->GetLeftX();
    dleftstickYC1 = controller1->GetLeftY();  
    drightstickXC1 = controller1->GetRightX();
    drightstickYC1 = controller1->GetRightY(); 

    dlefttriggerC1 = controller1 -> GetLeftTriggerAxis();
    drighttriggerC1 = controller1 -> GetRightTriggerAxis();

    bleftbumperC1 = controller1 -> GetLeftBumper();
    brightbumperC1 = controller1 -> GetRightBumper();

    bleftbumperpressedC1 = controller1 -> GetLeftBumperPressed();
    brightbumperpressedC1 = controller1 -> GetRightBumperPressed();

    bleftbumperreleasedC1 = controller1 -> GetLeftBumperReleased();
    brightbumperreleasedC1 = controller1 -> GetRightBumperReleased();

}

    void controllerclass::readcontroller2()

{
    bAbuttonrawC2 = controller2 ->GetRawButton(a_button);
    bBbuttonrawC2 = controller2 ->GetRawButton(b_button);
    bXbuttonrawC2 = controller2 ->GetRawButton(x_button);
    bYbuttonrawC2 = controller2 ->GetRawButton(y_button);

    bAbuttonpressedC2 = controller2 ->GetAButtonPressed();
    bBbuttonpressedC2 = controller2 ->GetBButtonPressed();
    bXbuttonpressedC2 = controller2 ->GetXButtonPressed();
    bYbuttonpressedC2 = controller2 ->GetYButtonPressed();

    bAbuttonreleasedC2 = controller2 ->GetAButtonReleased();
    bBbuttonreleasedC2 = controller2 ->GetBButtonReleased();
    bXbuttonreleasedC2 = controller2 ->GetXButtonReleased();
    bYbuttonreleasedC2 = controller2 ->GetYButtonReleased();

    dleftstickXC2 = controller2->GetLeftX();
    dleftstickYC2 = controller2->GetLeftY();  
    drightstickXC2 = controller2->GetRightX();
    drightstickYC2 = controller2->GetRightY(); 

    dlefttriggerC2 = controller2->GetLeftTriggerAxis();
    drighttriggerC2 = controller2->GetRightTriggerAxis();

    bleftbumperC2 = controller2 ->GetLeftBumper();
    brightbumperC2 = controller2 ->GetRightBumper();

    bleftbumperpressedC2 = controller2 ->GetLeftBumperPressed();
    brightbumperpressedC2 = controller2 ->GetRightBumperPressed();

    bleftbumperreleasedC2 = controller2 ->GetLeftBumperReleased();
    brightbumperreleasedC2 = controller2 ->GetRightBumperReleased();

    bstartbuttonC2 = controller2->GetStartButton();

}

    void  controllerclass::update()
{
    readcontroller1();
    readcontroller2();
}