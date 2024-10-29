#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor backLowerLeft = motor(PORT19, ratio6_1, true);
motor backTopLeft = motor(PORT20, ratio6_1, false);
motor frLeft = motor(PORT12, ratio6_1, true);

motor backLowerRight = motor(PORT14, ratio6_1, false);
motor backTopRight = motor(PORT10, ratio6_1, true);
motor frRight = motor(PORT9, ratio6_1, false);

motor intake1 = motor(PORT15, ratio6_1, false);
motor intake2 = motor(PORT16, ratio6_1, true);

motor_group intakeMotors(intake1, intake2);

controller Controller = controller(primary);

digital_out mogo = digital_out(Brain.ThreeWirePort.H);
digital_out intakeLift = digital_out(Brain.ThreeWirePort.G);


void vexcodeInit( void ) {
  // nothing to initialize
}