#ifndef Helper_h
#define Helper_h

#include <MsTimer2.h>
#include "Arduino.h"

using namespace std;

class Helper{
    private:
    float hzValue;
    float miliSec;
    public:
    Helper();
    float getSampleRate(float slideValue);
    float mapFloat(float x, float in_min, float in_max, float out_min, float out_max);
};




#endif
