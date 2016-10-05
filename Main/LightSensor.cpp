#include "LightSensor.h"

LightSensor::LightSensor(){
  _pin = 1;//set pin
}

 int LightSensor::getData(){
  return analogRead(_pin);//read in data
}
