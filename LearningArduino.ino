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
    pinMode(_pin, OUTPUT);
  }

  void init(byte defaultState)
  {
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }

  void on()
  {
    digitalWrite(_pin, HIGH);
  }

  void off()
  {
  digitalWrite(_pin, LOW);
  }
};

//Led myled; - default constructor
Led myled(LED_PIN);

void setup() {
  myled.init();
}

void loop() {
  myled.on();
  delay(100);
  myled.off();
  delay(1000);
}
