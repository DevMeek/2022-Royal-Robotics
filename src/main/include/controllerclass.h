#pragma once

#define a_button 1
#define b_button 2
#define x_button 3
#define y_button 4
#define left_bumper 5
#define right_bumper 6
#define left_trigger 2
#define right_trigger 3
#define back_button 7
#define start_button 8
#define JoystickHand


#include <frc/XboxController.h>
#include <frc/GenericHID.h>
#include <frc/Joystick.h>

using namespace frc;

class controllerclass{

private:
    // Xbox Controller
    frc::XboxController *controller1;
    frc::XboxController *controller2;

public:
    controllerclass();
    void readcontroller1();
    void readcontroller2();
    void update();

//XboxControllers
    bool bAbuttonrawC1;
    bool bBbuttonrawC1;
    bool bXbuttonrawC1;
    bool bYbuttonrawC1;
    
    bool bAbuttonpressedC1;
    bool bBbuttonpressedC1;
    bool bXbuttonpressedC1;
    bool bYbuttonpressedC1;

    bool bAbuttonreleasedC1;
    bool bBbuttonreleasedC1;
    bool bXbuttonreleasedC1;
    bool bYbuttonreleasedC1;

    bool bAbuttonrawC2;
    bool bBbuttonrawC2;
    bool bXbuttonrawC2;
    bool bYbuttonrawC2;
    
    bool bAbuttonpressedC2;
    bool bBbuttonpressedC2;
    bool bXbuttonpressedC2;
    bool bYbuttonpressedC2;

    bool bAbuttonreleasedC2;
    bool bBbuttonreleasedC2;
    bool bXbuttonreleasedC2;
    bool bYbuttonreleasedC2;

    double dleftstickXC1;
    double dleftstickYC1;
    double drightstickXC1;
    double drightstickYC1;

    double dleftstickXC2;
    double dleftstickYC2;
    double drightstickXC2;
    double drightstickYC2;

    double dlefttriggerC1;
    double drighttriggerC1;

    double dlefttriggerC2;
    double drighttriggerC2;

    bool bleftbumperC1;
    bool brightbumperC1;

    bool bleftbumperC2;
    bool brightbumperC2;

    bool bleftbumperpressedC1;
    bool brightbumperpressedC1;
    bool bleftbumperreleasedC1;
    bool brightbumperreleasedC1;

    bool bleftbumperpressedC2;
    bool brightbumperpressedC2;
    bool bleftbumperreleasedC2;
    bool brightbumperreleasedC2;

    bool bstartbuttonC1;
    bool bbackbuttonC1;

    bool bstartbuttonC2;
    bool bbackbuttonC2;

    bool bstartbuttonpressedC1;
    bool bbackbuttonpressedC1;
    bool bstartbuttonreleasedC1;
    bool bbackbuttonreleasedC1;

    bool bstartbuttonpressedC2;
    bool bbackbuttonpressedC2;
    bool bstartbuttonreleasedC2;
    bool bbackbuttonreleasedC2;

//int idpadstateC1;
//int idpadstateC2;

};