#include <Servo.h>
#include <spiderServo.h>

int SERVOPINbackleftC =27;//backleftC
int SERVOPINbackleftB =25;//backleftB
int SERVOPINbackleftA =23;//backleftA
int SERVOPINmidelleftC =22;//midelleftC
int SERVOPINmidelleftB =24;//midelleftB
int SERVOPINmidelleftA =26;//midelleftA
int SERVOPINfrontleftC =28;//frontleftC
int SERVOPINfrontleftB =30;//frontleftB
int SERVOPINfrontleftA =32;//frontleftA
int SERVOPINUltraSonic =34;//UltraSonic
int SERVOPINfrontrightA =36;//frontrightA
int SERVOPINfrontrightB =38;//frontrightB
int SERVOPINfrontrightC =40;//frontrightC
int SERVOPINmidelrightA =42;//midelrightA
int SERVOPINmidelrightB =44;//midelrightB
int SERVOPINmidelrightC =46;//midelrightC
int SERVOPINbackrightA =48;//backrightA
int SERVOPINbackrightB =50;//backrightB
int SERVOPINbackrightC =52;//backrightC
Servo servobackleftC;
Servo servobackleftB;
Servo servobackleftA;
Servo servomidelleftC;
Servo servomidelleftB;
Servo servomidelleftA;
Servo servofrontleftC;
Servo servofrontleftB;
Servo servofrontleftA;
Servo servoUltraSonic;
Servo servofrontrightA;
Servo servofrontrightB;
Servo servofrontrightC;
Servo servomidelrightA;
Servo servomidelrightB;
Servo servomidelrightC;
Servo servobackrightA;
Servo servobackrightB;
Servo servobackrightC;


int z=30;
int z2=150;
void setup() {
spiderServo servoUltraSonic (1,180,34,servoUltraSonic);
//servoUltraSonic.attach(SERVOPINUltraSonic);
//servoUltraSonic.write(90);
//
//  
//  int x=30;
//  int ax=90;
//  delay(1000);
//servobackleftA.attach(SERVOPINbackleftA);
//servobackleftA.write(ax);
//servomidelleftA.attach(SERVOPINmidelleftA);
//servomidelleftA.write(ax);
//servofrontleftA.attach(SERVOPINfrontleftA);
//servofrontleftA.write(ax);
//servobackrightA.attach(SERVOPINbackrightA);
//servobackrightA.write(ax);
//servomidelrightA.attach(SERVOPINmidelrightA);
//servomidelrightA.write(ax);
//servofrontrightA.attach(SERVOPINfrontrightA);
//servofrontrightA.write(ax);
//delay(1000);
//servobackleftB.attach(SERVOPINbackleftB);
//servobackleftB.write(150);
//servomidelleftB.attach(SERVOPINmidelleftB);
//servomidelleftB.write(x);
//servofrontleftB.attach(SERVOPINfrontleftB);
//servofrontleftB.write(150);
//servobackrightB.attach(SERVOPINbackrightB);
//servobackrightB.write(x);
//servomidelrightB.attach(SERVOPINmidelrightB);
//servomidelrightB.write(150);
//servofrontrightB.attach(SERVOPINfrontrightB);
//servofrontrightB.write(x);
//delay(1000);
//servobackleftC.attach(SERVOPINbackleftC);
//servobackleftC.write(150);
//servomidelleftC.attach(SERVOPINmidelleftC);
//servomidelleftC.write(x);
//servofrontleftC.attach(SERVOPINfrontleftC);
//servofrontleftC.write(150);
//servobackrightC.attach(SERVOPINbackrightC);
//servobackrightC.write(x);
//servomidelrightC.attach(SERVOPINmidelrightC);
//servomidelrightC.write(150);
//servofrontrightC.attach(SERVOPINfrontrightC);
//servofrontrightC.write(x);
//delay(1000);
//for(int i=0;i<60;i++)
//{
//if(z!=60)
//  {
//    delay(10);
//servobackrightC.write(z);
//servobackrightB.write(z);
//servobackleftC.write(z2);
//servobackleftB.write(z2);
//servofrontleftC.write(z2);
//servofrontleftB.write(z2);
//servomidelrightC.write(z2);
//servomidelrightB.write(z2);
//servofrontrightC.write(z);
//servofrontrightB.write(z);
//servomidelleftC.write(z);
//servomidelleftB.write(z);
//z++;
//z2--;
//delay(10);
//  }
//}




}
bool finishmove=true;
void loop() {
  

}
void moveServo(Servo Serv,int Speed,int degree)
{
  
}


