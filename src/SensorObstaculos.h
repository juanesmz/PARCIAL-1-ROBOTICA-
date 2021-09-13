#ifndef SENSOROBSTACULOS_H
#include <Arduino.h>

class SensorObstaculos
{
private:
    byte pinDigital4;
    bool ANTERIOR4;
    bool DETECTOBSTACLE;
public:
    SensorObstaculos(byte pinDigital4);
    void init();
    bool estado();
    String aviso();
};




#endif