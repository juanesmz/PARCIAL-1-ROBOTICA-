#ifndef SENSORLINEA_H
#define SENSORLINEA_H
#include <Arduino.h>
class SensorLinea
{
private:
    //ATRIBUTOS DEL SENSOR
    byte pinDigital1;
    bool ANTERIOR1;
    bool DETECTLINE;
 
public:
    SensorLinea(byte pinDigital1); //CONSTRUCTOR
    void init();
    bool estado();
    String aviso();
};
#endif
