#ifndef SENSORIMPACTO_H
#define SENSORIMPACTO_H
#include <Arduino.h>
class SensorImpacto
{
private:
    byte pinDigital3;
    bool DETECTSHOCK;
 
public:
    SensorImpacto(byte pinDigital3); //CONSTRUCTOR
    void init();
    bool estado();
};

#endif