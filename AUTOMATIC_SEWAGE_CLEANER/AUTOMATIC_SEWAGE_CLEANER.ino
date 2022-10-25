#include <Servo.h>

Servo CRANE;
Servo GATE;
int trigPin = 2;
int echoPin = 3;
long duration, cm, inches;
int distance=0;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
CRANE.attach(13); 
GATE.attach(12);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
CRANE.write(270);
GATE.write(165);
}

void loop() {
  // put your main code here, to run repeatedly:
    delay(1000);
  distance= getDis(trigPin,echoPin);


    Serial .write(distance);
    
  delay(1000);
while(distance<=46)// runs the robot till 46cm
{  
 
  Serial .write("forward\n");
  digitalWrite(8, LOW);
   digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(11, LOW);

 
distance= getDis(trigPin,echoPin);
}
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
delayMicroseconds(100);
 Serial .write("forward stop\n");
 for(int i=270; i>=0; i--)
{
   Serial .write("crane up\n");
  CRANE.write(i);
  delay(30); 
}
delay(2000);
 Serial .write("crane down\n");
for(int i=0; i<=270; i++)
{
  CRANE.write(i);
  delay(30); 
}
delay(2000);
 Serial .write("backward\n");
while(distance>=30)
{  
  digitalWrite(8, HIGH);
   digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(11, HIGH);

distance= getDis(trigPin,echoPin);
}
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
 Serial .write("gate open");
delay(1000);
GATE.write(0); 
delay(2000);
GATE.write(165); 
 
}
int getDis(int trig, int echo)
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(4);
  digitalWrite(trig, LOW);

  pinMode(echo, INPUT);
  duration = pulseIn(echo, HIGH);

  // converts the time to a distance
  cm = (duration / 2) / 29.1;
  inches = (duration / 2) / 74;
  delay(2);
  
  return cm;

  }
