#include "Thermometer.h"


Thermometer::Thermometer(){
  _pin = 0;
}

float Thermometer::getData(){
  return analogRead(_pin);//get reading from A0 sensor
}

float Thermometer::getCelsius(){
  _celsius = ((getData() * 0.00488) - 0.5) * 100;//convert to celsius
  return _celsius;
}

float Thermometer::getFahrenheit(){
 _celsius = getCelsius();//get celsius for purpose of converting to fahrenheit
 _fahrenheit = ((_celsius * 9) / 5) + 32;//celsius to fahrenheit formula
  return _fahrenheit;
}

