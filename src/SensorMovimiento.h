#ifndef SENSORMOVIMIENTO_H
#define SENSORMOVIMIENTO_H
#include <Arduino.h>

class SensorMovimiento
{
private:
    //ATRIBUTOS DEL SENSOR
    byte pinDigital2;
    bool ANTERIOR2;
    bool DETECTMOVEMENT;
 
public:
    SensorMovimiento(byte pinDigital2); //CONSTRUCTOR
    void init();
    bool estado();
    String aviso();
};
#endif 