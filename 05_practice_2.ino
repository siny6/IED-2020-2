#define PIN_LED 7
unsigned int count, toggle, t;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = t = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {

  if(t <= 1){
    digitalWrite(PIN_LED, 0);
    delay(1000);
    t = t + 1;
    }

  if(t > 1){
    while(b){
      Serial.println(t);
      toggle = toggle_state(toggle);
      digitalWrite(PIN_LED, toggle);
      delay(100);
      t = t + 1;
      if(t > 12){
        b = 0;
        }
      }
    }

  if (t > 10){
    digitalWrite(PIN_LED, 1);
    while(1){} // infinite loop
    }

}

int toggle_state(int toggle) {
  if (toggle == 0)
  {
    return toggle + 1;
  } 
  else
  {
    return toggle - 1;
  }
}
