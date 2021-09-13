#include <Arduino.h>
#include <SensorObstaculos.h>

SensorObstaculos::SensorObstaculos(byte pinDigital1)
{
    this->pinDigital4 = pinDigital4;
}
void SensorObstaculos::init()
{
    pinMode(pinDigital4, INPUT);
    ANTERIOR4 = 1;
}
bool SensorObstaculos::estado()
{
    DETECTOBSTACLE = digitalRead(pinDigital4);
    return DETECTOBSTACLE;
}
String SensorObstaculos::aviso()
{
    if (ANTERIOR4 != DETECTOBSTACLE)
    {
       if (DETECTOBSTACLE == 1)
       {
           Serial.println("NO REBOTA LUZ");
       }
       else
       {
           Serial.println("REBOTA LUZ");
       }
       ANTERIOR4 = DETECTOBSTACLE;
    }
}