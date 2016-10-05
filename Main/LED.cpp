#include "LED.h"
#include "Arduino.h"

LED::LED(short pin){
  if(pin < 4 || pin > 8){
    Serial.println("Not a valid input for LED pin");
  }else{
  _pin = pin;
}
}

void LED::on(){
  digitalWrite(_pin,HIGH);//turn on
}

void LED::off(){
  digitalWrite(_pin,LOW);//turn off
}

void LED::changePin(int pin)
{
  if((pin < 4 || pin > 8) && pin != 13){
    Serial.println("LEDs are pins 4-8 and 13");
    Serial.print("Cannot set LED to pin ");
    Serial.println(pin);
  }
  else{
    _pin = pin;
  }

  
}

void LED::allOff(){
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}

