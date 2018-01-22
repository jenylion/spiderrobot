/*
  spiderServo.cpp - Library for controling spider robot servo motors
*/
#include "Arduino.h"
#include "spiderRobot.h"
  
spiderServo::spiderServo(int id,int opendegree,int pin)
{
  Id=id;
  openDegree=opendegree;
  Pin=pin;
  currentDegree=90;
  newDegree=90;
  turnDone=true;
  fixValue=0;
  
}
spiderServo::spiderServo()
{
  
currentDegree=90;
newDegree=90;
turnDone=true;
fixValue=0;
}
void spiderServo::attachServo(){
servo.attach(Pin);
currentDegree=90;
newDegree=90;
turnDone=true;
}
void spiderServo::turn(int servoSpeed){
	if (newDegree!=currentDegree && turnDone)
	{
		startmovingMillis=millis();
	}
  
    unsigned long currentMillis = millis();
    if(openDegree==180)
    {
    if(newDegree>currentDegree)
    {
      
        turnDone=false;
      if (currentMillis - startmovingMillis >= servoSpeed){
        currentDegree++;
      servo.write(currentDegree+fixValue);
      startmovingMillis=millis();
      if (newDegree==currentDegree )
  {
    turnDone=true;
  }
  }
      
    
    }else{
      if(newDegree<currentDegree){
        turnDone=false;
      if (currentMillis - startmovingMillis >= servoSpeed){
         currentDegree--;
      servo.write(currentDegree+fixValue);
     if (newDegree==currentDegree )
  {
    turnDone=true;
  }
      startmovingMillis=millis();
  }
      }
    }
    }else{
       if(180-newDegree>180-currentDegree)
    {
      
        turnDone=false;
      if (currentMillis - startmovingMillis >= servoSpeed){
        currentDegree--;
      servo.write(180-currentDegree+fixValue);
      if (newDegree==currentDegree )
  {
    turnDone=true;
  }
      startmovingMillis=millis();
      }
    
    }else{
      if(180-newDegree<180-currentDegree){
        turnDone=false;
      if (currentMillis - startmovingMillis >= servoSpeed){
        currentDegree++;
      servo.write(180-currentDegree+fixValue);
      if (newDegree==currentDegree )
  {
    turnDone=true;
  }
      startmovingMillis=millis();
  }
      }
    }
    }
  }




 
