using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//controller
extern controller Controller;

//dt left motors
extern motor backLowerLeft;
extern motor backTopLeft;
extern motor frLeft;

//dt right motors
extern motor backLowerRight;
extern motor backTopRight;
extern motor frRight;

//intake declarations
extern motor intake1;
extern motor intake2;

extern motor_group intakeMotors;

//pnumatics
extern digital_out mogo;
extern digital_out intakeLift;
//Add your devices below, and don't forget to do the same in robot-config.cpp:



void  vexcodeInit( void );