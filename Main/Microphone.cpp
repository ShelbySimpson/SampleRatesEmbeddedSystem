#include "Microphone.h"

Microphone::Microphone(){
  _pin = 2;//set pin
}

int Microphone::getData(){
  return analogRead(2);//retrieve data fro mic
}

