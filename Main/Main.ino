#include "ColorLED.h"
#include "Button.h"
#include "Switch.h"
#include "Slide.h"
#include "Helper.h"
#include "LightSensor.h"
#include "LED.h"
#include "Microphone.h"

const int GREEN = 10;//color led input
const int RED = 9;//color led input
float sampleRate;
boolean showSR13 = true;//is Sample light on

ColorLED cLED = ColorLED(GREEN);//signifies sampling has started
Button btn = Button();//button instance
Switch swtch = Switch();//switch instance
Slide slide = Slide();//slide instance
Helper helper = Helper();//helper instance
LightSensor lSensor = LightSensor();//light sensor instance
LED led = LED(4);//in all cases where sampling is occuring led D4 will be on
Microphone mic = Microphone();//mic instance


//Samples data at a rate according to slide info.
void sample() {

  //if Var set to true you can via D13 see the sample rate
  static boolean output = HIGH;
    if(showSR13){//D13(LED) shows sample rate.
      digitalWrite(13, output);
      output = !output;
    }
    
  int hPin;//light sensor value mapped
  led.allOff();//turn of before getting new settings
  if(swtch.getData() == 0){//0 is set to light sensor readings
    int lightD = lSensor.getData();//get current readings
    hPin = helper.mapFloat(lightD,0,1023,1,6);//map value and store
    //Test code - 
//      Serial.println("begin light---->");
//      Serial.println(hPin + 3);
//      Serial.println("--->");
//      Serial.println(lightD);
//      Serial.println("end light----->");

  //Light up leds based on sensor mappings
  for(int i = hPin; i > 0; i--){
    led.changePin(i+3);//add 3, LEDs start at 4
    led.on();
  }
  }else{
      int loud = mic.getData();
      hPin = helper.mapFloat(loud,0,1023,1,6);//map and store
        //Test code - 
//      Serial.println("begin ---->");
//      Serial.println(hPin + 3);
//      Serial.println("--->");
//      Serial.println(loud);
//      Serial.println("end ----->");
      led.allOff();

      //Light up leds based on sensor mappings
        for(int i = hPin; i > 0; i--){
          led.changePin(i+3);//add 3, LEDs start at 4
          led.on();
          
        }
}
}

void setup()
{ 
    Serial.begin(57600);//init serial

    cLED.setPin(RED);//init set up of "sample on" light
    cLED.on();
}

void loop()
{
  //React to D12 Push
  if(btn.getData() == 1){
    //button has been pushed. Turn off red, turn on green
    cLED.setPin(RED);
    cLED.off();
    cLED.setPin(GREEN);
    cLED.on();

    //get slide value to determine sample rate
    sampleRate = helper.getSampleRate(slide.getData());

    //set timer to sampling rate
    MsTimer2::stop();
    MsTimer2::set(sampleRate,sample);
    MsTimer2::start();
  }
}


