#define LED_PIN 13

class Led
{
private:
  byte pin
public:
  Led(byte pin)
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
