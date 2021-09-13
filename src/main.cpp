#include <Arduino.h>
#include <SensorMovimiento.h>
#include <SensorObstaculos.h>
#include <SensorLinea.h>
#include <SensorImpacto.h>

SensorLinea SensorTrayectoria(2);

SensorImpacto SensorImpacto1(3);
SensorImpacto SensorImpacto2(4);
SensorImpacto SensorImpacto3(5);

SensorMovimiento SensorMovimiento1(6);
SensorMovimiento SensorMovimiento2(7);
SensorMovimiento SensorMovimiento3(8);

SensorObstaculos SensorObstaculos1(9);
SensorObstaculos SensorObstaculos2(10);
SensorObstaculos SensorObstaculos3(11);

void setup() {
  Serial.begin(9600);
  SensorTrayectoria.init();
  SensorImpacto1.init();
  SensorImpacto2.init();
  SensorImpacto3.init();
  SensorMovimiento1.init();
  SensorMovimiento2.init();
  SensorMovimiento3.init();
  SensorObstaculos1.init();
  SensorObstaculos2.init();
  SensorObstaculos3.init();
}

void loop() {
  // put your main code here, to run repeatedly:
}