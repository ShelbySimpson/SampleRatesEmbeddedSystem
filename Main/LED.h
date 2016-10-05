#ifndef LED_h
#define LED_h
#include "Arduino.h"

using namespace std;

class LED{
private:
  short _pin;//current pin

public:
  LED(short _pin);
  void on();//turn led on
  void off();//turn led off
  void allOff();//all LEDs to LOW
  void changePin(int pin);
  
};



#endif
