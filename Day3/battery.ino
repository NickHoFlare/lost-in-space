int led = 12; // The LED is connected to pin 12.
int switch1 = 2; // The switch is connected to pin 2.

void setup() {
    // set pin 12's mode to be an output terminal
    pinMode(led, OUTPUT);
    // set pin 2's mode to be an input terminal
    pinMode(switch1, INPUT);
}

void loop() {
    if (digitalRead(switch1) == HIGH) {
        shortSeq(led);
        longSeq(led);
        shortSeq(led);
        delay(500);
    } else {
        digitalWrite(led, LOW);
    }
}

void shortSeq(int pin) {
  digitalWrite(pin, HIGH);
  delay(200);
  digitalWrite(pin, LOW);
  delay(200);
  digitalWrite(pin, HIGH);
  delay(200);
  digitalWrite(pin, LOW);
  delay(200);
  digitalWrite(pin, HIGH);
  delay(200);
  digitalWrite(pin, LOW);
  delay(500);
}

void longSeq(int pin) {
  digitalWrite(pin, HIGH);
  delay(800);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(800);
  digitalWrite(pin, LOW);
  delay(500);
}