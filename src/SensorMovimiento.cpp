#include <Arduino.h>
#include <SensorMovimiento.h>

SensorMovimiento::SensorMovimiento(byte pinDigital2)
{
    this->pinDigital2 = pinDigital2;
}
void SensorMovimiento::init()
{
    pinMode(pinDigital2, INPUT);
    ANTERIOR2 = 1;
}
bool SensorMovimiento::estado()
{
    DETECTMOVEMENT = digitalRead(pinDigital2);
    return DETECTMOVEMENT;
}
String SensorMovimiento::aviso()
{
    if (ANTERIOR2 != DETECTMOVEMENT)
    {
       if (DETECTMOVEMENT == 1)
       {
           Serial.println("OBSTACULO");
       }
       else
       {
           Serial.println("SIN PROBLEMA");
       }
       ANTERIOR2 = DETECTMOVEMENT;
    }
}