#include<Servo.h>

Servo index;     
Servo middle;    
Servo ring;      
Servo pinky;     
Servo thumb;     
Servo palm;      
Servo handBend;  
Servo handAxial; 

int potThumb = analogRead(A0);
 int potInd = analogRead(A1);
 int potMid = analogRead(A2);
 int potRing = analogRead(A3);
 int potPinky = analogRead(A4);
 int potHand = analogRead(A5);
 int potArm = analogRead(A6);
 
void setup(){
  index.attach(8);
  middle.attach(9);
  ring.attach(10);
  pinky.attach(11);
  thumb.attach(12);
  hand.attach(7);
  arm.attach(6);
}

void loop(){
 int thbMap = map(potThumb, 0, 1023, 0, 90);
 int indMap = map(potInd, 0, 1023, 0, 110);
 int midMap = map(potMid, 0, 1023, 0, 110);
 int ringMap = map(potRing, 0, 1023, 0, 90);
 int pinkyMap = map(potPinky, 0, 1023, 130, 0);
 int handMap = map(potHand, 0, 1023, 0, 90);
 int armMap = map(potArm, 0, 1023, 35, 70);

 thumb.write(thbMap);
 index.write(indMap);
 middle.write(midMap);
 ring.write(ringMap);
 pinky.write(pinkyMap);
 hand.write(handMap);
 arm.write(armMap);
}
