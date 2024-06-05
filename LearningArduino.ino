#define LED_PIN 13

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
