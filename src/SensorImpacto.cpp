#include <Arduino.h>
#include <SensorImpacto.h>

SensorImpacto::SensorImpacto(byte pinDigital1)
{
    this->pinDigital3 = pinDigital3;
}
void SensorImpacto::init()
{
    pinMode(pinDigital3, INPUT);
}
bool SensorImpacto::estado()
{
    DETECTSHOCK = digitalRead(pinDigital3);
    if (DETECTSHOCK == 0)
    {
        Serial.println("TE CHOCASTE!!");
    }
    return DETECTSHOCK;
}