#include <Arduino.h>
#include "SensorLinea.h"
 
SensorLinea::SensorLinea(byte pinDigital1)
{
    this->pinDigital1 = pinDigital1;
}
void SensorLinea::init()
{
    pinMode(pinDigital1, INPUT);
    ANTERIOR1 = 1;
}
bool SensorLinea::estado()
{
    DETECTLINE = digitalRead(pinDigital1);
    return DETECTLINE;
}
String SensorLinea::aviso()
{
    if (ANTERIOR1 != DETECTLINE)
    {
       if (DETECTLINE == 1)
       {
           Serial.println("NO REBOTA LUZ");
       }
       else
       {
           Serial.println("REBOTA LUZ");
       }
       ANTERIOR1 = DETECTLINE;
    }
}
