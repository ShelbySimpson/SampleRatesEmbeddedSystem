#ifndef Button_h
#define Button_h
#include "Arduino.h"

using namespace std;

class Button{
  private:
  int  _pin;//board pin
  public:
    Button();//Constructor sets _pin
    int getData();//get data from pin D12
};


#endif
