
const int PIN = 10;
const float ANGLE = 0;

#include <Servo.h>

Servo servo;

void setup() 
{
  servo.attach(PIN);
  servo.write(ANGLE);
}

void loop()
{

}

