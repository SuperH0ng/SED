#define PIN_LED 7
unsigned int x, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, 1);
  delay(1000); 
  toggle = 1;
  x = 0;
  while(x <= 10){
    toggle = 1 - toggle;
    digitalWrite(PIN_LED, toggle);
    delay(100);
    x += 1;
  }
  while(1){
  }
  
}
