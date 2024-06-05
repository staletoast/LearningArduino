#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
private:
  byte _pin;
public:
  Led () {} //do not use
  Led(byte pin);

  void init(); //init the pin for the LED //call this in setup()
  void init(byte defaultState);

  void on(); //power on LED 
  void off(); //power off LED
};

#endif