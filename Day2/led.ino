int led = 12; // pin 12

void setup() {
    // set the board's pin 12's mode to be an output terminal
    pinMode(led, OUTPUT);
    // Set LED to be off by default
    digitalWrite(led, LOW);
}

void loop() {
    // while (true), turn on and off every 250 ms
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(1000);
}
