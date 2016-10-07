#include "ColorLED.h"

ColorLED::ColorLED(int pin){
  if(pin < 9 || pin > 11){
    Serial.println("Not a valid input");
  }else{
  _pin = pin;//set pin to user intput
}
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void ColorLED::on(){
  digitalWrite(_pin,HIGH);
}

void ColorLED::off(){
  digitalWrite(_pin,LOW);
}

void ColorLED::setPin(int pin){
  if(pin < 9 || pin > 11){
    Serial.println("LEDs are pins 9, 10 and 11");
    Serial.print("Cannot set LED to pin ");
  }else{
       _pin = pin;
  }
}

