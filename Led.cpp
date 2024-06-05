#include "Led.h"

Led::Led(byte pin)
{
    //this->pin = pin;
    _pin = pin;
}

void Led::init()
{
  pinMode(_pin, OUTPUT);
}

void Led::init(byte defaultState)
{
  init();
  if (defaultState == HIGH) {
    on();
  }
  else {
    off();
  }
}

void Led::on()
{
  digitalWrite(_pin, HIGH);
}

void Led::off()
{
digitalWrite(_pin, LOW);
}