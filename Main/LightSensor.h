#ifndef LightSensor_h
#define LightSensor_h
#include "Arduino.h"

class LightSensor{
  private:
  int  _pin;//light sensor pin for digital sandbox

  public:
    LightSensor();//Constructor, sets _pin var
    int getData();//retrieve data from light sensor
  
};


#endif
