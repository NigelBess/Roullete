
const int PIN = 10;
const float ANGLE = -89;


void setup() 
{
  // put your setup code here, to run once:
  pinMode(PIN, OUTPUT);

}


void loop() 
{
  float pulseWidth = angleToPulseWidth(ANGLE);
  float voltage = pulseWidthToVoltage(pulseWidth);
  int analogInt = voltageToAnalogInt(voltage);
  // put your main code here, to run repeatedly:
  analogWrite(PIN, analogInt);
}


int voltageToAnalogInt(float voltage)
{
  int analogInt = voltage * 51;
  return analogInt;
}


float pulseWidthToVoltage( float pulseWidth)
{
  const float pulseCycle = 2;
  const float maxVoltage = 5;
  
  float voltage = (pulseWidth / pulseCycle) * maxVoltage;

  return voltage;
}


float angleToPulseWidth(float angle)
{
  const float minAngle = -90;
  const float maxAngle = 90;
  const float averagePulse = 1.5;
  float pulseWidth = (angle / (maxAngle - minAngle)) + averagePulse;


  return pulseWidth;
}