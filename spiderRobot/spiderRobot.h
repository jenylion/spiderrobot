

/*
  spiderRobot.h - Library for controling spider robot 
  servo motors 
*/
#ifndef spiderRobot_h
#define spiderRobot_h

#include "Arduino.h"
  #include <Servo.h>

class spiderServo{
  public:
  int Id,openDegree,Pin, currentDegree,newDegree,fixValue;
  bool turnDone;
  spiderServo(int,int,int);
  spiderServo();
  void turn(int  );
  void attachServo();
private:
  Servo servo;
  long startmovingMillis;
};


#endif

