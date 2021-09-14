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
/*
-----------MAESTRO----------
#include <Wire.h>
void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  Wire.requestFrom(23, 1);
  
  while (Wire.available()) { 
    char c = Wire.read();    
    Serial.print(c);         
  }
  delay(300);
}
---------ESCLAVO-------------
#include <Wire.h>

char Mensaje= 'A';

void setup()
{
  Wire.begin(23);
  Wire.onRequest(YoEscribo);
}

void loop()
{
   delay(300);
}

void YoEscribo()
{
 	Wire.write(Mensaje);
}
*/