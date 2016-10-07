#include "Helper.h"

Helper::Helper(){};

float Helper::getSampleRate(float slideValue){
  if(slideValue < 0 || slideValue > 1023){
        Serial.println("Not a valid input, must be 0-1023");
  }else{
    hzValue = mapFloat(slideValue,0.0,1023.0,100.0,0.5);
    miliSec = (1/hzValue) * 1000;
  }
    return miliSec;
}


float Helper::mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

