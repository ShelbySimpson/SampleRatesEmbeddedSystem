#ifndef ColorLED_h
#define ColorLED_h
#include "Arduino.h"

using namespace std;

class ColorLED{
  private:
    int _pin;//current colored led pin0
    
  public:
    ColorLED(int _pin);//consturtor, set pen
    void on();//turn on 
    void off();//turn off
    void setPin(int pin);
};


#endif
