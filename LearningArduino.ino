#define LED_PIN 13

class Led
{
private:
  byte _pin;
public:
  Led () {} //do not use
  
  Led(byte pin)
  {
      //this->pin = pin;
      _pin = pin;
  }

  void init()
  {
    pinmode(pin, OUTPUT);
  }

  void on()
  {
    digitalWrite(pin, HIGH)
  }

  void off()
  {
  digitalWrite(pin, LOW)
  }
};

void setup() {
pinMode(LED_PIN, OUTPUT);

}

void loop() {
digitalWrite(LED_PIN, true);
delay(1000);
digitalWrite(LED_PIN, false);
delay(1000);
}
