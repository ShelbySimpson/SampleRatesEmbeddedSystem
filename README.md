#SampleRatesEmbeddedSystems

#Overview:
This program was designed to work with an Arduino board
and can easily be ported to other embedded systems. For example, 
the Arduino board(AB) used in this project is specific to pins like D12,
but within the program pins can be easily changed to be intergrated with
other embedded system.

Data retrived from an onboard sliding potentiometer was
used to determine the data sampling rate for an onboard
microphone and light sensor. An onboard switch was used for
determining which sensor would be used. An onboard button was
used to initaite sampling from the selected sensor.
  
#Requirements that were met by the program:
1.)When first powered the AB turns on the
red LED.

2.)When the user pushes button D12, the AB will turn on the    
green LED and begin sampling at a rate proportional to the 
sliding potentiometer’s input value.

    a.)The sampling rates vary from 0.5Hz to 100Hz.
    b.)The potentiometer’s value is proportional to the    
    sampling interval.
        Small potentiometer value => high sampling rate.
        Large potentiometer value => low sampling rate.
        
3.)Switch D2 determines which sensor to sample from:

    a.)When D2 is set to 0, the AB samples from the light sensor.
    b.)When D2 is set to 1, the AB samples from the microphone.
    
4.)LEDs D4 through D8 serve as bar graph to output
the input sensor values.

5.)If/when the user pushes button D12, the AB will    
restart sampling based on the sliding potentiometer’s input value.
