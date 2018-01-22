#include <spiderRobot.h>
#include <SoftwareSerial.h>
SoftwareSerial BTserial(0, 1);
char RecivedData;

#define trigPin 3 // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define echoPin 4 // Arduino pin tied to echo pin on the ultrasonic sensor.
int Ultraswitchpin=5; //Ultrasonic switch bin 255 off and 0 is on
int distance;
int duration;


// declare servos
 spiderServo servobackleftC(0,180,27);
 spiderServo servobackleftB(1,0,25);
 spiderServo servobackleftA(2,0,23);
 spiderServo servomidelleftC(3,0,22);
 spiderServo servomidelleftB(4,180,24);
 spiderServo servomidelleftA(5,0,26);
 spiderServo servofrontleftC(6,180,28);
 spiderServo servofrontleftB(7,0,30);
 spiderServo servofrontleftA(8,0,32);
 spiderServo servoUltraSonic(9,180,34);
 spiderServo servofrontrightA(10,180,36);
 spiderServo servofrontrightB(11,180,38);
 spiderServo servofrontrightC(12,0,40);
 spiderServo servomidelrightA(13,180,42);
 spiderServo servomidelrightB(14,0,44);
 spiderServo servomidelrightC(15,180,46);
 spiderServo servobackrightA(16,180,48);
 spiderServo servobackrightB(17,180,50);
 spiderServo servobackrightC(18,0,52);
 spiderServo spiderservos[19];
 // end declar  servos
int spee=5;
void setup() {

pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(Ultraswitchpin,OUTPUT);



  BTserial.begin(38400);
  //set servos array
   servomidelrightB.fixValue=-10;
  spiderservos[0]=servobackleftC;
  spiderservos[1]=servobackleftB;
  spiderservos[2]=servobackleftA;
  spiderservos[3]=servomidelleftC;
  spiderservos[4]=servomidelleftB;
  spiderservos[5]=servomidelleftA;
  spiderservos[6]=servofrontleftC;
  spiderservos[7]=servofrontleftB;
  spiderservos[8]=servofrontleftA;
  spiderservos[9]=servoUltraSonic;
  spiderservos[10]=servofrontrightA;
  spiderservos[11]=servofrontrightB;
  spiderservos[12]=servofrontrightC;
  spiderservos[13]=servomidelrightA;
  spiderservos[14]=servomidelrightB;
  spiderservos[15]=servomidelrightC;
  spiderservos[16]=servobackrightA;
  spiderservos[17]=servobackrightB;
  spiderservos[18]=servobackrightC;
  //end set servos array
Serial.begin(9600);

//delay(1000);
servobackleftC.attachServo();
servomidelleftC.attachServo();
servofrontleftC.attachServo();
servobackrightC.attachServo();
servomidelrightC.attachServo();
servofrontrightC.attachServo();
servobackleftC.newDegree=120;
servomidelleftC.newDegree=120;
servofrontleftC.newDegree=120;
servobackrightC.newDegree=120;
servomidelrightC.newDegree=120;
servofrontrightC.newDegree=120;

spiderMove(spee);


servobackleftB.attachServo();
servomidelleftB.attachServo();
servofrontleftB.attachServo();
servobackrightB.attachServo();
servomidelrightB.attachServo();
servofrontrightB.attachServo();
servobackleftB.newDegree=30;
servomidelleftB.newDegree=30;
servofrontleftB.newDegree=30;
servobackrightB.newDegree=30;
servomidelrightB.newDegree=30;
servofrontrightB.newDegree=30;
spiderMove(spee);

servoUltraSonic.attachServo();
servobackleftA.attachServo();
servomidelleftA.attachServo();
servofrontleftA.attachServo();
servobackrightA.attachServo();
servomidelrightA.attachServo();
servofrontrightA.attachServo();
servoUltraSonic.newDegree=90;
servobackleftA.newDegree=45;
servomidelleftA.newDegree=90;
servofrontleftA.newDegree=90;
servobackrightA.newDegree=45;
servomidelrightA.newDegree=90;
servofrontrightA.newDegree=90;
spiderMove(spee);


servobackleftB.newDegree=60;
servomidelleftB.newDegree=60;
servofrontleftB.newDegree=60;
servobackrightB.newDegree=60;
servomidelrightB.newDegree=60;
servofrontrightB.newDegree=60;
spiderMove(spee);
//for (int i = 0; i < 19; ++i)
//{
//Serial.println(spiderservos[i].newDegree);
//Serial.println(spiderservos[i].fixValue);
//}
servobackrightB.newDegree=40;
servobackrightC.newDegree=90;
spiderMove(spee);
servobackrightB.newDegree=75;
spiderMove(spee);


}

 
 
void loop() {


//if(BTserial.available() ){ // Checks whether data is comming from the serial port
//    RecivedData = BTserial.read(); // Reads the data from the serial port
// }
Ultrasonic();

  if(distance>40)
{
  
servofrontleftA.newDegree=60;
servomidelrightA.newDegree=60;
servobackleftB.newDegree=90;
servobackleftC.newDegree=60;
servobackrightB.newDegree=40;
servobackrightC.newDegree=120;
servofrontrightB.newDegree=40;
servofrontrightA.newDegree=120;
servomidelleftB.newDegree=40;
servomidelleftA.newDegree=120;
spiderMove(spee);
servobackrightB.newDegree=60;
servofrontrightB.newDegree=60;
servomidelleftB.newDegree=60;
spiderMove(spee);

servofrontrightA.newDegree=60;
servomidelleftA.newDegree=60;
servobackrightB.newDegree=90;
servobackrightC.newDegree=60;
servobackleftB.newDegree=40;
servobackleftC.newDegree=120;
servofrontleftB.newDegree=40;
servofrontleftA.newDegree=120;
servomidelrightB.newDegree=40;
servomidelrightA.newDegree=120;
spiderMove(spee);
servobackleftB.newDegree=60;
servofrontleftB.newDegree=60;
servomidelrightB.newDegree=60;
spiderMove(spee);


}else{
  if(distance>15){
  servofrontleftA.newDegree=60;
servomidelrightA.newDegree=60;
servobackleftB.newDegree=90;
servobackleftC.newDegree=60;
servobackrightB.newDegree=40;
servobackrightC.newDegree=120;
servofrontrightB.newDegree=40;
servofrontrightA.newDegree=80;
servomidelleftB.newDegree=40;
servomidelleftA.newDegree=120;
spiderMove(spee);
servobackrightB.newDegree=60;
servofrontrightB.newDegree=60;
servomidelleftB.newDegree=60;
spiderMove(spee);

servofrontrightA.newDegree=60;
servomidelleftA.newDegree=60;
servobackrightB.newDegree=90;
servobackrightC.newDegree=60;
servobackleftB.newDegree=40;
servobackleftC.newDegree=120;
servofrontleftB.newDegree=40;
servofrontleftA.newDegree=120;
servomidelrightB.newDegree=40;
servomidelrightA.newDegree=80;
spiderMove(spee);
servobackleftB.newDegree=60;
servofrontleftB.newDegree=60;
servomidelrightB.newDegree=60;
spiderMove(spee);
  }
}
  
//servofrontleftA.newDegree=60;
//servomidelleftA.newDegree=60;
//servofrontrightA.newDegree=60;
//servomidelrightA.newDegree=60;
//servobackleftC.newDegree=90;
//servobackrightC.newDegree=90;
//servobackleftB.newDegree=75;
//servobackrightB.newDegree=75;
//spiderMove(spee);
//servofrontleftB.newDegree=40;
//servomidelrightB.newDegree=40;
//spiderMove(spee);
//servofrontleftA.newDegree=90;
//servomidelrightA.newDegree=90;
//spiderMove(spee);
//servofrontleftB.newDegree=60;
//servomidelrightB.newDegree=60;
//spiderMove(spee);
//servobackleftB.newDegree=40;
//servobackleftC.newDegree=120;
//spiderMove(spee);
//servobackleftB.newDegree=60;
//spiderMove(spee);
//
//servofrontrightB.newDegree=40;
//servomidelleftB.newDegree=40;
//spiderMove(spee);
//servofrontrightA.newDegree=90;
//servomidelleftA.newDegree=90;
//spiderMove(spee);
//servofrontrightB.newDegree=60;
//servomidelleftB.newDegree=60;
//spiderMove(spee);
//servobackrightB.newDegree=40;
//servobackrightC.newDegree=120;
//spiderMove(spee);
//servobackrightB.newDegree=60;
//spiderMove(spee);
}
spiderServo *newspiderservos(){
   
  spiderservos[0]=servobackleftC;
  spiderservos[1]=servobackleftB;
  spiderservos[2]=servobackleftA;
  spiderservos[3]=servomidelleftC;
  spiderservos[4]=servomidelleftB;
  spiderservos[5]=servomidelleftA;
  spiderservos[6]=servofrontleftC;
  spiderservos[7]=servofrontleftB;
  spiderservos[8]=servofrontleftA;
  spiderservos[9]=servoUltraSonic;
  spiderservos[10]=servofrontrightA;
  spiderservos[11]=servofrontrightB;
  spiderservos[12]=servofrontrightC;
  spiderservos[13]=servomidelrightA;
  spiderservos[14]=servomidelrightB;
  spiderservos[15]=servomidelrightC;
  spiderservos[16]=servobackrightA;
  spiderservos[17]=servobackrightB;
  spiderservos[18]=servobackrightC;
return(spiderservos);

}
void spiderMove(int Speed)
{
  spiderservos[0]=servobackleftC;
  spiderservos[1]=servobackleftB;
  spiderservos[2]=servobackleftA;
  spiderservos[3]=servomidelleftC;
  spiderservos[4]=servomidelleftB;
  spiderservos[5]=servomidelleftA;
  spiderservos[6]=servofrontleftC;
  spiderservos[7]=servofrontleftB;
  spiderservos[8]=servofrontleftA;
  spiderservos[9]=servoUltraSonic;
  spiderservos[10]=servofrontrightA;
  spiderservos[11]=servofrontrightB;
  spiderservos[12]=servofrontrightC;
  spiderservos[13]=servomidelrightA;
  spiderservos[14]=servomidelrightB;
  spiderservos[15]=servomidelrightC;
  spiderservos[16]=servobackrightA;
  spiderservos[17]=servobackrightB;
  spiderservos[18]=servobackrightC;
  bool checkmove=false;
  while(!checkmove)
{
  checkmove=true;
for (int i = 0; i < 19; ++i)
{
  if (spiderservos[i].newDegree!=spiderservos[i].currentDegree)
  {
    spiderservos[i].turn(Speed);
    
checkmove=false;
  }
  
}

}
servobackleftC=spiderservos[0];
  servobackleftB=spiderservos[1];
  servobackleftA=spiderservos[2];
  servomidelleftC=spiderservos[3];
  servomidelleftB=spiderservos[4];
  servomidelleftA=spiderservos[5];
  servofrontleftC=spiderservos[6];
  servofrontleftB=spiderservos[7];
  servofrontleftA=spiderservos[8];
  servoUltraSonic=spiderservos[9];
  servofrontrightA=spiderservos[10];
  servofrontrightB=spiderservos[11];
  servofrontrightC=spiderservos[12];
  servomidelrightA=spiderservos[13];
  servomidelrightB=spiderservos[14];
  servomidelrightC=spiderservos[15];
  servobackrightA=spiderservos[16];
  servobackrightB=spiderservos[17];
  servobackrightC=spiderservos[18];
}

void Ultrasonic(){
  
  if(distance==0){
  
  analogWrite(Ultraswitchpin,255);
 // delay(50);
   analogWrite(Ultraswitchpin,0);
   //delay(50);
  
}else{
  // Clears the trigPin
  analogWrite(Ultraswitchpin,0);
}
analogWrite(Ultraswitchpin,255);
 
   analogWrite(Ultraswitchpin,0);
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor

Serial.print("Distance: ");
Serial.println(distance);
//delay(100);
}

