#ifndef Thermometer_h
#define Thermometer_h
#include "Arduino.h"

using namespace std;

//Class for using Thermometer sensor
class Thermometer{
   float _celsius;
   float _fahrenheit;
   short _pin;
 public:
   Thermometer();//constructor
   float getCelsius();//get celsius based on returned voltage
   float getFahrenheit();//get fahrenheit based on returned voltage
   float getData();//get voltage from pin A0
};


#endif
