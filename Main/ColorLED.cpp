#include "ColorLED.h"

ColorLED::ColorLED(int pin){
  if(pin < 9 || pin > 11){
    Serial.println("Not a valid input");
  }else{
  _pin = pin;//set pin to user intput
}
}

void ColorLED::on(){
  digitalWrite(_pin,HIGH);
}

void ColorLED::off(){
  digitalWrite(_pin,LOW);
}

void ColorLED::setPin(int pin){
    _pin = pin;
}

