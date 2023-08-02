#include<AFMotor.h>
  AF_DCMotor Motor1(1,MOTOR12_1KHZ);
  AF_DCMotor Motor2(4,MOTOR12_1KHZ);

  int RIGHT=3;
  int LEFT=2;

void setup() {

  Serial.begin(9600);
  pinMode(RIGHT, INPUT);
  pinMode(LEFT, INPUT);
}

void loop() {
 
  int rightValue=digitalRead(RIGHT);
  int leftValue= digitalRead(LEFT);

  if(rightValue==1&&leftValue==1) {forward();}
  else if(rightValue==1&&leftValue==0) rightTurn();
  else if(rightValue==0&&leftValue==1) leftTurn();
  delay(50);

}
void forward()
{
  Motor1.setSpeed(120);
  Motor1.run(FORWARD);
  Motor2.setSpeed(120);
  Motor2.run(FORWARD);
}
void rightTurn()
{
  Motor1.setSpeed(120);
  Motor1.run(FORWARD);
  Motor2.setSpeed(120);
  Motor2.run(BACKWARD);
}
void leftTurn()
{
  Motor1.setSpeed(120);
  Motor1.run(BACKWARD);
  Motor2.setSpeed(120);
  Motor2.run(FORWARD);
}