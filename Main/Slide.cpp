#include "Slide.h"

Slide::Slide(){
  _pin = 3;//set pin
}

int Slide::getData(){
  return analogRead(_pin);//retrieve pin data
}

